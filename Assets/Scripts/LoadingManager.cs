using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;
public class LoadingManager : MonoBehaviour
{
   public void Start()
    {
        OVRManager.instance.trackingOriginType = OVRManager.TrackingOrigin.FloorLevel;
StartCoroutine(waitAndCalibrate() );
      
    }

    IEnumerator waitAndCalibrate()
    {
        yield return new WaitForSeconds(1);
        #if UNITY_ANDROID
            // Provjeri da li je Android build i da li nije u Editoru
            if (!Application.isEditor)
            {
                if (OVRManager.display != null)
                {
                    OVRManager.display.RecenterPose();
                }
                else
                {
                    Debug.LogError("OVRManager.display is not initialized or is missing in the scene.");
                }
            }
            else
            {
                Debug.Log("RecenterPose is not executed in the Editor.");
            }
        #endif

        // Učitaj glavnu scenu
        SceneManager.LoadScene("Lobby");
    }
}
