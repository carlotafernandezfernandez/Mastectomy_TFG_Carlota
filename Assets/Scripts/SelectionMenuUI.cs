using UnityEngine;
using UnityEngine.SceneManagement;

public class SelectionMenuUI : MonoBehaviour
{
    public GameObject[] panels;

    [Header("Preview")]
    public AvatarSelectionManager avatarSelectionManager;

    [Header("Scene")]
    public string experienceSceneName = "MyProject";

    int currentPanelIndex = 0;

    void Start()
    {
        ShowPanel(0);
    }

    public void ShowPanel(int index)
    {
        if (panels == null || panels.Length == 0)
            return;

        currentPanelIndex = Mathf.Clamp(index, 0, panels.Length - 1);

        for (int i = 0; i < panels.Length; i++)
        {
            if (panels[i] != null)
                panels[i].SetActive(i == currentPanelIndex);
        }

        if (avatarSelectionManager != null)
            avatarSelectionManager.SetPreviewStage(currentPanelIndex);
    }

    public void NextPanel()
    {
        ShowPanel(currentPanelIndex + 1);
    }

    public void PreviousPanel()
    {
        ShowPanel(currentPanelIndex - 1);
    }

    public void StartExperience()
    {
        SceneManager.LoadScene(experienceSceneName);
    }
}
