#pragma once

#pragma once


#include "MeshTypes.h"

namespace ChungusEngine::Graphics
{
    class MeshBuilder
    {
    public:
        // cube
        static MeshPC CreateCubePC(float size, const Color& color);
        static MeshPC CreateCubePC(float size);

        // Texture Cube assignment
        static MeshPX CreateCubePX(float size);
        static MeshPX CreateCubePX2(float size);

        // rectangle
        static MeshPC CreateRectanglePC(float width, float height, float depth);

        //
        static MeshPC CreatePlanePC(float numRows, float numColumns, float spacing, bool horizontal = true);
        static MeshPX CreatePlanePX(float numRows, float numColumns, float spacing, bool horizontal = true);


        static MeshPC CreateCylinderPC(int slices, int rings);

        static MeshPC CreateSpherePC(int slices, int rings, float radius);
        static MeshPX CreateSpherePX(int slices, int rings, float radius);

        // pyramid (assignment)
        static MeshPC CreatePyramid(float width, float height);

        static MeshPX CreateSkySpherePX(int slices, int rings, float radius);
    };
}