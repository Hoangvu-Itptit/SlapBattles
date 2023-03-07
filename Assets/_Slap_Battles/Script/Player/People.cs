using System;
using System.Collections;
using UnityEngine;
using UnityEngine.AI;

public class People : MonoBehaviour
{
    protected float ver, hor;
    public Rigidbody rb;
    public float moveSpeed;
    public Animator animator;
    public Transform skinParent;
    public Audio audio;

    public virtual void OnCollisionEnter(Collision collision)
    {
        var col = collision.gameObject;
        if (col.CompareTag(CONST.BOT_TAG))
        {
            var force = (transform.position - col.transform.position).normalized;
            force = new Vector3(force.x, 1, force.z);
            StartCoroutine(GetForce(force));
        }
    }

    public virtual void Awake()
    {
    }

    public virtual void Move()
    {
        transform.GetChild(1).GetChild(PrefData.cur_hand - 1).GetComponent<MeshCollider>().enabled = false;
        /*animator.Play(CONST.PLAYER_RUN_ANIMATE);*/
        rb.velocity = new Vector3(hor, 0, ver) * moveSpeed + new Vector3(0, rb.velocity.y, 0);
        var angle = (180 / Mathf.PI) * Mathf.Atan2(hor, ver);

        transform.rotation = Quaternion.Euler(0, angle, 0);
    }

    public virtual IEnumerator GetForce(Vector3 force, bool isDie = true, ForceMode forceMode = ForceMode.Impulse)
    {
        rb.AddForce(force, forceMode);
        animator.Play(CONST.PLAYER_GET_HIT_ANIMATE);

        var bots = rb.gameObject.GetComponent<Bot>();
        if (bots != null)
        {
            bots.is_active_navMeshAgent = false;
        }

        yield return new WaitForSeconds(2);
    }
}