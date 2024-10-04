using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Interaction;

public class SafeDial : MonoBehaviour
{
    [Header("Dial Settings")]
    [SerializeField] private Transform dial; // Transform of the dial object
    [SerializeField] private float snapAngle = 36f; // Angle for snapping (36° for 10 positions)
    [SerializeField] private int maxNumbers = 10; // Maximum number of positions (0-9)

    [Header("Safe Puzzle Reference")]
    [SerializeField] private SafePuzzle safePuzzle; // Reference to SafePuzzle script

    private int currentNumber = 0;    // The number at which the dial stops
    private Quaternion initialRotation;

    private Grabbable _grabbable;

    private void Start()
    {
        // Save the initial rotation of the dial
        initialRotation = dial.localRotation;

        // Initialize the grabbable reference
        _grabbable = GetComponent<Grabbable>();

        if (_grabbable != null)
        {
            // Hook into pointer event updates
            _grabbable.WhenPointerEventRaised += OnPointerEventRaised;
        }
        else
        {
            Debug.LogError("No Grabbable component found on this GameObject!");
        }
    }

    private void OnPointerEventRaised(PointerEvent evt)
    {
        // Handle different pointer events (Select, Unselect)
        switch (evt.Type)
        {
            case PointerEventType.Select:
                StartGrab();
                break;
            case PointerEventType.Unselect:
                EndGrab();
                break;
        }
    }

    // This method is called when grab starts
    public void StartGrab()
    {
        Debug.Log("Dial grab started.");
    }

    // This method is called when grab ends
    [ContextMenu("End grab")]
    public void EndGrab()
    {
        // Calculate the current rotation angle based on the difference from the initial rotation
        float currentRotation = GetDialRotationAngle();

        // Calculate the current number based on rotation
        currentNumber = CalculateCurrentNumber(currentRotation);

        // Send the current number to SafePuzzle
        if (safePuzzle != null)
        {
            Debug.Log($"Sending number to SafePuzzle: {currentNumber}");
            safePuzzle.OnNumberSelected(currentNumber);
        }
        else
        {
            Debug.LogError("SafePuzzle reference is not set!");
        }

        Debug.Log($"Safe Dial ended at normalized angle: {currentRotation}. Current number: {currentNumber}");
    }

    // Method to calculate the rotation angle between the current rotation and the initial rotation
    private float GetDialRotationAngle()
    {
        // Calculate the angle difference around the local X axis
        Quaternion deltaRotation = dial.localRotation * Quaternion.Inverse(initialRotation);
        deltaRotation.ToAngleAxis(out float angle, out Vector3 axis);

        // We only care about the rotation around the X axis, so check the axis
        if (Vector3.Dot(axis, dial.transform.right) > 0)
        {
            return angle;
        }
        else
        {
            return -angle;
        }
    }

    // Method to calculate the current number based on rotation angle
    private int CalculateCurrentNumber(float rotation)
    {
        // Normalize rotation to handle negative values and bring it to the range 0-360
        rotation = NormalizeRotation(rotation);

        Debug.Log($"Normalized Rotation: {rotation}");

        // Calculate the number based on the normalized rotation
        int number = Mathf.RoundToInt(rotation / snapAngle) % maxNumbers;

        Debug.Log($"Calculated Number: {number} for Rotation: {rotation} (Snap Angle: {snapAngle})");

        return number;
    }

    // Helper method to normalize rotation within 0-360 degrees
    private float NormalizeRotation(float rotation)
    {
        if (rotation < 0)
        {
            // Handle negative rotation by converting it to positive equivalent
            rotation = 360f + (rotation % 360f);
        }
        return rotation % 360f;
    }
}
