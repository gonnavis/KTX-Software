/*
 * Vulkan Samples
 *
 * Copyright 2015-2016 Valve Corporation
 * Copyright 2015-2016 LunarG, Inc.
 * SPDX-License-Identifier: Apache-2.0
 */

//--------------------------------------------------------------------------------------
// Mesh and VertexFormat Data
//--------------------------------------------------------------------------------------
struct Vertex {
    float posX, posY, posZ, posW; // Position data
    float r, g, b, a;             // Color
};

struct VertexUV {
    float posX, posY, posZ, posW; // Position data
    float u, v;                   // texture u,v
};

#define XYZ1(_x_, _y_, _z_) (_x_), (_y_), (_z_), 1.f
#define UV(_u_, _v_) (_u_), (_v_)

static const Vertex g_vbData[] = {
    {XYZ1(-1, -1, -1), XYZ1(0.f, 0.f, 0.f)},
    {XYZ1(1, -1, -1), XYZ1(1.f, 0.f, 0.f)},
    {XYZ1(-1, 1, -1), XYZ1(0.f, 1.f, 0.f)},
    {XYZ1(-1, 1, -1), XYZ1(0.f, 1.f, 0.f)},
    {XYZ1(1, -1, -1), XYZ1(1.f, 0.f, 0.f)},
    {XYZ1(1, 1, -1), XYZ1(1.f, 1.f, 0.f)},

    {XYZ1(-1, -1, 1), XYZ1(0.f, 0.f, 1.f)},
    {XYZ1(-1, 1, 1), XYZ1(0.f, 1.f, 1.f)},
    {XYZ1(1, -1, 1), XYZ1(1.f, 0.f, 1.f)},
    {XYZ1(1, -1, 1), XYZ1(1.f, 0.f, 1.f)},
    {XYZ1(-1, 1, 1), XYZ1(0.f, 1.f, 1.f)},
    {XYZ1(1, 1, 1), XYZ1(1.f, 1.f, 1.f)},

    {XYZ1(1, 1, 1), XYZ1(1.f, 1.f, 1.f)},
    {XYZ1(1, 1, -1), XYZ1(1.f, 1.f, 0.f)},
    {XYZ1(1, -1, 1), XYZ1(1.f, 0.f, 1.f)},
    {XYZ1(1, -1, 1), XYZ1(1.f, 0.f, 1.f)},
    {XYZ1(1, 1, -1), XYZ1(1.f, 1.f, 0.f)},
    {XYZ1(1, -1, -1), XYZ1(1.f, 0.f, 0.f)},

    {XYZ1(-1, 1, 1), XYZ1(0.f, 1.f, 1.f)},
    {XYZ1(-1, -1, 1), XYZ1(0.f, 0.f, 1.f)},
    {XYZ1(-1, 1, -1), XYZ1(0.f, 1.f, 0.f)},
    {XYZ1(-1, 1, -1), XYZ1(0.f, 1.f, 0.f)},
    {XYZ1(-1, -1, 1), XYZ1(0.f, 0.f, 1.f)},
    {XYZ1(-1, -1, -1), XYZ1(0.f, 0.f, 0.f)},

    {XYZ1(1, 1, 1), XYZ1(1.f, 1.f, 1.f)},
    {XYZ1(-1, 1, 1), XYZ1(0.f, 1.f, 1.f)},
    {XYZ1(1, 1, -1), XYZ1(1.f, 1.f, 0.f)},
    {XYZ1(1, 1, -1), XYZ1(1.f, 1.f, 0.f)},
    {XYZ1(-1, 1, 1), XYZ1(0.f, 1.f, 1.f)},
    {XYZ1(-1, 1, -1), XYZ1(0.f, 1.f, 0.f)},

    {XYZ1(1, -1, 1), XYZ1(1.f, 0.f, 1.f)},
    {XYZ1(1, -1, -1), XYZ1(1.f, 0.f, 0.f)},
    {XYZ1(-1, -1, 1), XYZ1(0.f, 0.f, 1.f)},
    {XYZ1(-1, -1, 1), XYZ1(0.f, 0.f, 1.f)},
    {XYZ1(1, -1, -1), XYZ1(1.f, 0.f, 0.f)},
    {XYZ1(-1, -1, -1), XYZ1(0.f, 0.f, 0.f)},
};

