using UnityEngine;
using UnityEngine.XR.Management;
using System.Collections;

public class PassthroughInitializer : MonoBehaviour
{
    //public GameObject marker; // Marker koji je već u sceni
    private OVRPassthroughLayer passthroughLayer;

    // Defaultna veličina sobe
    private float roomSize = 2.0f;

    void Start()
    {
        // Pronađite ili kreirajte OVRPassthroughLayer komponentu
        passthroughLayer = FindObjectOfType<OVRPassthroughLayer>();
        if (passthroughLayer == null)
        {
            GameObject passthroughObject = new GameObject("PassthroughLayer");
            passthroughLayer = passthroughObject.AddComponent<OVRPassthroughLayer>();
        }

        // Aktiviraj Passthrough mod
        EnablePassthroughMode();

        // Postavi marker na početnu poziciju
        // SetMarkerPosition();
    }

    private void SetMarkerPosition()
    {
        // Postavi marker na istu poziciju kao i igrač (ili zadrži trenutnu poziciju)
        // marker.transform.position = new Vector3(0, 0, 0);
    }

    // Nova verzija metode za potvrđivanje pozicije igrača
    public void ConfirmPlayerPosition(int spawnPosition)
    {
        // Sačuvaj broj spawn pozicije
        PlayerPrefs.SetInt("SpawnPosition", spawnPosition);

        Debug.Log($"Player spawn position confirmed and saved: {spawnPosition}");
    }

    private void EnablePassthroughMode()
    {
        if (passthroughLayer != null)
        {
            passthroughLayer.enabled = true;
            Debug.Log("Passthrough mode enabled.");
        }
    }

    private void DisablePassthroughMode()
    {
        if (passthroughLayer != null)
        {
            passthroughLayer.enabled = false;
            Debug.Log("Passthrough mode disabled. Transitioning to VR mode.");

            // Promeni boju pozadine kamere na skybox
            Camera.main.clearFlags = CameraClearFlags.Skybox;
        }
    }

    // Pretpostavljamo da se ovaj metod poziva kada je QR kod skeniran
    
}
