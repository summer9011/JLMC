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

// UnityEngine.AnimationCurve
struct AnimationCurve_t3871413904;
struct AnimationCurve_t3871413904_marshaled_pinvoke;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t4213432960;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve__ctor_m2814448007 (AnimationCurve_t3871413904 * __this, KeyframeU5BU5D_t4213432960* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C"  void AnimationCurve__ctor_m3707994114 (AnimationCurve_t3871413904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C"  void AnimationCurve_Cleanup_m2190142678 (AnimationCurve_t3871413904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C"  void AnimationCurve_Finalize_m3393741894 (AnimationCurve_t3871413904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C"  float AnimationCurve_Evaluate_m3698879322 (AnimationCurve_t3871413904 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve_Init_m1486386337 (AnimationCurve_t3871413904 * __this, KeyframeU5BU5D_t4213432960* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimationCurve_t3871413904;
struct AnimationCurve_t3871413904_marshaled_pinvoke;

extern "C" void AnimationCurve_t3871413904_marshal_pinvoke(const AnimationCurve_t3871413904& unmarshaled, AnimationCurve_t3871413904_marshaled_pinvoke& marshaled);
extern "C" void AnimationCurve_t3871413904_marshal_pinvoke_back(const AnimationCurve_t3871413904_marshaled_pinvoke& marshaled, AnimationCurve_t3871413904& unmarshaled);
extern "C" void AnimationCurve_t3871413904_marshal_pinvoke_cleanup(AnimationCurve_t3871413904_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AnimationCurve_t3871413904;
struct AnimationCurve_t3871413904_marshaled_com;

extern "C" void AnimationCurve_t3871413904_marshal_com(const AnimationCurve_t3871413904& unmarshaled, AnimationCurve_t3871413904_marshaled_com& marshaled);
extern "C" void AnimationCurve_t3871413904_marshal_com_back(const AnimationCurve_t3871413904_marshaled_com& marshaled, AnimationCurve_t3871413904& unmarshaled);
extern "C" void AnimationCurve_t3871413904_marshal_com_cleanup(AnimationCurve_t3871413904_marshaled_com& marshaled);
