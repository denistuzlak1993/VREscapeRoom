using UnityEngine;

public abstract class VREscapeRoomPuzzleBase : MonoBehaviour
{
    // Puzzle state tracking
    protected bool isPuzzleCompleted = false;

    // Initialize the puzzle (can be overridden)
    public virtual void InitializePuzzle()
    {
        Debug.Log("Puzzle Initialized: " + this.GetType().Name);
        isPuzzleCompleted = false;
    }

    // Check if the puzzle is completed
    public virtual bool CheckCompletion()
    {
        return isPuzzleCompleted;
    }

    // Logic to complete the puzzle
    public virtual void CompletePuzzle()
    {
        if (!isPuzzleCompleted)
        {
            isPuzzleCompleted = true;
            Debug.Log("Puzzle Completed: " + this.GetType().Name);

            // Notify the GameManager that the puzzle is completed
           

            OnPuzzleCompleted();
        }
    }

    // Event triggered on puzzle completion (can be overridden)
    protected virtual void OnPuzzleCompleted()
    {
        // Placeholder for event after puzzle completion
    }

    // Reset puzzle to its initial state (can be overridden)
    public virtual void ResetPuzzle()
    {
        isPuzzleCompleted = false;
        Debug.Log("Puzzle Reset: " + this.GetType().Name);
    }
}
