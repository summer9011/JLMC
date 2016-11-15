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

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo3342076411.h"
#include "mscorlib_System_String1967731336.h"

// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern "C"  bool AnimatorStateInfo_IsName_m4069203550 (AnimatorStateInfo_t3342076411 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C"  int32_t AnimatorStateInfo_get_fullPathHash_m3941998936 (AnimatorStateInfo_t3342076411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C"  int32_t AnimatorStateInfo_get_nameHash_m1703033713 (AnimatorStateInfo_t3342076411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C"  int32_t AnimatorStateInfo_get_shortNameHash_m3915898263 (AnimatorStateInfo_t3342076411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C"  float AnimatorStateInfo_get_normalizedTime_m1330221276 (AnimatorStateInfo_t3342076411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C"  float AnimatorStateInfo_get_length_m3151009408 (AnimatorStateInfo_t3342076411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorStateInfo::get_speed()
extern "C"  float AnimatorStateInfo_get_speed_m3265333371 (AnimatorStateInfo_t3342076411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorStateInfo::get_speedMultiplier()
extern "C"  float AnimatorStateInfo_get_speedMultiplier_m3451382250 (AnimatorStateInfo_t3342076411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C"  int32_t AnimatorStateInfo_get_tagHash_m1559842952 (AnimatorStateInfo_t3342076411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C"  bool AnimatorStateInfo_IsTag_m1529621725 (AnimatorStateInfo_t3342076411 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C"  bool AnimatorStateInfo_get_loop_m765573376 (AnimatorStateInfo_t3342076411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimatorStateInfo_t3342076411;
struct AnimatorStateInfo_t3342076411_marshaled_pinvoke;

extern "C" void AnimatorStateInfo_t3342076411_marshal_pinvoke(const AnimatorStateInfo_t3342076411& unmarshaled, AnimatorStateInfo_t3342076411_marshaled_pinvoke& marshaled);
extern "C" void AnimatorStateInfo_t3342076411_marshal_pinvoke_back(const AnimatorStateInfo_t3342076411_marshaled_pinvoke& marshaled, AnimatorStateInfo_t3342076411& unmarshaled);
extern "C" void AnimatorStateInfo_t3342076411_marshal_pinvoke_cleanup(AnimatorStateInfo_t3342076411_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AnimatorStateInfo_t3342076411;
struct AnimatorStateInfo_t3342076411_marshaled_com;

extern "C" void AnimatorStateInfo_t3342076411_marshal_com(const AnimatorStateInfo_t3342076411& unmarshaled, AnimatorStateInfo_t3342076411_marshaled_com& marshaled);
extern "C" void AnimatorStateInfo_t3342076411_marshal_com_back(const AnimatorStateInfo_t3342076411_marshaled_com& marshaled, AnimatorStateInfo_t3342076411& unmarshaled);
extern "C" void AnimatorStateInfo_t3342076411_marshal_com_cleanup(AnimatorStateInfo_t3342076411_marshaled_com& marshaled);
