using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CameraCtl : MonoBehaviour
{
    private float speed;
    private Vector3 velo;

    private void Awake()
    {
        speed = 0;
    }

    // Update is called once per frame
    public void Update()
    {
        if(Player.Instance!=null)
        {
            var playerPos = Player.Instance.transform.position;
            var pos = new Vector3(playerPos.x, Mathf.Clamp(playerPos.y + 20, 10, Int64.MaxValue), playerPos.z - 18);
            transform.position = Vector3.SmoothDamp(transform.position, pos, ref velo, speed);
        }
    }
}