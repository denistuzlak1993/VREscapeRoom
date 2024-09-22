using System.Collections;
using UnityEngine;
using TNet;

public class GameServer : TNEventReceiver
{
    public static GameServer instance;
    public int serverPort = 5555; // Port za UDP
    private int serverTcpPort = 5127; // Port za TCP
    public string serverIP = "127.0.0.1"; // IP adresa za lokalno povezivanje
    public string roomName = "GardenScene"; // Ime sobe (kanala)
    
    public int serverUDPPort = 40000;

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
        StartCoroutine(StartServerRoutine());
    }

    IEnumerator StartServerRoutine()
    {
        Debug.Log("Starting server...");

        // Odabir IPv6 ili IPv4
        TcpProtocol.defaultListenerInterface = System.Net.IPAddress.Any;

        Tools.ResolveIPs(null);

        int udpPort = Random.Range(10000, 40000);
        if (TNServerInstance.Start(serverTcpPort, udpPort, "server.dat"))
        {
            Debug.Log($"Server started successfully on {serverIP}:{serverTcpPort} (TCP), UDP port: {udpPort}.");

            // Pridruži se mrežnom kanalu, što će automatski učitati scenu
            TNManager.JoinChannel(1, roomName, true, 255, null);
        }
        else
        {
            Debug.LogError("Failed to start server.");
        }

        yield return null; // Ovo može ostati kako bismo omogućili Coroutine da završi.
    }

    protected override void OnJoinChannel(int channelID, bool success, string msg)
    {
        base.OnJoinChannel(channelID, success, msg);

        if (success)
        {
            Debug.Log($"Server joined channel #{channelID} successfully: {msg}");

           
          
        }
        else
        {
            Debug.LogError($"Failed to join channel #{channelID}: {msg}");
        }
    }

    protected override void OnConnect(bool success, string msg)
    {
        base.OnConnect(success, msg);

        if (success)
        {
            Debug.Log("Connected: " + success + " " + msg + " (Player ID #" + TNManager.playerID + ")");
            if (!TNServerInstance.isLocal) TNManager.StartUDP(Random.Range(10000, 50000));
        }
        else
        {
            Debug.LogError("Failed to connect: " + msg);
        }
    }

    protected override void OnPlayerJoin(int id, Player p)
    {
        base.OnPlayerJoin(id, p);
        Debug.Log($"New player joined [{id}]");
    }

    protected override void OnError(string msg)
    {
        base.OnError(msg);
        Debug.LogError("Server error: " + msg);
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.P))
        {
            Debug.Log("Server IP: " + serverIP + ", Server TCP Port: " + serverTcpPort);
        }

    
    }
  

    private void OnApplicationQuit()
    {
        StopServer();
    }

    public void StopServer()
    {
        Debug.Log("Server stopped");
        TNManager.Disconnect();
        TNServerInstance.Stop();
    }
}