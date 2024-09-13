using UnityEngine;

public class LevelRotation : MonoBehaviour
{
    void Start()
    {
        // Povuci sačuvanu vrednost rotacije iz PlayerPrefs
        float levelRotationY = PlayerPrefs.GetFloat("LevelRotationY", 0f);

        // Primeni rotaciju na ovaj objekat
        transform.rotation = Quaternion.Euler(0, levelRotationY, 0);

        Debug.Log($"Level rotated by {levelRotationY} degrees.");
    }
}
