using TNet;
using UnityEngine;

[RequireComponent(typeof(TNObject))]
public class OwnershipTransferTNet : MonoBehaviour
{
    private TNObject _tnObject;

    private void Awake()
    {
        _tnObject = GetComponent<TNObject>();
    }

    public void TransferOwnership()
    {
        if (!_tnObject.isMine)
        {
            _tnObject.ownerID = TNManager.playerID;
            _tnObject.Send("SyncTransform", Target.OthersSaved, transform.position, transform.rotation);
        }
    }

    public void ReleaseOwnership()
    {
        if (_tnObject.isMine)
        {
            _tnObject.ownerID = 0;
            _tnObject.Send("SyncTransform", Target.OthersSaved, transform.position, transform.rotation);
        }
    }
}
