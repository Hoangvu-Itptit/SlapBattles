using System.Collections;
using DG.Tweening;
using UnityEngine;

public class BoostSpeed : BoostMain
{
    public static bool isOnBoostSpeed = false;

    protected override IEnumerator StartBoost()
    {
        var player = Player.Instance;
        var playerdata = player.playerPower;
        var moveSpeed = player.moveSpeed;

        player.moveSpeed = moveSpeed + playerdata.playerMoveSpeed * 0.5f;
        if (isOnBoostSpeed) yield break;
        isOnBoostSpeed = true;
        while (timer <= 3f)
        {
            timer += Time.deltaTime;
            yield return new WaitForSeconds(Time.deltaTime);
        }

        isOnBoostSpeed = false;
        player.moveSpeed = playerdata.playerMoveSpeed;
    }

    void OnDisable()
    {
        transform.DOKill();
    }
}