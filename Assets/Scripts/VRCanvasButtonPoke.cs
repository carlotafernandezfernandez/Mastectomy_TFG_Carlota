using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VRCanvasButtonPoke : MonoBehaviour
{
    public Canvas canvas;
    public Camera eventCamera;
    public OVRSkeleton leftSkeleton;
    public OVRSkeleton rightSkeleton;

    [Tooltip("Maximum distance from fingertip to button plane in meters.")]
    public float activationDistance = 0.025f;

    [Tooltip("Finger must stay on the same button for this long before click.")]
    public float requiredHoldTime = 0.35f;

    public float cooldown = 0.75f;

    readonly Dictionary<Button, float> lastPressTimes = new Dictionary<Button, float>();
    Button[] buttons;
    Button hoveredButton;
    float hoverStartTime;

    void Awake()
    {
        if (canvas == null)
            canvas = GetComponent<Canvas>();

        if (eventCamera == null && canvas != null)
            eventCamera = canvas.worldCamera;

        RefreshButtons();
    }

    void OnEnable()
    {
        hoveredButton = null;
        hoverStartTime = 0f;
        RefreshButtons();
    }

    void Update()
    {
        if (buttons == null || buttons.Length == 0)
            RefreshButtons();

        bool hasLeftTip = TryGetIndexTip(leftSkeleton, out Vector3 leftTip);
        bool hasRightTip = TryGetIndexTip(rightSkeleton, out Vector3 rightTip);

        Button bestButton = null;
        float bestDistance = float.MaxValue;

        if (hasLeftTip)
            FindBestButton(leftTip, ref bestButton, ref bestDistance);

        if (hasRightTip)
            FindBestButton(rightTip, ref bestButton, ref bestDistance);

        if (bestButton == null)
        {
            hoveredButton = null;
            hoverStartTime = 0f;
            return;
        }

        if (bestButton != hoveredButton)
        {
            hoveredButton = bestButton;
            hoverStartTime = Time.unscaledTime;
            return;
        }

        if (Time.unscaledTime - hoverStartTime >= requiredHoldTime)
        {
            PressButton(bestButton);
            hoveredButton = null;
            hoverStartTime = 0f;
        }
    }

    void RefreshButtons()
    {
        buttons = GetComponentsInChildren<Button>(true);
    }

    void FindBestButton(Vector3 fingerPosition, ref Button bestButton, ref float bestDistance)
    {
        foreach (Button button in buttons)
        {
            if (button == null || !button.gameObject.activeInHierarchy || !button.interactable)
                continue;

            RectTransform rect = button.transform as RectTransform;

            if (rect == null)
                continue;

            if (!IsFingerInside(rect, fingerPosition, out float distanceToPlane))
                continue;

            if (distanceToPlane < bestDistance)
            {
                bestDistance = distanceToPlane;
                bestButton = button;
            }
        }
    }

    bool IsFingerInside(RectTransform rect, Vector3 fingerPosition, out float distanceToPlane)
    {
        Vector3 localPoint = rect.InverseTransformPoint(fingerPosition);
        distanceToPlane = Mathf.Abs(Vector3.Dot(fingerPosition - rect.position, rect.forward));

        if (distanceToPlane > activationDistance)
            return false;

        return rect.rect.Contains(localPoint);
    }

    void PressButton(Button button)
    {
        if (lastPressTimes.TryGetValue(button, out float lastPressTime) && Time.unscaledTime - lastPressTime < cooldown)
            return;

        lastPressTimes[button] = Time.unscaledTime;
        button.onClick.Invoke();
    }

    static bool TryGetIndexTip(OVRSkeleton skeleton, out Vector3 position)
    {
        position = Vector3.zero;

        if (skeleton == null || !skeleton.IsInitialized || !skeleton.IsDataValid)
            return false;

        foreach (OVRBone bone in skeleton.Bones)
        {
            if (bone.Id == OVRSkeleton.BoneId.Hand_IndexTip || bone.Id == OVRSkeleton.BoneId.XRHand_IndexTip)
            {
                position = bone.Transform.position;
                return true;
            }
        }

        return false;
    }
}
