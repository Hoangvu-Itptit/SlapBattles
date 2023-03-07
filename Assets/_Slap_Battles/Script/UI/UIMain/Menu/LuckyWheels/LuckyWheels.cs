using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;
using Random = UnityEngine.Random;

public class LuckyWheels : BasePopup
{
    public GameObject wheelMain;

    public Transform giftParrent;

    public List<Transform> gifts;

    public ButtonEffectLogic btn_Wheels;

    public ButtonEffectLogic btn_adsWheels;

    public ButtonEffectLogic btn_back;

    public AudioClip audioWheels;

    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < giftParrent.childCount; i++)
        {
            gifts.Add(giftParrent.GetChild(i));
        }
    }
    public void BtnListener_LuckyWheels()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        PrefData.is_free_wheel = false;
        btn_Wheels.gameObject.SetActive(false);
        PrefData.set_last_free_wheel();
        StartCoroutine(Wheels());
    }

    public void BtnListener_AdsLuckyWheels()
    {
        //ads
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        AdsAdapter.Instance.ShowRewardedVideo((() =>
            {
                btn_adsWheels.gameObject.SetActive(false);
                StartCoroutine(Wheels());
            }), (() => UI.Instance.ActiveNotify("Watch failed, Try again!")), PrefData.cur_level,
            AdsAdapter.where.btn_spin_in_UI_menu);
    }

    public void BtnListener_Close()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        Hide();
    }

    IEnumerator Wheels()
    {
        btn_back.gameObject.SetActive(false);
        yield return new WaitForSeconds(0.5f);
        wheelMain.transform.rotation = new Quaternion(0, 0, 0, 0);
        var audioMain = MainScene.Instance.audioMain;
        var uiIns = UI.Instance;
        audioMain.Playaudiosources(audioWheels, true);
        var rand = Rand();
/*#if UNITY_EDITOR
        rand = 1;
#endif*/
        yield return wheelMain.transform.DORotate(new Vector3(0, 0, -(360 * 3 + rand * 36)), 5)
            .SetEase(Ease.Linear).SetRelative(true).WaitForCompletion();
        if (rand == 1)
        {
            if (PrefData.is_owned_skin(20))
            {
                uiIns.ActiveNotify("You already own this skin");
                uiIns.ActiveGetMoney(20, false);
            }
            else
            {
                PrefData.set_earn_skin(20, 2);
                audioMain.Playaudiosources(uiIns.reward, false);
                uiIns.ActiveNotify("Congratulations");
                uiIns.ActiveCongra();
            }
        }
        else if (rand == 3)
        {
            if (PrefData.is_owned_hand(21))
            {
                uiIns.ActiveNotify("You already own this hand");
                uiIns.ActiveGetMoney(20, false);
            }
            else
            {
                PrefData.set_earn_hand(21, 2);
                audioMain.Playaudiosources(uiIns.reward, false);
                uiIns.ActiveNotify("Congratulations");
                uiIns.ActiveCongra();
            }
        }
        else if (rand == 9)
        {
            if (PrefData.is_owned_hand(20))
            {
                uiIns.ActiveNotify("You already own this hand");
                uiIns.ActiveGetMoney(20, false);
            }
            else
            {
                PrefData.set_earn_hand(20, 2);
                audioMain.Playaudiosources(uiIns.reward, false);
                uiIns.ActiveNotify("Congratulations");
                uiIns.ActiveCongra();
            }
        }
        else if (gifts[rand].GetComponent<WheelGift>().money != 0)
        {
            var num = gifts[rand].GetComponent<WheelGift>().money / 10;
            UI.Instance.ActiveGetMoney(num, false);
            yield return new WaitForSeconds(num * 0.1f);
        }

        PrefData.set_last_wheel();
        btn_adsWheels.gameObject.SetActive(true);
        btn_back.gameObject.SetActive(true);
    }

    int Rand() //return {(1,skin 20),(3,wp 21),(8,wp 20),(4,$1000),(6,$500),(5,$300),(1,$50),(9,$50),(3,$100),(7,$100)}
    {
        var rand = Random.Range(0, 10000);
        switch (rand)
        {
            case 9999:
                return 1;
            case 9998:
                return 3;
            case 9997:
                return 9;
            case 9996:
                return 5;
            case > 9993:
                return 7;
            case > 9000:
                return 6;
            case > 7500:
                return 4;
            case > 6000:
                return 8;
            case > 3000:
                return 2;
            default:
                return 0;
        }
    }

    private void OnEnable()
    {
        var lastLogin = PrefData.get_last_login();
        var isNewDay = DateTime.Today.CompareTo(lastLogin);
        if (isNewDay > 0)
        {
            btn_Wheels.gameObject.SetActive(true);
            btn_adsWheels.gameObject.SetActive(false);
        }
        else if (isNewDay < 0)
        {
            btn_Wheels.gameObject.SetActive(false);
            btn_adsWheels.gameObject.SetActive(true);
        }
        else
        {
            var lastTimeWheel = PrefData.get_last_wheel();
            var now = DateTime.Now;
            var deltaTime = now.Subtract(lastTimeWheel);
            if (PrefData.is_free_wheel || deltaTime.TotalSeconds > 600)
            {
                btn_Wheels.gameObject.SetActive(true);
                btn_adsWheels.gameObject.SetActive(false);
            }
            else
            {
                btn_Wheels.gameObject.SetActive(false);
                btn_adsWheels.gameObject.SetActive(true);
            }
        }

        PrefData.set_last_wheel();
        Show();
    }

    private void OnDisable()
    {
        if (PrefData.number_star_have == 3)
        {
            UI.Instance.luckyBox.gameObject.SetActive(true);
        }
    }
}