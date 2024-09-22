using UnityEngine;
using UnityEngine.UI;

public class AvatarCustomizationMenu : MonoBehaviour
{
    public AvatarCustomization avatarCustomization; // Reference to the AvatarCustomization script

    private int selectedBeard;
    private int selectedHair;
    private int selectedHat;
    private int selectedSuit;

    void Start()
    {
        // Load saved values from PlayerPrefs
        selectedBeard = PlayerPrefs.GetInt("SelectedBeard", 0);
        selectedHair = PlayerPrefs.GetInt("SelectedHair", 0);
        selectedHat = PlayerPrefs.GetInt("SelectedHat", 0);
        selectedSuit = PlayerPrefs.GetInt("SelectedSuit", 0);

        // Update the avatar based on the loaded values
        UpdateAvatar();
    }

    [ContextMenu("Next Beard")]
    public void NextBeard()
    {
        selectedBeard = (selectedBeard + 1) % avatarCustomization.beards.Length;
        UpdateAvatar();
    }

    [ContextMenu("Previous Beard")]
    public void PreviousBeard()
    {
        selectedBeard = (selectedBeard - 1 + avatarCustomization.beards.Length) % avatarCustomization.beards.Length;
        UpdateAvatar();
    }

    [ContextMenu("Next Hair")]
    public void NextHair()
    {
        selectedHair = (selectedHair + 1) % avatarCustomization.hairs.Length;
        UpdateAvatar();
    }

    [ContextMenu("Previous Hair")]
    public void PreviousHair()
    {
        selectedHair = (selectedHair - 1 + avatarCustomization.hairs.Length) % avatarCustomization.hairs.Length;
        UpdateAvatar();
    }

    [ContextMenu("Next Hat")]
    public void NextHat()
    {
        selectedHat = (selectedHat + 1) % avatarCustomization.hats.Length;
        // Reset hair when a hat is selected
        ResetHair();
        UpdateAvatar();
    }

    [ContextMenu("Previous Hat")]
    public void PreviousHat()
    {
        selectedHat = (selectedHat - 1 + avatarCustomization.hats.Length) % avatarCustomization.hats.Length;
        // Reset hair when a hat is selected
        ResetHair();
        UpdateAvatar();
    }

    [ContextMenu("Next Suit")]
    public void NextSuit()
    {
        selectedSuit = (selectedSuit + 1) % avatarCustomization.suits.Length;
        UpdateAvatar();
    }

    [ContextMenu("Previous Suit")]
    public void PreviousSuit()
    {
        selectedSuit = (selectedSuit - 1 + avatarCustomization.suits.Length) % avatarCustomization.suits.Length;
        UpdateAvatar();
    }

    [ContextMenu("Reset Beard")]
    public void ResetBeard()
    {
        selectedBeard = 0;
        SaveAndSyncCustomization();
    }

    [ContextMenu("Reset Hair")]
    public void ResetHair()
    {
        selectedHair = 0;
        SaveAndSyncCustomization();
    }

    [ContextMenu("Reset Suit")]
    public void ResetSuit()
    {
        selectedSuit = 0;
        SaveAndSyncCustomization();
    }

    [ContextMenu("Reset Hat")]
    public void ResetHat()
    {
        selectedHat = 0;
        SaveAndSyncCustomization();
    }

    [ContextMenu("Save Customization")]
    public void SaveCustomization()
    {
        // Save the selected options to PlayerPrefs
        PlayerPrefs.SetInt("SelectedBeard", selectedBeard);
        PlayerPrefs.SetInt("SelectedHair", selectedHair);
        PlayerPrefs.SetInt("SelectedHat", selectedHat);
        PlayerPrefs.SetInt("SelectedSuit", selectedSuit);

        // Call SaveAndSyncCustomization on AvatarCustomization script to sync changes
        avatarCustomization.SelectBeard(selectedBeard);
        avatarCustomization.SelectHair(selectedHair);
        avatarCustomization.SelectHat(selectedHat);
        avatarCustomization.SelectSuit(selectedSuit);
    }

    private void SaveAndSyncCustomization()
    {
        // Save the selected options to PlayerPrefs
        PlayerPrefs.SetInt("SelectedBeard", selectedBeard);
        PlayerPrefs.SetInt("SelectedHair", selectedHair);
        PlayerPrefs.SetInt("SelectedHat", selectedHat);
        PlayerPrefs.SetInt("SelectedSuit", selectedSuit);

        // Sync customization with the AvatarCustomization script
        UpdateAvatar();
    }

    private void UpdateAvatar()
    {
        // Update the avatar based on the current selection
        avatarCustomization.SelectBeard(selectedBeard);
        avatarCustomization.SelectHair(selectedHair);
        avatarCustomization.SelectHat(selectedHat);
        avatarCustomization.SelectSuit(selectedSuit);
    }
}
