using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class DailyRewardPopup : MonoBehaviour
{
    public DailyRewardSO data;
    public Transform itemParent;
    public List<GameObject> items;
    public ButtonEffectLogic claim;
    public ButtonEffectLogic claimx2;
    public ButtonEffectLogic claimNextday;
    public int numberDay;

    private void Awake()
    {
        for (int i = 0; i < itemParent.childCount; i++)
        {
            items.Add(itemParent.GetChild(i).gameObject);
        }
    }

    private void OnEnable()
    {
        // UI.Instance.menu.gameObject.SetActive(false);
        var lastLogin = PrefData.get_last_login();
        var isNewDay = DateTime.Today.CompareTo(lastLogin);
        //check newday
        if (isNewDay > 0)
        {
            PrefData.set_claim_daily_reward(0);
            PrefData.set_last_login();
            PrefData.number_of_day_login++;
            PrefData.set_claim_daily_reward(0);
            PrefData.is_free_wheel = false;
            PrefData.set_last_wheel();
            PrefData.set_last_free_wheel();
            PrefData.can_rate = true;
            PrefData.num_level_play = 0;
        }
        else if (isNewDay == 0)
        {
            PrefData.num_level_play = 0;
        }

        numberDay = PrefData.number_of_day_login - 1;

        if (PrefData.is_claim_daily_reward()) numberDay++; //if play was reward today, tick image today 

        //iterate over each element to set true img
        for (int i = 0; i < items.Count; i++)
        {
            var itemData = data.dailyReward[i];
            var coin = itemData.coins;

            var itemObj = items[i];
            var imgCoin = itemObj.transform.GetChild(0);
            var txtCoin = itemObj.transform.GetChild(1).GetComponent<Text>();
            var imgSkin = itemObj.transform.GetChild(2);
            var imgTick = itemObj.transform.GetChild(3);

            imgTick.gameObject.SetActive(i < numberDay);
            if (coin > 0)
            {
                imgCoin.gameObject.SetActive(true);
                txtCoin.text = coin.ToString();
                imgSkin.gameObject.SetActive(false);
            }
            else
            {
                imgCoin.gameObject.SetActive(false);
                txtCoin.gameObject.SetActive(false);
                imgSkin.gameObject.SetActive(true);
            }

            if (i == numberDay - 1 && PrefData.is_claim_daily_reward()) // scale loop img coins
            {
                imgCoin.DOScale(1.5f, 0.5f).SetLoops(-1, LoopType.Yoyo);
            }

            if (i == numberDay && !PrefData.is_claim_daily_reward()) // scale loop img coins
            {
                imgCoin.DOScale(1.5f, 0.5f).SetLoops(-1, LoopType.Yoyo);
            }
        }

        if (data.dailyReward[PrefData.number_of_day_login - 1].coins <= 0)
        {
            claimx2.gameObject.SetActive(false);
        }

        if (PrefData.is_claim_daily_reward())
        {
            claim.gameObject.SetActive(false);
            claimx2.gameObject.SetActive(false);
            claimNextday.gameObject.SetActive(true);
        }
    }

    public void ClaimButtonListener()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        var itemData = data.dailyReward[PrefData.number_of_day_login - 1];
        items[PrefData.number_of_day_login - 1].transform.GetChild(3).gameObject.SetActive(true);
        var Ins = UI.Instance;
        //coins move
        Ins.ActiveGetMoney(itemData.coins / 10, false);

        //set skin
        if (itemData.skin != 0 && PrefData.is_owned_skin(itemData.skin))
        {
            Ins.ActiveNotify("You already own this skin");
            Ins.ActiveGetMoney(20, false);
        }
        else
        {
            PrefData.set_earn_skin(itemData.skin);
            Ins.ActiveCongra();
        }

        //set claim
        PrefData.set_claim_daily_reward(1);

        // set play
        // Ins.PlayorPause(true);

        //up day login
        // PrefData.number_of_day_login++;

        //reset game
        claim.gameObject.SetActive(false);
        claimx2.gameObject.SetActive(false);
        claimNextday.gameObject.SetActive(true);
    }

    public void Claimx2ButtonListener()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        AdsAdapter.Instance.ShowRewardedVideo((() =>
            {
                //ads
                items[PrefData.number_of_day_login - 1].transform.GetChild(3).gameObject.SetActive(true);
                var itemData = data.dailyReward[PrefData.number_of_day_login - 1];
                var Ins = UI.Instance;
                //coins move
                Ins.ActiveGetMoney(itemData.coins * 2 / 10, false);

                //set claim
                if (itemData.skin != 0 && PrefData.is_owned_skin(itemData.skin))
                {
                    Ins.ActiveNotify("You already own this skin");
                    Ins.ActiveGetMoney(20, false);
                }
                else
                {
                    PrefData.set_earn_skin(itemData.skin);
                    Ins.ActiveCongra();
                }

                // //set play
                // Ins.PlayorPause(true);
                //
                // //up day login
                // PrefData.number_of_day_login++;

                //reset game
                claim.gameObject.SetActive(false);
                claimx2.gameObject.SetActive(false);
                claimNextday.gameObject.SetActive(true);
            }), (() => UI.Instance.ActiveNotify("Watch failed, Try again!")), PrefData.cur_level,
            AdsAdapter.@where.btn_earn_coins_in_UI_menu);
    }

    public void BtnListener_Close()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        UI.Instance.menu.obj_Menu.SetActive(true);
        gameObject.SetActive(false);
    }

    public void BtnListener_ClaimNextDay()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        AdsAdapter.Instance.ShowRewardedVideo((() =>
            {
                PrefData.number_of_day_login++;
                for (int i = 0; i < items.Count; i++)
                {
                    items[i].transform.GetChild(0).DOKill();
                    items[i].transform.GetChild(0).localScale = Vector3.one;
                    if (i >= PrefData.number_of_day_login)
                    {
                        items[i].transform.GetChild(3).gameObject.SetActive(false);
                    }
                }

                var itemData = data.dailyReward[PrefData.number_of_day_login - 1];
                items[PrefData.number_of_day_login - 1].transform.GetChild(3).gameObject.SetActive(true);
                items[PrefData.number_of_day_login - 1].transform.GetChild(0).DOScale(1.5f, 0.5f)
                    .SetLoops(-1, LoopType.Yoyo);
                var Ins = UI.Instance;
                //coins move
                Ins.ActiveGetMoney(itemData.coins / 10, false);

                //set skin
                if (itemData.skin != 0 && PrefData.is_owned_skin(itemData.skin))
                {
                    Ins.ActiveNotify("You already own this skin");
                    Ins.ActiveGetMoney(20, false);
                }
                else
                {
                    PrefData.set_earn_skin(itemData.skin);
                    Ins.ActiveCongra();
                }


                //set claim
                PrefData.set_claim_daily_reward(1);

                // set play
                // Ins.PlayorPause(true);

                //up day login
                // PrefData.number_of_day_login++;

                //reset game
            }), (() => UI.Instance.ActiveNotify("Watch failed, Try again!")), PrefData.cur_level,
            AdsAdapter.where.btn_earn_coins_in_UI_menu);
    }

    private void OnDisable()
    {
        if (PrefData.is_free_wheel)
        {
            UI.Instance.menu.luckyWheels.gameObject.SetActive(true);
        }
    }
}