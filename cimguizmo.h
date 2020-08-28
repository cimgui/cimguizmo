//This file is automatically generated by generator.lua from https://github.com/cimgui/cimguizmo
//based on ImGuizmo.h file version  1.61 WIP from https://github.com/CedricGuillemet/ImGuizmo
#ifndef CIMGUIZMO_INCLUDED
#define CIMGUIZMO_INCLUDED
#include <stdio.h>
#include <stdint.h>
#if defined _WIN32 || defined __CYGWIN__
    #ifdef CIMGUI_NO_EXPORT
        #define API
    #else
        #define API __declspec(dllexport)
    #endif
    #ifndef __GNUC__
    #define snprintf sprintf_s
    #endif
#else
    #ifdef __GNUC__
        #define API  __attribute__((__visibility__("default")))
    #else
        #define API
    #endif
#endif

#if defined __cplusplus
    #define EXTERN extern "C"
#else
    #include <stdarg.h>
    #include <stdbool.h>
    #define EXTERN extern
#endif

#define CIMGUI_API EXTERN API
#define CONST const


#ifdef _MSC_VER
typedef unsigned __int64 ImU64;
#else
//typedef unsigned long long ImU64;
#endif


#ifdef CIMGUI_DEFINE_ENUMS_AND_STRUCTS

#else

#endif // CIMGUI_DEFINE_ENUMS_AND_STRUCTS

#ifndef CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#endif //CIMGUI_DEFINE_ENUMS_AND_STRUCTS
CIMGUI_API void ImGuizmo_SetDrawlist(void);
CIMGUI_API void ImGuizmo_BeginFrame(void);
CIMGUI_API bool ImGuizmo_IsOver(void);
CIMGUI_API bool ImGuizmo_IsUsing(void);
CIMGUI_API void ImGuizmo_Enable(bool enable);
CIMGUI_API void ImGuizmo_DecomposeMatrixToComponents(const float* matrix,float* translation,float* rotation,float* scale);
CIMGUI_API void ImGuizmo_RecomposeMatrixFromComponents(const float* translation,const float* rotation,const float* scale,float* matrix);
CIMGUI_API void ImGuizmo_SetRect(float x,float y,float width,float height);
CIMGUI_API void ImGuizmo_SetOrthographic(bool isOrthographic);
CIMGUI_API void ImGuizmo_DrawCubes(const float* view,const float* projection,const float* matrices,int matrixCount);
CIMGUI_API void ImGuizmo_DrawGrid(const float* view,const float* projection,const float* matrix,const float gridSize);
CIMGUI_API void ImGuizmo_Manipulate(const float* view,const float* projection,OPERATION operation,MODE mode,float* matrix,float* deltaMatrix,float* snap,float* localBounds,float* boundsSnap);
CIMGUI_API void ImGuizmo_ViewManipulate(float* view,float length,ImVec2 position,ImVec2 size,ImU32 backgroundColor);
CIMGUI_API void ImGuizmo_SetID(int id);



#endif //CIMGUIZMO_INCLUDED




