using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Events;

public class LeverPuzzle : VREscapeRoomPuzzleBase
{
    [Header("Lever and Point Distribution Settings")]
    public int numberOfOpenings = 3; // Number of openings (waterfalls)
    public List<int> openingPoints; // Points allocated to each opening
    public List<Lever> levers; // List of lever objects in the puzzle

    [Header("TextMeshPro Settings")]
    public List<TextMeshPro> openingTexts; // List of TextMeshPro objects for each opening

    [Header("Puzzle Complete Event")]
    public UnityEvent onPuzzleCompleted; // Event triggered when puzzle is completed

    private void Start()
    {
        // Initialize points list with zeros for each opening
        openingPoints = new List<int>(new int[numberOfOpenings]);
        ResetPuzzle(); // Start with a fresh reset
    }

    // Reset points for the specific lever that is being changed
    public void ResetOpeningPointsForLever(Lever lever)
    {
        List<int> points = lever.GetCurrentPoints();
        for (int i = 0; i < points.Count; i++)
        {
            openingPoints[i] -= points[i]; // Oduzmi bodove koji su dodani od levera pre nego što se menja stanje
            if (openingPoints[i] < 0)
            {
                openingPoints[i] = 0; // Osiguraj da bodovi ne budu ispod nule
            }
        }

        UpdateOpeningTexts(); // Ažuriraj prikaz bodova
    }

    // Apply points from a lever to the openings based on its pre-defined points
    public void ApplyPointsFromLever(Lever lever)
    {
        List<int> points = lever.GetCurrentPoints(); // Uzmi trenutne bodove iz levera (plus, minus ili neutralno)

        Debug.Log($"Primeni bodove sa poluge {lever.position} (isPlus: {lever.isPlus})");

        // Prođi kroz svaki otvor i dodaj odgovarajuće bodove
        for (int i = 0; i < points.Count; i++)
        {
            Debug.Log($"Otvor {i + 1}, Dodajemo {points[i]} bodova.");
            AddPointsToOpening(i, points[i]); // Dodaj bodove za svaki otvor
        }

        // Ažuriraj prikaz bodova
        UpdateOpeningTexts();

        // Proveri da li je puzzle završen
        if (IsPuzzleCompleted())
        {
            CompletePuzzle();
        }
    }

    // Update the TextMeshPro texts for each opening
    private void UpdateOpeningTexts()
    {
        for (int i = 0; i < openingPoints.Count; i++)
        {
            if (i < openingTexts.Count) // Ensure there's a corresponding TextMeshPro object
            {
                openingTexts[i].text = openingPoints[i].ToString(); // Update the text with the current points
            }
        }
    }

    // Reset all opening points to zero
    public void ResetOpeningPoints()
    {
        for (int i = 0; i < openingPoints.Count; i++)
        {
            openingPoints[i] = 0; // Reset all points to zero
        }
    }

    // Add points to a specific opening
    private void AddPointsToOpening(int index, int points)
    {
        if (index >= 0 && index < numberOfOpenings)
        {
            // Dodaj bodove na otvor
            openingPoints[index] += points;

            // Proveri da li su bodovi ispod nule i postavi ih na nulu ako jesu
            if (openingPoints[index] < 0)
            {
                openingPoints[index] = 0;
            }

            // DEBUG: Prikaz uloga u logu
            Debug.Log($"Dodajemo/oduzimamo {points} bodova na otvor {index + 1}. Trenutni broj bodova: {openingPoints[index]}");
        }
    }

    // Check if all openings have exactly 6 points and all levers have been used
    private bool IsPuzzleCompleted()
    {
        // Proveri da li su svi otvori tačno 6
        foreach (int points in openingPoints)
        {
            if (points != 6)
            {
                return false; // Ako neki otvor nema 6 bodova, puzzle nije završena
            }
        }

        // Proveri da li su svi leveri korišćeni (u plus ili minus poziciji)
        foreach (Lever lever in levers)
        {
            if (lever.isNeutral) // Ako je lever u neutralnoj poziciji
            {
                return false; // Puzzle nije završena
            }
        }

        return true; // Ako su svi otvori tačno 6 i svi leveri korišćeni, puzzle je završena
    }

    // Complete the puzzle and trigger the event
    public override void CompletePuzzle()
    {
        base.CompletePuzzle(); // Call base class method
        if (onPuzzleCompleted != null)
        {
            onPuzzleCompleted.Invoke(); // Trigger puzzle completion event
        }
        Debug.Log("Lever Puzzle Completed!");
    }

    // Reset the puzzle, clearing points and resetting lever states
    public override void ResetPuzzle()
    {
        base.ResetPuzzle();
        ResetOpeningPoints();

        foreach (Lever lever in levers)
        {
            lever.ResetLever(); // Reset each lever's state
        }

        UpdateOpeningTexts();
    }
}
