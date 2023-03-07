using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using Random = UnityEngine.Random;

public class Rock : MonoBehaviour
{
    private Vector3 target;
    public Trap trap;

    private void OnCollisionEnter(Collision collision)
    {
        var col = collision.gameObject;
        var force = col.transform.position - transform.position;
        force = new Vector3(force.x, 0.75f, force.y);
        if (col.CompareTag(CONST.BOT_TAG))
        {
            var bot = col.GetComponent<Bot>();
            bot.is_active_navMeshAgent = false;
            StartCoroutine(bot.GetForce(force * 2, false));
        }
        else if (col.CompareTag(CONST.PLAYER_TAG))
        {
            StartCoroutine(col.GetComponent<Player>().GetForce(force * 5));
        }
    }

    private void Awake()
    {
    }

    private void OnEnable()
    {
        StartCoroutine(Active());
        var target = trap.target;
        var posx = Random.Range(-1f, 1f);
        var rand = Random.Range(0, 2);
        var posy = Mathf.Sqrt(1 - Mathf.Pow(posx, 2));
        if (rand == 0)
        {
            posy = -posy;
        }

        transform.position = new Vector3(5 * posx, target.y + 0.5f, 5 * posy);
        Vector3 relative = transform.InverseTransformPoint(target);
        float angle = Mathf.Atan2(relative.x, relative.z) * Mathf.Rad2Deg;
        transform.Rotate(0, angle, 0);
        StartCoroutine(UnActive());
    }

    IEnumerator Active()
    {
        float timer = 1;
        while (timer >= 0)
        {
            timer -= Time.deltaTime;
            yield return new WaitForSeconds(Time.deltaTime);
        }
    }

    IEnumerator UnActive()
    {
        var lvIns = LevelCtl.Instance;
        lvIns.UnactiveAllItemsInList(lvIns.listTrapItems);
        yield return new WaitForSeconds(4);
        float timer = 0;
        while (timer <= 1)
        {
            timer += Time.deltaTime;
            yield return new WaitForSeconds(Time.deltaTime);
        }

        gameObject.SetActive(false);
    }
}