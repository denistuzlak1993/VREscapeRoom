using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TNet;
public class ServerController : TNBehaviour
{

       public GameObject uiSwitchCamera; // UI za prebacivanje kamera
    public System.Collections.Generic.List<Camera> cameras; // Lista kamera
    public GameObject uiGameObject; // UI objekat koji će biti aktiviran
    // Start is called before the first frame update
    private void Awake() {
           if (tno.isMine)
           {
            uiGameObject.SetActive(true);
            cameras[0].gameObject.SetActive(true);
           }
    }
    public void SwitchCameras()
    {
        SwitchCamera();
    }
    private void SwitchCamera()
    {
        if (cameras != null && cameras.Count > 0)
        {
            // Nađi indeks trenutne aktivne kamere
            int currentCameraIndex = cameras.FindIndex(cam => cam.gameObject.activeSelf);
            if (currentCameraIndex != -1)
            {
                // Deaktiviraj trenutnu kameru
                cameras[currentCameraIndex].gameObject.SetActive(false);

                // Pronađi indeks sledeće kamere
                int nextCameraIndex = (currentCameraIndex + 1) % cameras.Count;

                // Aktiviraj sledeću kameru
                cameras[nextCameraIndex].gameObject.SetActive(true);

                Debug.Log($"Switched to camera: {cameras[nextCameraIndex].name}");
            }
            else
            {
                // Ako nije pronađena aktivna kamera, aktiviraj prvu u listi
                cameras[0].gameObject.SetActive(true);
                Debug.Log($"Activated first camera: {cameras[0].name}");
            }
        }
    }
}