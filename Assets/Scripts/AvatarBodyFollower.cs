using UnityEngine;

public class AvatarBodyFollower : MonoBehaviour
{
    [Header("Head / Body")]
    public Transform centerEyeAnchor;
    public Transform avatarRoot;
    public Transform avatarHeadAnchor;

    [Header("Body Settings")]
    public bool followYaw = true;
    public float avatarYawOffsetDegrees = 180f;
    public bool keepAvatarRootOnFloor = false;
    public float avatarRootWorldY = 0f;

    [Tooltip("Use this only for tiny corrections. Positive Z places the avatar head slightly in front of the real eyes.")]
    public Vector3 headWorldOffset = Vector3.zero;

    [Header("Arm Tracking")]
    public bool followArms = true;
    public Transform avatarBoneRoot;
    public Transform leftHandAnchor;
    public Transform rightHandAnchor;
    public Transform avatarLeftUpperArm;
    public Transform avatarLeftForeArm;
    public Transform avatarLeftHand;
    public Transform avatarRightUpperArm;
    public Transform avatarRightForeArm;
    public Transform avatarRightHand;

    [Tooltip("Moves the fake elbow down. Increase if the arm looks too straight.")]
    public float elbowBendDown = 0.22f;

    [Tooltip("Moves the fake elbow slightly out to the side. Increase if elbows collapse into the body.")]
    public float elbowBendSide = 0.12f;

    [Header("Hand Tracking - disabled when using Meta hand mesh")]
    public bool followHands = false;
    public Vector3 leftHandPositionOffset;
    public Vector3 rightHandPositionOffset;
    public Vector3 leftHandRotationOffset;
    public Vector3 rightHandRotationOffset;

    [Header("Finger Tracking - disabled when using Meta hand mesh")]
    public bool followFingers = false;
    public OVRSkeleton leftSkeleton;
    public OVRSkeleton rightSkeleton;

    void Awake()
    {
        AutoAssignAvatarArmBones();
    }

    void LateUpdate()
    {
        FollowHeadAndBody();
        AutoAssignAvatarArmBones();
        FollowArms();
        FollowHands();
        FollowFingers();
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
        Vector3 correction = targetHeadPosition - avatarHeadAnchor.position;
        avatarRoot.position += correction;

        if (keepAvatarRootOnFloor)
        {
            avatarRoot.position = new Vector3(
                avatarRoot.position.x,
                avatarRootWorldY,
                avatarRoot.position.z
            );
        }
    }

    void FollowArms()
    {
        if (!followArms)
            return;

        SolveArm(
            leftHandAnchor,
            avatarLeftUpperArm,
            avatarLeftForeArm,
            avatarLeftHand,
            -1f
        );

        SolveArm(
            rightHandAnchor,
            avatarRightUpperArm,
            avatarRightForeArm,
            avatarRightHand,
            1f
        );
    }

    void SolveArm(
        Transform trackedHand,
        Transform upperArm,
        Transform foreArm,
        Transform avatarHand,
        float sideSign)
    {
        if (trackedHand == null || upperArm == null || foreArm == null || avatarHand == null)
            return;

        Vector3 shoulder = upperArm.position;
        Vector3 targetHand = trackedHand.position;
        Vector3 shoulderToHand = targetHand - shoulder;

        if (shoulderToHand.sqrMagnitude < 0.0001f)
            return;

        float upperLength = Vector3.Distance(upperArm.position, foreArm.position);
        float foreLength = Vector3.Distance(foreArm.position, avatarHand.position);
        float armLength = Mathf.Max(upperLength + foreLength, 0.01f);
        float targetDistance = Mathf.Min(shoulderToHand.magnitude, armLength * 0.98f);

        Vector3 forward = shoulderToHand.normalized;
        Vector3 side = avatarRoot != null ? avatarRoot.right * sideSign : Vector3.right * sideSign;
        Vector3 down = avatarRoot != null ? -avatarRoot.up : Vector3.down;
        Vector3 bendDirection = Vector3.ProjectOnPlane((down * elbowBendDown) + (side * elbowBendSide), forward).normalized;

        if (bendDirection.sqrMagnitude < 0.0001f)
            bendDirection = Vector3.ProjectOnPlane(Vector3.down, forward).normalized;

        float a = ((upperLength * upperLength) - (foreLength * foreLength) + (targetDistance * targetDistance)) / (2f * targetDistance);
        float hSquared = Mathf.Max((upperLength * upperLength) - (a * a), 0f);
        float h = Mathf.Sqrt(hSquared);

        Vector3 elbow = shoulder + forward * a + bendDirection * h;

        RotateBoneTowardChild(upperArm, foreArm, elbow - shoulder);
        RotateBoneTowardChild(foreArm, avatarHand, targetHand - foreArm.position);
    }

