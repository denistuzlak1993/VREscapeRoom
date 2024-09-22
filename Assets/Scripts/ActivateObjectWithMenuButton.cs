using UnityEngine;

public class ActivateObjectWithMenuButton : MonoBehaviour
{
    public GameObject targetObject;
    private bool isObjectActive = false;

    public bool needToRecenterPlayground;

    void Update()
    {
        // Provjerava da li je "menu" dugme pritisnuto
        if (OVRInput.GetDown(OVRInput.Button.Start))
        {
            if(!needToRecenterPlayground)
            ToggleObject();
            else if(needToRecenterPlayground)
            {
                RoomBoundaryManager.instance.Recenter();
            }

        }
    }

    private void ToggleObject()
    {
        isObjectActive = !isObjectActive;
        targetObject.SetActive(isObjectActive);
    }
}
