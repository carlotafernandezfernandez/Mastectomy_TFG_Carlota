import math
import os

import bpy


# ---------------------------------------------------------------------------
# Fit controls
# ---------------------------------------------------------------------------
# The avatar head is approximately centered here in Unity/Blender world space.
# If the hair appears too high or low, adjust HEAD_CENTER_Y.
HEAD_CENTER_X = 0.0
HEAD_CENTER_Y = 1.55
HEAD_CENTER_Z = 0.0

# Overall fitting controls. Increase WIDTH_SCALE for wider heads, DEPTH_SCALE
# for deeper front/back fit, and HEIGHT_SCALE for taller or shorter hair volume.
WIDTH_SCALE = 1.0
DEPTH_SCALE = 1.0
HEIGHT_SCALE = 1.0

# Bob shape controls. These are intentionally simple and low-poly for Quest VR.
HEAD_WIDTH = 0.34
HEAD_DEPTH = 0.30
TOP_HEIGHT = 0.25
SIDE_LENGTH = 0.33
BACK_LENGTH = 0.39

# Where the FBX will be written, relative to this script's location.
EXPORT_RELATIVE_PATH = os.path.join("Assets", "Models", "Avatar", "Hair", "Hair_Bob.fbx")


def clear_existing_hair():
    """Remove old generated hair object if the script is run more than once."""
    old = bpy.data.objects.get("Hair_Bob")
    if old:
        bpy.data.objects.remove(old, do_unlink=True)


def make_material():
    """Create or replace the simple brown hair material."""
    old = bpy.data.materials.get("Mat_Hair_Brown")
    if old:
        bpy.data.materials.remove(old)

    mat = bpy.data.materials.new("Mat_Hair_Brown")
    mat.diffuse_color = (74 / 255, 44 / 255, 26 / 255, 1.0)  # #4A2C1A
    return mat


def oval_ring(center_y, radius_x, radius_z, segments, y_offsets=None):
    """Create one horizontal oval ring of vertices."""
    verts = []
    for i in range(segments):
        angle = (math.tau * i) / segments
        y_offset = 0.0 if y_offsets is None else y_offsets[i]
        verts.append(
            (
                HEAD_CENTER_X + math.cos(angle) * radius_x,
                center_y + y_offset,
                HEAD_CENTER_Z + math.sin(angle) * radius_z,
            )
        )
    return verts


def build_bob_mesh():
    """Build a single low-poly rounded bob mesh with top, sides, and back."""
    segments = 12
    base_y = HEAD_CENTER_Y

    width = HEAD_WIDTH * WIDTH_SCALE
    depth = HEAD_DEPTH * DEPTH_SCALE
    top = TOP_HEIGHT * HEIGHT_SCALE
    side_len = SIDE_LENGTH * HEIGHT_SCALE
    back_len = BACK_LENGTH * HEIGHT_SCALE

    crown_y = base_y + top
    temple_y = base_y + 0.08 * HEIGHT_SCALE
    jaw_y = base_y - side_len
    nape_y = base_y - back_len

    # Slightly lower the rear vertices on lower rings so the bob has a longer
    # back volume while the front stays closer to the cheek/jaw line.
    lower_offsets = []
    for i in range(segments):
        angle = (math.tau * i) / segments
        rear_weight = max(0.0, math.sin(angle))
        lower_offsets.append(-0.07 * HEIGHT_SCALE * rear_weight)

    verts = []
    verts.append((HEAD_CENTER_X, crown_y + 0.03 * HEIGHT_SCALE, HEAD_CENTER_Z))
    ring_top_start = len(verts)
    verts.extend(oval_ring(crown_y - 0.02 * HEIGHT_SCALE, width * 0.62, depth * 0.60, segments))
    ring_mid_start = len(verts)
    verts.extend(oval_ring(temple_y, width * 0.98, depth * 0.94, segments))
    ring_low_start = len(verts)
    verts.extend(oval_ring(jaw_y, width * 0.88, depth * 0.86, segments, lower_offsets))

    # Back skirt points make the bob read as fuller from behind and end near the
    # neck. They are kept coarse to preserve a low triangle count.
    back_left = len(verts)
    verts.append((HEAD_CENTER_X - width * 0.52, nape_y, HEAD_CENTER_Z + depth * 0.72))
    back_center = len(verts)
    verts.append((HEAD_CENTER_X, nape_y - 0.03 * HEIGHT_SCALE, HEAD_CENTER_Z + depth * 0.82))
    back_right = len(verts)
    verts.append((HEAD_CENTER_X + width * 0.52, nape_y, HEAD_CENTER_Z + depth * 0.72))

    faces = []

    # Top cap.
    for i in range(segments):
        faces.append((0, ring_top_start + i, ring_top_start + ((i + 1) % segments)))

    # Rounded shell rings.
    for start_a, start_b in ((ring_top_start, ring_mid_start), (ring_mid_start, ring_low_start)):
        for i in range(segments):
            a0 = start_a + i
            a1 = start_a + ((i + 1) % segments)
            b0 = start_b + i
            b1 = start_b + ((i + 1) % segments)
            faces.append((a0, b0, b1, a1))

    # Close lower front/sides with simple triangles to avoid an open shell.
    bottom_center = len(verts)
    verts.append((HEAD_CENTER_X, jaw_y - 0.02 * HEIGHT_SCALE, HEAD_CENTER_Z - depth * 0.15))
    for i in range(segments):
        faces.append((bottom_center, ring_low_start + ((i + 1) % segments), ring_low_start + i))

    # Extra back volume panel, attached to the rear lower ring.
    rear_indices = [ring_low_start + 2, ring_low_start + 3, ring_low_start + 4]
    faces.append((rear_indices[0], back_right, back_center, rear_indices[1]))
    faces.append((rear_indices[1], back_center, back_left, rear_indices[2]))

    mesh = bpy.data.meshes.new("Hair_Bob_Mesh")
    mesh.from_pydata(verts, [], faces)
    mesh.update()

    obj = bpy.data.objects.new("Hair_Bob", mesh)
    bpy.context.collection.objects.link(obj)

    # Give the hair slightly faceted normals for a low-poly look, but make the
    # silhouette read smoothly enough for a simple avatar hairstyle.
    bpy.context.view_layer.objects.active = obj
    obj.select_set(True)
    bpy.ops.object.shade_flat()

    return obj


def export_fbx(obj):
    """Export only the generated hair object to the Unity project."""
    script_dir = os.path.dirname(os.path.abspath(__file__))
    export_path = os.path.join(script_dir, EXPORT_RELATIVE_PATH)
    os.makedirs(os.path.dirname(export_path), exist_ok=True)

    bpy.ops.object.select_all(action="DESELECT")
    obj.select_set(True)
    bpy.context.view_layer.objects.active = obj

    bpy.ops.export_scene.fbx(
        filepath=export_path,
        use_selection=True,
        object_types={"MESH"},
        apply_scale_options="FBX_SCALE_NONE",
        bake_space_transform=False,
        add_leaf_bones=False,
        mesh_smooth_type="FACE",
    )
    return export_path


def main():
    clear_existing_hair()
    mat = make_material()
    hair = build_bob_mesh()
    hair.data.materials.append(mat)

    export_path = export_fbx(hair)
    print(f"Created Hair_Bob and exported FBX to: {export_path}")


if __name__ == "__main__":
    main()
