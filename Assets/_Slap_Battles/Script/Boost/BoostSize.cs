using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class BoostSize : BoostMain
{
    public static bool isOnBoostSize = false;

    protected override IEnumerator StartBoost()
    {
        var player = Player.Instance;
        var playerTranform = player.transform;
        var scale = playerTranform.localScale;
        var size = new Vector3(scale.x, scale.y, scale.z);
        playerTranform.localScale = size + new Vector3(0.1f, 0.1f, 0.1f);
        if (isOnBoostSize) yield break;
        isOnBoostSize = true;
        while (timer <= 3f)
        {
            timer += Time.deltaTime;
            yield return new WaitForSeconds(Time.deltaTime);
        }

        isOnBoostSize = false;
        playerTranform.localScale = player.playerPower.playerSize;
    }

    void OnDisable()
    {
        transform.DOKill();
    }
}