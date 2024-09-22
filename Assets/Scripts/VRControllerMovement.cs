using UnityEngine;

public class VRControllerMovement : MonoBehaviour
{
    [Header("Movement Settings")]
    public float moveSpeed = 3.0f; // Brzina kretanja
    public float rotateSpeed = 45.0f; // Brzina rotacije

    [Header("References")]
    public Transform vrCamera; // Kamera igrača (najčešće je to VR rig kamera)

    private CharacterController characterController;

    void Start()
    {
        characterController = GetComponent<CharacterController>();

        if (vrCamera == null)
        {
            Debug.LogError("VR Camera reference is not set. Please assign the VR camera.");
        }
    }

    void Update()
    {
        HandleMovement();
        HandleRotation();
    }

    // Funkcija za kretanje pomoću thumbstick-a
    private void HandleMovement()
    {
        // Dobij X i Y vrednosti sa desnog thumbstick-a
        Vector2 primaryAxis = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick);

        // Računaj pravac kretanja na osnovu kamere
        Vector3 forward = vrCamera.forward;
        Vector3 right = vrCamera.right;

        forward.y = 0; // Da se izbegne kretanje po Y osi (letenje)
        right.y = 0;

        Vector3 moveDirection = forward * primaryAxis.y + right * primaryAxis.x;
        characterController.Move(moveDirection * moveSpeed * Time.deltaTime);
    }

    // Funkcija za rotaciju pomoću levog thumbstick-a
    private void HandleRotation()
    {
        // Dobij X vrednost sa levog thumbstick-a (za rotaciju)
        float rotationInput = OVRInput.Get(OVRInput.Axis2D.SecondaryThumbstick).x;

        // Rotiraj igrača oko Y ose
        transform.Rotate(Vector3.up, rotationInput * rotateSpeed * Time.deltaTime);
    }
}
