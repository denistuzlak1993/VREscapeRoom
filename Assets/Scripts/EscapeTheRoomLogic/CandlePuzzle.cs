using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class CandlePuzzle : VREscapeRoomPuzzleBase
{
    [Header("Buttons and Materials")]
    [SerializeField] private List<GameObject> buttons; // List of all button GameObjects in the puzzle
    [SerializeField] private Material highlightMaterial; // Material for the highlighted (pressed) buttons
    [SerializeField] private Material defaultMaterial; // Default material for resetting the buttons

    [Header("Correct Order")]
    [SerializeField] private int[] correctOrder; // Array defining the correct order of button presses

    [Header("Puzzle Complete Event")]
    public UnityEvent onPuzzleCompleted; // Callback event when the puzzle is successfully completed

    [Header("Audio Settings")]
    [SerializeField] private AudioSource audioSource; // AudioSource component for playing audio clips
    [SerializeField] private AudioClip correctSound; // Audio clip for when the correct order is completed
    [SerializeField] private AudioClip wrongSound; // Audio clip for when an incorrect order is attempted

    private List<int> activeOrder = new List<int>(); // Keeps track of the current order of button presses
    private bool isPuzzleCompleted = false;

    private void Start()
    {
        // Reset all buttons to their default material at the start
        ResetPuzzle();
    }

    // This method is called every time a button is pressed
    public void OnButtonPressed(int buttonIndex)
    {
        if (isPuzzleCompleted) return; // If the puzzle is already completed, do nothing

        if (buttonIndex < 0 || buttonIndex >= buttons.Count) return; // Check if the button index is valid

        // Check if the button was already pressed
        if (activeOrder.Contains(buttonIndex))
        {
            // If already pressed, remove it from the order and reset its material
            Debug.Log("Button already pressed, resetting: " + buttonIndex);
            activeOrder.Remove(buttonIndex);
            ResetButtonMaterial(buttons[buttonIndex]);
        }
        else
        {
            // If the button is pressed for the first time, add it to the order
            Debug.Log("Button pressed: " + buttonIndex);
            activeOrder.Add(buttonIndex);
            ChangeButtonMaterial(buttons[buttonIndex]);
        }

        // Check if all buttons have been pressed and verify the order
        if (activeOrder.Count == correctOrder.Length)
        {
            if (IsOrderCorrect())
            {
                PlayAudio(correctSound); // Play correct order sound
                CompletePuzzle();
            }
            else
            {
                Debug.Log("Wrong order, resetting puzzle.");
                PlayAudio(wrongSound); // Play wrong order sound
                ResetPuzzle();
            }
        }
    }

    // Check if the order of button presses matches the correct order
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

    // Change the material of the button to highlight material
    private void ChangeButtonMaterial(GameObject button)
    {
        Renderer renderer = button.GetComponent<Renderer>();
        if (renderer != null)
        {
            renderer.material = highlightMaterial;
        }
    }

    // Reset the material of the button to its default material
    private void ResetButtonMaterial(GameObject button)
    {
        Renderer renderer = button.GetComponent<Renderer>();
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
        Debug.Log("Candle Puzzle completed!");

        // Invoke UnityEvent when the puzzle is completed
        if (onPuzzleCompleted != null)
        {
            onPuzzleCompleted.Invoke();
        }
    }

    // Reset the puzzle and clear all button states
    public override void ResetPuzzle()
    {
        base.ResetPuzzle();
        activeOrder.Clear();

        // Reset all buttons to their default material
        foreach (var button in buttons)
        {
            ResetButtonMaterial(button);
        }
    }
}
