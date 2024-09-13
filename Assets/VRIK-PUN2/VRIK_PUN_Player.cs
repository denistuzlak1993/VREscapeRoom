using UnityEngine;
using RootMotion.FinalIK;
using TNet;
using System.Collections.Generic;

namespace RootMotion.Demos
{
    public enum IKMode
    {
        FullBodyIK,
        AvatarIK
    }

    public class VRIK_PUN_Player : TNBehaviour
    {
        public IKMode ikMode;  // Enumerator za odabir režima IK
        public Transform avatarRoot; // Transform za root objekat avatara
        public Transform avatarHead; // Transform za glavu avatara
        public Transform vrAvatarHeadTarget; // Novi target za glavu avatara

        public Transform leftHandParent;
        public Transform rightHandParent;
        public GameObject interactorHands;

        [Tooltip("Root of the VR camera rig")]
        public GameObject ovrRig;
        public GameObject[] remoteHands;

        [Tooltip("The VRIK component.")]
        public RootMotion.FinalIK.VRIK ik;

        private NetworkTransform rootNetworkT = new NetworkTransform();
        private NetworkTransform headNetworkT = new NetworkTransform();
        private NetworkTransform leftHandParentNetworkT = new NetworkTransform();
        private NetworkTransform rightHandParentNetworkT = new NetworkTransform();

        private System.Collections.Generic.List<NetworkTransform> leftFingerNetworkTs = new System.Collections.Generic.List<NetworkTransform>();
        private System.Collections.Generic.List<NetworkTransform> rightFingerNetworkTs = new System.Collections.Generic.List<NetworkTransform>();

        private Transform headIKProxy;
        private Transform leftHandIKProxy;
        private Transform rightHandIKProxy;

        public Transform centerEyeAnchor;
        public Transform leftHandAnchor;
        public Transform rightHandAnchor;
        public Vector3 headAnchorPositionOffset = Vector3.zero;
        public Vector3 headAnchorRotationOffset = Vector3.zero;
        public Vector3 handAnchorPositionOffset = Vector3.zero;
        public Vector3 handAnchorRotationOffset = Vector3.zero;
        public float scaleMlp = 1.0f;
        public bool fixedScale = false;

        [Tooltip("Offset behind the camera along the Z axis")]
        public float zOffset = 0.0f;

        private float proxyInterpolationSpeed = 10f;
        private float proxyMaxErrorSqrMag = 0.01f;

        private VRIKCalibrator.CalibrationData data;

        [SerializeField] public HandTrackingFingerMap RH;
        [SerializeField] public HandTrackingFingerMap LH;
        
        [SerializeField] OVRSkeleton RHS;
        [SerializeField] OVRSkeleton LHS;

        // New variables for smoothing rotation
        public float rotationSmoothTime = 0.1f;
        private float rotationVelocity;

        protected override void Awake()
        {

            base.Awake();

            if (tno.isMine)
            {
               

                zOffset = 0.15f;
                InitiateLocal();
                for (int i = 0; i < remoteHands.Length; i++)
                {
                    remoteHands[i].SetActive(true);
                }
                interactorHands.SetActive(true);
            }
            else
            {
                for (int i = 0; i < remoteHands.Length; i++)
                {
                    remoteHands[i].SetActive(true);
                }
                interactorHands.SetActive(false);
                InitiateRemote();
            }

            InitializeFingerNetworkTransforms();
        }

        private void InitializeFingerNetworkTransforms()
        {
            for (int i = 0; i < 15; i++) // Sinhronizacija 15 kosti prstiju po ruci
            {
                leftFingerNetworkTs.Add(new NetworkTransform());
                rightFingerNetworkTs.Add(new NetworkTransform());
            }
        }

        private void Update()
        {
            if (tno.isMine)
            {
                UpdateLocal();
            }
            else
            {
                UpdateRemote();
            }
        }

        private void InitiateLocal()
        {
            ovrRig.SetActive(true);
            if (ikMode == IKMode.FullBodyIK)
            {
                data = VRIKCalibrator.Calibrate(ik, centerEyeAnchor, leftHandAnchor, rightHandAnchor,
                    headAnchorPositionOffset, headAnchorRotationOffset, handAnchorPositionOffset, handAnchorRotationOffset, scaleMlp);

                if (fixedScale)
                {
                    ik.references.root.localScale = scaleMlp * Vector3.one;
                    data.scale = scaleMlp;
                }
            }
            else if (ikMode == IKMode.AvatarIK)
            {
                // Inicijalizacija avatara u Avatar IK režimu
                UpdateAvatarRootPosition();
            }

           
        }

