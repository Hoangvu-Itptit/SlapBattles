using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class NoInternet : MonoBehaviour
{
    public GameObject noImage;
    public ButtonEffectLogic ok;

    public IEnumerator StartActive()
    {
        yield return noImage.GetComponent<RectTransform>().DOAnchorPosY(0, 1).WaitForCompletion();
        ok.gameObject.SetActive(true);
    }

    public void Active()
    {
        ok.gameObject.SetActive(false);
        gameObject.SetActive(true);
        noImage.SetActive(true);
        StartCoroutine(StartActive());
    }
    
    public void BtnListener_Accept()
    {
        noImage.GetComponent<RectTransform>().localPosition=new Vector3(0,-2600,0);
        noImage.SetActive(false);
        gameObject.SetActive(false);
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            Active();
        }
        else
        {
            gameObject.SetActive(false);
        }
    }
}
