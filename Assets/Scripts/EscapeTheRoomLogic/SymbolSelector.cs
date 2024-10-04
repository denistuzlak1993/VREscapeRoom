using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SymbolSelector : MonoBehaviour
{
    public int numberOfAnswers = 4;

    [Header("Correct Symbol")]
    public string correctSymbolName; // Name of the correct symbol to compare

    public bool isCorrect = false; // Bool to track if the correct symbol is in the trigger

    [Header("Symbol Puzzle Reference")]
    public SymbolPuzzle symbolPuzzle; // Reference to the SymbolPuzzle script to send the result

    [Header("Positioning Settings")]
    public List<Transform> symbolPositions; // List of positions where symbols will be placed
    public List<GameObject> symbols; // List of symbols (GameObjects) that are part of the puzzle
    public GameObject[] buttons;

    private void Start()
    {
        // On start, assign each symbol to its initial position
        ArrangeSymbols();
        UpdateActiveSymbols(); // Set initial active symbols
    }

    // This method arranges the symbols to their initial positions based on the list of positions
    private void ArrangeSymbols()
    {
        for (int i = 0; i < symbols.Count; i++)
        {
            symbols[i].transform.position = new Vector3(
                symbolPositions[i].position.x, 
                symbols[i].transform.position.y, // Keeping the same y position to avoid any changes in height
                symbolPositions[i].position.z
            );
        }
    }

    // Rotate symbols one position to the left
    [ContextMenu("Rotate left")]
    public void RotateSymbolsLeft()
    {
        // Store the first symbol's position
        GameObject firstSymbol = symbols[0];

        // Shift all symbols to the left
        for (int i = 0; i < symbols.Count - 1; i++)
        {
            symbols[i] = symbols[i + 1];
        }

        // Move the first symbol to the last position
        symbols[symbols.Count - 1] = firstSymbol;

        // Rearrange symbols to their new positions
        ArrangeSymbols();
        UpdateActiveSymbols(); // Update active/deactive state of symbols after rotation
    }

    [ContextMenu("Rotate right")]
    // Rotate symbols one position to the right
    public void RotateSymbolsRight()
    {
        // Store the last symbol's position
        GameObject lastSymbol = symbols[symbols.Count - 1];

        // Shift all symbols to the right
        for (int i = symbols.Count - 1; i > 0; i--)
        {
            symbols[i] = symbols[i - 1];
        }

        // Move the last symbol to the first position
        symbols[0] = lastSymbol;

        // Rearrange symbols to their new positions
        ArrangeSymbols();
        UpdateActiveSymbols(); // Update active/deactive state of symbols after rotation
    }

    // This method updates the active status of symbols based on their current position
    private void UpdateActiveSymbols()
    {
        for (int i = 0; i < symbols.Count; i++)
        {
            // Activate only the symbols at positions 0, 1, and the last one
            if (i == 0 || i == 1 || i == symbols.Count - 1)
            {
                symbols[i].SetActive(true); // Set active
            }
            else
            {
                symbols[i].SetActive(false); // Set inactive
            }
        }
    }

    // This method will be called to confirm the selection and send the bool value to SymbolPuzzle
    [ContextMenu("Confirm")]
    public void Confirm()
    {
        for(int i = 0; i < buttons.Length; i++)
    {
        buttons[i].SetActive(false);
    }
        // Add the current correctness state to the enteredChoices list in SymbolPuzzle
        symbolPuzzle.enteredChoices.Add(isCorrect);

        // Check if all answers are entered and trigger puzzle validation
        if (numberOfAnswers == symbolPuzzle.enteredChoices.Count)
        {
            symbolPuzzle.ConfirmSelection();
        }
    }

    // OnTriggerStay checks if the correct object has entered the trigger
    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.name == correctSymbolName)
        {
            isCorrect = true; // Set the answer to true when the correct symbol is inside the trigger
        }
    }

    // OnTriggerExit resets the state when the object leaves the trigger
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.name == correctSymbolName)
        {
            isCorrect = false; // Set the answer to false when the correct symbol exits the trigger
        }
    }
}