        private void UpdateAvatarRootPosition()
        {
            // Postavljanje root pozicije avatara da prati poziciju kamere, uz dodatak zOffset-a
            Vector3 cameraPosition = centerEyeAnchor.position;
            Vector3 adjustedRootPosition = cameraPosition + centerEyeAnchor.forward * -zOffset; // Dodavanje zOffset-a

            // Calculate smooth rotation based on movement direction
            Vector3 movementDirection = new Vector3(centerEyeAnchor.forward.x, 0, centerEyeAnchor.forward.z);
            if (movementDirection.magnitude > 0.1f)
            {
                Quaternion targetRotation = Quaternion.LookRotation(movementDirection);
                avatarRoot.rotation = Quaternion.Slerp(avatarRoot.rotation, targetRotation, Time.deltaTime / rotationSmoothTime);
            }

            avatarRoot.position = adjustedRootPosition;
        }

        private void UpdateLocal()
        {
            if (ikMode == IKMode.FullBodyIK)
            {
                // Logika za Full Body IK
                rootNetworkT.ReadVelocitiesLocal(ik.references.root);
                headNetworkT.ReadVelocitiesLocal(ik.solver.spine.headTarget);
                leftHandParentNetworkT.ReadVelocitiesLocal(leftHandParent);
                rightHandParentNetworkT.ReadVelocitiesLocal(rightHandParent);

                rootNetworkT.ReadTransformLocal(ik.references.root);
                headNetworkT.ReadTransformLocal(ik.solver.spine.headTarget);
                leftHandParentNetworkT.ReadTransformLocal(leftHandParent);
                rightHandParentNetworkT.ReadTransformLocal(rightHandParent);
            }
            else if (ikMode == IKMode.AvatarIK)
            {
                // Logika za Avatar IK
                UpdateAvatarRootPosition();

                // Praćenje glave avatara sa vrAvatarHeadTarget umesto centerEyeAnchor
                avatarHead.rotation = vrAvatarHeadTarget.rotation;

                rootNetworkT.ReadVelocitiesLocal(avatarRoot);
                headNetworkT.ReadVelocitiesLocal(avatarHead);
                leftHandParentNetworkT.ReadVelocitiesLocal(leftHandParent);
                rightHandParentNetworkT.ReadVelocitiesLocal(rightHandParent);

                rootNetworkT.ReadTransformLocal(avatarRoot);
                headNetworkT.ReadTransformLocal(avatarHead);
                leftHandParentNetworkT.ReadTransformLocal(leftHandParent);
                rightHandParentNetworkT.ReadTransformLocal(rightHandParent);
            }

            Vector3[] leftFingerPositions = new Vector3[15];
            Quaternion[] leftFingerRotations = new Quaternion[15];

            Vector3[] rightFingerPositions = new Vector3[15];
            Quaternion[] rightFingerRotations = new Quaternion[15];

            for (int i = 0; i < 15; i++)
            {
                leftFingerNetworkTs[i].ReadTransformLocal(LH.GetFingerTransform(i));
                leftFingerPositions[i] = leftFingerNetworkTs[i].position;
                leftFingerRotations[i] = leftFingerNetworkTs[i].rotation;

                rightFingerNetworkTs[i].ReadTransformLocal(RH.GetFingerTransform(i));
                rightFingerPositions[i] = rightFingerNetworkTs[i].position;
                rightFingerRotations[i] = rightFingerNetworkTs[i].rotation;
            }

            // Uključujemo sinhronizaciju ruku i prstiju i za Avatar IK režim
            tno.Send(1, Target.OthersSaved,
                rootNetworkT.position, rootNetworkT.rotation,
                headNetworkT.position, headNetworkT.rotation,
                leftHandParentNetworkT.position, leftHandParentNetworkT.rotation,
                rightHandParentNetworkT.position, rightHandParentNetworkT.rotation,
                leftFingerPositions, leftFingerRotations,
                rightFingerPositions, rightFingerRotations);
        }

