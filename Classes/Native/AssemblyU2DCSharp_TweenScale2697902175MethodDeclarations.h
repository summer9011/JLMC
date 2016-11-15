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

// TweenScale
struct TweenScale_t2697902175;
// UnityEngine.Transform
struct Transform_t224878301;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"

// System.Void TweenScale::.ctor()
extern "C"  void TweenScale__ctor_m2979018274 (TweenScale_t2697902175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenScale::get_cachedTransform()
extern "C"  Transform_t224878301 * TweenScale_get_cachedTransform_m1882459687 (TweenScale_t2697902175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenScale::get_value()
extern "C"  Vector3_t465617797  TweenScale_get_value_m3496632662 (TweenScale_t2697902175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::set_value(UnityEngine.Vector3)
extern "C"  void TweenScale_set_value_m3973166341 (TweenScale_t2697902175 * __this, Vector3_t465617797  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenScale::get_scale()
extern "C"  Vector3_t465617797  TweenScale_get_scale_m2160302561 (TweenScale_t2697902175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::set_scale(UnityEngine.Vector3)
extern "C"  void TweenScale_set_scale_m1993098932 (TweenScale_t2697902175 * __this, Vector3_t465617797  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenScale_OnUpdate_m1194223632 (TweenScale_t2697902175 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenScale TweenScale::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Vector3)
extern "C"  TweenScale_t2697902175 * TweenScale_Begin_m1352898203 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, float ___duration, Vector3_t465617797  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetStartToCurrentValue()
extern "C"  void TweenScale_SetStartToCurrentValue_m2531715085 (TweenScale_t2697902175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetEndToCurrentValue()
extern "C"  void TweenScale_SetEndToCurrentValue_m1523713074 (TweenScale_t2697902175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetCurrentValueToStart()
extern "C"  void TweenScale_SetCurrentValueToStart_m2687116777 (TweenScale_t2697902175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetCurrentValueToEnd()
extern "C"  void TweenScale_SetCurrentValueToEnd_m1596196808 (TweenScale_t2697902175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
