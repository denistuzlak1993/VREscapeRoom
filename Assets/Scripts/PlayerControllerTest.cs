using UnityEngine;
using TNet;

[RequireComponent(typeof(TNObject))]
public class PlayerControllerTest : TNBehaviour
{
    public float moveSpeed = 5f;
    public float jumpForce = 5f;
    public Camera playerCamera;
    public Renderer playerRenderer;

    private Rigidbody rb;
    private Vector3 moveDirection;
    private bool isGrounded;
    private TNObject tno;
        public PlayerManager playerManager;      

        public GameObject[] enableDisableObjects;  
    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
        tno = GetComponent<TNObject>();
    }

    private void Start()
    {   
         Rigidbody rb = gameObject.GetComponent<Rigidbody>();
        if (playerCamera != null && !tno.isMine)
        {
            playerCamera.gameObject.SetActive(false);
              playerManager.enabled = true;
              for(int i = 0; i < enableDisableObjects.Length; i++)
              {
                enableDisableObjects[i].SetActive(false);
              }   rb.useGravity = false;
              rb.isKinematic = true;
             
        }
        else if (playerCamera != null && tno.isMine)
        {
            playerCamera.gameObject.SetActive(true);
            playerManager.enabled = false;
               for(int i = 0; i < enableDisableObjects.Length; i++)
              {
                enableDisableObjects[i].SetActive(true);
              }
              rb.useGravity = true;
                 rb.isKinematic = false;
        }

        if (tno.isMine)
        {
            // Randomize color for this player's instance
            Color randomColor = new Color(Random.value, Random.value, Random.value);
            tno.Send("SyncColor", Target.AllSaved, randomColor);
        }
    }

    private void Update()
    {
        if (!tno.isMine) return;

        HandleInput();
    }

    private void FixedUpdate()
    {
        if (tno.isMine)
        {
            HandleMovement();
        }
    }

    private void HandleInput()
    {
        float moveX = Input.GetAxis("Horizontal");
        float moveZ = Input.GetAxis("Vertical");

        moveDirection = new Vector3(moveX, 0f, moveZ) * moveSpeed;

        if (Input.GetButtonDown("Jump") && isGrounded)
        {
            Jump();
        }
    }

    private void HandleMovement()
    {
        rb.velocity = new Vector3(moveDirection.x, rb.velocity.y, moveDirection.z);
    }

    private void Jump()
    {
        rb.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
        isGrounded = false;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            isGrounded = true;
        }
    }

    [RFC]
    private void SyncColor(Color color)
    {
        playerRenderer.material.color = color;
    }
}
