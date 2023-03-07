using System;
using System.Collections;
using UnityEngine;
using UnityEngine.AI;
using Random = UnityEngine.Random;

public class Bot : People
{
    public Transform target;
    private NavMeshAgent navMeshAgent;
    public bool isHit, getgun = false;
    public int setHand, setSkin;
    public Targetvariant targetVariant;
    public bool isWin { get; set; }

    public bool is_active_navMeshAgent
    {
        get { return navMeshAgent.enabled; }
        set { navMeshAgent.enabled = value; }
    }

    public override void Awake()
    {
        navMeshAgent = gameObject.GetComponent<NavMeshAgent>();
        is_active_navMeshAgent = true;
        var skin = transform.GetChild(2);
        for (int i = 0; i < skin.childCount; i++)
        {
            skin.GetChild(i).gameObject.SetActive(false);
        }

        skin.GetChild(setSkin).gameObject.SetActive(true);
        var hand = skin.GetChild(setSkin).GetComponent<PlayerSkin>().hand;
        for (int i = 0; i < hand.childCount; i++)
        {
            hand.GetChild(i).gameObject.SetActive(false);
        }

        hand.GetChild(setHand).gameObject.SetActive(true);
        var mesh = transform.GetChild(1);
        for (int i = 0; i < mesh.childCount; i++)
        {
            mesh.GetChild(i).gameObject.SetActive(false);
        }

        transform.GetChild(1).GetChild(setHand).gameObject.SetActive(true);
        animator = skin.GetChild(setSkin).GetComponent<PlayerSkin>().animator;
    }

    public override void OnCollisionEnter(Collision collision)
    {
        var col = collision.gameObject;
        if (collision.gameObject.CompareTag(CONST.GROUND_TAG))
        {
            is_active_navMeshAgent = true;
            if (!navMeshAgent.isOnNavMesh)
            {
                gameObject.SetActive(false);
            }
        }
        else if (col.CompareTag(CONST.BOX_TRAP_TAG))
        {
            var force = (transform.position - col.transform.position).normalized;
            force = new Vector3(force.x, 1, force.z);
            is_active_navMeshAgent = false;
            StartCoroutine(GetForce(force));
        }
    }

    public void OnCollisionStay(Collision collisionInfo)
    {
        if (collisionInfo.gameObject.CompareTag(CONST.GROUND_TAG))
        {
            transform.GetChild(1).gameObject.SetActive(true);
        }
    }

    private void Update()
    {
        var lvIns = LevelCtl.Instance;
        var uiIns = UI.Instance;
        if (uiIns.isLose || uiIns.isWin)
        {
            is_active_navMeshAgent = false;
            return;
        }

        if (gameObject.transform.position.y < -3)
        {
            gameObject.SetActive(false);
            return;
        }

        if (getgun)
        {
            transform.GetChild(1).gameObject.SetActive(false);
            return;
        }

        if (navMeshAgent.isOnOffMeshLink)
        {
            if (lvIns.haveTeleport)
            {
                navMeshAgent.CompleteOffMeshLink();
            }
            else
            {
                navMeshAgent.speed = 1;
            }
        }
        else
        {
            navMeshAgent.speed = 3;
        }

        if (PrefData.cur_level <= 2) return;
        if (target == null || !target.gameObject.activeInHierarchy)
        {
            lvIns.FindTargetforEnemy();
        }
        else if (!isHit && is_active_navMeshAgent)
        {
            Vector3 relative = transform.InverseTransformPoint(target.position);
            float angle = Mathf.Atan2(relative.x, relative.z) * Mathf.Rad2Deg;
            if (Vector3.Distance(transform.position, target.position) > (4 + setHand * 0.1f) ||
                Mathf.Abs(angle) > 20f + setHand * 2)
            {
                Move();
            }
            else
            {
                StartCoroutine(Hit());
            }
        }
    }

    protected IEnumerator Hit()
    {
        var uiIns = UI.Instance;
        if (is_active_navMeshAgent && navMeshAgent.isOnNavMesh && !uiIns.tutorial.activeInHierarchy &&
            !uiIns.bg_Help.activeInHierarchy)
        {
            if (!is_active_navMeshAgent)
            {
                yield break;
            }

            isHit = true;

            var rd = Random.Range(0, 100);
            var per = Mathf.Clamp(PrefData.cur_level, 10, 100);
            if (PrefData.cur_level < 5) per = 5;
            else if (PrefData.cur_level < 10) per = 10;
            bool canAttack = rd < per;
            if (isWin) canAttack = true;

            if (canAttack)
            {
                //Play anim hit

                animator.Play(CONST.PLAYER_SMASH_ANIMATE);
                yield return new WaitForSeconds(0.45f);
                transform.GetChild(1).GetChild(setHand).GetComponent<MeshCollider>().enabled = true;
                audio.Playaudiosources(CONST.AUDIO_HIT_NAMEFILE_ + Random.Range(1, 3));
                yield return new WaitForSeconds(0.2f);
                transform.GetChild(1).GetChild(setHand).GetComponent<MeshCollider>().enabled = false;
                Move();
            }
            else
            {
                yield return new WaitForSeconds(2);
            }

            isHit = false;
        }
    }

    public override void Move()
    {
        if (isHit) return;
        var uiIns = UI.Instance;
        if (is_active_navMeshAgent && navMeshAgent.isOnNavMesh && !uiIns.tutorial.activeInHierarchy &&
            !uiIns.bg_Help.activeInHierarchy)
        {
            animator.Play(CONST.PLAYER_RUN_ANIMATE);
            navMeshAgent.destination = target.position;
            transform.GetChild(1).gameObject.SetActive(true);
        }
    }

    public override IEnumerator GetForce(Vector3 force, bool isDie = true, ForceMode forceMode = ForceMode.Impulse)
    {
        is_active_navMeshAgent = false;
        rb.AddForce(force, forceMode);

        if (isDie)
        {
            transform.GetChild(1).gameObject.SetActive(false);
            getgun = true;
            animator.Play(CONST.PLAYER_GET_HIT_ANIMATE);
            yield return new WaitForSeconds(2.2f);
            gameObject.SetActive(false);
        }
        else
        {
            yield return new WaitForSeconds(5);
            is_active_navMeshAgent = true;
            if (navMeshAgent.isOnNavMesh)
            {
                gameObject.SetActive(false);
            }
        }
    }

    private void OnDisable()
    {
        var lvIns = LevelCtl.Instance;
        if (lvIns == null) return;
        lvIns.RemoveActive(lvIns.listActiveEnemy, lvIns.listUnactiveEnemy);

        if (LevelCtl.Instance.listActiveEnemy.Count == 0 && !Player.Instance.isDie)
        {
            Player.Instance.animator.Play(CONST.PLAYER_VICTORY_IDLE_ANIMATE);
            UI.Instance.Listener_Win();
        }
        else
        {
            lvIns.FindTargetforEnemy();
        }
    }
}