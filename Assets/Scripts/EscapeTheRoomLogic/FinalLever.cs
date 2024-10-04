using UnityEngine;
using System.Collections.Generic;

public class FinalLever : MonoBehaviour
{

    private bool isInTrigger = false; // Da li je poluga u triggeru

   

    // Detektuj kada poluga uđe u trigger
    private void OnTriggerEnter(Collider other)
    {
        if (isInTrigger) return; // Spreči višestruke ulaske u trigger

        if (other.gameObject.name == "Plus")
        {
            GameManager.Instance.OnFinalPuzzleCompleted(); // Postavi polugu na plus poziciju
        }
        else if (other.gameObject.name == "Minus")
        {
             GameManager.Instance.OnFinalPuzzleCompleted();
        }

        isInTrigger = true; // Obeleži da je poluga u triggeru
    }

    // Kada poluga napusti trigger, resetuj stanje
    private void OnTriggerExit(Collider other)
    {
        isInTrigger = false; // Oslobodi trigger
    }

    
   
}
