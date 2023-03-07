using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class Notify : MonoBehaviour
{
    public string notify;

    public float startTime, waitTime;

    IEnumerator StartNotify()
    {
        var scale = transform.localScale;
        var txtnotify = transform.GetChild(0).gameObject;
        txtnotify.SetActive(false);
        yield return transform.DOScaleX(1, startTime).WaitForCompletion();
        txtnotify.GetComponent<Text>().text = notify;
        txtnotify.SetActive(true);
        yield return new WaitForSecondsRealtime(waitTime);
        transform.localScale = scale;
        txtnotify.SetActive(false);
        gameObject.SetActive(false);
    }

    private Coroutine cached;
    public void Show()
    {
        gameObject.SetActive(true);
        if (cached != null)
        {
            transform.DOKill();
            StopCoroutine(cached);
        }
        cached = StartCoroutine(StartNotify());
    }
}