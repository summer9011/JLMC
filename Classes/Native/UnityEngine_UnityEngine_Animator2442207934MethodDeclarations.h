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

// UnityEngine.Animator
struct Animator_t2442207934;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo3342076411.h"
#include "mscorlib_System_String1967731336.h"

// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t3342076411  Animator_GetCurrentAnimatorStateInfo_m1931338898 (Animator_t2442207934 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C"  void Animator_Play_m2181614708 (Animator_t2442207934 * __this, String_t* ___stateName, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C"  void Animator_Play_m3632052371 (Animator_t2442207934 * __this, int32_t ___stateNameHash, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C"  int32_t Animator_StringToHash_m3313850714 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Update(System.Single)
extern "C"  void Animator_Update_m1188992334 (Animator_t2442207934 * __this, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
