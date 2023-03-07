using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lava : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        var goj = other.gameObject;
        if (!goj.CompareTag(CONST.GROUND_TAG))
        {
            goj.gameObject.SetActive(false);
        }
    }
}