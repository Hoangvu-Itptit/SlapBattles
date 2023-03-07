using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using UnityEngine;
using Random = UnityEngine.Random;

public class Player : People
{
    [HideInInspector] public bool isDie;
    public GameObject curHand;
    public GameObject gun;
    public GameObject bullet;
    public Playerpower playerPower;
    public bool isThrow, isShot, isHitDie = false;
    public List<GameObject> listBullet;
    public float timeShoot;
    public Targetvariant Targetvariant;
    public AudioClip audioShoot;
    public static Player Instance;

    public override void Awake()
    {
        Instance = this;

        SetSkin();
        SetHand();
        var mesh = transform.GetChild(1);
        for (int i = 0; i < mesh.childCount; i++)
        {
            mesh.GetChild(i).gameObject.SetActive(false);
        }

        mesh.GetChild(PrefData.cur_hand - 1).gameObject.SetActive(true);
    }

    public override void OnCollisionEnter(Collision collision)
    {
        var col = collision.gameObject;
        var ui_Ins = UI.Instance;
        if (UI.Instance.menu == null && !ui_Ins.isWin && !ui_Ins.isLose)
        {
            if (col.CompareTag(CONST.BOX_TRAP_TAG))
            {
                var force = (transform.position - col.transform.position).normalized;
                force = new Vector3(force.x, 1, force.z);
                animator.Play(CONST.PLAYER_GET_HIT_ANIMATE);
                isDie = true;
                StartCoroutine(GetForce(force));
            }

            UI.Instance.joystick.transform.parent.gameObject.SetActive(true);
        }
    }

    private void OnCollisionStay(Collision collisionInfo)
    {
        var ui_Ins = UI.Instance;
        if (UI.Instance.menu == null && !ui_Ins.isWin && !ui_Ins.isLose)
        {
            UI.Instance.joystick.transform.parent.gameObject.SetActive(true);
        }
    }

    private void OnCollisionExit(Collision other)
    {
        var uiIns = UI.Instance;
        if (UI.Instance.menu == null && !uiIns.isWin && !uiIns.isLose)
        {
            UI.Instance.joystick.transform.parent.gameObject.SetActive(false);
        }
    }

    void Start()
    {
        isDie = false;
    }

    // Update is called once per frame
    void Update()
    {
        var uiIns = UI.Instance;
        if (transform.position.y < -20)
        {
            isDie = true;
            uiIns.Listener_Lose();
            LevelCtl.Instance.setInstanTrap = false;
            return;
        }

        ver = uiIns.joystick.Vertical;
        hor = uiIns.joystick.Horizontal;
        if (isHitDie && !uiIns.lose.gameObject.activeInHierarchy)
        {
            animator.Play(CONST.PLAYER_GET_HIT_ANIMATE);
            transform.GetChild(1).gameObject.SetActive(false);
            return;
        }

        if (isThrow && !uiIns.lose.gameObject.activeInHierarchy && !uiIns.win.gameObject.activeInHierarchy)
        {
            animator.Play(CONST.PLAYER_THROW_ANIMATE);
            curHand.SetActive(false);
            return;
        }

        CheckShootUpdate();
        if (isShot && !uiIns.lose.gameObject.activeInHierarchy && !uiIns.win.gameObject.activeInHierarchy)
        {
            animator.Play(CONST.PLAYER_SHOOT_ANIMATE);
            curHand.SetActive(false);
            gun.SetActive(true);
        }

        // if (uiIns.menu.gameObject.activeInHierarchy) //pause Game
        // {
        //     animator.Play(CONST.PLAYER_IDLE_ANIMATE);
        //     return;
        // }

        if (uiIns.tutorial.activeInHierarchy || uiIns.bg_Help.activeInHierarchy) return;

        if (uiIns.joystick.transform.parent.gameObject.activeInHierarchy)
        {
            transform.GetChild(1).gameObject.SetActive(true);
            if (Input.GetMouseButton(0))
            {
                transform.GetChild(1).GetChild(PrefData.cur_hand - 1).GetComponent<MeshCollider>().enabled = false;
                if (!isShot)
                {
                    curHand.SetActive(true);
                    gun.SetActive(false);
                    transform.GetChild(1).gameObject.SetActive(true);
                }
                else
                {
                    curHand.SetActive(false);
                    gun.SetActive(true);
                    transform.GetChild(1).gameObject.SetActive(false);
                }

                StopCoroutine(CONST.PLAYER_COROUTINE_FUNCTION_HIT);
                Move();
            }

            if (Input.GetMouseButtonUp(0))
            {
                if (isShot)
                {
                    return;
                }

                curHand.SetActive(true);
                gun.SetActive(false);
                StartCoroutine(CONST.PLAYER_COROUTINE_FUNCTION_HIT);
                rb.velocity = Vector3.zero;
            }
        }
        else
        {
            transform.GetChild(1).gameObject.SetActive(false);
        }
    }

