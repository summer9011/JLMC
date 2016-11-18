#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// EasyAR.IEngineNative
struct IEngineNative_t3675523595;
// EasyAR.CameraCalibration
struct CameraCalibration_t2954674694;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_Matrix4x41261955742.h"
#include "EasyAR_Unity_EasyAR_CameraCalibration2954674694.h"
#include "UnityEngine_UnityEngine_ScreenOrientation2442911283.h"

// System.Void EasyAR.Engine::.cctor()
extern "C"  void Engine__cctor_m844375037 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.Engine::Initialize(System.String,System.IntPtr)
extern "C"  bool Engine_Initialize_m1336468268 (Il2CppObject * __this /* static, unused */, String_t* ___key, IntPtr_t ___activity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.IEngineNative EasyAR.Engine::get_Instance()
extern "C"  Il2CppObject * Engine_get_Instance_m3647341288 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 EasyAR.Engine::GetProjection(EasyAR.CameraCalibration,System.Single,System.Single)
extern "C"  Matrix4x4_t1261955742  Engine_GetProjection_m3437347280 (Il2CppObject * __this /* static, unused */, CameraCalibration_t2954674694 * ___calib, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Engine::Pause()
extern "C"  void Engine_Pause_m552380238 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Engine::Resume()
extern "C"  void Engine_Resume_m1371996119 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Engine::OnApplicationQuit()
extern "C"  void Engine_OnApplicationQuit_m25781790 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Engine::InitializeOrientation()
extern "C"  void Engine_InitializeOrientation_m1316564628 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.Engine::UpdateOrientation(UnityEngine.ScreenOrientation)
extern "C"  int32_t Engine_UpdateOrientation_m460457206 (Il2CppObject * __this /* static, unused */, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
