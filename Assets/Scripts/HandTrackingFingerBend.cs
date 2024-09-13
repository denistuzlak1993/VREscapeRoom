using System.Collections.Generic;
using System.Linq; // Dodajte ovu liniju
using UnityEngine;

public class HandTrackingFingerBend : MonoBehaviour
{
    public OVRSkeleton ovrSkeleton;
    public OVRHand ovrHand;

    public Transform[] fingerBones;

    void Update()
    {
        if (ovrSkeleton == null || ovrHand == null) return;

        for (int i = 0; i < fingerBones.Length; i++)
        {
            var boneId = OVRSkeleton.BoneId.Hand_Index1 + i;
            var bone = ovrSkeleton.Bones.FirstOrDefault(b => b.Id == boneId); // Koristite FirstOrDefault
            if (bone != null)
            {
                Transform fingerTransform = fingerBones[i];
                fingerTransform.rotation = bone.Transform.rotation;
            }
        }
    }
}