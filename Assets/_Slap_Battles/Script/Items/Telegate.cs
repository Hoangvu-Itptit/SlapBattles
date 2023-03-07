using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Telegate : MonoBehaviour
{
    public Transform friendTeleGate;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(CONST.PLAYER_TAG))
        {
            other.transform.position = friendTeleGate.position;
        }
    }
}