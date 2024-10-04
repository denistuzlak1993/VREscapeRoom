using System.Collections;
using UnityEngine;
using UnityEngine.Events;

public class Lock : MonoBehaviour
{
    // Da li je lokot otključan
    private bool isUnlocked = false;

    // UnityEvent koji se poziva kada se lokot otključa
    public UnityEvent onLockUnlocked;

    // AudioSource i zvuk za svaki put kad se lokot otključa
    [SerializeField]
    private AudioSource audioSource;
    [SerializeField]
    private AudioClip unlockSound;

    // Metoda za otključavanje lokota
    public void Unlock(GameObject key)
    {
        if (!isUnlocked)
        {
            isUnlocked = true;
            Debug.Log("Lock unlocked: " + gameObject.name);
            audioSource.clip = unlockSound;
            audioSource.Play(); // Reprodukujemo zvuk otključavanja
            onLockUnlocked.Invoke(); // Poziva UnityEvent kada se lokot otključa
            
            // Deaktiviramo ključ
            key.SetActive(false);

            // Deaktiviramo lokot nakon što je otključan
            StartCoroutine(selfDisableOnCompleted());
        }
    }

    IEnumerator selfDisableOnCompleted()
    {
        yield return new WaitForSeconds(1.5f);
        gameObject.SetActive(false); // Deaktiviramo lokot nakon 1.5 sekunde
    }

    // Provera da li je lokot otključan
    public bool IsUnlocked()
    {
        return isUnlocked;
    }

    // Detekcija kolizije sa ključem
    private void OnTriggerEnter(Collider other)
    {
        // Proveravamo da li je objekat koji je ušao u trigger ključ (proveravamo tag)
        if (other.CompareTag("Key"))
        {
            Unlock(other.gameObject); // Pozivamo otključavanje i prosleđujemo ključ
        }
    }
}
