using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class Menu : MonoBehaviour
{
    public Image img_selectWeapon;
    public Image img_selectSkin;
    public Image img_Setting;

    public UISlot bg_UISlot;
    public DailyRewardPopup dailyReward;
    public LuckyWheels luckyWheels;

    public GameObject rateStar;
    public GameObject find;
    public GameObject selectName;
    public GameObject obj_Menu;
    public GameObject Slot;
    public GameObject ranks;

    private void Awake()
    {
        PrefData.set_earn_skin(1);
        PrefData.set_earn_hand(1);
        if (!PrefData.is_select_name)
        {
            selectName.gameObject.SetActive(true);
        }

        StartCoroutine(IEShowGDPR());
    }

    IEnumerator IEShowGDPR()
    {
        yield return new WaitForSeconds(0.2f);
        AdsAdapter.Instance.ShowGDPR();
    }

    // Start is called before the first frame update
    void Start()
    {
        PrefData.set_last_wheel();

        if (!PrefData.is_rate() && PrefData.can_rate)
        {
            if (PrefData.cur_level == 3 && PrefData.num_level_play >= 2) rateStar.SetActive(true);
            else if (PrefData.num_level_play >= 2 && PrefData.cur_level >= 3) rateStar.SetActive(true);
        }
    }

    private void OnEnable()
    {
        var lastLogin = PrefData.get_last_login();
        var isNewDay = DateTime.Today.CompareTo(lastLogin);

        if (isNewDay > 0)
        {
            dailyReward.gameObject.SetActive(true);
        }

        if (!dailyReward.gameObject.activeInHierarchy && PrefData.is_free_wheel)
        {
            luckyWheels.gameObject.SetActive(true);

            if (PrefData.number_star_have == 3)
            {
                UI.Instance.luckyBox.gameObject.SetActive(true);
            }
        }
    }

    public void BtnListener_TapToStart()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        StartCoroutine(TapToStart());
    }

    public IEnumerator TapToStart()
    {
        find.SetActive(true);
        obj_Menu.SetActive(false);

        yield return new WaitForSeconds(1);
        int map;
        if (PrefData.cur_level < 20)
        {
            map = PrefData.cur_level % 4;
            if (PrefData.cur_level % 4 == 0)
            {
                map = 4;
            }
        }
        else
        {
            map = PrefData.cur_level % 5;
            if (PrefData.cur_level % 5 == 0)
            {
                map = 5;
            }
        }

        DOTween.KillAll();
        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(CONST.PLAY_MAP_ + map);
        while (!asyncOperation.isDone)
        {
            yield return null;
        }
    }

    public void BtnListener_DaiLyReward()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        dailyReward.gameObject.SetActive(true);
        obj_Menu.SetActive(false);
    }

    public void BtnListener_Weapon()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        img_selectWeapon.gameObject.SetActive(true);
    }

    public void BtnListener_Skin()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        img_selectSkin.gameObject.SetActive(true);
    }

    public void BtnListener_Setting()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        img_Setting.gameObject.SetActive(true);
        obj_Menu.SetActive(false);
    }

    public void BtnListener_Bigger()
    {
        //ads
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        AdsAdapter.Instance.ShowRewardedVideo((() =>
            {
                UI.Instance.ActiveCongra();
                Debug.Log("bigger");
                PrefData.is_Bigger = true;
                obj_Menu.GetComponent<ImgMenu>().playerInMenuScene.transform.localScale =
                    new Vector3(1.5f, 1.5f, 1.5f);
            }), (() => UI.Instance.ActiveNotify("Watch failed, Try again!")), PrefData.cur_level,
            AdsAdapter.where.btn_size_up_in_UI_menu);
    }

    public void BtnListener_Slot()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        Slot.SetActive(true);
    }

    public void BtnListener_Ranks()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        ranks.SetActive(true);
    }

    public void BtnListener_LuckyWheels()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        luckyWheels.gameObject.SetActive(true);
    }
}