static const Vertex g_vb_solid_face_colors_Data[] = {
    {XYZ1(-1, -1, -1), XYZ1(1.f, 0.f, 0.f)},
    {XYZ1(1, -1, -1), XYZ1(1.f, 0.f, 0.f)},
    {XYZ1(-1, 1, -1), XYZ1(1.f, 0.f, 0.f)},
    {XYZ1(-1, 1, -1), XYZ1(1.f, 0.f, 0.f)},
    {XYZ1(1, -1, -1), XYZ1(1.f, 0.f, 0.f)},
    {XYZ1(1, 1, -1), XYZ1(1.f, 0.f, 0.f)},

    {XYZ1(-1, -1, 1), XYZ1(0.f, 1.f, 0.f)},
    {XYZ1(-1, 1, 1), XYZ1(0.f, 1.f, 0.f)},
    {XYZ1(1, -1, 1), XYZ1(0.f, 1.f, 0.f)},
    {XYZ1(1, -1, 1), XYZ1(0.f, 1.f, 0.f)},
    {XYZ1(-1, 1, 1), XYZ1(0.f, 1.f, 0.f)},
    {XYZ1(1, 1, 1), XYZ1(0.f, 1.f, 0.f)},

    {XYZ1(1, 1, 1), XYZ1(0.f, 0.f, 1.f)},
    {XYZ1(1, 1, -1), XYZ1(0.f, 0.f, 1.f)},
    {XYZ1(1, -1, 1), XYZ1(0.f, 0.f, 1.f)},
    {XYZ1(1, -1, 1), XYZ1(0.f, 0.f, 1.f)},
    {XYZ1(1, 1, -1), XYZ1(0.f, 0.f, 1.f)},
    {XYZ1(1, -1, -1), XYZ1(0.f, 0.f, 1.f)},

    {XYZ1(-1, 1, 1), XYZ1(1.f, 1.f, 0.f)},
    {XYZ1(-1, -1, 1), XYZ1(1.f, 1.f, 0.f)},
    {XYZ1(-1, 1, -1), XYZ1(1.f, 1.f, 0.f)},
    {XYZ1(-1, 1, -1), XYZ1(1.f, 1.f, 0.f)},
    {XYZ1(-1, -1, 1), XYZ1(1.f, 1.f, 0.f)},
    {XYZ1(-1, -1, -1), XYZ1(1.f, 1.f, 0.f)},

    {XYZ1(1, 1, 1), XYZ1(1.f, 0.f, 1.f)},
    {XYZ1(-1, 1, 1), XYZ1(1.f, 0.f, 1.f)},
    {XYZ1(1, 1, -1), XYZ1(1.f, 0.f, 1.f)},
    {XYZ1(1, 1, -1), XYZ1(1.f, 0.f, 1.f)},
    {XYZ1(-1, 1, 1), XYZ1(1.f, 0.f, 1.f)},
    {XYZ1(-1, 1, -1), XYZ1(1.f, 0.f, 1.f)},

    {XYZ1(1, -1, 1), XYZ1(0.f, 1.f, 1.f)},
    {XYZ1(1, -1, -1), XYZ1(0.f, 1.f, 1.f)},
    {XYZ1(-1, -1, 1), XYZ1(0.f, 1.f, 1.f)},
    {XYZ1(-1, -1, 1), XYZ1(0.f, 1.f, 1.f)},
    {XYZ1(1, -1, -1), XYZ1(0.f, 1.f, 1.f)},
    {XYZ1(-1, -1, -1), XYZ1(0.f, 1.f, 1.f)},
};

static const VertexUV g_vb_texture_Data[] = {
    {XYZ1(-1, -1, -1), UV(0.f, 0.f)},
    {XYZ1(-1, 1, 1), UV(1.f, 1.f)},
    {XYZ1(-1, -1, 1), UV(1.f, 0.f)},
    {XYZ1(-1, 1, 1), UV(1.f, 1.f)},
    {XYZ1(-1, -1, -1), UV(0.f, 0.f)},
    {XYZ1(-1, 1, -1), UV(0.f, 1.f)},

    {XYZ1(-1, -1, -1), UV(1.f, 0.f)},
    {XYZ1(1, -1, -1), UV(0.f, 0.f)},
    {XYZ1(1, 1, -1), UV(0.f, 1.f)},
    {XYZ1(-1, -1, -1), UV(1.f, 0.f)},
    {XYZ1(1, 1, -1), UV(0.f, 1.f)},
    {XYZ1(-1, 1, -1), UV(1.f, 1.f)},

    {XYZ1(-1, -1, -1), UV(1.f, 1.f)},
    {XYZ1(1, -1, 1), UV(0.f, 0.f)},
    {XYZ1(1, -1, -1), UV(1.f, 0.f)},
    {XYZ1(-1, -1, -1), UV(1.f, 1.f)},
    {XYZ1(-1, -1, 1), UV(0.f, 1.f)},
    {XYZ1(1, -1, 1), UV(0.f, 0.f)},

    {XYZ1(-1, 1, -1), UV(1.f, 1.f)},
    {XYZ1(1, 1, 1), UV(0.f, 0.f)},
    {XYZ1(-1, 1, 1), UV(0.f, 1.f)},
    {XYZ1(-1, 1, -1), UV(1.f, 1.f)},
    {XYZ1(1, 1, -1), UV(1.f, 0.f)},
    {XYZ1(1, 1, 1), UV(0.f, 0.f)},

    {XYZ1(1, 1, -1), UV(1.f, 1.f)},
    {XYZ1(1, -1, 1), UV(0.f, 0.f)},
    {XYZ1(1, 1, 1), UV(0.f, 1.f)},
    {XYZ1(1, -1, 1), UV(0.f, 0.f)},
    {XYZ1(1, 1, -1), UV(1.f, 1.f)},
    {XYZ1(1, -1, -1), UV(1.f, 0.f)},

    {XYZ1(-1, 1, 1), UV(0.f, 1.f)},
    {XYZ1(1, 1, 1), UV(1.f, 1.f)},
    {XYZ1(-1, -1, 1), UV(0.f, 0.f)},
    {XYZ1(-1, -1, 1), UV(0.f, 0.f)},
    {XYZ1(1, 1, 1), UV(1.f, 1.f)},
    {XYZ1(1, -1, 1), UV(1.f, 0.f)},
};
