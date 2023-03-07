using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class Gift : MonoBehaviour
{
    public bool isSelect = false;
    public int numberCoins;
    public static int numberSelect;

    private void Awake()
    {
        numberSelect = 0;
    }

    private void OnEnable()
    {
        isSelect = false;
    }

    public void BtnListener_Gift()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        var uiIns = UI.Instance;
        if (numberSelect == 3)
        {
            uiIns.ActiveNotify("Turns out. \nPlease get more openings");
        }

        if (numberSelect < 3 && !isSelect)
        {
            numberSelect++;
            StartCoroutine(ActiveGift());
            isSelect = true;
        }


        if (numberSelect == 3)
        {
            uiIns.luckyBox.ActiveBtnMoreOpen = true;
        }
    }

    IEnumerator ActiveGift()
    {
        var imgBox = transform.GetChild(0).GetChild(0);
        var imgMoney = transform.GetChild(0).GetChild(1);
        imgBox.DOScale(1.5f, 1).SetLoops(2, LoopType.Yoyo);
        yield return imgBox.DORotate(new Vector3(0, 360, 0), 1).SetLoops(2, LoopType.Incremental)
            .SetEase(Ease.InOutQuart).SetRelative(true).WaitForCompletion();
        imgBox.gameObject.SetActive(false);
        imgMoney.gameObject.SetActive(true);
        transform.GetChild(1).gameObject.SetActive(true);
        PrefData.cur_coin += numberCoins;
        PrefData.number_star_have = 0;
    }
}