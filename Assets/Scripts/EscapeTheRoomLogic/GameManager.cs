using UnityEngine;

public class GameManager : MonoBehaviour
{
    // Singleton instanca
    public static GameManager Instance;

    // Da li je portal otključan
    private bool isPortalUnlocked = false;

    // Portal game object koji će se otključati
    public GameObject portal;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    // Ova metoda se poziva kada je finalna zagonetka rešena
    public void OnFinalPuzzleCompleted()
    {
        if (!isPortalUnlocked)
        {
            UnlockPortal();
        }
    }

    // Metoda za otključavanje portala
    private void UnlockPortal()
    {
        if (!isPortalUnlocked)
        {
            isPortalUnlocked = true;
            if (portal != null)
            {
                // Aktiviramo portal za prelazak na sledeći nivo
                portal.SetActive(true);
                Debug.Log("Portal unlocked! You can now proceed to the next level.");
            }
        }
    }

    // Resetujemo sve (uključujući portal)
    public void ResetGame()
    {
        isPortalUnlocked = false;

        // Portal se ponovo zatvara
        if (portal != null)
        {
            portal.SetActive(false);
        }

        Debug.Log("Game has been reset.");
    }
}
