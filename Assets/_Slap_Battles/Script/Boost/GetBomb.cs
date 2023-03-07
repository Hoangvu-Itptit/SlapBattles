 using UnityEngine;

public class GetBomb : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(CONST.PLAYER_TAG))
        {
            gameObject.SetActive(false);
        }
        
    }
}
