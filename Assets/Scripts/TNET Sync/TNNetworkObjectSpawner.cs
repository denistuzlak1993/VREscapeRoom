using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace TNet
{
    /// <summary>
    /// Script to spawn network objects at specific positions, especially for admin applications.
    /// </summary>
    public class TNNetworkObjectSpawner : MonoBehaviour
    {
        public int channelID = 0;
        public System.Collections.Generic.List<string> objectPrefabs;
        public System.Collections.Generic.List<Transform> spawnPositions;
        public bool persistent = true;
        public bool isAdminApp;
        private string objectName ="null";

        public string[] objectNamingList;
        IEnumerator Start()
        {
            if (channelID < 1) channelID = TNManager.lastChannelID;
            while (TNManager.isJoiningChannel || !TNManager.IsInChannel(channelID)) yield return null;

            if (isAdminApp)
            {
                for (int i = 0; i < objectPrefabs.Count; i++)
                {
                    string prefabPath = objectPrefabs[i];
                    Vector3 spawnPosition = spawnPositions[i].position;
                    Quaternion spawnRotation = spawnPositions[i].rotation;
                   
                       objectName = objectNamingList[i];
                    // Provera da li objekat sa ovim imenom već postoji na mreži
                    if (!ObjectExistsOnNetwork(objectName))
                    {
                     
                        // Instanciraj objekat na mreži
                        TNManager.Instantiate(channelID, "CreateAndNameObject", prefabPath, persistent, spawnPosition, spawnRotation, objectName);
                    }
                }
            }

            // Uništi spawner skriptu nakon što objekti budu spawnovani
            Destroy(gameObject);
        }

        private bool ObjectExistsOnNetwork(string objectName)
        {
            // Provera postojanja objekta sa ovim imenom na mreži
            foreach (var obj in GameObject.FindObjectsOfType<GameObject>())
            {
                if (obj.name == objectName)
                {
                    return true;
                }
            }
            return false;
        }

        [RCC]
        static GameObject CreateAndNameObject(GameObject prefab, Vector3 pos, Quaternion rot, string name)
        {
            GameObject go = prefab.Instantiate();
            Transform t = go.transform;
            t.position = pos;
            t.rotation = rot;
            go.name = name; // Postavi ime objektu
            return go;
        }
    }
}
