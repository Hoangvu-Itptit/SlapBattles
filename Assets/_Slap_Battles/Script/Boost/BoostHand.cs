using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class BoostHand : BoostMain
{
    public static bool isOnBoostHand = false;

    protected override IEnumerator StartBoost()
    {
        var hitCol = Player.Instance.transform.GetChild(1);
        var scale = hitCol.localScale;

        var size = new Vector3(1, 1, 1);
        hitCol.localScale = scale + new Vector3(1, 1, 1) / 2;
        if (isOnBoostHand) yield break;
        isOnBoostHand = true;
        while (timer <= 3f)
        {
            timer += Time.deltaTime;
            yield return new WaitForSeconds(Time.deltaTime);
        }

        isOnBoostHand = false;
        hitCol.localScale = size;
    }

    void OnDisable()
    {
        transform.DOKill();
    }
}