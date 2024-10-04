using UnityEngine;

public class SlingshotChildObjectTrigger : MonoBehaviour
{
    // Reference na parent SlingshotPuzzle skriptu
    private SlingshotPuzzle parentPuzzle;

    // Jedinstveni ID ovog objekta
    public int objectID;

    private void Start()
    {
        // Pronalazimo parent SlingshotPuzzle skriptu
        parentPuzzle = GetComponentInParent<SlingshotPuzzle>();
    }

    // Detekcija kolizije
    private void OnTriggerEnter(Collider other)
    {
        if (parentPuzzle != null)
        {
            // Prosleđujemo informacije parent skripti zajedno sa ID-om objekta
            parentPuzzle.OnChildObjectHit(this.objectID);
        }
    }
}
