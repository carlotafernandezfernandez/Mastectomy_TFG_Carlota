using UnityEngine;

public class SelectionMenuUI : MonoBehaviour
{
    public GameObject[] panels;

    [Header("Experience Objects")]
    public GameObject selectionMenu;
    public GameObject bathroomScene;
    public GameObject xrOrigin;

    [Header("Avatar Selection")]
    public AvatarSelectionManager avatarSelectionManager;

    [Header("Instructions")]
    public InstructionManager instructionManager;

    public void ShowPanel(int index)
    {
        for (int i = 0; i < panels.Length; i++)
        {
            panels[i].SetActive(i == index);
        }
    }

     public void StartExperience()
    {
      selectionMenu.SetActive(false);

      if (bathroomScene != null)
          bathroomScene.SetActive(true);

      if (xrOrigin != null)
      {
          xrOrigin.SetActive(true);

          Transform centerEye = xrOrigin.transform.Find("TrackingSpace/CenterEyeAnchor");
          Vector3 spawnPoint = new Vector3(0f, 0.3f, 0f);

          if (centerEye != null)
          {
              Vector3 eyeOffset = centerEye.position - xrOrigin.transform.position;
              eyeOffset.y = 0f;
              xrOrigin.transform.position = spawnPoint - eyeOffset;
          }
      }

      GameObject selectedAvatar = avatarSelectionManager.GetActiveAvatar();

      if (selectedAvatar == null)
      {
          Debug.LogWarning("No active avatar selected.");
          return;
      }

      Transform headAnchor = selectedAvatar.transform.Find("VR_HeadAnchor");

      if (headAnchor == null)
      {
          Debug.LogWarning("No VR_HeadAnchor found in selected avatar.");
          return;
      }

      if (instructionManager != null)
      {
          instructionManager.StartInstructions();
      }
    }

}