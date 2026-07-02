using UnityEngine;

public class AvatarBodyFollower : MonoBehaviour
{
    [Header("Head / Body")]
    public Transform centerEyeAnchor;
    public Transform avatarRoot;
    public Transform avatarHeadAnchor;

    [Header("Active Avatar")]
    public bool autoUseActiveAvatar = true;
    public string headAnchorName = "VR_HeadAnchor";

    [Header("Body Settings")]
    public bool followYaw = true;
    public float avatarYawOffsetDegrees = 180f;

    [Tooltip("Keep this at 0 to put the headset exactly at the avatar eye/head anchor.")]
    public Vector3 headWorldOffset = Vector3.zero;

    Transform currentAvatarRoot;

    void Awake()
    {
        RefreshActiveAvatarReferences();
    }

    void LateUpdate()
    {
        RefreshActiveAvatarReferences();
        FollowHeadAndBody();
    }

    void RefreshActiveAvatarReferences()
    {
        if (!autoUseActiveAvatar || avatarRoot == null)
            return;

        Transform activeAvatar = FindActiveAvatarUnder(avatarRoot);

        if (activeAvatar == null || activeAvatar == currentAvatarRoot)
            return;

        currentAvatarRoot = activeAvatar;
        avatarHeadAnchor = FindChildRecursive(activeAvatar, headAnchorName);
    }

    Transform FindActiveAvatarUnder(Transform parent)
    {
        if (parent == null)
            return null;

        for (int i = 0; i < parent.childCount; i++)
        {
            Transform child = parent.GetChild(i);

            if (!child.gameObject.activeInHierarchy)
                continue;

            if (FindChildRecursive(child, headAnchorName) != null)
                return child;
        }

        return null;
    }

    void FollowHeadAndBody()
    {
        if (centerEyeAnchor == null || avatarRoot == null || avatarHeadAnchor == null)
            return;

        if (followYaw)
        {
            float yaw = centerEyeAnchor.eulerAngles.y + avatarYawOffsetDegrees;
            avatarRoot.rotation = Quaternion.Euler(0f, yaw, 0f);
        }

        Vector3 targetHeadPosition = centerEyeAnchor.position + headWorldOffset;
        avatarRoot.position += targetHeadPosition - avatarHeadAnchor.position;
    }

    Transform FindChildRecursive(Transform parent, string name)
    {
        if (parent == null)
            return null;

        if (parent.name == name)
            return parent;

        foreach (Transform child in parent)
        {
            Transform result = FindChildRecursive(child, name);

            if (result != null)
                return result;
        }

        return null;
    }
}
