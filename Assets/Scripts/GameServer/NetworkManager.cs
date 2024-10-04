using UnityEngine;
using TNet;
using TMPro;
using System.Collections;

public class NetworkManager : TNEventReceiver
{
    public static NetworkManager instance;

    public string serverAddress = "127.0.0.1"; // IP address for local connection
    public int serverPort = 5127; // Port for TCP
    public string roomName = "GardenScene"; // Name of the room to join

    public TextMeshProUGUI serverAddressText;
    public TextMeshProUGUI serverPortText;
    public TextMeshProUGUI roomNameText;
    public TextMeshProUGUI connectionStatusText;
    public TextMeshProUGUI errorText; // UI element for displaying errors

    private bool shouldJoinRoom = false;
    public bool ifNeedConnectOnStart;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    void Start()
    {
        if(ifNeedConnectOnStart)
        {
            StartCoroutine(delayConnect());
            StartConnectingToServer();
        }
       
    }
    
    IEnumerator delayConnect()
    {
        yield return new WaitForSeconds(10f);
         StartConnectingToServer();
    }

    public void StartConnectingToServer()
    {
         bool isVR = true;
        if (isVR)
        {
            shouldJoinRoom = true;
            Invoke("ConnectToServer", 2f); // Delay for 2 seconds before connecting
            Invoke("JoinGameRoom", 7f); // Attempt to join the room after connecting
            
        }

        // Update UI with initial values
        UpdateUI();
    }
    private void Update() {
        UpdateUI();
    }

    public void ConnectToServer()
    {
        if (!TNManager.isConnected)
        {
            Debug.Log("Attempting to connect to server...");
            TNManager.Connect(serverAddress, serverPort);
        }
        else
        {
            Debug.LogWarning("Already connected to server.");
            JoinGameRoom(); // If already connected, join the room directly
        }
    }
    void SavePlayerPositionAndRotation()
    {
        Transform playerTransform = Camera.main.transform;
        
        // Sačuvaj X, Z poziciju i Y rotaciju
        PlayerPrefs.SetFloat("PlayerPosX", playerTransform.position.x);
        PlayerPrefs.SetFloat("PlayerPosZ", playerTransform.position.z);
        PlayerPrefs.SetFloat("PlayerRotY", playerTransform.eulerAngles.y);

        // Sačuvaj promene
        PlayerPrefs.Save();
    }

    public void JoinGameRoom()
    {
        if (TNManager.isConnected)
        {
            Debug.Log($"Attempting to join room: {roomName}");
            TNManager.JoinChannel(1, roomName, true, 255, null);
            SavePlayerPositionAndRotation();
        }
        else
        {
            Debug.LogError("Not connected to server. Cannot join room.");
            DisplayError("Not connected to server. Cannot join room.");
        }
    }

    protected override void OnConnect(bool success, string message)
    {
        base.OnConnect(success, message);

        if (success)
        {
            Debug.Log("Connected to server.");
            
            if (shouldJoinRoom)
            {
                JoinGameRoom();
                shouldJoinRoom = false;
            }
        
        }
        else
        {
            Debug.LogError("Failed to connect to server: " + message);
            DisplayError("Failed to connect to server: " + message);
        }
    }
    
    protected override void OnJoinChannel(int channelID, bool success, string msg)
    {
        base.OnJoinChannel(channelID, success, msg);

        if (success)
        {
            Debug.Log($"Joined channel #{channelID} successfully: {msg}");
        }
        else
        {
            Debug.LogError($"Failed to join channel #{channelID}: {msg}");
            DisplayError($"Failed to join channel #{channelID}: {msg}");
        }
    }

    protected override void OnError(string msg)
    {
        base.OnError(msg);
        Debug.LogError("Client error: " + msg);
        DisplayError("Client error: " + msg);
    }

    private void UpdateUI()
    {
        if (serverAddressText != null) serverAddressText.text = "Server Address: " + serverAddress;
        if (serverPortText != null) serverPortText.text = "Server Port: " + serverPort;
        if (roomNameText != null) roomNameText.text = "Room Name: " + roomName;
        if (connectionStatusText != null)
        {
            connectionStatusText.text = "Connection Status: " + (TNManager.isConnected ? "Connected" : "Disconnected");
        }
    }

    private void DisplayError(string message)
    {
        if (errorText != null)
        {
            errorText.text = message;
        }
    }
}
