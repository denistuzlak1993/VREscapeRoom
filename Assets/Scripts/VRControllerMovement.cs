using UnityEngine;
using UnityEngine.InputSystem;

public class VRControllerMovement : MonoBehaviour
{
    [Header("Movement Settings")]
    public float moveSpeed = 3.0f;  // Brzina kretanja
    public float rotateSpeed = 45.0f;  // Brzina rotacije

    [Header("References")]
    public Transform vrCamera;  // Kamera igrača (najčešće VR rig kamera)

    [Header("Input Actions")]
    public InputActionProperty moveAction;  // Akcija za kretanje (povezati u Inspektoru)
    public InputActionProperty rotateAction;  // Akcija za rotaciju (povezati u Inspektoru)

    private void Start()
    {
        if (vrCamera == null)
        {
            Debug.LogError("VR Camera reference is not set. Please assign the VR camera.");
        }

        // Aktiviraj input akcije
        moveAction.action.Enable();
        rotateAction.action.Enable();
    }

    private void Update()
    {
        HandleMovement();
        HandleRotation();
    }

    // Funkcija za kretanje pomoću thumbstick-a
    private void HandleMovement()
    {
        // Dobij X i Y vrednosti iz akcije za kretanje
        Vector2 primaryAxis = moveAction.action.ReadValue<Vector2>();
        
        // Debug za proveru vrednosti
       

        // Računaj pravac kretanja na osnovu kamere
        Vector3 forward = vrCamera.forward;
        Vector3 right = vrCamera.right;

        forward.y = 0;  // Izbegavanje vertikalnog kretanja (letenje)
        right.y = 0;

        // Normalizuj pravac kako bi izbegao ubrzanje prilikom dijagonalnog kretanja
        forward.Normalize();
        right.Normalize();

        // Računaj pravac kretanja na osnovu inputa i pravca kamere
        Vector3 moveDirection = forward * primaryAxis.y + right * primaryAxis.x;

        // Debug za proveru smera kretanja
       

        // Kretanje bez CharacterController-a, koristeći Translate u world space-u
        transform.Translate(moveDirection * moveSpeed * Time.deltaTime, Space.World);
    }

    // Funkcija za rotaciju pomoću thumbstick-a
    private void HandleRotation()
    {
        // Dobij X vrednost iz akcije za rotaciju
        float rotationInput = rotateAction.action.ReadValue<Vector2>().x;

        // Debug za proveru rotacije
       

        // Rotiraj igrača oko Y ose
        transform.Rotate(Vector3.up, rotationInput * rotateSpeed * Time.deltaTime);
    }
}
