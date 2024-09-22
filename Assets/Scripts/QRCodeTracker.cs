/*using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class QRCodeTracker : MonoBehaviour
{
    public GameObject markerPrefab; // Prefab za marker koji će se pojaviti kada QR kod bude skeniran

    private ARTrackedImageManager _arTrackedImageManager;

    void Awake()
    {
        _arTrackedImageManager = FindObjectOfType<ARTrackedImageManager>();
    }

    void OnEnable()
    {
        _arTrackedImageManager.trackedImagesChanged += OnTrackedImagesChanged;
    }

    void OnDisable()
    {
        _arTrackedImageManager.trackedImagesChanged -= OnTrackedImagesChanged;
    }

    private void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (var trackedImage in eventArgs.added)
        {
            if (trackedImage.referenceImage.name == "My_2D_Barcode")
            {
                SpawnMarker(trackedImage.transform);
            }
        }
    }

    private void SpawnMarker(Transform qrCodeTransform)
    {
        // Instanciraj marker ispred QR koda
        Vector3 spawnPosition = qrCodeTransform.position + qrCodeTransform.forward * 0.2f;
        Instantiate(markerPrefab, spawnPosition, qrCodeTransform.rotation);

        // Ako je potrebno, ugasi AR mod nakon skeniranja
        DisableAR();
    }

    private void DisableAR()
    {
        // Isključite AR Session ili prebaci na VR mod
        ARSession arSession = FindObjectOfType<ARSession>();
        if (arSession != null)
        {
            arSession.enabled = false;
        }

        // Ako koristiš AR kameru, možeš je ugasiti
        Camera arCamera = FindObjectOfType<ARCameraManager>()?.GetComponent<Camera>();
        if (arCamera != null)
        {
            arCamera.clearFlags = CameraClearFlags.Skybox; // Prebaci na Skybox
        }
    }
}
*/