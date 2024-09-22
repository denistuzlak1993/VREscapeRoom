using UnityEngine;

public class PlayerPositionCalculator : MonoBehaviour
{
    public Transform roomCenter; // Center of the room (map)
    public GameObject player; // VR character
    public Transform startingPoint; // Fixed point in the room

    void Start()
    {
        // Position the player in the room
        PositionPlayerInRoom();
    }

    void PositionPlayerInRoom()
    {
        // Get the player's position in the real-world boundary
        OVRBoundary.BoundaryTestResult boundaryTestResult = OVRManager.boundary.TestNode(OVRBoundary.Node.Head, OVRBoundary.BoundaryType.PlayArea);
        Vector3 playerRealWorldPosition = boundaryTestResult.ClosestPoint;

        // Calculate the player's relative position in the room
        Vector3 relativePosition = playerRealWorldPosition - roomCenter.position;

        // Position the player in the room based on the relative position
        player.transform.position = roomCenter.position + relativePosition;
    }
}
