using Firebase;
using Firebase.Extensions;
using Firebase.Messaging;
using System;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks;

namespace ACESDK {
    public static partial class FSDK {
        public static class Notification {
            public static bool IsInitialized { get; private set; } = false;
            /// <summary>
            /// Thời gian init tính theo Time.realtimeSinceStartup
            /// </summary>
            public static float InitTime { get; private set; } = 0;
            public static bool IsDebug { get; set; } = false;
            public static string Token { get; private set; } = null;

            public static string LanguageCode { get; private set; }
            public static int TimeZoneHours { get; private set; }

            private const string LanguageCode_PlayerPrefsKey = "Notification.LanguageCode";
            private const string TimeZoneHours_PlayerPrefsKey = "Notification.TimeZoneHours";
            public static string SubscribedLanguageCode {
                get {
                    return PlayerPrefs.GetString(LanguageCode_PlayerPrefsKey, null);
                }
                private set {
                    PlayerPrefs.SetString(LanguageCode_PlayerPrefsKey, value);
                }
            }
            public static int SubscribedTimeZoneHours {
                get {
                    return PlayerPrefs.GetInt(TimeZoneHours_PlayerPrefsKey, int.MinValue);
                }
                private set {
                    PlayerPrefs.SetInt(TimeZoneHours_PlayerPrefsKey, value);
                }
            }

            /// <summary>
            /// Khởi tạo Notification, khởi tạo firebase nếu cần, mặc định language và timeZone lấy từ hệ điều hành
            /// </summary>
            public static void Initialize(SystemLanguage language = SystemLanguage.Unknown, TimeZoneInfo timeZone = null) {
                if (IsInitialized) return;

                if (language == SystemLanguage.Unknown) {
                    language = Application.systemLanguage;
                }
                LanguageCode = "en";
                if (SupportedLanguages.ContainsKey(language)) {
                    LanguageCode = SupportedLanguages[language];
                }

                TimeZoneHours = (timeZone ?? TimeZoneInfo.Local).GetUtcOffset(DateTime.Now).Hours;

                if (IsDebug) //Debug.Log($"Initialize Notification: languageCode = {LanguageCode}, timeZoneHours = {TimeZoneHours}, SubscribedLanguageCode = {SubscribedLanguageCode}, SubscribedTimeZoneHours = {SubscribedTimeZoneHours}");

                FirebaseMessaging.MessageReceived += OnMessageReceivedHandler;
#if UNITY_EDITOR
                OnTokenReceivedHandler(null, new TokenReceivedEventArgs("unity_editor_fake_fcm_token"));
#else
                FirebaseMessaging.TokenReceived += OnTokenReceivedHandler;
#endif
                
                // Hỏi quyền của IOS
                FirebaseMessaging.RequestPermissionAsync().ContinueWithOnMainThread(task => {
                    ActiveFinishEvent((complete, error) => {
                        if (IsDebug) {
                            if (complete) {
                                //Debug.Log($"Request IOS permission is completed");
                            } else {
                                //Debug.LogError(error);
                            }
                        }
                    }, task, "RequestPermissionAsync");
                });

                if (string.IsNullOrEmpty(SubscribedLanguageCode) ||
                    (SubscribedLanguageCode == LanguageCode && SubscribedTimeZoneHours == TimeZoneHours)) {
                    SubscribeNew();
                } else {
                    //Do FCM không có API để lấy những topic đã subscribe, do đó việc unsubscribe phải dựa trên PlayerPrefs
                    //Ngoài ra còn Unsubscribe trên server
                    UnsubscribeAsync("all-" + SubscribedLanguageCode, CheckUnsubscribeOk);
                    UnsubscribeAsync("all-" + SubscribedLanguageCode + SubscribedTimeZoneHours, CheckUnsubscribeOk);
                }

                IsInitialized = true;
                InitTime = Time.realtimeSinceStartup;
            }

            private static int unsubscribeOkCount = 0;
            private static void CheckUnsubscribeOk(bool complete, string error) {
                if (!complete) return;
                unsubscribeOkCount++;
                if (unsubscribeOkCount == 2) {
                    unsubscribeOkCount = 0;
                    if (IsDebug) //Debug.Log("Unsubscribe Ok");
                    SubscribeNew();
                }
            }

            private static void SubscribeNew() {
                SubscribedLanguageCode = LanguageCode;
                SubscribedTimeZoneHours = TimeZoneHours;
                SubscribeAsync("all-" + LanguageCode);
                SubscribeAsync("all-" + LanguageCode + TimeZoneHours);
            }

