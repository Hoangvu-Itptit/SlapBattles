using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Analytics;
using ACEMediation;
using AppsFlyerSDK;
#if EXISTED_IRON_SOURCE
using GoogleMobileAds.Api;
#endif

public class AdsAdapter : MonoBehaviour
{
    public static AdsAdapter Instance;
    private const bool testAd = false;
    private ACEMediation_Adapter adapter;
    public GameObject canvas_GDPR;

    public int adscount
    {
        get => PlayerPrefs.GetInt("ads_count");
        set => PlayerPrefs.SetInt("ads_count", value);
    }

    private void Awake()
    {
        if (Instance != null)
        {
            DestroyImmediate(gameObject);
            return;
        }
        else
        {
            Instance = this;
            if (transform.parent)
                DontDestroyOnLoad(transform.parent.gameObject);
#if !UNITY_EDITOR
        if (!Debug.isDebugBuild)
        {
            Debug.unityLogger.logEnabled = false;
        }
#endif
            Init();
        }
    }


    public static void LogAFAndFB(string eventName, string key, string value)
    {
#if !UNITY_EDITOR
        try
        {
            if (!AppsFlyer.isSDKStopped())
            {
                AppsFlyer.sendEvent(eventName, new Dictionary<string, string>()
                {
                    {key, value}
                });
            }

            if (FireBaseRemote.initialized)
            {
                FirebaseAnalytics.LogEvent(eventName, key, value);
            }
        }
        catch (Exception e)
        {
            Debug.LogError(e.StackTrace);
        }
#endif
    }

#if EXISTED_IRON_SOURCE
    private void Start()
    {
        AppOpenAdManager.Instance.LoadAd();

        // Listen to application foreground and background events.
        AppStateEventNotifier.AppStateChanged += OnAppStateChanged;
    }

    private void OnAppStateChanged(GoogleMobileAds.Common.AppState state)
    {
        // Display the app open ad when the app is foregrounded.
        UnityEngine.Debug.Log("App State is " + state);
        if (state == GoogleMobileAds.Common.AppState.Foreground)
        {
            AppOpenAdManager.Instance.ShowAdIfAvailable();
        }
    }
#endif

    public void Init()
    {
        AppsFlyerAdRevenue.start();
        //if (!testAd)
        {
#if EXISTED_MAX
            var adapterGo = new GameObject("adapter");
            adapterGo.AddComponent<ACEMediation_MAX_Adapter>();
            adapterGo.transform.SetParent(transform);
            adapter = adapterGo.GetComponent<ACEMediation_Adapter>();
            adapter.Setup(true);
#elif EXISTED_IRON_SOURCE
            InitIronsource();
#endif
        }
    }

    public void ShowGDPR()
    {
#if EXISTED_IRON_SOURCE
        if (!PopupGDPR.rate_gdpr)
        {
            var canvasGDPR = Instantiate(canvas_GDPR);
            canvasGDPR.GetComponentInChildren<PopupGDPR>().onComplete += () =>
            {
                Debug.Log("init ironsource");
                adapter.Setup(true);
            };
        }
        else
        {
            if (PopupGDPR.rate_gdpr_value)
            {
                IronSource.Agent.setConsent(true);
            }
            else
            {
                IronSource.Agent.setConsent(false);
            }
            Debug.Log("init ironsource");
            adapter.Setup(true);
        }
#endif
    }

#if EXISTED_IRON_SOURCE
    void InitIronsource()
    {
        var adapterGo = new GameObject("adapter");
        adapterGo.AddComponent<ACEMediation_IS_Adapter>();
        adapterGo.transform.SetParent(transform);
        adapter = adapterGo.GetComponent<ACEMediation_Adapter>();

        if (!PopupGDPR.rate_gdpr)
        {
            var canvasGDPR = Instantiate(canvas_GDPR);
            canvasGDPR.GetComponentInChildren<PopupGDPR>().onComplete += () =>
            {
                Debug.Log("init ironsource");
                adapter.Setup(true);
            };
        }
        else
        {
            if (PopupGDPR.rate_gdpr_value)
            {
                IronSource.Agent.setConsent(true);
            }
            else
            {
                IronSource.Agent.setConsent(false);
            }
            Debug.Log("init ironsource");
            adapter.Setup(true);
        }
    }

#endif
    public void ShowBanner()
    {
        //if (!testAd)
        {
            adapter.ShowBanner();
        }
    }

    public void HideBanner()
    {
        //if (!testAd)
        {
            adapter.HideBanner();
        }
    }

    public void ShowInterstitial(int level, where where)
    {
        //if (!testAd)
        {
#if UNITY_ANDROID
            //FirebaseAnalytics.LogEvent("watch_ad", "times", adscount);
#endif
            adapter.ShowInterstitial();
            adscount++;
            if (adscount == 1)
            {
                LogAFAndFB($"unique_user", level.ToString(), level.ToString());
            }

            LogAFAndFB($"level {level} int at {where}", level.ToString(), level.ToString());
            LogAFAndFB($"ads_count {adscount} at level {level} at {where}", level.ToString(), level.ToString());
        }
    }

    public enum where
    {
        btn_buy_weapon_in_UI_Menu,
        btn_earn_coins_in_UI_menu,
        btn_buy_skin_in_UI_menu,
        btn_spin_in_UI_menu,
        btn_size_up_in_UI_menu,
        btn_earn_coins_in_game,
        btn_size_up_in_game,
        btn_earn_weapon_in_game,
        btn_replay_in_game,
        popup_win_in_game,
        popup_lose_in_game,
        no_touch,
    }

    public void ShowRewardedVideo(Action onComplete, Action onFail, int level, where where)
    {
        //if (!testAd)
        {
#if unity_android
            //firebaseanalytics.logevent("watch_ad", "times", adscount);
#endif
            onComplete += () =>
            {
                adscount++;
                if (adscount == 1)
                {
                    LogAFAndFB($"unique_user", level.ToString(), level.ToString());
                }

                LogAFAndFB($"level {level} rw at {where}", level.ToString(), level.ToString());
                LogAFAndFB($"ads_count {adscount} at level {level} at {where}", level.ToString(), level.ToString());
            };

            adapter.ShowRewardedAd(onComplete, onFail);
        }
    }
}