using UnityEngine;
using System.Collections;

namespace TNet
{
    /// <summary>
    /// Instantiate the specified prefab at the game object's position.
    /// </summary>
 public class TNAutoCreate : MonoBehaviour
{
/// <summary>
        /// ID of the channel where the prefab should be created. '0' means "last used channel" (not recommended).
        /// </summary>
        public int channelID = 0;
        public static TNAutoCreate instance;

        /// <summary>
        /// Prefab to instantiate for player.
        /// </summary>
        public string prefabPath;

        /// <summary>
        /// Prefab for server-specific objects (e.g., server camera).
        /// </summary>
        public string serverPrefabPath;

        /// <summary>
        /// Whether the instantiated object will remain in the game when the player that created it leaves.
        /// Set this to 'false' for the player's avatar.
        /// </summary>
        public bool persistent = false;

        /// <summary>
        /// Flag to check if this is the host (server).
        /// </summary>
        public bool isHostTest;



    IEnumerator Start()
    {
        if (channelID < 1) channelID = TNManager.lastChannelID;
        while (TNManager.isJoiningChannel || !TNManager.IsInChannel(channelID)) yield return null;

        if (isHostTest)
        {
            // Instantiate server-specific object
            TNManager.Instantiate(channelID, "CreateAtPosition", serverPrefabPath, persistent, Vector3.zero, Quaternion.identity);
        }
        else
        {
            // Instanciraj igrača na (0, 0, 0)
            TNManager.Instantiate(channelID, "CreateAtPosition", prefabPath, persistent, Vector3.zero, Quaternion.identity);
            
            // Pronađi instanciranog igrača
            GameObject player = FindLocalPlayerInstance();
            
            // Postavi igrača na pravu poziciju iz VR trackinga
            PositionPlayerAtRealLocation(player);

            Destroy(gameObject); // Uništi ovaj objekat nakon instanciranja
        }
    }

    private GameObject FindLocalPlayerInstance()
    {
        // Pretpostavka je da tvoj prefab ima određeni tag ili ime koje možeš pretražiti
        return GameObject.FindWithTag("Player");
    }

    private void PositionPlayerAtRealLocation(GameObject player)
    {
        // Preuzmi realnu poziciju iz VR tracking sistema (npr. OVRManager)
        Vector3 realPosition = Camera.main.transform.position; // Koristi poziciju kamere kao proxy za glavu
        Quaternion realRotation = Camera.main.transform.rotation;

        // Postavi instanciranog igrača na realnu poziciju
        player.transform.position = realPosition;
        player.transform.rotation = Quaternion.Euler(0, realRotation.eulerAngles.y, 0);  // Koristi samo Y rotaciju
    }

    [RCC]
    static GameObject CreateAtPosition(GameObject prefab, Vector3 pos, Quaternion rot)
    {
        GameObject go = prefab.Instantiate();
        go.transform.position = pos;
        go.transform.rotation = rot;
        return go;
    }
}

}
