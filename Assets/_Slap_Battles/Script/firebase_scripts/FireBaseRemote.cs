using Firebase.Analytics;
using System;
using System.Collections;
using UnityEngine;
using Firebase.Extensions;
using ACESDK;
using ACESDK.Singleton;
using Firebase;
using OSNet;
using UnityEditor;

public class FireBaseRemote : FSDK_PersistentSingleton<FireBaseRemote>
{
    Firebase.DependencyStatus dependencyStatus = Firebase.DependencyStatus.UnavailableOther;
    public static bool initialized;
    protected override void Awake()
    {
        base.Awake();
        
        Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(task =>
        {
            dependencyStatus = task.Result;
            if (dependencyStatus == Firebase.DependencyStatus.Available)
            {
                InitializeFirebase();
            }
            else
            {
                Debug.LogError(
                    "Could not resolve all Firebase dependencies: " + dependencyStatus);
            }
        });
    }

    void InitializeFirebase()
    {
        #region Init Notification
        FSDK.Notification.OnTokenReceived = token => { StartCoroutine(WaitServerOnlineToUpdate(token)); };
        FSDK.Notification.OnMessageReceived = fm =>
        {
            // if (NetManager.Instance.IsOnline())
            // {
            //     new CSFCMReceivedLog(
            //         fm != null ? fm.MessageId : "msgId",
            //         fm?.Notification?.ClickAction ?? "None",
            //         Time.realtimeSinceStartup - FSDK.Notification.InitTime > 10
            //     ).Send();
            // }
        };

        FSDK.Notification.Initialize(LanguageDictionary.GetLanguage(), TimeZoneInfo.Local);
        initialized = true;

        #endregion
    }

    private IEnumerator WaitServerOnlineToUpdate(string token)
    {
        // yield return new WaitUntil(() => NetManager.Instance.IsOnline());
        // AccountManager.Instance.FCMToken = token;
        // FirebaseAnalytics.SetUserProperty("code", AccountManager.Instance.Code.ToString());
        // AccountManager.Instance.UpdateToServer();
        // //Debug.Log($"ToServer token={token}, ToFirebase code={AccountManager.Instance.Code.ToString()}");
        // string appVerion = Application.version;
        // if (!PlayerPrefs.GetString("app_version").Equals(appVerion))
        // {
        //     // FirebaseAnalytics.LogEvent("store_installer", new Parameter("name", TracingStore.GetStore()), new Parameter("code", AccountManager.Instance.Code), new Parameter("version", appVerion));
        //     PlayerPrefs.SetString("app_version", appVerion);
        // }
        yield break;
    }
}