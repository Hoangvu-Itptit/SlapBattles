using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class Pacman : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        transform.DOJump(transform.position, 5, 1, 1).SetLoops(-1, LoopType.Yoyo).SetEase(Ease.InSine);
    }

    private void OnCollisionEnter(Collision collision)
    {
        var col = collision.gameObject;
        var force = col.transform.position - transform.position;
        force = new Vector3(force.x, 0, force.y).normalized + Vector3.up;
        if (col.CompareTag(CONST.BOT_TAG))
        {
            var bot = col.GetComponent<Bot>();
            bot.is_active_navMeshAgent = false;
            StartCoroutine(bot.GetForce(force * 2, false));
        }
        else if (col.CompareTag(CONST.PLAYER_TAG))
        {
            StartCoroutine(col.GetComponent<Player>().GetForce(force * 2, false));
        }
    }
}