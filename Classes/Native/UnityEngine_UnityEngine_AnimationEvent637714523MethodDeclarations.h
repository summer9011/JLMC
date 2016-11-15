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

// UnityEngine.AnimationEvent
struct AnimationEvent_t637714523;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t1181371020;
struct Object_t1181371020_marshaled_pinvoke;
// UnityEngine.AnimationState
struct AnimationState_t1861571064;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_Object1181371020.h"
#include "UnityEngine_UnityEngine_SendMessageOptions1278148394.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo3342076411.h"
#include "UnityEngine_UnityEngine_AnimatorClipInfo2190311602.h"

// System.Void UnityEngine.AnimationEvent::.ctor()
extern "C"  void AnimationEvent__ctor_m3458990599 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_data()
extern "C"  String_t* AnimationEvent_get_data_m1944226119 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern "C"  void AnimationEvent_set_data_m2305843164 (AnimationEvent_t637714523 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C"  String_t* AnimationEvent_get_stringParameter_m3994883119 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C"  void AnimationEvent_set_stringParameter_m3956270534 (AnimationEvent_t637714523 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C"  float AnimationEvent_get_floatParameter_m2695208933 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern "C"  void AnimationEvent_set_floatParameter_m4139544688 (AnimationEvent_t637714523 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C"  int32_t AnimationEvent_get_intParameter_m903783586 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern "C"  void AnimationEvent_set_intParameter_m1174062029 (AnimationEvent_t637714523 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C"  Object_t1181371020 * AnimationEvent_get_objectReferenceParameter_m3565420672 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern "C"  void AnimationEvent_set_objectReferenceParameter_m3171652515 (AnimationEvent_t637714523 * __this, Object_t1181371020 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C"  String_t* AnimationEvent_get_functionName_m4178006856 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C"  void AnimationEvent_set_functionName_m1910707421 (AnimationEvent_t637714523 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C"  float AnimationEvent_get_time_m2837507241 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C"  void AnimationEvent_set_time_m2162176572 (AnimationEvent_t637714523 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C"  int32_t AnimationEvent_get_messageOptions_m3547411650 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern "C"  void AnimationEvent_set_messageOptions_m3825202925 (AnimationEvent_t637714523 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C"  bool AnimationEvent_get_isFiredByLegacy_m2585487710 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C"  bool AnimationEvent_get_isFiredByAnimator_m3399078288 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern "C"  AnimationState_t1861571064 * AnimationEvent_get_animationState_m1069191380 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern "C"  AnimatorStateInfo_t3342076411  AnimationEvent_get_animatorStateInfo_m4255437518 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern "C"  AnimatorClipInfo_t2190311602  AnimationEvent_get_animatorClipInfo_m615328956 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern "C"  int32_t AnimationEvent_GetHash_m2850593057 (AnimationEvent_t637714523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
