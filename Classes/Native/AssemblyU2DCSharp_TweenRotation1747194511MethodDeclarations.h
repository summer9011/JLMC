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

// TweenRotation
struct TweenRotation_t1747194511;
// UnityEngine.Transform
struct Transform_t224878301;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion83606849.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"

// System.Void TweenRotation::.ctor()
extern "C"  void TweenRotation__ctor_m934696668 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenRotation::get_cachedTransform()
extern "C"  Transform_t224878301 * TweenRotation_get_cachedTransform_m1926203491 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TweenRotation::get_rotation()
extern "C"  Quaternion_t83606849  TweenRotation_get_rotation_m3237644447 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::set_rotation(UnityEngine.Quaternion)
extern "C"  void TweenRotation_set_rotation_m31339692 (TweenRotation_t1747194511 * __this, Quaternion_t83606849  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TweenRotation::get_value()
extern "C"  Quaternion_t83606849  TweenRotation_get_value_m2338588164 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::set_value(UnityEngine.Quaternion)
extern "C"  void TweenRotation_set_value_m1306571307 (TweenRotation_t1747194511 * __this, Quaternion_t83606849  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenRotation_OnUpdate_m1114533666 (TweenRotation_t1747194511 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenRotation TweenRotation::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Quaternion)
extern "C"  TweenRotation_t1747194511 * TweenRotation_Begin_m129275313 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, float ___duration, Quaternion_t83606849  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetStartToCurrentValue()
extern "C"  void TweenRotation_SetStartToCurrentValue_m3277507449 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetEndToCurrentValue()
extern "C"  void TweenRotation_SetEndToCurrentValue_m2519207916 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetCurrentValueToStart()
extern "C"  void TweenRotation_SetCurrentValueToStart_m495114565 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetCurrentValueToEnd()
extern "C"  void TweenRotation_SetCurrentValueToEnd_m1576725190 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
