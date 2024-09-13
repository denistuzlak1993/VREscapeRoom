using UnityEngine;

public class PositionObjectOnEnable : MonoBehaviour
{
    public Transform targetPosition; // Ciljna pozicija gdje će se objekt postaviti

    void OnEnable()
    {
        // Postavlja objekt na ciljnu poziciju
        if (targetPosition != null)
        {
            transform.position = targetPosition.position;
            transform.rotation = targetPosition.rotation;
        }
    }
}