    public override void Move()
    {
        base.Move();
        if (!isShot) animator.Play(CONST.PLAYER_RUN_ANIMATE);
    }

    protected IEnumerator Hit()
    {
        //Play anim hit
        animator.Play(CONST.PLAYER_SMASH_ANIMATE);
        yield return new WaitForSeconds(0.45f / playerPower.speedHit);
        transform.GetChild(1).GetChild(PrefData.cur_hand - 1).GetComponent<MeshCollider>().enabled = true;
        audio.Playaudiosources(CONST.AUDIO_HIT_NAMEFILE_ + Random.Range(1, 3));
        yield return new WaitForSeconds(0.2f / playerPower.speedHit);
        transform.GetChild(1).GetChild(PrefData.cur_hand - 1).GetComponent<MeshCollider>().enabled = false;
        //Play anim idle
    }

    public override IEnumerator GetForce(Vector3 force, bool isCanDie = true, ForceMode forceMode = ForceMode.Impulse)
    {
        UI.Instance.joystick.transform.parent.gameObject.SetActive(false);
        rb.AddForce(force, forceMode);
        animator.Play(CONST.PLAYER_GET_HIT_ANIMATE);
        if (isCanDie) isHitDie = true;
        yield return new WaitForSeconds(2);
        if (isCanDie)
        {
            transform.GetChild(0).gameObject.SetActive(false);
            UI.Instance.Listener_Lose();
            rb.velocity = Vector3.zero;
        }
        else
        {
            yield return new WaitForSeconds(3);
        }
    }

    public void SetSkin()
    {
        animator = skinParent.GetChild(PrefData.cur_skin - 1).GetComponent<PlayerSkin>().animator;
        for (int i = 0; i < skinParent.childCount; i++)
        {
            skinParent.GetChild(i).gameObject.SetActive(false);
        }

        skinParent.GetChild(PrefData.cur_skin - 1).gameObject.SetActive(true);
    }

    public void SetHand()
    {
        var hand = skinParent.GetChild(PrefData.cur_skin - 1).GetComponent<PlayerSkin>().hand;
        gun = hand.parent.GetChild(1).gameObject;
        for (int i = 0; i < hand.childCount; i++)
        {
            hand.GetChild(i).gameObject.SetActive(false);
        }

        curHand = hand.GetChild(PrefData.cur_hand - 1).gameObject;
        curHand.SetActive(true);
        var hits = transform.GetChild(1);
        for (int i = 0; i < hits.childCount; i++)
        {
            hits.GetChild(i).gameObject.SetActive(false);
        }

        hits.GetChild(PrefData.cur_hand - 1).gameObject.SetActive(true);
    }

    private void FixedUpdate()
    {
        var pos = transform.position;
        if (pos.y > 110)
        {
            var vel = rb.velocity;
            rb.velocity = new Vector3(vel.x, 0, vel.z);
        }

        transform.position = new Vector3(pos.x, Mathf.Clamp(pos.y, -Mathf.Infinity, 110), pos.z);
    }

    void CheckShootUpdate()
    {
        if (isShot) timeShoot += Time.deltaTime;
        if (timeShoot > 10) isShot = false;
    }

    public void SetShoot()
    {
        timeShoot = 0;
        if (!isShot)
        {
            isShot = true;
            StartCoroutine(PlayerShoot());
        }
    }

    IEnumerator PlayerShoot()
    {
        var uiIns = UI.Instance;
        while (isShot)
        {
            if (uiIns.lose.gameObject.activeInHierarchy || uiIns.win.gameObject.activeInHierarchy)
            {
                isShot = false;
                yield break;
            }

            var euler = transform.rotation.eulerAngles.y * Mathf.PI / 180;
            Vector3 quater = new Vector3(Mathf.Sin(euler), 0, Mathf.Cos(euler));

            var pos = transform.position + quater * 8;
            var dir = pos - transform.position;
            Vector3 relative = transform.InverseTransformPoint(pos);
            float angle = Mathf.Atan2(relative.x, relative.z) * Mathf.Rad2Deg;
            transform.Rotate(0, angle, 0);

            var bul = listBullet.FirstOrDefault(x => !x.activeInHierarchy);
            if (bul == null)
            {
                bul = Instantiate(bullet);
                listBullet.Add(bul);
            }
            
            MainScene.Instance.audioMain.Playaudiosources(audioShoot,false);
            bul.transform.position = gun.transform.position + dir.normalized * 3 + Vector3.up;
            bul.SetActive(true);
            var end = bul.transform.position + dir.normalized * 16;
            var bulAng = (180 / Mathf.PI) * Mathf.Atan2(dir.x, dir.z);
            bul.transform.rotation = Quaternion.Euler(0, bulAng, 0);
            bul.transform.DOMove(end, 0.5f).SetEase(Ease.Linear).OnComplete(() => bul.gameObject.SetActive(false));
            yield return new WaitForSeconds(0.25f);
        }
    }
}