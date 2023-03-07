using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class Money : MonoBehaviour
{
    public Vector2 target;

    public void CoinMove()
    {
        gameObject.GetComponent<RectTransform>().DOAnchorPos(target, 1).OnComplete(() => gameObject.SetActive(false));
    }

    private void OnDisable()
    {
        transform.DOKill();
    }
}