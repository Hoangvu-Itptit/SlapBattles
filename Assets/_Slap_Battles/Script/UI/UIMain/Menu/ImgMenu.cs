using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class ImgMenu : MonoBehaviour
{
    public float time;
    public Image img_Tittle;

    public ButtonEffectLogic btn_Start;
    public ButtonEffectLogic btn_Setting;
    public ButtonEffectLogic btn_Weapon;
    public ButtonEffectLogic btn_Skin;
    public ButtonEffectLogic btn_Slot;
    public ButtonEffectLogic btn_Bigger;
    public ButtonEffectLogic btn_Wheels;
    public ButtonEffectLogic btn_Rank;
    public ButtonEffectLogic btn_Dailyreward;
    public GameObject playerInMenuScene;

    private void Awake()
    {
        playerInMenuScene.GetComponent<Player>().SetSkin();
        playerInMenuScene.GetComponent<Player>().SetHand();
    }

    public IEnumerator OnActive()
    {
        btn_Setting.gameObject.SetActive(false);
        btn_Start.gameObject.SetActive(false);
        img_Tittle.gameObject.SetActive(false);
        btn_Weapon.gameObject.SetActive(false);
        btn_Skin.gameObject.SetActive(false);
        btn_Slot.gameObject.SetActive(false);
        btn_Bigger.gameObject.SetActive(false);
        btn_Wheels.gameObject.SetActive(false);
        btn_Rank.gameObject.SetActive(false);
        btn_Dailyreward.gameObject.SetActive(false);
        var timeSet = time;


        btn_Start.gameObject.SetActive(true);
        img_Tittle.gameObject.SetActive(true);
        img_Tittle.gameObject.GetComponent<RectTransform>().localScale = new Vector3(0.1f, 0.1f, 0.1f);
        yield return img_Tittle.gameObject.GetComponent<RectTransform>().DOScale(new Vector3(1, 1, 1), timeSet)
            .WaitForCompletion();

        var distance = new Vector3(800, 0, 0);

        btn_Weapon.gameObject.GetComponent<RectTransform>().localPosition -= distance;
        btn_Skin.gameObject.GetComponent<RectTransform>().localPosition -= distance;
        btn_Slot.gameObject.GetComponent<RectTransform>().localPosition += distance;
        btn_Bigger.gameObject.GetComponent<RectTransform>().localPosition += distance;
        btn_Wheels.gameObject.GetComponent<RectTransform>().localPosition -= distance;
        btn_Dailyreward.gameObject.GetComponent<RectTransform>().localPosition += distance;
        btn_Rank.gameObject.GetComponent<RectTransform>().localPosition -= distance;
        btn_Setting.gameObject.GetComponent<RectTransform>().localPosition += distance;

        btn_Setting.gameObject.SetActive(true);
        btn_Weapon.gameObject.SetActive(true);
        btn_Skin.gameObject.SetActive(true);
        btn_Slot.gameObject.SetActive(true);
        btn_Bigger.gameObject.SetActive(true);
        btn_Wheels.gameObject.SetActive(true);
        btn_Dailyreward.gameObject.SetActive(true);
        btn_Rank.gameObject.SetActive(true);

        var target = 250;

        btn_Weapon.gameObject.GetComponent<RectTransform>().DOAnchorPosX(target, timeSet);
        btn_Skin.gameObject.GetComponent<RectTransform>().DOAnchorPosX(target, timeSet);
        btn_Wheels.gameObject.GetComponent<RectTransform>().DOAnchorPosX(target, timeSet);
        btn_Slot.gameObject.GetComponent<RectTransform>().DOAnchorPosX(-target, timeSet);
        btn_Bigger.gameObject.GetComponent<RectTransform>().DOAnchorPosX(-target, timeSet);
        btn_Rank.gameObject.GetComponent<RectTransform>().DOAnchorPosX(target, timeSet);
        btn_Dailyreward.gameObject.GetComponent<RectTransform>().DOAnchorPosX(-target, timeSet);
        btn_Setting.gameObject.GetComponent<RectTransform>().DOAnchorPosX(-target, timeSet);
    }

    public void OnEnable()
    {
        StartCoroutine(OnActive());
    }
}