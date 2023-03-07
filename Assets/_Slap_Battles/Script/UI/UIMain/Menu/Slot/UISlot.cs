using System;
using System.Collections;
using System.Collections.Generic;
using DanielLochner.Assets.SimpleScrollSnap;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class UISlot : BasePopup
{
    public Image hand;

    public ButtonEffectLogic btn_TapToStart;
    public ButtonEffectLogic btn_Close;
    public ButtonEffectLogic btn_OneMoreSpin;
    public Text txt_Clock;
    public int slotWin;

    public AudioClip audioSlot;

    // Update is called once per frame
    void Update()
    {
        if (txt_Clock.gameObject.activeInHierarchy)
        {
            var lastTimeSpin = PrefData.get_last_spin();
            var now = DateTime.Now;
            var deltaTime = now - lastTimeSpin;
            var maxTime = new TimeSpan(0, 5, 0);
            if (deltaTime < maxTime)
            {
                deltaTime = maxTime - deltaTime;
                string second;
                if (deltaTime.Seconds < 10)
                {
                    second = "0" + deltaTime.Seconds;
                }
                else
                {
                    second = "" + deltaTime.Seconds;
                }

                txt_Clock.text = "0" + deltaTime.Minutes + ":" + second;
            }
        }
    }

    void SelectSlot(int index)
    {
        int rand;
        var UI_Ins = UI.Instance;
        switch (index % 3)
        {
            case 0: //money
                UI_Ins.ActiveNotify("Earn $1000");
                StartCoroutine(UI.Instance.GetMoney(100, false));
                break;
            case 1: //skin
                rand = Random.Range(1, 18);
                UI_Ins.ActiveNotify("Earn skin " + rand);
                PrefData.set_earn_skin(rand);
                UI_Ins.ActiveCongra();
                break;
            case 2: //weapon
                rand = Random.Range(1, 18);
                UI_Ins.ActiveNotify("Earn hand " + rand);
                PrefData.set_earn_hand(rand);
                UI_Ins.ActiveCongra();
                break;
        }
    }

    IEnumerator StartSlot()
    {
        yield return new WaitForSeconds(0.5f);
        MainScene.Instance.audioMain.Playaudiosources(audioSlot, true);
        yield return new WaitForSeconds(6.3f);
        MainScene.Instance.audioMain.audioSource.Pause();
        yield return new WaitForSeconds(2.7f);
        btn_Close.gameObject.SetActive(true);
        btn_OneMoreSpin.gameObject.SetActive(true);
        txt_Clock.gameObject.SetActive(true);
        if(!SlotMachine.checkRoll)
        {
            UI.Instance.ActiveNotify("Watch failed, Try again!");
            yield break;
        }
        var slots = btn_TapToStart.gameObject.GetComponent<SlotMachine>().slots;
        int winIndex = -1;
        if (slots[0].SelectedPanel % 3 == slots[1].SelectedPanel % 3 &&
            slots[1].SelectedPanel % 3 == slots[2].SelectedPanel % 3)
        {
            winIndex = slots[0].SelectedPanel;
            SelectSlot(winIndex);
        }
        else
        {
            UI.Instance.ActiveNotify("No More!");
        }
    }

    public void BtnListener_TapToStart()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        StartCoroutine(HandRota());
        StartCoroutine(StartSlot());
        PrefData.set_last_spin();
        btn_TapToStart.gameObject.SetActive(false);
    }

    public void BtnListener_Close()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        Hide();
    }

    public void BtnListener_OneMoreSpin()
    {
        //ads
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        // AdsAdapter.Instance.ShowRewardedVideo((() =>
        //     {
        StartCoroutine(HandRota());
        StartCoroutine(StartSlot());
        PrefData.set_last_spin();
        btn_OneMoreSpin.gameObject.SetActive(false);
        txt_Clock.gameObject.SetActive(false);
        btn_Close.gameObject.SetActive(false);
        // }), (() => UI.Instance.ActiveNotify("Watch failed, Try again!")), PrefData.cur_level,
        // AdsAdapter.@where.btn_spin_in_UI_menu);
    }

    IEnumerator HandRota()
    {
        var handRect = hand.GetComponent<RectTransform>();
        var scale = handRect.localScale;
        handRect.localScale = new Vector3(scale.x, -scale.y, scale.z);
        yield return new WaitForSeconds(0.5f);
        handRect.localScale = new Vector3(scale.x, scale.y, scale.z);
    }

    private void OnEnable()
    {
        var lastTimeSpin = PrefData.get_last_spin();
        var now = DateTime.Now;
        var deltaTime = now - lastTimeSpin;
        if (deltaTime < new TimeSpan(0, 5, 0))
        {
            btn_TapToStart.gameObject.SetActive(false);
            btn_Close.gameObject.SetActive(true);
            btn_OneMoreSpin.gameObject.SetActive(true);
            txt_Clock.gameObject.SetActive(true);
        }
        else
        {
            btn_TapToStart.gameObject.SetActive(true);
            btn_Close.gameObject.SetActive(false);
            btn_OneMoreSpin.gameObject.SetActive(false);
            txt_Clock.gameObject.SetActive(false);
        }

        Show();
    }
}