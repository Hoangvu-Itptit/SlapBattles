using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Playerpower : MonoBehaviour
{
    public float playerMoveSpeed;

    public Vector3 playerSize;

    public float speedHit;

    public Vector3 playerHitColliderSize;

    private void Awake()
    {
        var player = Player.Instance;
        playerMoveSpeed = player.moveSpeed;
        playerSize = player.transform.localScale;
        if (PrefData.is_Bigger) playerSize = Vector3.one * 2;
        playerHitColliderSize = Vector3.one;
        speedHit = 1f;
    }
}