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

// EasyAR.ImageTrackerBaseBehaviour
struct ImageTrackerBaseBehaviour_t2136520886;
// System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean>
struct Action_4_t169599236;
// System.Collections.Generic.List`1<EasyAR.ImageTargetBaseBehaviour>
struct List_1_t711862256;
// EasyAR.DeviceAbstractBehaviour
struct DeviceAbstractBehaviour_t4065891864;
// EasyAR.ImageTracker
struct ImageTracker_t3850277562;
// EasyAR.Target
struct Target_t2319079912;
// EasyAR.ImageTargetBaseBehaviour
struct ImageTargetBaseBehaviour_t1600490913;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_DeviceAbstractBehaviour4065891864.h"
#include "EasyAR_Unity_EasyAR_ImageTracker3850277562.h"
#include "EasyAR_Unity_EasyAR_Target2319079912.h"
#include "EasyAR_Unity_EasyAR_ImageTargetBaseBehaviour1600490913.h"

// System.Void EasyAR.ImageTrackerBaseBehaviour::.ctor()
extern "C"  void ImageTrackerBaseBehaviour__ctor_m669843931 (ImageTrackerBaseBehaviour_t2136520886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::add_TargetLoad(System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTrackerBaseBehaviour_add_TargetLoad_m3172120969 (ImageTrackerBaseBehaviour_t2136520886 * __this, Action_4_t169599236 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::remove_TargetLoad(System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTrackerBaseBehaviour_remove_TargetLoad_m453132216 (ImageTrackerBaseBehaviour_t2136520886 * __this, Action_4_t169599236 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::add_TargetUnload(System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTrackerBaseBehaviour_add_TargetUnload_m3927075758 (ImageTrackerBaseBehaviour_t2136520886 * __this, Action_4_t169599236 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::remove_TargetUnload(System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTrackerBaseBehaviour_remove_TargetUnload_m4178736125 (ImageTrackerBaseBehaviour_t2136520886 * __this, Action_4_t169599236 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<EasyAR.ImageTargetBaseBehaviour> EasyAR.ImageTrackerBaseBehaviour::get_LoadedTargetBehaviours()
extern "C"  List_1_t711862256 * ImageTrackerBaseBehaviour_get_LoadedTargetBehaviours_m978104688 (ImageTrackerBaseBehaviour_t2136520886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::set_LoadedTargetBehaviours(System.Collections.Generic.List`1<EasyAR.ImageTargetBaseBehaviour>)
extern "C"  void ImageTrackerBaseBehaviour_set_LoadedTargetBehaviours_m537906433 (ImageTrackerBaseBehaviour_t2136520886 * __this, List_1_t711862256 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.ImageTrackerBaseBehaviour::get_SimultaneousNum()
extern "C"  int32_t ImageTrackerBaseBehaviour_get_SimultaneousNum_m357868999 (ImageTrackerBaseBehaviour_t2136520886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::set_SimultaneousNum(System.Int32)
extern "C"  void ImageTrackerBaseBehaviour_set_SimultaneousNum_m3653137918 (ImageTrackerBaseBehaviour_t2136520886 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::OnDestroy()
extern "C"  void ImageTrackerBaseBehaviour_OnDestroy_m1816953450 (ImageTrackerBaseBehaviour_t2136520886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::Initialize()
extern "C"  void ImageTrackerBaseBehaviour_Initialize_m3401067327 (ImageTrackerBaseBehaviour_t2136520886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::Start()
extern "C"  void ImageTrackerBaseBehaviour_Start_m1232097687 (ImageTrackerBaseBehaviour_t2136520886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::OnDeviceStart(EasyAR.DeviceAbstractBehaviour,System.Boolean)
extern "C"  void ImageTrackerBaseBehaviour_OnDeviceStart_m1214181655 (ImageTrackerBaseBehaviour_t2136520886 * __this, DeviceAbstractBehaviour_t4065891864 * ___device, bool ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::DetachAndStop()
extern "C"  void ImageTrackerBaseBehaviour_DetachAndStop_m718243819 (ImageTrackerBaseBehaviour_t2136520886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::OnTargetLoad(EasyAR.ImageTracker,EasyAR.Target,System.Boolean)
extern "C"  void ImageTrackerBaseBehaviour_OnTargetLoad_m169297892 (ImageTrackerBaseBehaviour_t2136520886 * __this, ImageTracker_t3850277562 * ___tracker, Target_t2319079912 * ___target, bool ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::OnTargetUnload(EasyAR.ImageTracker,EasyAR.Target,System.Boolean)
extern "C"  void ImageTrackerBaseBehaviour_OnTargetUnload_m310513303 (ImageTrackerBaseBehaviour_t2136520886 * __this, ImageTracker_t3850277562 * ___tracker, Target_t2319079912 * ___target, bool ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::Update()
extern "C"  void ImageTrackerBaseBehaviour_Update_m1545499694 (ImageTrackerBaseBehaviour_t2136520886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::LoadImageTargetBehaviour(EasyAR.ImageTargetBaseBehaviour)
extern "C"  void ImageTrackerBaseBehaviour_LoadImageTargetBehaviour_m2588815515 (ImageTrackerBaseBehaviour_t2136520886 * __this, ImageTargetBaseBehaviour_t1600490913 * ___imageTargetBaseBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTrackerBaseBehaviour::UnloadImageTargetBehaviour(EasyAR.ImageTargetBaseBehaviour)
extern "C"  void ImageTrackerBaseBehaviour_UnloadImageTargetBehaviour_m1904488844 (ImageTrackerBaseBehaviour_t2136520886 * __this, ImageTargetBaseBehaviour_t1600490913 * ___imageTargetBaseBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTrackerBaseBehaviour::StartTrack()
extern "C"  bool ImageTrackerBaseBehaviour_StartTrack_m512960234 (ImageTrackerBaseBehaviour_t2136520886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTrackerBaseBehaviour::StopTrack()
extern "C"  bool ImageTrackerBaseBehaviour_StopTrack_m2915055866 (ImageTrackerBaseBehaviour_t2136520886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
