using UnityEngine;

public class VRExperienceStarter : MonoBehaviour
{
    [Header("Camera Rig")]
    public Transform cameraRig;
    public Transform centerEyeAnchor;

    [Header("Avatar Head Anchors")]
    public Transform slimHeadAnchor;
    public Transform mediumHeadAnchor;
    public Transform wideHeadAnchor;

    [Header("Avatars")]
    public GameObject avatarSlim;
    public GameObject avatarMedium;
    public GameObject avatarWide;

    [Header("UI")]
    public GameObject selectionMenu;
    public GameObject instructionCanvas;

    private Transform selectedHeadAnchor;
    private GameObject selectedAvatar;

    public void SelectSlim()
    {
        selectedHeadAnchor = slimHeadAnchor;
        selectedAvatar = avatarSlim;
    }

    public void SelectMedium()
    {
        selectedHeadAnchor = mediumHeadAnchor;
        selectedAvatar = avatarMedium;
    }

    public void SelectWide()
    {
        selectedHeadAnchor = wideHeadAnchor;
        selectedAvatar = avatarWide;
    }

    public void StartExperience()
    {
        if (selectedHeadAnchor == null)
        {
            Debug.LogWarning("No avatar selected.");
            return;
        }

        avatarSlim.SetActive(false);
        avatarMedium.SetActive(false);
        avatarWide.SetActive(false);

        selectedAvatar.SetActive(true);

        Vector3 eyeOffset = centerEyeAnchor.position - cameraRig.position;
        cameraRig.position = selectedHeadAnchor.position - eyeOffset;

        cameraRig.rotation = selectedHeadAnchor.rotation;

        if (selectionMenu != null)
            selectionMenu.SetActive(false);

        if (instructionCanvas != null)
            instructionCanvas.SetActive(true);
    }
}