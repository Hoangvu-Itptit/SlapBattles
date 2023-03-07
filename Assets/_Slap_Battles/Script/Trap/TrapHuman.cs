using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Random = UnityEngine.Random;

public class TrapHuman : People
{
    public Vector3 target;

    public GameObject ball;

    public Transform rightHand;

    public override void OnCollisionEnter(Collision collision)
    {
    }

    IEnumerator ThrowBall()
    {
        animator.Play(CONST.TRAPHUMAN_THROW_BALL_ANIMATE);
        yield return new WaitForSeconds(1.5f);
        InstanBall();
        yield return new WaitForSeconds(2);
        gameObject.SetActive(false);
    }

    void InstanBall()
    {
        var lvIns = LevelCtl.Instance;
        var aball = lvIns.listActiveItemsTrapused.FirstOrDefault(fball => !fball.activeInHierarchy);
        if (aball == null)
        {
            aball = Instantiate(ball, transform.position + Vector3.down * 2, transform.rotation);
            lvIns.listActiveItemsTrapused.Add(aball);
        }
        else
        {
            aball.transform.position = rightHand.position;
            aball.transform.rotation = transform.rotation;
            aball.GetComponent<Ball>().ballTarget = target;
            aball.SetActive(true);
        }
    }
    private void OnEnable()
    {
        rb.velocity = Vector3.zero;
        target = GetComponent<Trap>().target;
        var posx = Random.Range(-1f, 1f);
        var rand = Random.Range(0, 2);
        var posy = Mathf.Sqrt(1 - Mathf.Pow(posx, 2));
        if (rand == 0)
        {
            posy = -posy;
        }

        transform.position = new Vector3(target.x + posx * 2, target.y + 0.5f, target.z + posy * 2);

        Vector3 relative = transform.InverseTransformPoint(target);
        float angle = Mathf.Atan2(relative.x, relative.z) * Mathf.Rad2Deg;
        transform.Rotate(0, angle, 0);

        StartCoroutine(ThrowBall());
    }

    public override IEnumerator GetForce(Vector3 force, bool isDie = true, ForceMode forceMode = ForceMode.Impulse)
    {
        rb.AddForce(force, forceMode);
        animator.Play(CONST.PLAYER_GET_HIT_ANIMATE);

        yield return new WaitForSeconds(2);
    }
}