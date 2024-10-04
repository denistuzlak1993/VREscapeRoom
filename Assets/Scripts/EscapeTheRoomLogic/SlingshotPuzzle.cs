using UnityEngine;
using System.Collections.Generic;
using UnityEngine.Events;

public class SlingshotPuzzle : VREscapeRoomPuzzleBase
{
    // Child dugmad koja će biti pogođena (dodaju se u Inspektoru)
    [SerializeField]
    private GameObject[] buttons;

    // Materijali za highlight i default za svaki dugmić (iste dužine kao buttons)
    [SerializeField]
    private Material[] highlightMaterials;
    [SerializeField]
    private Material[] defaultMaterials;

    // Redosled kojim dugmad trebaju biti pogođena (npr. tagovi)
    [SerializeField]
    private int[] correctOrder;

    // Trenutni aktivni redosled pogodaka
    private List<int> activeOrder = new List<int>();

    // AudioSource za pogrešne pokušaje
    [SerializeField]
    private AudioClip wrongAttemptAudio, correctAttemptAudio;
    public AudioSource audioSourcePuzzle;


    public UnityEvent onPuzzleCompletedCallback;



    public override void InitializePuzzle()
    {
        base.InitializePuzzle();
        activeOrder.Clear();

        // Resetovanje svih dugmića na default materijal
        for (int i = 0; i < buttons.Length; i++)
        {
            ResetButtonMaterial(buttons[i], i);
        }
    }

  public void OnChildObjectHit(int objectID)
{
    if (isPuzzleCompleted) return; // Ako je puzzle već završen, ne radimo ništa

    // Proveri da li je objekat već pogođen
    if (activeOrder.Contains(objectID))
    {
        // Ako je već pogođen, uklanjamo ga i resetujemo materijal
        Debug.Log("Button hit again, resetting: " + objectID);
        activeOrder.Remove(objectID);
        ResetButtonMaterial(buttons[objectID], objectID);
    }
    else
    {
        // Ako je pogođen prvi put, dodajemo u redosled
        Debug.Log("Correct button hit: " + objectID);
        activeOrder.Add(objectID);
        ChangeButtonMaterial(buttons[objectID], highlightMaterials[objectID]);
    }

    // Proveravamo da li su sva dugmad pogođena
    if (activeOrder.Count == buttons.Length)
    {
        if (IsOrderCorrect())
        {
              audioSourcePuzzle.clip = correctAttemptAudio;
            audioSourcePuzzle.Play();
            CompletePuzzle();
        }
        else
        {
            // Ako je redosled netačan, resetujemo puzzle i puštamo zvuk
            Debug.Log("Wrong order, resetting puzzle.");
            audioSourcePuzzle.clip = wrongAttemptAudio;
            audioSourcePuzzle.Play();
            ResetPuzzle();
        }
    }
}

private bool IsOrderCorrect()
{
    for (int i = 0; i < correctOrder.Length; i++)
    {
        if (activeOrder[i] != correctOrder[i])
        {
            return false;
        }
    }
    return true;
}


    // Promena materijala na dugmetu nakon pogotka
    private void ChangeButtonMaterial(GameObject button, Material newMaterial)
    {
        Renderer renderer = button.GetComponent<Renderer>();
        if (renderer != null)
        {
            renderer.material = newMaterial;
        }
    }

    // Resetujemo dugme na default materijal
    private void ResetButtonMaterial(GameObject button, int index)
    {
        Renderer renderer = button.GetComponent<Renderer>();
        if (renderer != null)
        {
            renderer.material = defaultMaterials[index];
        }
    }

    // Resetovanje puzzle-a
    public override void ResetPuzzle()
    {
        base.ResetPuzzle();
        activeOrder.Clear();

        // Resetujemo sve dugmiće
        for (int i = 0; i < buttons.Length; i++)
        {
            ResetButtonMaterial(buttons[i], i);
        }
        Debug.Log("Puzzle has been reset.");
    }

// Zagonetka završena, pozivamo UnityEvent callback za otvaranje vrata
protected override void OnPuzzleCompleted()
{
    base.OnPuzzleCompleted();
    Debug.Log("Slingshot Puzzle completed!");

    // Pozovemo UnityEvent da se vrata otvore
    if (onPuzzleCompletedCallback != null)
    {
        onPuzzleCompletedCallback.Invoke();
    }
}

    // Pomoćna metoda za dobijanje indeksa dugmića
    private int GetButtonIndex(GameObject button)
    {
        for (int i = 0; i < buttons.Length; i++)
        {
            if (buttons[i] == button)
            {
                return i;
            }
        }
        return -1; // Dugme nije pronađeno
    }
}
