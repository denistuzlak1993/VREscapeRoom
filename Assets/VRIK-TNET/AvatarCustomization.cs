using System.Collections;
using System.Collections.Generic;
using TNet;
using UnityEngine;

public class AvatarCustomization : TNBehaviour
{
    public GameObject[] beards;
    public GameObject[] hairs;
    public GameObject[] hats;
    public GameObject[] suits;

    [SerializeField] private int selectedBeard = 0;
    [SerializeField] private int selectedHair = 0;
    [SerializeField] private int selectedHat = 0;
    [SerializeField] private int selectedSuit = 0;

    void Start()
    {
        if (tno.isMine)
        {
            // Ako je vlasnik, učitaj podatke iz PlayerPrefs ili postavi defaultne vrednosti
            selectedBeard = PlayerPrefs.GetInt("SelectedBeard", selectedBeard);
            selectedHair = PlayerPrefs.GetInt("SelectedHair", selectedHair);
            selectedHat = PlayerPrefs.GetInt("SelectedHat", selectedHat);
            selectedSuit = PlayerPrefs.GetInt("SelectedSuit", selectedSuit);
            UpdateAvatarCustomization(); // Ažuriraj avatar samo ako je vlasnik

            // Sinhronizuj početne vrednosti sa serverom
            tno.Send("SyncAvatarCustomization", Target.OthersSaved, selectedBeard, selectedHair, selectedHat, selectedSuit);
        }
        else
        {
            // Ako nije vlasnik, zatraži sinhronizaciju sa vlasnikom
            tno.Send("RequestSyncAvatarCustomization", Target.Host);
        }
    }

    // Funkcija za ažuriranje avatara na osnovu izabranih delova
    private void UpdateAvatarCustomization()
    {
        Debug.Log($"Updating avatar: Beard={selectedBeard}, Hair={selectedHair}, Hat={selectedHat}, Suit={selectedSuit}");
        ActivateItem(beards, selectedBeard);
        ActivateItem(hairs, selectedHair);
        ActivateItem(hats, selectedHat);
        ActivateItem(suits, selectedSuit);
    }

    // Funkcija koja aktivira samo izabrani deo, a ostale deaktivira
    private void ActivateItem(GameObject[] items, int index)
    {
        for (int i = 0; i < items.Length; i++)
        {
            items[i].SetActive(i == index);
        }
    }

    // Metode za izbor delova (pozivaju se preko UI ili unutar koda)
    public void SelectBeard(int index)
    {
        selectedBeard = index;
        SaveAndSyncCustomization();
    }

    public void SelectHair(int index)
    {
        selectedHair = index;
        SaveAndSyncCustomization();
    }

    public void SelectHat(int index)
    {
        selectedHat = index;
        SaveAndSyncCustomization();
    }

    public void SelectSuit(int index)
    {
        selectedSuit = index;
        SaveAndSyncCustomization();
    }

    // Funkcija koja čuva podatke i sinhronizuje sa mrežom
    private void SaveAndSyncCustomization()
    {
        // Sačuvaj podatke lokalno
        PlayerPrefs.SetInt("SelectedBeard", selectedBeard);
        PlayerPrefs.SetInt("SelectedHair", selectedHair);
        PlayerPrefs.SetInt("SelectedHat", selectedHat);
        PlayerPrefs.SetInt("SelectedSuit", selectedSuit);

        // Sinhronizuj sa mrežom
        UpdateAvatarCustomization();
        tno.Send("SyncAvatarCustomization", Target.OthersSaved, selectedBeard, selectedHair, selectedHat, selectedSuit);
    }

    // Funkcija koja se poziva kada se primaju podaci od drugih igrača
    [RFC]
    private void SyncAvatarCustomization(int beard, int hair, int hat, int suit)
    {
        Debug.Log($"Received avatar customization: Beard={beard}, Hair={hair}, Hat={hat}, Suit={suit}");
        selectedBeard = beard;
        selectedHair = hair;
        selectedHat = hat;
        selectedSuit = suit;
        UpdateAvatarCustomization();
    }

    [RFC]
    private void RequestSyncAvatarCustomization()
    {
        // Samo vlasnik šalje podatke o trenutnoj personalizaciji
        if (tno.isMine)
        {
            Debug.Log("Sending avatar customization sync request.");
            tno.Send("SyncAvatarCustomization", Target.OthersSaved, selectedBeard, selectedHair, selectedHat, selectedSuit);
        }
    }
}
