using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class SelectWeapon : BasePopup
{
    public GameObject handUI;

    public GameObject common, rare, epic;
    private Transform option;
    public ButtonEffectLogic btn_UnlockRandomMoney, btn_UnlockRandomAds, btn_rare, btn_epic, btn_comon;
    private int numberOrder, buttonSelect;

    // Update is called once per frame
    void Update()
    {
        if (numberOrder == 0 || numberOrder == 1)
        {
            if (PrefData.cur_coin < (numberOrder + 1) * 250)
            {
                btn_UnlockRandomMoney.transform.GetChild(0).gameObject.SetActive(false);
                btn_UnlockRandomMoney.transform.GetChild(1).gameObject.SetActive(true);
            }
            else
            {
                btn_UnlockRandomMoney.transform.GetChild(0).gameObject.SetActive(true);
                btn_UnlockRandomMoney.transform.GetChild(1).gameObject.SetActive(false);
            }
        }
        else
        {
            btn_UnlockRandomMoney.gameObject.SetActive(false);
            btn_UnlockRandomAds.gameObject.SetActive(false);
        }
    }

    private void OnEnable()
    {
        for (int i = 0; i < handUI.transform.childCount; i++)
        {
            handUI.transform.GetChild(i).gameObject.SetActive(false);
        }

        handUI.transform.GetChild(PrefData.cur_hand - 1).gameObject.SetActive(true);
        numberOrder = 0;
        buttonSelect = 0;
        option = common.transform;
        SetShadowforOption();
        BtnListener_Common();
        Show();
    }

    void ActiveBtn(Transform btn)
    {
        btn_comon.transform.GetChild(0).gameObject.SetActive(true);
        btn_comon.transform.GetChild(1).gameObject.SetActive(false);
        btn_comon.transform.GetChild(2).gameObject.SetActive(false);
        btn_comon.transform.GetChild(3).gameObject.SetActive(true);

        btn_rare.transform.GetChild(0).gameObject.SetActive(true);
        btn_rare.transform.GetChild(1).gameObject.SetActive(false);
        btn_rare.transform.GetChild(2).gameObject.SetActive(false);
        btn_rare.transform.GetChild(3).gameObject.SetActive(true);

        btn_epic.transform.GetChild(0).gameObject.SetActive(true);
        btn_epic.transform.GetChild(1).gameObject.SetActive(false);
        btn_epic.transform.GetChild(2).gameObject.SetActive(false);
        btn_epic.transform.GetChild(3).gameObject.SetActive(true);

        btn.GetChild(0).gameObject.SetActive(false);
        btn.GetChild(1).gameObject.SetActive(true);
        btn.GetChild(2).gameObject.SetActive(true);
        btn.GetChild(3).gameObject.SetActive(false);
    }

    public void BtnListener_Common()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        common.SetActive(true);
        rare.SetActive(false);
        epic.SetActive(false);
        numberOrder = 0;
        option = common.transform;
        SetShadowforOption();
        btn_UnlockRandomMoney.transform.GetChild(3).GetComponent<Text>().text = "250";
        ActiveBtn(btn_comon.transform);
        List<int> havent = new List<int>();
        for (int i = 0; i < 9; i++)
        {
            if (!PrefData.is_owned_hand(i + 1))
            {
                havent.Add(i + 1);
            }
        }

        if (havent.Count == 0)
        {
            btn_UnlockRandomAds.gameObject.SetActive(false);
            btn_UnlockRandomMoney.gameObject.SetActive(false);
        }
        else
        {
            btn_UnlockRandomAds.gameObject.SetActive(true);
            btn_UnlockRandomMoney.gameObject.SetActive(true);
        }
    }

    public void BtnListener_Rare()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        common.SetActive(false);
        rare.SetActive(true);
        epic.SetActive(false);
        numberOrder = 1;
        option = rare.transform;
        SetShadowforOption();
        ActiveBtn(btn_rare.transform);
        btn_UnlockRandomMoney.transform.GetChild(3).GetComponent<Text>().text = "500";
        List<int> havent = new List<int>();
        for (int i = 9; i < 18; i++)
        {
            if (!PrefData.is_owned_hand(i + 1))
            {
                havent.Add(i + 1);
            }
        }

        if (havent.Count == 0)
        {
            btn_UnlockRandomAds.gameObject.SetActive(false);
            btn_UnlockRandomMoney.gameObject.SetActive(false);
        }
        else
        {
            btn_UnlockRandomAds.gameObject.SetActive(true);
            btn_UnlockRandomMoney.gameObject.SetActive(true);
        }
    }

    public void BtnListener_Epic()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        common.SetActive(false);
        rare.SetActive(false);
        epic.SetActive(true);
        numberOrder = 2;
        option = epic.transform;
        SetShadowforOption();
        for (int i = 0; i < 3; i++)
        {
            if (PrefData.get_hand_number(numberOrder * 9 + i + 1) < 2)
            {
                option.GetChild(i).GetChild(5).GetChild(0).GetComponent<Text>().text =
                    PrefData.get_hand_number(numberOrder * 9 + i + 1) + "/2";
            }
            else
            {
                option.GetChild(i).GetChild(5).gameObject.SetActive(false);
            }
        }

        ActiveBtn(btn_epic.transform);
    }

    public void BtnListener_Close()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        Time.timeScale = 1;
        UI.Instance.menu.obj_Menu.GetComponent<ImgMenu>().OnEnable();
        Hide();
    }

    public void BtnListener_SelectWeapon(int index)
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        var uiIns = UI.Instance;
        var playerMenu = uiIns.menu.obj_Menu.GetComponent<ImgMenu>().playerInMenuScene.GetComponent<Player>();
        buttonSelect = index;
        if (numberOrder == 0 || numberOrder == 1)
        {
            if (PrefData.is_owned_hand(index))
            {
                PrefData.cur_hand = index;
                SetOutlineforButton(index);
                SetShadowforOption();
            }

            playerMenu.SetHand();

            for (int i = 0; i < handUI.transform.childCount; i++)
            {
                handUI.transform.GetChild(i).gameObject.SetActive(false);
            }

            handUI.transform.GetChild(index - 1).gameObject.SetActive(true);


            // }
        }
        else
        {
            AdsAdapter.Instance.ShowRewardedVideo(() =>
                {
                    for (int i = 0; i < 3; i++)
                    {
                        option.GetChild(i).GetChild(3).gameObject.SetActive(false);
                        option.GetChild(i).GetChild(4).gameObject.SetActive(false);
                    }

                    if (PrefData.get_hand_number(index) < 2)
                    {
                        option.GetChild((index - 1) % 9).GetChild(4).gameObject.SetActive(true);
                        PrefData.set_earn_hand(buttonSelect, PrefData.get_hand_number(buttonSelect) + 1);
                        option.GetChild((buttonSelect - 1) % 9).GetChild(5).GetChild(0).GetComponent<Text>().text =
                            PrefData.get_hand_number(buttonSelect) + "/2";

                        if (PrefData.get_hand_number(index) == 2)
                        {
                            option.GetChild((buttonSelect - 1) % 9).GetChild(5).gameObject.SetActive(false);
                            uiIns.ActiveCongra();
                            PrefData.cur_hand = index;
                            playerMenu.SetHand();
                            option.GetChild((index - 1) % 9).GetChild(3).gameObject.SetActive(true);

                            for (int i = 0; i < handUI.transform.childCount; i++)
                            {
                                handUI.transform.GetChild(i).gameObject.SetActive(false);
                            }

                            handUI.transform.GetChild(PrefData.cur_hand - 1).gameObject.SetActive(true);
                        }
                    }
                    else
                    {
                        PrefData.cur_hand = index;
                        playerMenu.SetHand();
                        option.GetChild((index - 1) % 9).GetChild(3).gameObject.SetActive(true);

                        for (int i = 0; i < handUI.transform.childCount; i++)
                        {
                            handUI.transform.GetChild(i).gameObject.SetActive(false);
                        }

                        handUI.transform.GetChild(PrefData.cur_hand - 1).gameObject.SetActive(true);
                    }

                    SetShadowforOption();
                }, (() => { uiIns.ActiveNotify("Watch failed, Try again!"); }), PrefData.cur_level,
                AdsAdapter.@where.btn_buy_weapon_in_UI_Menu);
        }
    }

    void SetShadowforOption()
    {
        for (int i = 0; i < option.childCount; i++)
        {
            if (numberOrder == 0 || numberOrder == 1)
            {
                if (PrefData.is_owned_hand(numberOrder * 9 + i + 1))
                {
                    option.GetChild(i).GetChild(1).gameObject.SetActive(true);
                    option.GetChild(i).GetChild(2).gameObject.SetActive(false);
                }
                else
                {
                    option.GetChild(i).GetChild(1).gameObject.SetActive(false);
                    option.GetChild(i).GetChild(2).gameObject.SetActive(true);
                }
            }
            else
            {
                if (PrefData.get_hand_number(numberOrder * 9 + i + 1) >= 2)
                {
                    option.GetChild(i).GetChild(1).gameObject.SetActive(true);
                    option.GetChild(i).GetChild(2).gameObject.SetActive(false);
                }
                else
                {
                    option.GetChild(i).GetChild(1).gameObject.SetActive(false);
                    option.GetChild(i).GetChild(2).gameObject.SetActive(true);
                }
            }
        }
    }

    void SetOutlineforButton(int index)
    {
        for (int i = 0; i < option.childCount; i++)
        {
            option.GetChild(i).GetChild(3).gameObject.SetActive(false);
        }

        option.GetChild((index - 1) % 9).GetChild(3).gameObject.SetActive(true);
    }

    public void BtnListener_UnLockRandom_Ads()
    {
        // ads;
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        AdsAdapter.Instance.ShowRewardedVideo((() =>
            {
                if (numberOrder == 0 || numberOrder == 1)
                {
                    int begin = numberOrder * 9, end = (numberOrder + 1) * 9;
                    StartCoroutine(UnlockRandom(begin, end));
                }
            }), () => UI.Instance.ActiveNotify("Watch failed, Try again!"), PrefData.cur_level,
            AdsAdapter.@where.btn_buy_weapon_in_UI_Menu);
    }

    public void BtnListener_UnlockRandom_Money()
    {
        // -money
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        if (PrefData.cur_coin >= (numberOrder + 1) * 250)
        {
            PrefData.cur_coin -= (numberOrder + 1) * 250;
            int begin = numberOrder * 9, end = (numberOrder + 1) * 9;
            StartCoroutine(UnlockRandom(begin, end));
        }
        else
        {
            UI.Instance.ActiveNotify("Not enough money!");
        }
    }

    public void BtnListener_UnlockEpic()
    {
        //todo: ads
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        PrefData.set_earn_hand(buttonSelect, PrefData.get_hand_number(buttonSelect) + 1);
        Debug.Log(buttonSelect);
        Debug.Log(PrefData.get_hand_number(buttonSelect));
        option.GetChild((buttonSelect - 1) % 9).GetChild(5).GetChild(0).GetComponent<Text>().text =
            PrefData.get_hand_number(buttonSelect) + "/2";
        if (PrefData.get_hand_number(buttonSelect) >= 2)
        {
            option.GetChild((buttonSelect - 1) % 9).GetChild(5).gameObject.SetActive(false);
            BtnListener_SelectWeapon(buttonSelect);
        }
    }

    public void BtnListener_Get500()
    {
        //todo: ads
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        AdsAdapter.Instance.ShowRewardedVideo((() =>
        {
            UI.Instance.ActiveGetMoney(50, false);
        }),(() => UI.Instance.ActiveNotify("Watch failed, Try again!")),PrefData.cur_level,AdsAdapter.where.btn_earn_coins_in_UI_menu);
        
    }

    IEnumerator UnlockRandom(int begin, int end)
    {
        int rand = 0;
        List<int> havent = new List<int>();
        for (int i = begin; i < end; i++)
        {
            if (!PrefData.is_owned_hand(i + 1))
            {
                havent.Add(i + 1);
                Debug.Log(i + 1);
            }
        }

        if (havent.Count == 1)
        {
            btn_UnlockRandomAds.gameObject.SetActive(false);
            btn_UnlockRandomMoney.gameObject.SetActive(false);
        }

        for (int i = 0; i < 5; i++)
        {
            rand = Random.Range(0, havent.Count);
            SetOutlineforButton(havent[rand]);
            yield return new WaitForSeconds(0.1f);
        }

        UI.Instance.ActiveCongra();
        PrefData.cur_hand = havent[rand];
        UI.Instance.menu.obj_Menu.GetComponent<ImgMenu>().playerInMenuScene.GetComponent<Player>().SetSkin();
        UI.Instance.menu.obj_Menu.GetComponent<ImgMenu>().playerInMenuScene.GetComponent<Player>().SetHand();
        PrefData.set_earn_hand(havent[rand]);

        for (int i = 0; i < handUI.transform.childCount; i++)
        {
            handUI.transform.GetChild(i).gameObject.SetActive(false);
        }

        handUI.transform.GetChild(PrefData.cur_hand - 1).gameObject.SetActive(true);

        SetShadowforOption();
        SetOutlineforButton(havent[rand]);
    }
}