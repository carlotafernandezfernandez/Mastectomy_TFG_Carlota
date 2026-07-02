 using UnityEngine;

  public class AvatarSelectionManager : MonoBehaviour
  {
      [Header("Avatars")]
      public GameObject avatarSlim;
      public GameObject avatarMedium;
      public GameObject avatarWide;

      private GameObject activeAvatar;
      private int previewStage;
      private bool hasSelectedMastectomy;
      private bool hasSelectedEyes;
      private bool hasSelectedHairStyle;

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
          SetDefaultSelection();
          SetActiveAvatar(avatarSlim);
      }

      public void SetPreviewStage(int stage)
      {
          previewStage = stage;
          ApplyCurrentSelectionToActiveAvatar();
      }

      void SetDefaultSelection()
      {
          Save("SelectedAvatar", "Slim");
          Save("SelectedMastectomy", "Chest_NORMAL");
          Save("SelectedHairStyle", "Long Curly Hair");
          Save("SelectedSkin", "Medium");
          Save("SelectedEyes", "Brown");
          Save("SelectedHairColor", "DarkBrown");
      }

      public void SelectBodySlim()
      {
          Save("SelectedAvatar", "Slim");
          SetActiveAvatar(avatarSlim);
      }

      public void SelectBodyMedium()
      {
          Save("SelectedAvatar", "Medium");
          SetActiveAvatar(avatarMedium);
      }

      public void SelectBodyWide()
      {
          Save("SelectedAvatar", "Wide");
          SetActiveAvatar(avatarWide);
      }

      public void SelectMastectomyNormal()
      {
          hasSelectedMastectomy = true;
          Save("SelectedMastectomy", "Chest_NORMAL");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SelectMastectomyLeft()
      {
          hasSelectedMastectomy = true;
          Save("SelectedMastectomy", "Chest_LEFT");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SelectMastectomyRight()
      {
          hasSelectedMastectomy = true;
          Save("SelectedMastectomy", "Chest_RIGHT");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SelectMastectomyBilateral()
      {
          hasSelectedMastectomy = true;
          Save("SelectedMastectomy", "Chest_BILATERAL");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SelectHairLongCurly()
      {
          hasSelectedHairStyle = true;
          Save("SelectedHairStyle", "Long Curly Hair");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SelectHairLongStraight()
      {
          hasSelectedHairStyle = true;
          Save("SelectedHairStyle", "Long Straight Hair");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SelectHairMediumCurly()
      {
          hasSelectedHairStyle = true;
          Save("SelectedHairStyle", "Medium Curly Hair");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SelectHairShortCurly()
      {
          hasSelectedHairStyle = true;
          Save("SelectedHairStyle", "Short Curly Hair");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SelectHairShortStraight()
      {
          hasSelectedHairStyle = true;
          Save("SelectedHairStyle", "Short Straight Hair");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SetSkinLight()
      {
          Save("SelectedSkin", "Light");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SetSkinMedium()
      {
          Save("SelectedSkin", "Medium");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SetSkinDark()
      {
          Save("SelectedSkin", "Dark");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SetEyesBrown()
      {
          hasSelectedEyes = true;
          Save("SelectedEyes", "Brown");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SetEyesBlue()
      {
          hasSelectedEyes = true;
          Save("SelectedEyes", "Blue");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SetEyesGreen()
      {
          hasSelectedEyes = true;
          Save("SelectedEyes", "Green");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SetHairBlack()
      {
          Save("SelectedHairColor", "Black");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SetHairLightBrown()
      {
          Save("SelectedHairColor", "LightBrown");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SetHairDarkBrown()
      {
          Save("SelectedHairColor", "DarkBrown");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SetHairBlonde()
      {
          Save("SelectedHairColor", "Blonde");
          ApplyCurrentSelectionToActiveAvatar();
      }

      public void SetHairGray()
      {
          Save("SelectedHairColor", "Gray");
          ApplyCurrentSelectionToActiveAvatar();
      }

      void Save(string key, string value)
      {
          PlayerPrefs.SetString(key, value);
          PlayerPrefs.Save();
      }

      void SetActiveAvatar(GameObject avatar)
      {
          if (avatarSlim != null) avatarSlim.SetActive(false);
          if (avatarMedium != null) avatarMedium.SetActive(false);
          if (avatarWide != null) avatarWide.SetActive(false);

          if (avatar != null)
          {
              avatar.SetActive(true);
              activeAvatar = avatar;
              ApplyCurrentSelectionToActiveAvatar();
          }
      }

      void ApplyCurrentSelectionToActiveAvatar()
      {
          if (activeAvatar == null)
              return;

          bool showMastectomy = previewStage >= 1 && hasSelectedMastectomy;
          bool showEyes = previewStage >= 3 && hasSelectedEyes;
          bool showHairStyle = previewStage >= 4 && hasSelectedHairStyle;
          Material skinMaterial = GetSkinMaterial(PlayerPrefs.GetString("SelectedSkin", "Medium"));
          Material hairMaterial = GetHairMaterial(PlayerPrefs.GetString("SelectedHairColor", "DarkBrown"));

          SetBodySkin(skinMaterial);

          if (showMastectomy)
          {
              SetOnlyActive("Chest_Anchor", PlayerPrefs.GetString("SelectedMastectomy", "Chest_NORMAL"));
              SetChestSkin(skinMaterial);
          }
          else
          {
              SetAnchorChildrenActive("Chest_Anchor", false);
          }

          if (showEyes)
          {
              SetAnchorChildrenActive("Eye_Anchor", true);
              SetEyes(GetEyeMaterial(PlayerPrefs.GetString("SelectedEyes", "Brown")));
          }
          else
          {
              SetAnchorChildrenActive("Eye_Anchor", false);
          }

          if (showHairStyle)
          {
              SetOnlyActive("Hair_Anchor", PlayerPrefs.GetString("SelectedHairStyle", "Long Curly Hair"));
              SetHair(hairMaterial);
          }
          else
          {
              SetAnchorChildrenActive("Hair_Anchor", false);
          }
      }

      Material GetSkinMaterial(string value)
      {
          if (value == "Medium") return skinMedium;
          if (value == "Dark") return skinDark;
          return skinLight;
      }

      Material GetEyeMaterial(string value)
      {
          if (value == "Blue") return eyesBlue;
          if (value == "Green") return eyesGreen;
          return eyesBrown;
      }

      Material GetHairMaterial(string value)
      {
          if (value == "LightBrown") return hairLightBrown;
          if (value == "DarkBrown") return hairDarkBrown;
          if (value == "Blonde") return hairBlonde;
          if (value == "Gray") return hairGray;
          return hairBlack;
      }

      void SetSkin(Material mat)
      {
          if (activeAvatar == null || mat == null)
              return;

          SetBodySkin(mat);
          SetChestSkin(mat);
      }

      void SetBodySkin(Material mat)
      {
          Transform body = FindChildContaining(activeAvatar.transform, "BODY");

          if (body == null)
              return;

          Renderer renderer = body.GetComponentInChildren<Renderer>(true);
          if (renderer != null)
              renderer.material = mat;
      }

      void SetChestSkin(Material mat)
      {
          Transform chestAnchor = FindChildRecursive(activeAvatar.transform, "Chest_Anchor");

          if (chestAnchor == null)
              return;

          Renderer[] chestRenderers = chestAnchor.GetComponentsInChildren<Renderer>(true);

          foreach (Renderer renderer in chestRenderers)
          {
              renderer.material = mat;
          }
      }

      Transform FindChildContaining(Transform parent, string text)
      {
          if (parent == null)
              return null;

          if (parent.name.ToLower().Contains(text.ToLower()))
              return parent;

          foreach (Transform child in parent)
          {
              Transform result = FindChildContaining(child, text);

              if (result != null)
                  return result;
          }

          return null;
      }

      void SetEyes(Material mat)
      {
          if (activeAvatar == null || mat == null)
              return;

          Transform eyeAnchor = FindChildRecursive(activeAvatar.transform, "Eye_Anchor");

          if (eyeAnchor == null)
              return;

          foreach (Transform eye in eyeAnchor)
          {
              Renderer renderer = eye.GetComponent<Renderer>();
              if (renderer != null)
                  renderer.material = mat;
          }
      }

      void SetHair(Material mat)
      {
          if (activeAvatar == null || mat == null)
              return;

          Transform hairAnchor = FindChildRecursive(activeAvatar.transform, "Hair_Anchor");

          if (hairAnchor == null)
              return;

          foreach (Transform hair in hairAnchor)
          {
              if (!hair.gameObject.activeSelf)
                  continue;

              Renderer renderer = hair.GetComponentInChildren<Renderer>(true);
              if (renderer != null)
                  renderer.material = mat;
          }
      }

      void SetOnlyActive(string anchorName, string selectedName)
      {
          if (activeAvatar == null)
              return;

          Transform anchor = FindChildRecursive(activeAvatar.transform, anchorName);

          if (anchor == null)
              return;

          foreach (Transform child in anchor)
          {
              string childName = child.name.Trim();

              if (anchorName == "Chest_Anchor" && !childName.StartsWith("Chest_"))
                  continue;

              child.gameObject.SetActive(childName == selectedName);
          }
      }

      void SetAnchorChildrenActive(string anchorName, bool isActive)
      {
          if (activeAvatar == null)
              return;

          Transform anchor = FindChildRecursive(activeAvatar.transform, anchorName);

          if (anchor == null)
              return;

          foreach (Transform child in anchor)
          {
              string childName = child.name.Trim();

              if (anchorName == "Chest_Anchor" && !childName.StartsWith("Chest_"))
                  continue;

              child.gameObject.SetActive(isActive);
          }
      }

      Transform FindChildRecursive(Transform parent, string childName)
      {
          if (parent == null)
              return null;

          if (parent.name.Trim() == childName)
              return parent;

          foreach (Transform child in parent)
          {
              Transform result = FindChildRecursive(child, childName);

              if (result != null)
                  return result;
          }

          return null;
      }
  }
