using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class FinalLockBoxPuzzle : MonoBehaviour
{
    // Lista svih lokota
    [SerializeField]
    private List<Lock> locks;

    // UnityEvent koji se poziva kada su svi lokoti otključani
    public UnityEvent onAllLocksUnlocked;

    // Audio za otvaranje vrata kada su svi lokoti otključani
    [SerializeField]
    private AudioSource audioSource;
    [SerializeField]
    private AudioClip doorOpeningSound;

    // Inicijalizacija lokota
    private void Start()
    {
        // Proveravamo stanje lokota na početku
        foreach (var lockItem in locks)
        {
            // Pretplatimo se na događaj otključavanja svakog lokota
            lockItem.onLockUnlocked.AddListener(CheckAllLocksUnlocked);
        }
    }

    // Proverava da li su svi lokoti otključani
    private void CheckAllLocksUnlocked()
    {
        foreach (var lockItem in locks)
        {
            if (!lockItem.IsUnlocked())
            {
                // Ako bilo koji lokot nije otključan, izlazimo iz metode
                return;
            }
        }

        // Ako su svi lokoti otključani, pozivamo UnityEvent i zvuk otvaranja vrata
        Debug.Log("All locks are unlocked! Final box can now be opened.");
        audioSource.clip = doorOpeningSound;
        audioSource.Play(); // Reprodukuje zvuk otvaranja vrata
        GameManager.Instance.OnFinalPuzzleCompleted();
        onAllLocksUnlocked.Invoke(); // Poziva UnityEvent da otvori vrata
    }
}
