using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SymbolPuzzle : VREscapeRoomPuzzleBase
{
    [Header("Correct Choices")]
    public List<bool> enteredChoices; // List of bool values representing the correctness of selections

    [Header("Puzzle Complete Event")]
    public UnityEvent onPuzzleCompleted; // Event that triggers when the puzzle is successfully completed

    [Header("Audio Settings")]
    [SerializeField] private AudioSource audioSource; // AudioSource for playing sound effects
    [SerializeField] private AudioClip correctSound; // Sound for correct selection
    [SerializeField] private AudioClip wrongSound; // Sound for incorrect selection

    public GameObject[] puzzleButtons;

    // This method is called to confirm the selection when the confirm button is pressed
    public void ConfirmSelection()
    {
        if (isPuzzleCompleted) return; // If the puzzle is already completed, do nothing

        if (AreAllChoicesCorrect())
        {
            CompletePuzzle(); // If all selections are correct, complete the puzzle
        }
        else
        {
            PlayAudio(wrongSound); // If there is an incorrect selection, play the wrong sound
            ResetChoices(); // Reset the selections
        }
    }

    // Checks if all selections are correct
    private bool AreAllChoicesCorrect()
    {
        foreach (bool choice in enteredChoices)
        {
            if (!choice) return false; // If any selection is incorrect, return false
        }
        return true; // If all selections are correct, return true
    }

    // Complete the puzzle and trigger the completion event
    [ContextMenu("Run completed")]
    public override void CompletePuzzle() // The method must be public to match the base class
    {
        base.CompletePuzzle(); // Call the base method from VREscapeRoomPuzzleBase
        PlayAudio(correctSound); // Play the correct sound

        // Trigger UnityEvent when the puzzle is successfully completed
        if (onPuzzleCompleted != null)
        {
            onPuzzleCompleted.Invoke();
        }
    }

    // Play sound in AudioSource
    private void PlayAudio(AudioClip clip)
    {
        if (audioSource != null && clip != null)
        {
            audioSource.clip = clip;
            audioSource.Play();
        }
    }

    // Reset the selections, ready for a new attempt
private void ResetChoices()
{
    for(int i = 0; i < puzzleButtons.Length; i++)
    {
        puzzleButtons[i].SetActive(true);
    }
    enteredChoices.Clear(); // Clears the list, making it empty
}

}
