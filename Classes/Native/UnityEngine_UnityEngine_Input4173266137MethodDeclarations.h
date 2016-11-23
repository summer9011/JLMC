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
// UnityEngine.Gyroscope
struct Gyroscope_t1746339172;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_KeyCode1667950811.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_Touch4220330964.h"
#include "UnityEngine_UnityEngine_DeviceOrientation4160649337.h"
#include "UnityEngine_UnityEngine_IMECompositionMode2977162419.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

// System.Void UnityEngine.Input::.cctor()
extern "C"  void Input__cctor_m829848544 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Input::mainGyroIndex_Internal()
extern "C"  int32_t Input_mainGyroIndex_Internal_m1868841043 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyInt(System.Int32)
extern "C"  bool Input_GetKeyInt_m4143570188 (Il2CppObject * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyUpInt(System.Int32)
extern "C"  bool Input_GetKeyUpInt_m2486491081 (Il2CppObject * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDownInt(System.Int32)
extern "C"  bool Input_GetKeyDownInt_m2930607648 (Il2CppObject * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m2098048324 (Il2CppObject * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::set_compensateSensors(System.Boolean)
extern "C"  void Input_set_compensateSensors_m952058409 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
extern "C"  Gyroscope_t1746339172 * Input_get_gyro_m4027090408 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C"  bool Input_GetKey_m3849524999 (Il2CppObject * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m1771960377 (Il2CppObject * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyUp_m1008512962 (Il2CppObject * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m464100923 (Il2CppObject * __this /* static, unused */, int32_t ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m47917805 (Il2CppObject * __this /* static, unused */, int32_t ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C"  bool Input_GetMouseButtonUp_m1275967966 (Il2CppObject * __this /* static, unused */, int32_t ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t465617797  Input_get_mousePosition_m146923508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)
extern "C"  void Input_INTERNAL_get_mousePosition_m2302165941 (Il2CppObject * __this /* static, unused */, Vector3_t465617797 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Input::get_inputString()
extern "C"  String_t* Input_get_inputString_m586924470 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C"  Touch_t4220330964  Input_GetTouch_m1463942798 (Il2CppObject * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C"  int32_t Input_get_touchCount_m2050827666 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.DeviceOrientation UnityEngine.Input::get_deviceOrientation()
extern "C"  int32_t Input_get_deviceOrientation_m2415424840 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern "C"  void Input_set_imeCompositionMode_m2881085485 (Il2CppObject * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Input::get_compositionString()
extern "C"  String_t* Input_get_compositionString_m636835668 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern "C"  void Input_set_compositionCursorPos_m1615567306 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C"  void Input_INTERNAL_set_compositionCursorPos_m1501857600 (Il2CppObject * __this /* static, unused */, Vector2_t465617798 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
