using UnityEngine;

public class Boom : MonoBehaviour
{
    public Rigidbody rb;
    public GameObject boomEffect;
    public float radius;

    public virtual void OnCollisionEnter(Collision collision)
    {
        Collider[] getBoom = Physics.OverlapSphere(transform.position, radius);
        Instantiate(boomEffect, transform.position + Vector3.up, Quaternion.identity);
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
                    levelMono.StartCoroutine(itemGoj.GetComponent<Bot>().GetForce(force * 2, false));
                }
            }
            else if (itemGoj.CompareTag(CONST.PLAYER_TAG))
            {
                levelMono.StartCoroutine(itemGoj.GetComponent<Player>().GetForce(force * 2, false));
            }
        }
        
        gameObject.SetActive(false);
    }

    // Update is called once per frame
    public virtual void Update()
    {
        rb.velocity += Vector3.down * 20 * Time.deltaTime;
    }
}