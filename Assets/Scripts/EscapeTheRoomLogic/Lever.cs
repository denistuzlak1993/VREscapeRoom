using UnityEngine;
using System.Collections.Generic;

public class Lever : MonoBehaviour
{
    public int position; // Pozicija poluge u puzzlu (0-based index)
    public bool isPlus; // True ako je poluga u plus poziciji, false ako je u minus
    public bool isNeutral = true; // Dodajemo neutralno stanje za polugu

    // Unaprijed definirani bodovi za svaku polugu (kada je u plus, minus ili neutralnoj poziciji)
    public List<int> plusPoints; // Bodovi kada je poluga u plus poziciji (po otvorima)
    public List<int> minusPoints; // Bodovi kada je poluga u minus poziciji (po otvorima)
    public List<int> neutralPoints; // Bodovi kada je poluga u neutralnoj poziciji (po otvorima)

    private LeverPuzzle leverPuzzle; // Referenca na LeverPuzzle skriptu
    private bool isInTrigger = false; // Da li je poluga u triggeru

    private void Start()
    {
        leverPuzzle = FindObjectOfType<LeverPuzzle>(); // Pronađi LeverPuzzle u sceni

        // Proveri jesu li liste plusPoints, minusPoints i neutralPoints ispravne dužine
        if (plusPoints.Count != leverPuzzle.numberOfOpenings || 
            minusPoints.Count != leverPuzzle.numberOfOpenings ||
            neutralPoints.Count != leverPuzzle.numberOfOpenings)
        {
            Debug.LogError("Broj bodova u listama ne odgovara broju otvora!");
        }
    }

    // Detektuj kada poluga uđe u trigger
    private void OnTriggerEnter(Collider other)
    {
        if (isInTrigger) return; // Spreči višestruke ulaske u trigger

        if (other.gameObject.name == "Plus" && (isNeutral || !isPlus))
        {
            SetLeverState(true); // Postavi polugu na plus poziciju
        }
        else if (other.gameObject.name == "Minus" && (isNeutral || isPlus))
        {
            SetLeverState(false); // Postavi polugu na minus poziciju
        }

        isInTrigger = true; // Obeleži da je poluga u triggeru
    }

    // Kada poluga napusti trigger, resetuj stanje
    private void OnTriggerExit(Collider other)
    {
        isInTrigger = false; // Oslobodi trigger
    }

    // Postavi stanje poluge na plus ili minus
    private void SetLeverState(bool isLeverPlus)
    {
        if (isNeutral || isPlus != isLeverPlus) // Samo ažuriraj ako je došlo do promene ili je poluga neutralna
        {
            if (!isNeutral) 
            {
                leverPuzzle.ResetOpeningPointsForLever(this); // Resetuj bodove pre nego što promeniš stanje
            }

            isPlus = isLeverPlus; // Ažuriraj stanje poluge
            isNeutral = false; // Poluga više nije neutralna
            leverPuzzle.ApplyPointsFromLever(this); // Ažuriraj bodove samo za ovu polugu

            Debug.Log($"Poluga {position} prebačena u {(isPlus ? "plus" : "minus")} poziciju.");
        }
    }

    // Vraća bodove za trenutnu poziciju poluge (plus, minus ili neutralno)
    public List<int> GetCurrentPoints()
    {
        return isPlus ? plusPoints : (isNeutral ? neutralPoints : minusPoints);
    }

    // Resetuj polugu na početno stanje (neutralno)
    public void ResetLever()
    {
        isPlus = false; // Resetuj na minus poziciju
        isNeutral = true; // Postavi polugu u neutralno stanje
        isInTrigger = false; // Resetuj stanje triggera
    }
}
