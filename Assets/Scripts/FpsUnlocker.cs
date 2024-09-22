using UnityEngine;
using UnityEngine.XR;

public class FPSUnlocker : MonoBehaviour
{
    public int targetFPS = 70;
    public int cpuLevel = 2; // 0-4, 4 being the highest
    public int gpuLevel = 2; // 0-4, 4 being the highest

    void Start()
    {
        Application.targetFrameRate = targetFPS;
        XRSettings.eyeTextureResolutionScale = 0.8f; // Adjust for performance
        SetPerformanceLevels(cpuLevel, gpuLevel);
    }

    void SetPerformanceLevels(int cpu, int gpu)
    {
        OVRManager.cpuLevel = cpu;
        OVRManager.gpuLevel = gpu;
    }
}
