using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class BasePopup : MonoBehaviour
{
    public Transform main;

    public void Show()
    {
        gameObject.SetActive(true);
        main.localScale = Vector3.zero;
        main.DOScale(1, 0.5f);
    }

    public void Hide()
    {
        StartCoroutine(IEHide());
    }

    IEnumerator IEHide()
    {
        yield return main.DOScale(0, 0.5f).WaitForCompletion();
        gameObject.SetActive(false);
    }

    public void OnEnable()
    {
        Show();
    }

    private void OnDestroy()
    {
        main.DOKill();
    }
}

public class LuckyBox : BasePopup
{
    public Transform giftParent;
    public Transform keyParent;
    public ButtonEffectLogic btn_MoreOpen;
    public List<Transform> gifts;
    private bool canActiveMoreOpen = true;


    public bool ActiveBtnMoreOpen
    {
        get { return btn_MoreOpen.gameObject.activeSelf; }
        set
        {
            if (canActiveMoreOpen)
            {
                btn_MoreOpen.gameObject.SetActive(value);
                canActiveMoreOpen = false;
            }
        }
    }

    private void Update()
    {
        for (int i = 0; i < 3; i++)
        {
            if (i >= Gift.numberSelect)
            {
                keyParent.GetChild(i).gameObject.SetActive(true);
            }
            else
            {
                keyParent.GetChild(i).gameObject.SetActive(false);
            }
        }
    }

    private void OnEnable()
    {
        for (int i = 0; i < giftParent.childCount; i++)
        {
            gifts.Add(giftParent.GetChild(i));
            var sprite = gifts[i].GetChild(0);
            sprite.GetChild(0).gameObject.SetActive(true);
            sprite.GetChild(1).gameObject.SetActive(false);
        }

        canActiveMoreOpen = true;
        CreatRandom();
        Show();
    }

    private void CreatRandom()
    {
        List<int> noDataCoin = new List<int>() { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
        var rand = Random.Range(0, noDataCoin.Count);
        gifts[noDataCoin[rand]].GetComponent<Gift>().numberCoins = 300;
        noDataCoin.RemoveAt(rand);

        for (int i = 0; i < 2; i++)
        {
            rand = Random.Range(0, noDataCoin.Count);
            gifts[noDataCoin[rand]].GetComponent<Gift>().numberCoins = 50;
            noDataCoin.RemoveAt(rand);
        }

        for (int i = 0; i < 3; i++)
        {
            rand = Random.Range(0, noDataCoin.Count);
            gifts[noDataCoin[rand]].GetComponent<Gift>().numberCoins = 100;
            noDataCoin.RemoveAt(rand);

            rand = Random.Range(0, noDataCoin.Count);
            gifts[noDataCoin[rand]].GetComponent<Gift>().numberCoins = 200;
            noDataCoin.RemoveAt(rand);
        }

        foreach (var gift in gifts)
        {
            gift.GetChild(1).GetComponent<Text>().text = gift.GetComponent<Gift>().numberCoins.ToString();
            gift.GetChild(1).gameObject.SetActive(false);
        }
    }

    public void BtnListener_Close()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        UI.Instance.star.SetNumStar();
        Gift.numberSelect = 0;
        Hide();
    }

    public void BtnListener_OpenMore()
    {
        //ads
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        AdsAdapter.Instance.ShowRewardedVideo((() =>
            {
                Gift.numberSelect = 0;
                btn_MoreOpen.gameObject.SetActive(false);
            }), (() => UI.Instance.ActiveNotify("Watch failed, Try again!")), PrefData.cur_level,
            AdsAdapter.where.btn_earn_coins_in_UI_menu);
    }
}