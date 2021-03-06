﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ActiveAnimation
struct ActiveAnimation_t4137610604;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t3026096567;
// UnityEngine.Animator
struct Animator_t2442207934;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction2973406773.h"
#include "UnityEngine_UnityEngine_Animation3026096567.h"
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition3327227550.h"
#include "AssemblyU2DCSharp_AnimationOrTween_DisableConditio4068738707.h"
#include "UnityEngine_UnityEngine_Animator2442207934.h"

// System.Void ActiveAnimation::.ctor()
extern "C"  void ActiveAnimation__ctor_m1863182653 (ActiveAnimation_t4137610604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ActiveAnimation::get_playbackTime()
extern "C"  float ActiveAnimation_get_playbackTime_m340618096 (ActiveAnimation_t4137610604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ActiveAnimation::get_isPlaying()
extern "C"  bool ActiveAnimation_get_isPlaying_m2986296092 (ActiveAnimation_t4137610604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Finish()
extern "C"  void ActiveAnimation_Finish_m1240086344 (ActiveAnimation_t4137610604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Reset()
extern "C"  void ActiveAnimation_Reset_m2370934072 (ActiveAnimation_t4137610604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Start()
extern "C"  void ActiveAnimation_Start_m2926931741 (ActiveAnimation_t4137610604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Update()
extern "C"  void ActiveAnimation_Update_m1030400762 (ActiveAnimation_t4137610604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Play(System.String,AnimationOrTween.Direction)
extern "C"  void ActiveAnimation_Play_m25439250 (ActiveAnimation_t4137610604 * __this, String_t* ___clipName, int32_t ___playDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,System.String,AnimationOrTween.Direction,AnimationOrTween.EnableCondition,AnimationOrTween.DisableCondition)
extern "C"  ActiveAnimation_t4137610604 * ActiveAnimation_Play_m3266436159 (Il2CppObject * __this /* static, unused */, Animation_t3026096567 * ___anim, String_t* ___clipName, int32_t ___playDirection, int32_t ___enableBeforePlay, int32_t ___disableCondition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,System.String,AnimationOrTween.Direction)
extern "C"  ActiveAnimation_t4137610604 * ActiveAnimation_Play_m1917054426 (Il2CppObject * __this /* static, unused */, Animation_t3026096567 * ___anim, String_t* ___clipName, int32_t ___playDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,AnimationOrTween.Direction)
extern "C"  ActiveAnimation_t4137610604 * ActiveAnimation_Play_m4026768294 (Il2CppObject * __this /* static, unused */, Animation_t3026096567 * ___anim, int32_t ___playDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animator,System.String,AnimationOrTween.Direction,AnimationOrTween.EnableCondition,AnimationOrTween.DisableCondition)
extern "C"  ActiveAnimation_t4137610604 * ActiveAnimation_Play_m3999643722 (Il2CppObject * __this /* static, unused */, Animator_t2442207934 * ___anim, String_t* ___clipName, int32_t ___playDirection, int32_t ___enableBeforePlay, int32_t ___disableCondition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
