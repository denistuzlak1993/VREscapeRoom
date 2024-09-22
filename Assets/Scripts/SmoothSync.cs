using UnityEngine;
using TNet;

public class SmoothSync : TNBehaviour
{
    public float interpolationBackTime = 0.1f;  // Time to interpolate backwards
    public float extrapolationForwardTime = 0.1f; // Time to extrapolate forwards
    public float sendRate = 0.05f; // Time between sends

    private Vector3 lastPosition;
    private Quaternion lastRotation;
    private Vector3 targetPosition;
    private Quaternion targetRotation;
    private float lastSendTime;

    private void Start()
    {
        lastPosition = transform.position;
        lastRotation = transform.rotation;
        targetPosition = lastPosition;
        targetRotation = lastRotation;
    }

    private void Update()
    {
        if (tno.isMine)
        {
            if (Time.time - lastSendTime > sendRate)
            {
                lastSendTime = Time.time;
                tno.SendQuickly("SyncTransform", Target.Others, transform.position, transform.rotation);
            }
        }
        else
        {
            float interpolationTime = Time.time - interpolationBackTime;

            if (interpolationTime < lastSendTime)
            {
                transform.position = Vector3.Lerp(lastPosition, targetPosition, (interpolationTime - lastSendTime) / sendRate);
                transform.rotation = Quaternion.Slerp(lastRotation, targetRotation, (interpolationTime - lastSendTime) / sendRate);
            }
            else
            {
                transform.position = targetPosition;
                transform.rotation = targetRotation;
            }
        }
    }

    [RFC]
    private void SyncTransform(Vector3 position, Quaternion rotation)
    {
        lastPosition = transform.position;
        lastRotation = transform.rotation;
        targetPosition = position;
        targetRotation = rotation;
    }
}
