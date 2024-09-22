using UnityEngine;

public class VRHandFollower : MonoBehaviour
{
    public Transform leftController;
    public Transform rightController;
    public GameObject leftHand;
    public GameObject rightHand;

    void Update()
    {
        if (leftController != null && leftHand != null)
        {
            leftHand.transform.position = leftController.position;
            leftHand.transform.rotation = leftController.rotation;
        }

        if (rightController != null && rightHand != null)
        {
            rightHand.transform.position = rightController.position;
            rightHand.transform.rotation = rightController.rotation;
        }
    }
}
