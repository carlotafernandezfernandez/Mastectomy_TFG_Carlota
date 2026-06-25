using UnityEngine;

public class ShirtInteraction : MonoBehaviour
{
    public InstructionManager instructionManager;

    private bool removed = false;

    public void RemoveShirt()
    {
        if (removed) return;

        removed = true;

        gameObject.SetActive(false);

        if (instructionManager != null)
        {
            instructionManager.RemoveShirt(gameObject);
        }
    }
}