    static void RotateBoneTowardChild(Transform bone, Transform child, Vector3 targetDirection)
    {
        if (bone == null || child == null || targetDirection.sqrMagnitude < 0.0001f)
            return;

        Vector3 currentDirection = child.position - bone.position;

        if (currentDirection.sqrMagnitude < 0.0001f)
            return;

        Quaternion delta = Quaternion.FromToRotation(currentDirection.normalized, targetDirection.normalized);
        bone.rotation = delta * bone.rotation;
    }

    void FollowHands()
    {
        if (!followHands)
            return;

        CopyTrackedHand(leftHandAnchor, avatarLeftHand, leftHandPositionOffset, leftHandRotationOffset);
        CopyTrackedHand(rightHandAnchor, avatarRightHand, rightHandPositionOffset, rightHandRotationOffset);
    }

    static void CopyTrackedHand(
        Transform trackedHand,
        Transform avatarHand,
        Vector3 positionOffset,
        Vector3 rotationOffset)
    {
        if (trackedHand == null || avatarHand == null)
            return;

        avatarHand.position = trackedHand.TransformPoint(positionOffset);
        avatarHand.rotation = trackedHand.rotation * Quaternion.Euler(rotationOffset);
    }

    void FollowFingers()
    {
        if (!followFingers || avatarBoneRoot == null)
            return;

        CopyHandSkeleton(leftSkeleton, "mixamorig:LeftHand");
        CopyHandSkeleton(rightSkeleton, "mixamorig:RightHand");
    }

    void CopyHandSkeleton(OVRSkeleton skeleton, string prefix)
    {
        if (skeleton == null || !skeleton.IsInitialized || !skeleton.IsDataValid)
            return;

        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Thumb1, prefix + "Thumb1");
        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Thumb2, prefix + "Thumb2");
        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Thumb3, prefix + "Thumb3");

        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Index1, prefix + "Index1");
        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Index2, prefix + "Index2");
        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Index3, prefix + "Index3");

        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Middle1, prefix + "Middle1");
        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Middle2, prefix + "Middle2");
        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Middle3, prefix + "Middle3");

        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Ring1, prefix + "Ring1");
        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Ring2, prefix + "Ring2");
        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Ring3, prefix + "Ring3");

        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Pinky1, prefix + "Pinky1");
        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Pinky2, prefix + "Pinky2");
        CopyFingerBone(skeleton, OVRSkeleton.BoneId.Hand_Pinky3, prefix + "Pinky3");
    }

    void CopyFingerBone(OVRSkeleton skeleton, OVRSkeleton.BoneId sourceId, string avatarBoneName)
    {
        Transform sourceBone = GetOVRBone(skeleton, sourceId);
        Transform targetBone = FindChildRecursive(avatarBoneRoot, avatarBoneName);

        if (sourceBone == null || targetBone == null)
            return;

        targetBone.rotation = sourceBone.rotation;
    }

    Transform GetOVRBone(OVRSkeleton skeleton, OVRSkeleton.BoneId boneId)
    {
        foreach (OVRBone bone in skeleton.Bones)
        {
            if (bone.Id == boneId)
                return bone.Transform;
        }

        return null;
    }

    void AutoAssignAvatarArmBones()
    {
        if (avatarBoneRoot == null)
            return;

        if (avatarLeftUpperArm == null)
            avatarLeftUpperArm = FindChildRecursive(avatarBoneRoot, "mixamorig:LeftArm");

        if (avatarLeftForeArm == null)
            avatarLeftForeArm = FindChildRecursive(avatarBoneRoot, "mixamorig:LeftForeArm");

        if (avatarLeftHand == null)
            avatarLeftHand = FindChildRecursive(avatarBoneRoot, "mixamorig:LeftHand");

        if (avatarRightUpperArm == null)
            avatarRightUpperArm = FindChildRecursive(avatarBoneRoot, "mixamorig:RightArm");

        if (avatarRightForeArm == null)
            avatarRightForeArm = FindChildRecursive(avatarBoneRoot, "mixamorig:RightForeArm");

        if (avatarRightHand == null)
            avatarRightHand = FindChildRecursive(avatarBoneRoot, "mixamorig:RightHand");
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
