using System;
using System.Collections;
using UnityEngine;
using UnityEngine.AI;
using Random = UnityEngine.Random;

public class ChooChoo : People
{
    [SerializeField] private NavMeshAgent agent;
    public Transform target;
    public bool isHit;
    public int setSkin;

    public override void Awake()
    {
        setSkin = Random.Range(0, 6);
        for (int i = 0; i < skinParent.childCount; i++)
        {
            skinParent.GetChild(i).gameObject.SetActive(false);
        }

        skinParent.GetChild(setSkin).gameObject.SetActive(true);
        animator = skinParent.GetChild(setSkin).GetComponent<Animator>();
        FindTarget();
    }

    public override void OnCollisionEnter(Collision collision)
    {
    }

    private void Update()
    {
        var lvIns = LevelCtl.Instance;
        var uiIns = UI.Instance;
        if (uiIns.isLose || uiIns.isWin)
        {
            gameObject.SetActive(false);
            return;
        }

        if (gameObject.transform.position.y < -3)
        {
            gameObject.SetActive(false);
            return;
        }

        if (agent.isOnOffMeshLink)
        {
            if (lvIns.haveTeleport)
            {
                agent.CompleteOffMeshLink();
            }
            else
            {
                agent.speed = 1;
            }
        }
        else
        {
            agent.speed = 3;
        }

        FindTarget();
        if (!isHit && IsActiveNavMeshAgent)
        {
            Vector3 relative = transform.InverseTransformPoint(target.position);
            float angle = Mathf.Atan2(relative.x, relative.z) * Mathf.Rad2Deg;
            if (Vector3.Distance(transform.position, target.position) > 6 || Mathf.Abs(angle) > 30f)
            {
                Move();
            }
            else
            {
                StartCoroutine(Hit());
            }
        }
    }

    void FindTarget()
    {
        var lvIns = LevelCtl.Instance;
        var listEnemy = lvIns.listActiveEnemy;
        var player = Player.Instance;
        var count = listEnemy.Count;
        var nearest = Vector3.Distance(player.transform.position, transform.position);
        var gojNearest = count;

        if (count == 1)
        {
            target = player.transform;
            return;
        }

        for (int index = 0; index < count; index++)
        {
            var near = Vector3.Distance(listEnemy[index].transform.position, transform.position);
            if (near < nearest)
            {
                nearest = near;
                gojNearest = index;
            }
        }

        if (gojNearest == count)
        {
            target = player.transform;
        }
        else
        {
            target = listEnemy[gojNearest].transform;
        }
    }

    public override void Move()
    {
        if (isHit) return;
        var uiIns = UI.Instance;
        if (IsActiveNavMeshAgent && agent.isOnNavMesh && !uiIns.tutorial.activeInHierarchy &&
            !uiIns.bg_Help.activeInHierarchy)
        {
            animator.Play(CONST.CHOO_CHOO_RUN_ANIMATE);
            agent.destination = target.position;
        }
    }

    IEnumerator Hit()
    {
        if (!IsActiveNavMeshAgent)
        {
            yield break;
        }

        isHit = true;

        agent.velocity = Vector3.zero;

        animator.Play(CONST.CHOO_CHOO_ATTACK_ANIMATE);
        yield return new WaitForSeconds(0.4f);
        transform.GetChild(1).GetChild(0).GetComponent<MeshCollider>().enabled = true;
        audio.Playaudiosources(CONST.AUDIO_HIT_NAMEFILE_ + Random.Range(1, 3));
        yield return new WaitForSeconds(0.3f);
        transform.GetChild(1).GetChild(0).GetComponent<MeshCollider>().enabled = false;
        Move();

        isHit = false;
    }

    public override IEnumerator GetForce(Vector3 force, bool isDie = true, ForceMode forceMode = ForceMode.Impulse)
    {
        yield break;
    }

    private void OnEnable()
    {
        IsActiveNavMeshAgent = true;
        isHit = false;
    }

    public bool IsActiveNavMeshAgent
    {
        get { return agent.enabled; }
        set { agent.enabled = value; }
    }
}