            private static void ActiveFinishEvent(Action<bool, string> onFinish, Task task, string operation) {
                bool complete = false;
                string error = null;
                if (task.IsCanceled) {
                    error = operation + " canceled";
                } else if (task.IsFaulted) {
                    error = operation + " encounted an error";
                    foreach (Exception exception in task.Exception.Flatten().InnerExceptions) {
                        string errorCode = "";
                        FirebaseException firebaseEx = exception as FirebaseException;
                        if (firebaseEx != null) {
                            errorCode = $"Error.{(Error)firebaseEx.ErrorCode}: ";
                        }
                        error += errorCode + exception.ToString();
                    }
                } else if (task.IsCompleted) {
                    complete = true;
                }
                onFinish?.Invoke(complete, error);
            }

            public static void SubscribeAsync(string topic, Action<bool, string> onFinish = null) {

                if (IsDebug) {
                    onFinish += (complete, error) => {
                        if (complete) {
                            //Debug.Log($"Subscribe {topic} is completed");
                        } else {
                            //Debug.LogError(error);
                        }
                    };
                }

                FirebaseMessaging.SubscribeAsync(topic).ContinueWithOnMainThread(task => {
                    ActiveFinishEvent(onFinish, task, "SubscribeAsync");
                });
            }

            public static void UnsubscribeAsync(string topic, Action<bool, string> onFinish = null) {

                if (IsDebug) {
                    onFinish += (complete, error) => {
                        if (complete) {
                            //Debug.Log($"Unsubscribe {topic} is completed");
                        } else {
                            //Debug.LogError(error);
                        }
                    };
                }

                FirebaseMessaging.UnsubscribeAsync(topic).ContinueWithOnMainThread(task => {
                    ActiveFinishEvent(onFinish, task, "UnsubscribeAsync");
                });
            }

            public static Action<string> OnTokenReceived { get; set; }
            private static void OnTokenReceivedHandler(object sender, TokenReceivedEventArgs e) {

                if (IsDebug) {
                    //Debug.Log("TokenReceived = " + e.Token);
                }

                Token = e.Token;
                OnTokenReceived?.Invoke(Token);
            }

            public static Action<FirebaseMessage> OnMessageReceived { get; set; }
            private static void OnMessageReceivedHandler(object sender, MessageReceivedEventArgs e) {

                if (IsDebug) {
                    string text = $"New message: id={e.Message.MessageId}, ";
                    var notification = e.Message.Notification;
                    if (notification != null) {
                        text += $"title={notification.Title}, body={notification.Body}\n";
                    }
                    if (e.Message.Data.Count > 0) {
                        text += "data: ";
                        foreach (var d in e.Message.Data) {
                            text += $"{d.Key}={d.Value}, ";
                        }
                    }
                    //Debug.Log(text);
                }

                OnMessageReceived?.Invoke(e.Message);
            }

            private static readonly Dictionary<SystemLanguage, string> SupportedLanguages = new Dictionary<SystemLanguage, string> {
                {SystemLanguage.English     , "en"},
                {SystemLanguage.Russian     , "ru"},
                {SystemLanguage.Korean      , "ko"},
                {SystemLanguage.Japanese    , "ja"},
                {SystemLanguage.Chinese     , "zh"},
                {SystemLanguage.Spanish     , "es"},
                {SystemLanguage.Thai        , "th"},
                {SystemLanguage.German      , "de"},
                {SystemLanguage.Portuguese  , "pt"},
                {SystemLanguage.Italian     , "it"},
                {SystemLanguage.Indonesian  , "id"},
                {SystemLanguage.Turkish     , "tr"},
                {SystemLanguage.Vietnamese  , "vi"},
                {SystemLanguage.French      , "fr"},
            };
                //Để chuyển qua java
                //add(new Language("English"     , "en"));
                //add(new Language("Russian"     , "ru"));
                //add(new Language("Korean"      , "ko"));
                //add(new Language("Japanese"    , "ja"));
                //add(new Language("Chinese"     , "zh"));
                //add(new Language("Spanish"     , "es"));
                //add(new Language("Thai"        , "th"));
                //add(new Language("German"      , "de"));
                //add(new Language("Portuguese"  , "pt"));
                //add(new Language("Italian"     , "it"));
                //add(new Language("Indonesian"  , "id"));
                //add(new Language("Turkish"     , "tr"));
                //add(new Language("Vietnamese"  , "vi"));
                //add(new Language("French"      , "fr"));
        }
    }
}
