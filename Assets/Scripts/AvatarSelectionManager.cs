using UnityEngine;

public class AvatarSelectionManager : MonoBehaviour
{
    [Header("Avatars")]
    public GameObject avatarSlim;
    public GameObject avatarMedium;
    public GameObject avatarWide;

    private GameObject activeAvatar;

    public GameObject GetActiveAvatar()
    {
        return activeAvatar;
    }

    [Header("Skin Materials")]
    public Material skinLight;
    public Material skinMedium;
    public Material skinDark;

    [Header("Eye Materials")]
    public Material eyesBrown;
    public Material eyesBlue;
    public Material eyesGreen;

    [Header("Hair Materials")]
    public Material hairBlack;
    public Material hairLightBrown;
    public Material hairDarkBrown;
    public Material hairBlonde;
    public Material hairGray;

    void Start()
    {
        SelectBodySlim();
    }

    public void SelectBodySlim()
    {
        SetActiveAvatar(avatarSlim);
    }

    public void SelectBodyMedium()
    {
        SetActiveAvatar(avatarMedium);
    }

    public void SelectBodyWide()
    {
        SetActiveAvatar(avatarWide);
    }

    void SetActiveAvatar(GameObject avatar)
    {
        avatarSlim.SetActive(false);
        avatarMedium.SetActive(false);
        avatarWide.SetActive(false);

        avatar.SetActive(true);
        activeAvatar = avatar;
    }

    public void SelectMastectomyNormal()
    {
        SetOnlyActive("Chest_Anchor", "Chest_NORMAL");
    }

    public void SelectMastectomyLeft()
    {
        SetOnlyActive("Chest_Anchor", "Chest_LEFT");
    }

    public void SelectMastectomyRight()
    {
        SetOnlyActive("Chest_Anchor", "Chest_RIGHT");
    }

    public void SelectMastectomyBilateral()
    {
        SetOnlyActive("Chest_Anchor", "Chest_BILATERAL");
    }

    public void SelectHairLongCurly()
    {
        SetOnlyActive("Hair_Anchor", "Long Curly Hair");
    }

    public void SelectHairLongStraight()
    {
        SetOnlyActive("Hair_Anchor", "Long Straight Hair");
    }

    public void SelectHairMediumCurly()
    {
        SetOnlyActive("Hair_Anchor", "Medium Curly Hair");
    }

    public void SelectHairShortCurly()
    {
        SetOnlyActive("Hair_Anchor", "Short Curly Hair");
    }

    public void SelectHairShortStraight()
    {
        SetOnlyActive("Hair_Anchor", "Short Straight Hair");
    }

    public void SetSkinLight()
    {
        SetSkin(skinLight);
    }

    public void SetSkinMedium()
    {
        SetSkin(skinMedium);
    }

    public void SetSkinDark()
    {
        SetSkin(skinDark);
    }

    void SetSkin(Material mat)
    {
        Transform body = activeAvatar.transform.Find("BODY");

        if (body == null)
            body = activeAvatar.transform.Find("MEDIUM_BODY");

        if (body == null)
            body = activeAvatar.transform.Find("SLIM_BODY");

        if (body == null)
            body = activeAvatar.transform.Find("WIDE_BODY");

        if (body != null)
        {
            Renderer r = body.GetComponentInChildren<Renderer>();
            if (r != null) r.material = mat;
        }
    }

    public void SetEyesBrown()
    {
        SetEyes(eyesBrown);
    }

    public void SetEyesBlue()
    {
        SetEyes(eyesBlue);
    }

    public void SetEyesGreen()
    {
        SetEyes(eyesGreen);
    }

    void SetEyes(Material mat)
    {
        Transform eyeAnchor = activeAvatar.transform.Find("Eye_Anchor");

        if (eyeAnchor == null)
        {
            Debug.LogWarning("No encuentro Eye_Anchor dentro del avatar activo.");
            return;
        }

        foreach (Transform eye in eyeAnchor)
        {
            Renderer r = eye.GetComponent<Renderer>();
            if (r != null) r.material = mat;
        }
    }

    public void SetHairBlack()
    {
        SetHair(hairBlack);
    }

    public void SetHairLightBrown()
    {
        SetHair(hairLightBrown);
    }

    public void SetHairDarkBrown()
    {
        SetHair(hairDarkBrown);
    }

    public void SetHairBlonde()
    {
        SetHair(hairBlonde);
    }

    public void SetHairGray()
    {
        SetHair(hairGray);
    }

    void SetHair(Material mat)
    {
        Transform hairAnchor = activeAvatar.transform.Find("Hair_Anchor");

        if (hairAnchor == null)
        {
            Debug.LogWarning("No encuentro Hair_Anchor dentro del avatar activo.");
            return;
        }

        foreach (Transform hair in hairAnchor)
        {
            if (hair.gameObject.activeSelf)
            {
                Renderer r = hair.GetComponent<Renderer>();
                if (r != null) r.material = mat;
            }
        }
    }

    void SetOnlyActive(string anchorName, string selectedName)
    {
        Transform anchor = activeAvatar.transform.Find(anchorName);

        if (anchor == null)
        {
            Debug.LogWarning("No encuentro " + anchorName + " dentro del avatar activo.");
            return;
        }

        foreach (Transform child in anchor)
        {
            child.gameObject.SetActive(child.name == selectedName);
        }
    }
}