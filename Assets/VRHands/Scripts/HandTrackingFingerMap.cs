using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandTrackingFingerMap : MonoBehaviour
{
    public HTFinger Hand_Start;
    public HTFinger Hand_WristRoot;
    public HTFinger Hand_ForearmStub;
    public HTFinger Hand_Thumb0;
    public HTFinger Hand_Thumb1;
    public HTFinger Hand_Thumb2;
    public HTFinger Hand_Thumb3;
    public HTFinger Hand_Index1;
    public HTFinger Hand_Index2;
    public HTFinger Hand_Index3;
    public HTFinger Hand_Middle1;
    public HTFinger Hand_Middle2;
    public HTFinger Hand_Middle3;
    public HTFinger Hand_Ring1;
    public HTFinger Hand_Ring2;
    public HTFinger Hand_Ring3;
    public HTFinger Hand_Pinky0;
    public HTFinger Hand_Pinky1;
    public HTFinger Hand_Pinky2;
    public HTFinger Hand_Pinky3;
    public HTFinger Hand_MaxSkinnable;
    public HTFinger Hand_ThumbTip;
    public HTFinger Hand_IndexTip;
    public HTFinger Hand_MiddleTip;
    public HTFinger Hand_RingTip;
    public HTFinger Hand_PinkyTip;
    public HTFinger Hand_End;


     public Transform GetFingerTransform(int index)
    {
        switch (index)
        {
            case 0: return Hand_Index1.transform;
            case 1: return Hand_Index2.transform;
            case 2: return Hand_Index3.transform;
            case 3: return Hand_Middle1.transform;
            case 4: return Hand_Middle2.transform;
            case 5: return Hand_Middle3.transform;
            case 6: return Hand_Ring1.transform;
            case 7: return Hand_Ring2.transform;
            case 8: return Hand_Ring3.transform;
            case 9: return Hand_Pinky1.transform;
            case 10: return Hand_Pinky2.transform;
            case 11: return Hand_Pinky3.transform;
            case 12: return Hand_Thumb1.transform;
            case 13: return Hand_Thumb2.transform;
            case 14: return Hand_Thumb3.transform;
            default: return null;
        }
    }
}
