using UnityEngine;

public class TargetFrameRate : MonoBehaviour
{
    void Start()
    {
        // Set the target frame rate
        Application.targetFrameRate = 72;

        // Optional: Set the fixedDeltaTime to sync with the frame rate
        Time.fixedDeltaTime = 1.0f / Application.targetFrameRate;
    }
}
