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

// EasyAR.ImageTargetBaseBehaviour
struct ImageTargetBaseBehaviour_t1600490913;
// System.Action`1<EasyAR.ImageTargetBaseBehaviour>
struct Action_1_t846853640;
// System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean>
struct Action_3_t3998159981;
// System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour>
struct List_1_t1247892229;
// EasyAR.ImageTrackerBaseBehaviour
struct ImageTrackerBaseBehaviour_t2136520886;
// EasyAR.ImageTarget
struct ImageTarget_t483921573;
// System.String
struct String_t;
// EasyAR.Target
struct Target_t2319079912;
// EasyAR.AugmentedTarget
struct AugmentedTarget_t3213708220;
// UnityEngine.Transform
struct Transform_t224878301;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_ImageTrackerBaseBehaviour2136520886.h"
#include "EasyAR_Unity_EasyAR_ImageTarget483921573.h"
#include "mscorlib_System_String1967731336.h"
#include "EasyAR_Unity_EasyAR_StorageType622972528.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "EasyAR_Unity_EasyAR_Target2319079912.h"
#include "EasyAR_Unity_EasyAR_AugmentedTarget3213708220.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"

// System.Void EasyAR.ImageTargetBaseBehaviour::.ctor()
extern "C"  void ImageTargetBaseBehaviour__ctor_m2216004706 (ImageTargetBaseBehaviour_t1600490913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::.cctor()
extern "C"  void ImageTargetBaseBehaviour__cctor_m1491279169 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::add_TargetFound(System.Action`1<EasyAR.ImageTargetBaseBehaviour>)
extern "C"  void ImageTargetBaseBehaviour_add_TargetFound_m3068579422 (ImageTargetBaseBehaviour_t1600490913 * __this, Action_1_t846853640 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::remove_TargetFound(System.Action`1<EasyAR.ImageTargetBaseBehaviour>)
extern "C"  void ImageTargetBaseBehaviour_remove_TargetFound_m299089135 (ImageTargetBaseBehaviour_t1600490913 * __this, Action_1_t846853640 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::add_TargetLost(System.Action`1<EasyAR.ImageTargetBaseBehaviour>)
extern "C"  void ImageTargetBaseBehaviour_add_TargetLost_m1129095720 (ImageTargetBaseBehaviour_t1600490913 * __this, Action_1_t846853640 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::remove_TargetLost(System.Action`1<EasyAR.ImageTargetBaseBehaviour>)
extern "C"  void ImageTargetBaseBehaviour_remove_TargetLost_m3805809465 (ImageTargetBaseBehaviour_t1600490913 * __this, Action_1_t846853640 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::add_TargetLoad(System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean>)
extern "C"  void ImageTargetBaseBehaviour_add_TargetLoad_m2299446497 (ImageTargetBaseBehaviour_t1600490913 * __this, Action_3_t3998159981 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::remove_TargetLoad(System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean>)
extern "C"  void ImageTargetBaseBehaviour_remove_TargetLoad_m203919426 (ImageTargetBaseBehaviour_t1600490913 * __this, Action_3_t3998159981 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::add_TargetUnload(System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean>)
extern "C"  void ImageTargetBaseBehaviour_add_TargetUnload_m3028022750 (ImageTargetBaseBehaviour_t1600490913 * __this, Action_3_t3998159981 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::remove_TargetUnload(System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean>)
extern "C"  void ImageTargetBaseBehaviour_remove_TargetUnload_m1309461993 (ImageTargetBaseBehaviour_t1600490913 * __this, Action_3_t3998159981 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour> EasyAR.ImageTargetBaseBehaviour::get_Loaders()
extern "C"  List_1_t1247892229 * ImageTargetBaseBehaviour_get_Loaders_m329994742 (ImageTargetBaseBehaviour_t1600490913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::set_Loaders(System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour>)
extern "C"  void ImageTargetBaseBehaviour_set_Loaders_m2810835935 (ImageTargetBaseBehaviour_t1600490913 * __this, List_1_t1247892229 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::Bind(EasyAR.ImageTrackerBaseBehaviour)
extern "C"  void ImageTargetBaseBehaviour_Bind_m1436093323 (ImageTargetBaseBehaviour_t1600490913 * __this, ImageTrackerBaseBehaviour_t2136520886 * ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::Awake()
extern "C"  void ImageTargetBaseBehaviour_Awake_m1584330615 (ImageTargetBaseBehaviour_t1600490913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::Init()
extern "C"  void ImageTargetBaseBehaviour_Init_m262527894 (ImageTargetBaseBehaviour_t1600490913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::Start()
extern "C"  void ImageTargetBaseBehaviour_Start_m2005502822 (ImageTargetBaseBehaviour_t1600490913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::Update()
extern "C"  void ImageTargetBaseBehaviour_Update_m1055386483 (ImageTargetBaseBehaviour_t1600490913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::OnDestroy()
extern "C"  void ImageTargetBaseBehaviour_OnDestroy_m2255949965 (ImageTargetBaseBehaviour_t1600490913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::UnloadFromAllTrackers()
extern "C"  void ImageTargetBaseBehaviour_UnloadFromAllTrackers_m413896823 (ImageTargetBaseBehaviour_t1600490913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTargetBaseBehaviour::SetupWithTarget(EasyAR.ImageTarget)
extern "C"  bool ImageTargetBaseBehaviour_SetupWithTarget_m1817436963 (ImageTargetBaseBehaviour_t1600490913 * __this, ImageTarget_t483921573 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTargetBaseBehaviour::SetupWithTargetInternal(EasyAR.ImageTarget)
extern "C"  bool ImageTargetBaseBehaviour_SetupWithTargetInternal_m1194621536 (ImageTargetBaseBehaviour_t1600490913 * __this, ImageTarget_t483921573 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::UpdateTargetSize()
extern "C"  void ImageTargetBaseBehaviour_UpdateTargetSize_m2809323063 (ImageTargetBaseBehaviour_t1600490913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::CheckSize()
extern "C"  void ImageTargetBaseBehaviour_CheckSize_m2361394969 (ImageTargetBaseBehaviour_t1600490913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::OnFoundInFrame()
extern "C"  void ImageTargetBaseBehaviour_OnFoundInFrame_m2162214175 (ImageTargetBaseBehaviour_t1600490913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::AddLoader(EasyAR.ImageTrackerBaseBehaviour)
extern "C"  void ImageTargetBaseBehaviour_AddLoader_m1708983164 (ImageTargetBaseBehaviour_t1600490913 * __this, ImageTrackerBaseBehaviour_t2136520886 * ___trackerBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::RemoveLoader(EasyAR.ImageTrackerBaseBehaviour)
extern "C"  void ImageTargetBaseBehaviour_RemoveLoader_m2189555089 (ImageTargetBaseBehaviour_t1600490913 * __this, ImageTrackerBaseBehaviour_t2136520886 * ___trackerBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::LoadIntoTrackerBehaviour()
extern "C"  void ImageTargetBaseBehaviour_LoadIntoTrackerBehaviour_m701791809 (ImageTargetBaseBehaviour_t1600490913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTargetBaseBehaviour::SetupWithJsonFile(System.String,EasyAR.StorageType,System.String)
extern "C"  bool ImageTargetBaseBehaviour_SetupWithJsonFile_m2138562023 (ImageTargetBaseBehaviour_t1600490913 * __this, String_t* ___path, int32_t ___storageType, String_t* ___targetname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTargetBaseBehaviour::SetupWithJsonString(System.String,EasyAR.StorageType,System.String)
extern "C"  bool ImageTargetBaseBehaviour_SetupWithJsonString_m1471324848 (ImageTargetBaseBehaviour_t1600490913 * __this, String_t* ___json, int32_t ___storageType, String_t* ___targetname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTargetBaseBehaviour::SetupWithImage(System.String,EasyAR.StorageType,System.String,UnityEngine.Vector2)
extern "C"  bool ImageTargetBaseBehaviour_SetupWithImage_m1520166148 (ImageTargetBaseBehaviour_t1600490913 * __this, String_t* ___path, int32_t ___storageType, String_t* ___targetname, Vector2_t465617798  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::RegisterSelf(EasyAR.Target)
extern "C"  void ImageTargetBaseBehaviour_RegisterSelf_m1010148997 (ImageTargetBaseBehaviour_t1600490913 * __this, Target_t2319079912 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.ImageTargetBaseBehaviour EasyAR.ImageTargetBaseBehaviour::QueryBehaviour(EasyAR.Target)
extern "C"  ImageTargetBaseBehaviour_t1600490913 * ImageTargetBaseBehaviour_QueryBehaviour_m39272837 (Il2CppObject * __this /* static, unused */, Target_t2319079912 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::AdjustTransform(EasyAR.AugmentedTarget,UnityEngine.Transform,System.Boolean)
extern "C"  void ImageTargetBaseBehaviour_AdjustTransform_m3584452477 (ImageTargetBaseBehaviour_t1600490913 * __this, AugmentedTarget_t3213708220 * ___augmentedTarget, Transform_t224878301 * ___centerTransform, bool ___rFlag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::OnTargetFound()
extern "C"  void ImageTargetBaseBehaviour_OnTargetFound_m3276916838 (ImageTargetBaseBehaviour_t1600490913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::OnTargetLost()
extern "C"  void ImageTargetBaseBehaviour_OnTargetLost_m3327758554 (ImageTargetBaseBehaviour_t1600490913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::OnTargetLoad(EasyAR.ImageTrackerBaseBehaviour,System.Boolean)
extern "C"  void ImageTargetBaseBehaviour_OnTargetLoad_m3086678811 (ImageTargetBaseBehaviour_t1600490913 * __this, ImageTrackerBaseBehaviour_t2136520886 * ___tracker, bool ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTargetBaseBehaviour::OnTargetUnload(EasyAR.ImageTrackerBaseBehaviour,System.Boolean)
extern "C"  void ImageTargetBaseBehaviour_OnTargetUnload_m1623340240 (ImageTargetBaseBehaviour_t1600490913 * __this, ImageTrackerBaseBehaviour_t2136520886 * ___tracker, bool ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
