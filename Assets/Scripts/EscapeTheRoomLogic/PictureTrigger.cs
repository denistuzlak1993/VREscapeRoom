using UnityEngine;
using UnityEngine.Assertions.Must;

public class PictureTrigger : MonoBehaviour
{
    public int partID; // ID of the picture part this trigger corresponds to
    private PicturePuzzle picturePuzzle; // Reference to the main puzzle script
    public string pictureName;
    private void Start()
    {
        // Find the PicturePuzzle script in the scene
        picturePuzzle = FindObjectOfType<PicturePuzzle>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == pictureName) // Check if the collider is the player
        {
            Debug.Log($"Player entered trigger for part: {partID}");
            picturePuzzle.ActivatePart(partID); // Activate the corresponding picture part
            Destroy(other.gameObject); // Optionally destroy the trigger after it's used
            Destroy(gameObject, 1f);
        }
    }
}
