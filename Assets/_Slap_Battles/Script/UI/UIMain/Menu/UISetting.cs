using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class UISetting : BasePopup
{
    public ButtonEffectLogic btn_Vibration;

    public Image img_onMute;
    public Image img_offMute;

    public GameObject audioSource;

    public InputField testLv;

    private void OnEnable()
    {
        img_onMute.gameObject.SetActive(PrefData.is_active_sounds);
        img_offMute.gameObject.SetActive(!PrefData.is_active_sounds);
        Show();
    }

    public void BtnListener_Vibration()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        img_onMute.gameObject.SetActive(img_offMute.gameObject.activeInHierarchy);
        img_offMute.gameObject.SetActive(!img_onMute.gameObject.activeInHierarchy);

        PrefData.is_active_sounds = img_onMute.gameObject.activeSelf;
        AudioListener.volume = PrefData.is_active_sounds ? 1 : 0;
    }

    public void BtnListener_Close()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        Time.timeScale = 1;
        UI.Instance.menu.obj_Menu.gameObject.SetActive(true);
        Hide();
    }

    public void BtnListener_Load()
    {
        PrefData.cur_level = int.Parse(testLv.text);
        UI.Instance.menu.BtnListener_TapToStart();
    }
    
}