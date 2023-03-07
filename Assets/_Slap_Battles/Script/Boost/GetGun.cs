using UnityEngine;

public class GetGun : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(CONST.PLAYER_TAG))
        {
            Player.Instance.SetShoot();
            gameObject.SetActive(false);
        }
    }
}