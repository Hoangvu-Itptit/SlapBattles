using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BanBan : People
{
    public Transform target;
    private NavMeshAgent navMeshAgent;
    public bool isHit;
    public int setHand, setSkin;
    public List<GameObject> listSkin;

    public bool is_active_navMeshAgent
    {
        get { return navMeshAgent.enabled; }
        set { navMeshAgent.enabled = value; }
    }

    public override void Awake()
    {
        setHand = 0;
        setSkin = Random.Range(0, 31);
        var skin = Instantiate(listSkin[setSkin], skinParent);

        navMeshAgent = gameObject.GetComponent<NavMeshAgent>();
        is_active_navMeshAgent = true;
        
        var mesh = transform.GetChild(1);
        for (int i = 0; i < mesh.childCount; i++)
        {
            mesh.GetChild(i).gameObject.SetActive(false);
        }

        transform.GetChild(1).GetChild(setHand).gameObject.SetActive(true);
        animator = skin.GetComponent<PlayerSkin>().animator;
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
            navMeshAgent.speed = 2;
        }

        FindTarget();
        if (!isHit && is_active_navMeshAgent)
        {
            Vector3 relative = transform.InverseTransformPoint(target.position);
            float angle = Mathf.Atan2(relative.x, relative.z) * Mathf.Rad2Deg;
            if (Vector3.Distance(transform.position, target.position) > 5 || Mathf.Abs(angle) > 30f)
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
        var count = listEnemy.Count;
        var nearest = Mathf.Infinity;
        var gojNearest = count;

        for (int index = 0; index < count; index++)
        {
            var near = Vector3.Distance(listEnemy[index].transform.position, transform.position);
            if (near < nearest)
            {
                nearest = near;
                gojNearest = index;
            }
        }

        target = listEnemy[gojNearest].transform;
    }

    protected IEnumerator Hit()
    {
        if (!is_active_navMeshAgent)
        {
            yield break;
        }
        navMeshAgent.velocity = Vector3.zero;
        isHit = true;
        
        animator.Play(CONST.PLAYER_SMASH_ANIMATE);
        yield return new WaitForSeconds(0.45f);
        transform.GetChild(1).GetChild(setHand).GetComponent<MeshCollider>().enabled = true;
        audio.Playaudiosources(CONST.AUDIO_HIT_NAMEFILE_ + Random.Range(1, 3));
        yield return new WaitForSeconds(0.2f);
        transform.GetChild(1).GetChild(setHand).GetComponent<MeshCollider>().enabled = false;
        
        Move();

        isHit = false;
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
        yield break;
    }
    
}