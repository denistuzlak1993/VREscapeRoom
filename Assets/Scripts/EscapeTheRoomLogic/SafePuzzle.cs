using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SafePuzzle : VREscapeRoomPuzzleBase
{
    [Header("Dial and Materials")]
    [SerializeField] private List<GameObject> numbers; // List of all number GameObjects in the puzzle
    [SerializeField] private Material highlightMaterial; // Material for the highlighted (selected) numbers
    [SerializeField] private Material defaultMaterial; // Default material for resetting the numbers

    [Header("Correct Combination")]
    [SerializeField] private int[] correctCombination; // Array defining the correct combination of numbers

    [Header("Puzzle Complete Event")]
    public UnityEvent onPuzzleCompleted; // Callback event when the puzzle is successfully completed

    [Header("Audio Settings")]
    [SerializeField] private AudioSource audioSource; // AudioSource component for playing audio clips
    [SerializeField] private AudioClip correctSound; // Audio clip for when the correct combination is completed
    [SerializeField] private AudioClip wrongSound; // Audio clip for when an incorrect combination is attempted

    private List<int> enteredCombination = new List<int>(); // Keeps track of the current entered numbers
    //private bool isPuzzleCompleted = false;

    private void Start()
    {
        // Reset all numbers to their default material at the start
        ResetPuzzle();
    }

    // This method is called every time a number is selected (rotated)
    public void OnNumberSelected(int numberIndex)
    {
        Debug.LogError("Logged number " + numberIndex);
        if (isPuzzleCompleted) return; // If the puzzle is already completed, do nothing

        if (numberIndex < 0 || numberIndex >= numbers.Count) return; // Check if the number index is valid

        // If the combination is not full, add the new number to the combination
        enteredCombination.Add(numberIndex);
        ChangeNumberMaterial(numbers[numberIndex]);

        // Check if all numbers in the combination have been entered and verify the order
        if (enteredCombination.Count == correctCombination.Length)
        {
            if (IsCombinationCorrect())
            {
                PlayAudio(correctSound); // Play correct combination sound
                CompletePuzzle();
            }
            else
            {
                Debug.Log("Wrong combination, resetting puzzle.");
                PlayAudio(wrongSound); // Play wrong combination sound
                ResetPuzzle();
            }
        }
    }

    // Check if the entered combination matches the correct combination
    private bool IsCombinationCorrect()
    {
        for (int i = 0; i < correctCombination.Length; i++)
        {
            if (enteredCombination[i] != correctCombination[i])
            {
                return false;
            }
        }
        return true;
    }

    // Change the material of the number to highlight material
    private void ChangeNumberMaterial(GameObject number)
    {
        Renderer renderer = number.GetComponent<Renderer>();
        if (renderer != null)
        {
            renderer.material = highlightMaterial;
        }
    }

    // Reset the material of the number to its default material
    private void ResetNumberMaterial(GameObject number)
    {
        Renderer renderer = number.GetComponent<Renderer>();
        if (renderer != null)
        {
            renderer.material = defaultMaterial;
        }
    }

    // Play audio clip
    private void PlayAudio(AudioClip clip)
    {
        if (audioSource != null && clip != null)
        {
            audioSource.clip = clip;
            audioSource.Play();
        }
    }

    // Called when the puzzle is completed successfully
    protected override void OnPuzzleCompleted()
    {
        base.OnPuzzleCompleted();
        Debug.Log("Safe Puzzle completed!");

        // Invoke UnityEvent when the puzzle is completed
        if (onPuzzleCompleted != null)
        {
            onPuzzleCompleted.Invoke();
        }
        isPuzzleCompleted = true;
    }

    // Reset the puzzle and clear all number states
    public override void ResetPuzzle()
    {
        base.ResetPuzzle();
        enteredCombination.Clear();
        isPuzzleCompleted = false;

        // Reset all numbers to their default material
        foreach (var number in numbers)
        {
            ResetNumberMaterial(number);
        }
    }
}
