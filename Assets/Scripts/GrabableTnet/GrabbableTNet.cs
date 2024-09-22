using TNet;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(TNObject))]
public class GrabbableTNet : TNBehaviour
{
    private Rigidbody _rigidbody;
    private Vector3 _lastPosition;
    private Quaternion _lastRotation;
    private bool _isHeld = false;

    private void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _lastPosition = transform.position;
        _lastRotation = transform.rotation;
    }

    private void Start()
    {
        if (tno.isMine)
        {
            SyncIfChanged();
        }
    }

    private void Update()
    {
        if (tno.isMine && _isHeld)
        {
            SyncIfChanged();
        }
        else if (!tno.isMine && !_isHeld)
        {
            SyncIfChanged();
        }
    }

    private void SyncIfChanged()
    {
        if (transform.position != _lastPosition || transform.rotation != _lastRotation)
        {
            tno.Send("SyncTransform", Target.OthersSaved, transform.position, transform.rotation);
            _lastPosition = transform.position;
            _lastRotation = transform.rotation;
        }
    }

    public void OnGrab()
    {
        if (!_isHeld)
        {
            tno.Send("RequestOwnership", Target.Host);
        }
    }

    public void OnRelease()
    {
        if (_isHeld && tno.isMine)
        {
            _isHeld = false;
            _rigidbody.isKinematic = false;
            tno.ownerID = 0;
            tno.Send("SyncTransform", Target.OthersSaved, transform.position, transform.rotation);
        }
    }

    [RFC]
    private void SyncTransform(Vector3 position, Quaternion rotation)
    {
        if (!_isHeld)
        {
            transform.position = position;
            transform.rotation = rotation;
            _lastPosition = position;
            _lastRotation = rotation;
        }
    }

    [RFC]
    private void RequestOwnership()
    {
        if (tno.isMine)
        {
            tno.ownerID = TNManager.playerID;
            _isHeld = true;
            _rigidbody.isKinematic = true;
            tno.Send("SyncTransform", Target.OthersSaved, transform.position, transform.rotation);
        }
    }

    [RFC]
    private void OnNewPlayerJoined()
    {
        tno.Send("SyncTransform", Target.OthersSaved, transform.position, transform.rotation);
    }
}
