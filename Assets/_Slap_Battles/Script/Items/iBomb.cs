using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class iBomb : Boom
{
    public Targetvariant target;

    public override void OnCollisionEnter(Collision collision)
    {
        if (!collision.transform.CompareTag(CONST.PLAYER_TAG))
        {
            StartCoroutine(ActiveBomb());
        }
    }

    private IEnumerator ActiveBomb()
    {
        for (int i = 3; i >= 0; i--)
        {
            target.targetString = i.ToString();
            yield return new WaitForSeconds(1);
        }

        Collider[] getBoom = Physics.OverlapSphere(transform.position, radius);
        foreach (var items in getBoom)
        {
            var itemGoj = items.gameObject;
            var force = itemGoj.transform.position - transform.position;
            force = new Vector3(force.x, 0, force.z).normalized + Vector3.up;
            var levelMono = LevelCtl.Instance.GetComponent<MonoBehaviour>();
            if (itemGoj.CompareTag(CONST.BOT_TAG))
            {
                if (itemGoj.GetComponent<Bot>() != null)
                {
                    var bot = itemGoj.GetComponent<Bot>();
                    bot.is_active_navMeshAgent = false;
                    PrefData.player_point++;
                    levelMono.StartCoroutine(itemGoj.GetComponent<Bot>().GetForce(force));
                }
            }
        }

        Instantiate(boomEffect, transform.position + Vector3.up, Quaternion.identity);
        gameObject.SetActive(false);
    }

    public override void Update()
    {
    }
}