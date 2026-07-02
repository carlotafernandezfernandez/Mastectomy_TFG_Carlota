using UnityEngine;

public class OpenCloseDoor : MonoBehaviour
{
    [Header("Door Rotation")]
    public float closedAngle = 0f;
    public float openAngle = 90f;
    public float speed = 2f;
    public Vector3 rotationAxis = Vector3.up;

    [Header("Hand Interaction")]
    public bool allowNameFallback = true;
    public float toggleCooldown = 1f;

    private bool isOpen = false;
    private float lastToggleTime = -999f;

    private void Update()
    {
        float targetAngle = isOpen ? openAngle : closedAngle;
        Quaternion targetRotation = Quaternion.AngleAxis(targetAngle, rotationAxis);

        transform.localRotation = Quaternion.Lerp(
            transform.localRotation,
            targetRotation,
            Time.deltaTime * speed
        );
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!HandInteractionDetector.IsHand(other, allowNameFallback))
            return;

        if (Time.time - lastToggleTime < toggleCooldown)
            return;

        isOpen = !isOpen;
        lastToggleTime = Time.time;
    }
}
