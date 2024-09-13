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

        /// <summary>
        /// Array of possible spawn positions
        /// </summary>
        public Transform[] spawnPositions;
        private void Awake() {
            instance = this;
        }
        IEnumerator Start()
        {
            if (channelID < 1) channelID = TNManager.lastChannelID;
            while (TNManager.isJoiningChannel || !TNManager.IsInChannel(channelID)) yield return null;

            // Učitaj sačuvani broj pozicije (default je 0)
            int spawnIndex = PlayerPrefs.GetInt("SpawnPosition", 0);

            // Osiguraj da indeks nije veći od broja dostupnih pozicija
            if (spawnIndex < 0 || spawnIndex >= spawnPositions.Length)
            {
                Debug.LogError("Invalid spawn index! Defaulting to position 0.");
                spawnIndex = 0;
            }

            // Dobij poziciju i rotaciju sa odgovarajuće spawn pozicije
            Vector3 spawnPosition = spawnPositions[spawnIndex].position;
            Quaternion spawnRotation = spawnPositions[spawnIndex].rotation;

            if (isHostTest)
            {
                // Instantiate server-specific object (e.g., server camera)
                TNManager.Instantiate(channelID, "CreateAtPosition", serverPrefabPath, persistent, Vector3.zero, Quaternion.identity);
            }
            else
            {
                CreateLocalPlayer(spawnPosition,spawnRotation);
            
                     Destroy(gameObject);
            }

           
        }
       public void CreateLocalPlayer (Vector3 spawnPosition, Quaternion spawnRotation)
        {
               TNManager.Instantiate(channelID, "CreateAtPosition", prefabPath, persistent, spawnPosition, spawnRotation);
                Destroy(gameObject);
        }
        [RCC]
        static GameObject CreateAtPosition(GameObject prefab, Vector3 pos, Quaternion rot)
        {
            // Instantiate the prefab
            GameObject go = prefab.Instantiate();

            // Set the position and rotation based on the passed values
            Transform t = go.transform;
            t.position = pos;
            t.rotation = rot;
            return go;
        }
    }
}