using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using Random = UnityEngine.Random;

public class Ball : MonoBehaviour
{
    public Vector3 ballTarget;

    public Rigidbody rb;

    private void OnCollisionEnter(Collision collision)
    {
        var col = collision.gameObject;
        var force = col.transform.position - transform.position;
        force = new Vector3(force.x, 10, force.y);
        var levelMono = LevelCtl.Instance.GetComponent<MonoBehaviour>();
        if (col.CompareTag(CONST.BOT_TAG))
        {
            var bot = col.GetComponent<Bot>();
            bot.is_active_navMeshAgent = false;
            levelMono.StartCoroutine(bot.GetForce(force));
        }
        else if (col.CompareTag(CONST.PLAYER_TAG))
        {
            levelMono.StartCoroutine(col.GetComponent<Player>().GetForce(force - Vector3.up * 5));
        }
    }

    private void OnEnable()
    {
        var pos = transform.position;
        var target = ballTarget - pos;
        var tar = new Vector3(target.x, 0, target.z).normalized * 100 + new Vector3(0, pos.y, 0);
        transform.DOMove(tar, 50).SetSpeedBased().SetEase(Ease.Linear)
            .OnComplete(() =>
            {
                transform.rotation = Quaternion.Euler(0, 0, 0);
                gameObject.SetActive(false);
            });
    }

    private void OnDisable()
    {
        transform.DOKill();
    }
}