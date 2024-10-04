using UnityEngine;

public class RotatedObjectTrigger : MonoBehaviour
{
    // Referenca na LegPuzzle parent skriptu
    private LegPuzzle legPuzzle;

    private void Start()
    {
        // Pronalazimo parent LegPuzzle skriptu
        legPuzzle = GetComponentInParent<LegPuzzle>();
    }

    // Kada rotirani objekat uđe u trigger
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("RotatedObject")) // Proveravamo tag rotiranog objekta
        {
            Debug.Log("Rotated object placed in the correct position.");
            legPuzzle.OnRotatedObjectPlaced(); // Aktiviramo callback za otvaranje druge fioke
        }
    }
}
