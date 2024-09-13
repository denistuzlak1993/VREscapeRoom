using TNet;
using Unity.Mathematics;
using UnityEngine;

public class RoomBoundaryManager : MonoBehaviour
{

    public static RoomBoundaryManager instance;
    public Transform roomCenter; // Reference to the center of the room (map)
    public float roomSize = 2.4f; // Size of the room (2.4x2.4 meters)
    public float floorHeightOffset = 0f; // Adjust this value to match the exact floor height

    // The desired forward direction (e.g., north in your virtual world)
    public Vector3 referenceForward = Vector3.forward; // Can be adjusted if necessary

    private void Awake() {
        instance = this;
    }
    void Start()
    {
        // Position the room at the center of the boundary
        CenterRoomInBoundary();

        // Adjust the rotation of the room to align with the reference forward direction
        AlignRoomToReference();
    }

    public void Recenter()
    {
          // Position the room at the center of the boundary
        CenterRoomInBoundary();

        // Adjust the rotation of the room to align with the reference forward direction
        AlignRoomToReference();
     
        
    }
    void CenterRoomInBoundary()
    {
        // Get the dimensions of the boundary (play area)
        Vector3 boundaryDimensions = OVRManager.boundary.GetDimensions(OVRBoundary.BoundaryType.PlayArea);

        // Get the center position of the boundary
        #pragma warning disable CS0618 // Disable the obsolete warning
        OVRBoundary.BoundaryTestResult boundaryTestResult = OVRManager.boundary.TestNode(OVRBoundary.Node.Head, OVRBoundary.BoundaryType.PlayArea);
        #pragma warning restore CS0618 // Restore the warning
        Vector3 boundaryCenter = boundaryTestResult.ClosestPoint;

        // Adjust the room position relative to the boundary
        roomCenter.position = new Vector3(boundaryCenter.x, boundaryCenter.y - floorHeightOffset, boundaryCenter.z);
        roomCenter.localScale = new Vector3(roomSize, 0.05f, roomSize);
    }

    void AlignRoomToReference()
    {/*
        // Get the current forward direction of the device (player's forward direction)
        Vector3 deviceForward = Camera.main.transform.forward;

        // Calculate the rotation that aligns the device's forward direction with the reference forward direction
        Quaternion deviceRotation = Quaternion.LookRotation(deviceForward);
        Quaternion referenceRotation = Quaternion.LookRotation(referenceForward);

        // Calculate the correction rotation to apply to the room
        Quaternion correctionRotation = referenceRotation * Quaternion.Inverse(deviceRotation);

        // Apply the correction rotation to the room
        roomCenter.rotation = correctionRotation * roomCenter.rotation;

        // Optional: Print out to check the rotation values in the console
        Debug.Log("Room Rotation Applied: " + roomCenter.rotation.eulerAngles);
    */
    }
}
