using UnityEngine;

public class iBullet : MonoBehaviour
{
    public Rigidbody rb;

    private void OnCollisionEnter(Collision collision)
    {
        var col = collision.gameObject;
        var lvMono = LevelCtl.Instance.GetComponent<MonoBehaviour>();
        if (col.CompareTag(CONST.BOT_TAG))
        {
            lvMono.StartCoroutine(col.GetComponent<Bot>().GetForce(Vector3.up / 10));
            PrefData.player_point++;
            var bot = col.GetComponent<Bot>();
            bot.animator.Play(CONST.PLAYER_GET_HIT_ANIMATE);
            bot.getgun = true;
        }
    }
}