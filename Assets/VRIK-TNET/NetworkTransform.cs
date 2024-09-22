using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TNet;

namespace RootMotion.Demos
{
    [System.Serializable]
    public class NetworkTransform : TNBehaviour
    {
        public Vector3 position;
        public Quaternion rotation = Quaternion.identity;
        public Vector3 velocity;
        public Vector3 angularVelocity;

        private Vector3 lastPosition;
        private Quaternion lastRotation = Quaternion.identity;

        public Transform receiveRelTo;
        private int lastReceiveRelToId = -1;

        public void Reset(Transform t)
        {
            position = t.position;
            rotation = t.rotation;
            lastPosition = t.position;
            lastRotation = t.rotation;
            velocity = Vector3.zero;
            angularVelocity = Vector3.zero;
        }

        [RFC]
        public void Send(Vector3 pos, Quaternion rot, Vector3 vel, Vector3 angVel)
        {
            tno.Send(1, Target.Others, pos, rot, vel, angVel);
        }

        [RFC(1)]
        private void OnReceiveTransform(Vector3 pos, Quaternion rot, Vector3 vel, Vector3 angVel)
        {
            position = pos;
            rotation = rot;
            velocity = vel;
            angularVelocity = angVel;
        }

        public void ReadTransformLocal(Transform t)
        {
            position = t.position;
            rotation = t.rotation;
        }

        public void ReadVelocitiesLocal(Transform t)
        {
            if (t == null)
            {
                velocity = Vector3.zero;
                angularVelocity = Vector3.zero;
                return;
            }
            ReadVelocitiesLocal(t.position, t.rotation);
        }

        public void ReadVelocitiesLocal(Vector3 currentPosition, Quaternion currentRotation)
        {
            Vector3 v = (currentPosition - lastPosition) / Time.deltaTime;
            velocity = Interpolate(velocity, v);

            Quaternion rotationDelta = currentRotation * Quaternion.Inverse(lastRotation);

            float angle = 0f;
            Vector3 aV = Vector3.zero;
            rotationDelta.ToAngleAxis(out angle, out aV);

            if (float.IsInfinity(aV.x) || float.IsInfinity(aV.y) || float.IsInfinity(aV.z))
            {
                angle = 0f;
                aV = Vector3.zero;
            }

            aV *= (angle * Mathf.Deg2Rad) / Time.deltaTime;
            aV = RootMotion.QuaTools.ToBiPolar(aV);

            angularVelocity = Interpolate(angularVelocity, aV);

            lastPosition = currentPosition;
            lastRotation = currentRotation;
        }

        public void ApplyToLocal(Transform t)
        {
            t.position = position;
            t.rotation = rotation;
        }

        public void ApplyRemoteInterpolated(Transform t, float interpolationSpeed, float maxErrorSqrMag)
        {
            float sqrMag = Vector3.SqrMagnitude(t.position - position);
            if (sqrMag > maxErrorSqrMag)
            {
                t.position = position;
            }
            else
            {
                t.position = Vector3.Lerp(t.position, position, Time.deltaTime * interpolationSpeed);
            }
            t.rotation = Quaternion.Slerp(t.rotation, rotation, Time.deltaTime * interpolationSpeed);
        }

        private Vector3 Interpolate(Vector3 v, Vector3 target)
        {
            return Vector3.Lerp(v, target, Time.deltaTime * 25f);
        }
    }
}