        [RFC(1)]
        private void ReceiveTransformData(Vector3 rootPos, Quaternion rootRot, Vector3 headPos, Quaternion headRot,
            Vector3 leftHandParentPos, Quaternion leftHandParentRot, Vector3 rightHandParentPos, Quaternion rightHandParentRot,
            Vector3[] leftFingerPositions, Quaternion[] leftFingerRotations,
            Vector3[] rightFingerPositions, Quaternion[] rightFingerRotations)
        {
            rootNetworkT.position = rootPos;
            rootNetworkT.rotation = rootRot;

            headNetworkT.position = headPos;
            headNetworkT.rotation = headRot;

            leftHandParentNetworkT.position = leftHandParentPos;
            leftHandParentNetworkT.rotation = leftHandParentRot;

            rightHandParentNetworkT.position = rightHandParentPos;
            rightHandParentNetworkT.rotation = rightHandParentRot;

            for (int i = 0; i < 15; i++)
            {
                leftFingerNetworkTs[i].position = leftFingerPositions[i];
                leftFingerNetworkTs[i].rotation = leftFingerRotations[i];

                rightFingerNetworkTs[i].position = rightFingerPositions[i];
                rightFingerNetworkTs[i].rotation = rightFingerRotations[i];
            }

            ApplyTransformData();
        }

        private void ApplyTransformData()
        {
            headIKProxy.position = headNetworkT.position;
            headIKProxy.rotation = headNetworkT.rotation;

            if (ikMode == IKMode.FullBodyIK)
            {
                leftHandParent.position = leftHandParentNetworkT.position;
                leftHandParent.rotation = leftHandParentNetworkT.rotation;

                rightHandParent.position = rightHandParentNetworkT.position;
                rightHandParent.rotation = rightHandParentNetworkT.rotation;
            }
            else if (ikMode == IKMode.AvatarIK)
            {
                avatarRoot.position = rootNetworkT.position;
                avatarRoot.rotation = rootNetworkT.rotation;

                avatarHead.rotation = headNetworkT.rotation;

                leftHandParent.position = leftHandParentNetworkT.position;
                leftHandParent.rotation = leftHandParentNetworkT.rotation;

                rightHandParent.position = rightHandParentNetworkT.position;
                rightHandParent.rotation = rightHandParentNetworkT.rotation;
            }
        }

        private void InitiateRemote()
        {
            ovrRig.SetActive(false);

            var proxyRoot = new GameObject("IK Proxies").transform;
            proxyRoot.parent = transform;
            proxyRoot.localPosition = Vector3.zero;
            proxyRoot.localRotation = Quaternion.identity;

            headIKProxy = new GameObject("Head IK Proxy").transform;
            headIKProxy.position = ikMode == IKMode.FullBodyIK ? ik.references.head.position : avatarHead.position;
            headIKProxy.rotation = ikMode == IKMode.FullBodyIK ? ik.references.head.rotation : avatarHead.rotation;

            leftHandIKProxy = new GameObject("Left Hand IK Proxy").transform;
            leftHandIKProxy.position = leftHandParent.position;
            leftHandIKProxy.rotation = leftHandParent.rotation;

            rightHandIKProxy = new GameObject("Right Hand IK Proxy").transform;
            rightHandIKProxy.position = rightHandParent.position;
            rightHandIKProxy.rotation = rightHandParent.rotation;

            if (ikMode == IKMode.FullBodyIK)
            {
                ik.solver.spine.headTarget = headIKProxy;
                ik.solver.leftArm.target = leftHandIKProxy;
                ik.solver.rightArm.target = rightHandIKProxy;
            }
        }

        private void UpdateRemote()
        {
            rootNetworkT.ApplyRemoteInterpolated(ikMode == IKMode.FullBodyIK ? ik.references.root : avatarRoot, proxyInterpolationSpeed, proxyMaxErrorSqrMag);
            headNetworkT.ApplyRemoteInterpolated(ikMode == IKMode.FullBodyIK ? headIKProxy : avatarHead, proxyInterpolationSpeed, proxyMaxErrorSqrMag);

            leftHandParentNetworkT.ApplyRemoteInterpolated(leftHandIKProxy, proxyInterpolationSpeed, proxyMaxErrorSqrMag);
            rightHandParentNetworkT.ApplyRemoteInterpolated(rightHandIKProxy, proxyInterpolationSpeed, proxyMaxErrorSqrMag);

            for (int i = 0; i < 15; i++)
            {
                leftFingerNetworkTs[i].ApplyRemoteInterpolated(LH.GetFingerTransform(i), proxyInterpolationSpeed, proxyMaxErrorSqrMag);
                rightFingerNetworkTs[i].ApplyRemoteInterpolated(RH.GetFingerTransform(i), proxyInterpolationSpeed, proxyMaxErrorSqrMag);
            }
        }
    }
}