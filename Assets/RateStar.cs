using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class RateStar : MonoBehaviour
{
    public ButtonEffectLogic laterSubmitButtonl;

    public ButtonEffectLogic submitNowButton;

    public List<ButtonEffectLogic> starButton;
    
    public GameObject hand;

    public int numStar;

    private void Awake()
    {
        numStar = 0;
        UI.Instance.menu.obj_Menu.gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
    }

    public void LaterSubmitButtonListener()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        PrefData.set_player_rate(0);
        // UIctl.Instance.PlayorPause(true);
        PrefData.can_rate = false;
        gameObject.SetActive(false);
    }

    public void SubmitNowButtonListener()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        if (numStar >= 3)
        {
            // TODO : Url
            // Application.OpenURL();
            gameObject.SetActive(false);
            PrefData.can_rate = false;
            Debug.Log(numStar);
            Application.OpenURL($"https://play.google.com/store/apps/details?id={Application.identifier}");
        }else LaterSubmitButtonListener();
    }

    private void OnEnable()
    {
    }

    private void OnDisable()
    {
        UI.Instance.menu.obj_Menu.gameObject.SetActive(true);
    }

    public void RatestarListener(int index)
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        numStar = index;
        for (int i = 0; i < 5; i++)
        {
            if (i <= index)
            {
                starButton[i].gameObject.transform.GetChild(0).gameObject.SetActive(false);
                starButton[i].gameObject.transform.GetChild(1).gameObject.SetActive(true);
            }
            else
            {
                starButton[i].gameObject.transform.GetChild(1).gameObject.SetActive(false);
                starButton[i].gameObject.transform.GetChild(0).gameObject.SetActive(true);
            }
        }

        if (hand.activeInHierarchy)
        {
            hand.transform.DOScale(0, 0.5f).OnComplete(() => { hand.SetActive(false); });
        }
    }
}