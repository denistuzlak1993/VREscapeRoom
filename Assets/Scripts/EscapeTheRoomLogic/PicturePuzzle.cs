using UnityEngine;
using System.Collections.Generic;

public class PicturePuzzle : MonoBehaviour
{
    [Header("Puzzle Settings")]
    public GameObject[] pictureParts; // Array to hold the picture parts
    public AudioSource completionAudio; // Audio source to play upon completion

    private List<bool> isPartActivated; // List to track activated parts

    private void Start()
    {
        // Initialize the list to track the state of each picture part
        isPartActivated = new List<bool>(new bool[pictureParts.Length]);
    }

    // Method to activate a picture part
    public void ActivatePart(int partID)
    {
        if (partID >= 0 && partID < pictureParts.Length)
        {
            isPartActivated[partID] = true; // Mark the part as activated
            pictureParts[partID].SetActive(true); // Activate the picture part
            Debug.Log($"Activated part: {partID}");

            // Check if the puzzle is completed
            if (IsPuzzleCompleted())
            {
                CompletePuzzle();
            }
        }
    }

    // Method to check if the puzzle is completed
    private bool IsPuzzleCompleted()
    {
        foreach (bool activated in isPartActivated)
        {
            if (!activated)
            {
                return false; // If any part is not activated, the puzzle is not complete
            }
        }
        return true; // All parts are activated
    }

    // Method to handle puzzle completion
    private void CompletePuzzle()
    {
        Debug.Log("Puzzle Completed!");
        if (completionAudio != null)
        {
            completionAudio.Play(); // Play the completion audio
        }

        // You can add additional logic here for what happens when the puzzle is completed
        // For example, revealing the location of the GOLDEN key
    }
}
