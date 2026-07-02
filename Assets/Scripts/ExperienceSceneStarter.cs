using UnityEngine;

  public class ExperienceSceneStarter : MonoBehaviour
  {
      [Header("Avatars")]
      public GameObject avatarSlim;
      public GameObject avatarMedium;
      public GameObject avatarWide;

      [Header("Materials")]
      public Material skinLight;
      public Material skinMedium;
      public Material skinDark;

      public Material eyesBrown;
      public Material eyesBlue;
      public Material eyesGreen;

      public Material hairBlack;
      public Material hairLightBrown;
      public Material hairDarkBrown;
      public Material hairBlonde;
      public Material hairGray;

      [Header("XR")]
      public GameObject xrOrigin;
      public Vector3 spawnPoint = new Vector3(2.4f, 1.55f, 0.15f);

      [Header("Instructions")]
      public InstructionManager instructionManager;

      GameObject activeAvatar;

      void Start()
      {
          ActivateSelectedAvatar();
          ApplySelectedOptions();
          PlaceXROriginAtSpawn();

          if (instructionManager != null)
              instructionManager.StartInstructions();
      }

      void ActivateSelectedAvatar()
      {
          string selectedAvatar = PlayerPrefs.GetString("SelectedAvatar", "Slim");

          if (avatarSlim != null) avatarSlim.SetActive(false);
          if (avatarMedium != null) avatarMedium.SetActive(false);
          if (avatarWide != null) avatarWide.SetActive(false);

          if (selectedAvatar == "Medium")
              activeAvatar = avatarMedium;
          else if (selectedAvatar == "Wide")
              activeAvatar = avatarWide;
          else
              activeAvatar = avatarSlim;

          if (activeAvatar != null)
              activeAvatar.SetActive(true);
      }

      void ApplySelectedOptions()
      {
          if (activeAvatar == null)
              return;

          string mastectomy = PlayerPrefs.GetString("SelectedMastectomy", "Chest_NORMAL");
          string hairStyle = PlayerPrefs.GetString("SelectedHairStyle", "Long Curly Hair");
          string skin = PlayerPrefs.GetString("SelectedSkin", "Light");
          string eyes = PlayerPrefs.GetString("SelectedEyes", "Brown");
          string hairColor = PlayerPrefs.GetString("SelectedHairColor", "Black");

          SetOnlyActive("Chest_Anchor", mastectomy);
          SetOnlyActive("Hair_Anchor", hairStyle);

          SetSkin(GetSkinMaterial(skin));
          SetEyes(GetEyeMaterial(eyes));
          SetHair(GetHairMaterial(hairColor));
      }

      void PlaceXROriginAtSpawn()
      {
          if (xrOrigin == null)
              return;

          xrOrigin.SetActive(true);

          Transform centerEye = xrOrigin.transform.Find("TrackingSpace/CenterEyeAnchor");

          if (centerEye == null)
          {
              xrOrigin.transform.position = spawnPoint;
              return;
          }

          Vector3 eyeOffset = centerEye.position - xrOrigin.transform.position;
          eyeOffset.y = 0f;

          xrOrigin.transform.position = spawnPoint - eyeOffset;
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
          if (mat == null)
              return;

          Transform eyeAnchor = activeAvatar.transform.Find("Eye_Anchor");

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
          if (mat == null)
              return;

          Transform hairAnchor = activeAvatar.transform.Find("Hair_Anchor");

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

      Transform FindChildRecursive(Transform parent, string childName)
      {
          if (parent == null)
              return null;

          if (parent.name == childName)
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
