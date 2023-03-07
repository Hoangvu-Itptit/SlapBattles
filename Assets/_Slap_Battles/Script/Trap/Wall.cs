using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using Random = UnityEngine.Random;

public class Wall : Bus
{
    protected override void OnCollisionEnter(Collision collision)
    {
        var col = collision.gameObject;
        var force = col.transform.position - transform.position;
        force = new Vector3(force.x, 0, force.y).normalized + Vector3.up / 5;
        if (col.CompareTag(CONST.BOT_TAG))
        {
            var bot = col.GetComponent<Bot>();
            bot.is_active_navMeshAgent = false;
            StartCoroutine(bot.GetForce(force * 2.5f, false));
        }
        else
        {
            col.GetComponent<Rigidbody>().AddForce(force * 2.5f, ForceMode.Impulse);
        }
    }

    protected override void OnEnable()
    {
        var target = trap.target;
        var posx = Random.Range(-1f, 1f);
        var rand = Random.Range(0, 2);
        var posy = Mathf.Sqrt(1 - Mathf.Pow(posx, 2));
        if (rand == 0)
        {
            posy = -posy;
        }

        transform.position = new Vector3(100 * posx, target.y + 3.5f, 100 * posy);

        Vector3 relative = transform.InverseTransformPoint(target);
        float angle = Mathf.Atan2(relative.x, relative.z) * Mathf.Rad2Deg;
        transform.Rotate(0, angle, 0);
        var pos = transform.position;
        var tar = new Vector3(pos.x + relative.x * 10, target.y + 3.5f,
            pos.z + relative.z * 10);

        transform.DOMove(tar, speed).SetSpeedBased().SetEase(Ease.Linear).OnComplete(() =>
        {
            transform.rotation = Quaternion.Euler(0, 0, 0);
            gameObject.SetActive(false);
        });
    }
}