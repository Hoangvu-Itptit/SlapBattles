using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Help : MonoBehaviour
{
    private bool checkSize = true, checkTake = false;
    public ButtonEffectLogic btn_X2, btn_BuyHand;
    public GameObject btn_close;
    public GameObject imageHandParrent;

    // Start is called before the first frame update
    void Start()
    {
        SetHelp();
    }

    void SetHelp()
    {
        /*
        if (PrefData.is_Bigger)
        {
            checkSize = false;
            btn_X2.gameObject.transform.GetChild(0).GetChild(1).GetChild(0).gameObject.SetActive(false);
            btn_X2.gameObject.transform.GetChild(0).GetChild(1).GetChild(1).gameObject.SetActive(true);
        }
        */

        checkTake = false;
        int numberdontSelect = 0;
        for (int i = 1; i <= 18; i++)
        {
            if (!PrefData.is_owned_hand(i))
            {
                numberdontSelect = i;
                checkTake = true;
                break;
            }
        }

        for (int i = 0; i < imageHandParrent.transform.childCount; i++)
        {
            imageHandParrent.transform.GetChild(i).gameObject.SetActive(false);
        }

        if (!checkTake)
        {
            btn_BuyHand.gameObject.transform.GetChild(0).GetChild(1).GetChild(0).gameObject.SetActive(false);
            btn_BuyHand.gameObject.transform.GetChild(0).GetChild(1).GetChild(1).gameObject.SetActive(true);
        }

        Debug.Log(numberdontSelect);
        imageHandParrent.transform.GetChild(numberdontSelect).gameObject.SetActive(true);
        if (!checkSize && !checkTake)
        {
            gameObject.SetActive(false);
        }
        else
        {
            StartCoroutine(ActiveClose());
        }
    }

    public void BtnListener_X2Size()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        AdsAdapter.Instance.ShowRewardedVideo((() =>
            {
                if (checkSize)
                {
                    //todo ads
                    PrefData.is_Bigger = true;
                    Player.Instance.transform.localScale = Vector3.one * 2;
                    Player.Instance.playerPower.playerSize = Vector3.one * 2;
                }
            }), (() => UI.Instance.ActiveNotify("Watch failed, Try again!")), PrefData.cur_level,
            AdsAdapter.where.btn_size_up_in_game);
    }

    public void BtnListener_TakeHand()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        AdsAdapter.Instance.ShowRewardedVideo((() =>
            {
                if (checkTake)
                {
                    //todo ads
                    int take = 0;
                    for (int i = 1; i <= 18; i++)
                    {
                        if (!PrefData.is_owned_hand(i))
                        {
                            take = i;
                            Debug.Log(i);
                            break;
                        }
                    }

                    PrefData.cur_hand = take;
                    PrefData.set_earn_hand(take);
                    Player.Instance.SetHand();

                    SetHelp();
                }
                else
                {
                    UI.Instance.ActiveNotify("No more Gloves to earn");
                }
            }), (() => UI.Instance.ActiveNotify("Watch failed, Try again!")), PrefData.cur_level,
            AdsAdapter.where.btn_earn_weapon_in_game);
    }

    public void BtnListener_Close()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        gameObject.SetActive(false);
    }

    private void OnDisable()
    {
        UI.Instance.tutorial.SetActive(true);
    }

    IEnumerator ActiveClose()
    {
        yield return new WaitForSeconds(5f);
        btn_close.SetActive(true);
    }
}