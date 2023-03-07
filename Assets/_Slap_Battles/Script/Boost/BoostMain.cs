using System;
using System.Collections;
using DG.Tweening;
using Unity;
using UnityEngine;

public abstract class BoostMain : MonoBehaviour
{
    protected float timer = 0f;

    protected void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(CONST.PLAYER_TAG))
        {
            Boost();
            gameObject.SetActive(false);
            timer = 0f;
        }
    }

    protected void Boost()
    {
        MonoBehaviour lvCtlmoNo = LevelCtl.Instance.GetComponent<MonoBehaviour>();
        lvCtlmoNo.StartCoroutine(StartBoost());
    }

    protected abstract IEnumerator StartBoost();

    protected void OnEnable()
    {
        StartCoroutine(Live());
    }

    protected IEnumerator Live()
    {
        yield return new WaitForSeconds(10);
        gameObject.SetActive(false);
    }
}