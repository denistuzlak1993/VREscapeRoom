using UnityEngine;
using TNet;

public class TransformSynchronizer : TNBehaviour
{
    public Transform levelTransform; // Transformacija levela koju treba sinhronizovati
    public bool isHosting;
    void Start()
    {
        if (isHosting)
        {
            // Ako je server, odmah šalje trenutnu poziciju i rotaciju levela svim klijentima
            SyncTransform(levelTransform.position, levelTransform.rotation);
        }
    }

    [RFC]
    void SyncTransform(Vector3 position, Quaternion rotation)
    {
        // Sinhronizuje transformaciju na svim uređajima
        levelTransform.position = position;
        levelTransform.rotation = rotation;
    }

    public void SyncNow()
    {
        if (isHosting)
        {
            // Server ručno sinhronizuje poziciju i rotaciju ako se pozove SyncNow()
            tno.Send("SyncTransform", Target.AllSaved, levelTransform.position, levelTransform.rotation);
        }
    }
}
