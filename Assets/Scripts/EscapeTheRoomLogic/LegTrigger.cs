using UnityEngine;

public class LegTrigger : MonoBehaviour
{
    // Referenca na LegPuzzle parent skriptu
    private LegPuzzle legPuzzle;

    private void Start()
    {
        // Pronalazimo parent LegPuzzle skriptu
        legPuzzle = GetComponentInParent<LegPuzzle>();
    }

    // Kada noga uđe u trigger
    private void OnTriggerEnter(Collider other)
    {
        
        if (other.CompareTag("Leg")) // Proveravamo tag noge stola
        {
            Debug.Log("Leg placed in the correct position.");
           
            legPuzzle.OnLegPlaced(); // Aktiviramo callback za otvaranje prve fioke
            other.transform.parent.gameObject.SetActive(false);
        }
    }
}
