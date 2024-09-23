using System.Collections.Generic;
using UnityEngine;
using TNet;
using TMPro;

public class ServerController : TNBehaviour
{
    public GameObject uiSwitchCamera; // UI for switching cameras
    public System.Collections.Generic.List<Camera> spectatorCameras; // List of spectator cameras
    public System.Collections.Generic.List<Camera> playerCameras; // List of player cameras
    public GameObject uiGameObject; // UI object that will be activated
    public TextMeshProUGUI cameraModeText; // TMP text for displaying current camera mode feedback
    public TextMeshProUGUI statusText; // TMP text for displaying status messages

    public bool spectatePlayerCameras = false; // Are we watching player cameras or spectator cameras
    public string playerCamerasTag = "ServerPlayerCam"; // Tag for searching player cameras
    private bool switchSpectateMode = true; // Switch between spectate and player cameras

    private void Awake()
    {
        if (tno.isMine)
        {
            uiGameObject.SetActive(true);
            spectatorCameras[0].enabled = true;
            UpdateCameraModeText("Spectator Camera"); // Set initial mode to Spectator
        }
    }

    public void PopulatePlayerCameras()
    {
        // Search for all cameras with the specified tag
        GameObject[] foundCameras = GameObject.FindGameObjectsWithTag(playerCamerasTag);

        foreach (GameObject cam in foundCameras)
        {
            Camera cameraComponent = cam.GetComponent<Camera>();

            if (cameraComponent != null && !playerCameras.Contains(cameraComponent))
            {
                playerCameras.Add(cameraComponent);
            }
        }

        // If no player cameras were found, display a status message
        if (playerCameras.Count == 0)
        {
            StartCoroutine(DisplayStatusMessage("No player cameras found", 3f));
        }
    }

    public void SwitchCameras()
    {
        SwitchCamera();
    }

    public void ToggleSpectateMode()
    {
        // Toggle between player cameras and spectator cameras
        switchSpectateMode = !switchSpectateMode;

        if (switchSpectateMode)
        {
            UpdateCameraModeText("Spectator Camera");
            Debug.Log("Switched to Spectator Cameras");
        }
        else
        {
            if (playerCameras.Count == 0)
            {
                StartCoroutine(DisplayStatusMessage("No player cameras found", 3f));
                return; // Do not switch mode if there are no player cameras
            }

            UpdateCameraModeText("Player Camera");
            Debug.Log("Switched to Player Cameras");
        }

        SwitchCamera(); // Switch the active camera based on the new mode
    }

    private void SwitchCamera()
    {
        System.Collections.Generic.List<Camera> activeCameras = switchSpectateMode ? spectatorCameras : playerCameras;

        if (activeCameras != null && activeCameras.Count > 0)
        {
            // If there's only one camera, enable it and return
            if (activeCameras.Count == 1)
            {
                activeCameras[0].enabled = true;
                Debug.Log($"Only one {(switchSpectateMode ? "Spectator" : "Player")} camera: {activeCameras[0].name}");
                return;
            }

            // Find the index of the currently active camera
            int currentCameraIndex = activeCameras.FindIndex(cam => cam.enabled);

            if (currentCameraIndex != -1)
            {
                // Deactivate the current camera
                activeCameras[currentCameraIndex].enabled = false;

                // Find the index of the next camera
                int nextCameraIndex = (currentCameraIndex + 1) % activeCameras.Count;

                // Activate the next camera
                activeCameras[nextCameraIndex].enabled = true;

                Debug.Log($"Switched to {(switchSpectateMode ? "Spectator" : "Player")} camera: {activeCameras[nextCameraIndex].name}");
            }
            else
            {
                // If no active camera is found, activate the first one in the list
                activeCameras[0].enabled = true;
                Debug.Log($"Activated first {(switchSpectateMode ? "Spectator" : "Player")} camera: {activeCameras[0].name}");
            }
        }
        else
        {
            Debug.LogWarning($"No {(switchSpectateMode ? "Spectator" : "Player")} cameras found.");
            StartCoroutine(DisplayStatusMessage($"No {(switchSpectateMode ? "Spectator" : "Player")} cameras found", 3f));
        }
    }

    private void UpdateCameraModeText(string mode)
    {
        if (cameraModeText != null)
        {
            cameraModeText.text = $"Current Camera Mode: {mode}";
        }
    }

    private System.Collections.IEnumerator DisplayStatusMessage(string message, float duration)
    {
        if (statusText != null)
        {
            statusText.text = message;
            statusText.gameObject.SetActive(true);
            yield return new WaitForSeconds(duration); // Display the message for the specified duration
            statusText.gameObject.SetActive(false);
        }
    }
}
