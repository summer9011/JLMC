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

// EasyAR.AugmenterBaseBehaviour
struct AugmenterBaseBehaviour_t2200604009;
// System.Action`2<EasyAR.AugmenterBaseBehaviour,UnityEngine.Texture2D>
struct Action_2_t1945898041;
// System.Action`2<EasyAR.AugmenterBaseBehaviour,EasyAR.Frame>
struct Action_2_t2762843445;
// System.Action`3<EasyAR.AugmenterBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target>
struct Action_3_t2685883933;
// System.Action`2<EasyAR.AugmenterBaseBehaviour,System.String>
struct Action_2_t338173157;
// System.Action`2<EasyAR.AugmenterBaseBehaviour,System.Boolean>
struct Action_2_t1513636390;
// EasyAR.DeviceAbstractBehaviour
struct DeviceAbstractBehaviour_t4065891864;
// System.Collections.Generic.List`1<EasyAR.AugmentedTarget>
struct List_1_t2325079563;
// UnityEngine.Transform
struct Transform_t224878301;
// EasyAR.AugmentedTarget
struct AugmentedTarget_t3213708220;
// UnityEngine.Texture2D
struct Texture2D_t3575456220;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_DeviceAbstractBehaviour4065891864.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"
#include "EasyAR_Unity_EasyAR_AugmentedTarget3213708220.h"
#include "EasyAR_Unity_EasyAR_Vector2I2584456199.h"
#include "UnityEngine_UnityEngine_TextureFormat3640027657.h"

// System.Void EasyAR.AugmenterBaseBehaviour::.ctor()
extern "C"  void AugmenterBaseBehaviour__ctor_m2748168426 (AugmenterBaseBehaviour_t2200604009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::add_PlaneTextureCreated(System.Action`2<EasyAR.AugmenterBaseBehaviour,UnityEngine.Texture2D>)
extern "C"  void AugmenterBaseBehaviour_add_PlaneTextureCreated_m1931202283 (AugmenterBaseBehaviour_t2200604009 * __this, Action_2_t1945898041 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::remove_PlaneTextureCreated(System.Action`2<EasyAR.AugmenterBaseBehaviour,UnityEngine.Texture2D>)
extern "C"  void AugmenterBaseBehaviour_remove_PlaneTextureCreated_m609866438 (AugmenterBaseBehaviour_t2200604009 * __this, Action_2_t1945898041 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::add_FrameUpdate(System.Action`2<EasyAR.AugmenterBaseBehaviour,EasyAR.Frame>)
extern "C"  void AugmenterBaseBehaviour_add_FrameUpdate_m1071896640 (AugmenterBaseBehaviour_t2200604009 * __this, Action_2_t2762843445 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::remove_FrameUpdate(System.Action`2<EasyAR.AugmenterBaseBehaviour,EasyAR.Frame>)
extern "C"  void AugmenterBaseBehaviour_remove_FrameUpdate_m997014277 (AugmenterBaseBehaviour_t2200604009 * __this, Action_2_t2762843445 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::add_TargetFound(System.Action`3<EasyAR.AugmenterBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target>)
extern "C"  void AugmenterBaseBehaviour_add_TargetFound_m235949989 (AugmenterBaseBehaviour_t2200604009 * __this, Action_3_t2685883933 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::remove_TargetFound(System.Action`3<EasyAR.AugmenterBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target>)
extern "C"  void AugmenterBaseBehaviour_remove_TargetFound_m1524502524 (AugmenterBaseBehaviour_t2200604009 * __this, Action_3_t2685883933 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::add_TargetLost(System.Action`3<EasyAR.AugmenterBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target>)
extern "C"  void AugmenterBaseBehaviour_add_TargetLost_m1305802203 (AugmenterBaseBehaviour_t2200604009 * __this, Action_3_t2685883933 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::remove_TargetLost(System.Action`3<EasyAR.AugmenterBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target>)
extern "C"  void AugmenterBaseBehaviour_remove_TargetLost_m784748912 (AugmenterBaseBehaviour_t2200604009 * __this, Action_3_t2685883933 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::add_TextMessage(System.Action`2<EasyAR.AugmenterBaseBehaviour,System.String>)
extern "C"  void AugmenterBaseBehaviour_add_TextMessage_m3815927710 (AugmenterBaseBehaviour_t2200604009 * __this, Action_2_t338173157 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::remove_TextMessage(System.Action`2<EasyAR.AugmenterBaseBehaviour,System.String>)
extern "C"  void AugmenterBaseBehaviour_remove_TextMessage_m3431167855 (AugmenterBaseBehaviour_t2200604009 * __this, Action_2_t338173157 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::add_PlaneTextureRenderChanged(System.Action`2<EasyAR.AugmenterBaseBehaviour,System.Boolean>)
extern "C"  void AugmenterBaseBehaviour_add_PlaneTextureRenderChanged_m3437486468 (AugmenterBaseBehaviour_t2200604009 * __this, Action_2_t1513636390 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::remove_PlaneTextureRenderChanged(System.Action`2<EasyAR.AugmenterBaseBehaviour,System.Boolean>)
extern "C"  void AugmenterBaseBehaviour_remove_PlaneTextureRenderChanged_m1756516645 (AugmenterBaseBehaviour_t2200604009 * __this, Action_2_t1513636390 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::Awake()
extern "C"  void AugmenterBaseBehaviour_Awake_m858481103 (AugmenterBaseBehaviour_t2200604009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::Bind(EasyAR.DeviceAbstractBehaviour)
extern "C"  void AugmenterBaseBehaviour_Bind_m3784388113 (AugmenterBaseBehaviour_t2200604009 * __this, DeviceAbstractBehaviour_t4065891864 * ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::Start()
extern "C"  void AugmenterBaseBehaviour_Start_m881774430 (AugmenterBaseBehaviour_t2200604009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::OnDestroy()
extern "C"  void AugmenterBaseBehaviour_OnDestroy_m1100072985 (AugmenterBaseBehaviour_t2200604009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::DetachAndStop()
extern "C"  void AugmenterBaseBehaviour_DetachAndStop_m1209990746 (AugmenterBaseBehaviour_t2200604009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::OnDeviceStart(EasyAR.DeviceAbstractBehaviour,System.Boolean)
extern "C"  void AugmenterBaseBehaviour_OnDeviceStart_m2704935246 (AugmenterBaseBehaviour_t2200604009 * __this, DeviceAbstractBehaviour_t4065891864 * ___device, bool ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::Update()
extern "C"  void AugmenterBaseBehaviour_Update_m1326139931 (AugmenterBaseBehaviour_t2200604009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::UpdateTrackResult(System.Collections.Generic.List`1<EasyAR.AugmentedTarget>)
extern "C"  void AugmenterBaseBehaviour_UpdateTrackResult_m3832619881 (AugmenterBaseBehaviour_t2200604009 * __this, List_1_t2325079563 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmenterBaseBehaviour::AdjustTransform(UnityEngine.Transform,EasyAR.AugmentedTarget)
extern "C"  void AugmenterBaseBehaviour_AdjustTransform_m569509186 (AugmenterBaseBehaviour_t2200604009 * __this, Transform_t224878301 * ___targetTransform, AugmentedTarget_t3213708220 * ___augmentedTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D EasyAR.AugmenterBaseBehaviour::CreateTexture(EasyAR.Vector2I,UnityEngine.TextureFormat)
extern "C"  Texture2D_t3575456220 * AugmenterBaseBehaviour_CreateTexture_m1278135416 (AugmenterBaseBehaviour_t2200604009 * __this, Vector2I_t2584456199  ___size, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
