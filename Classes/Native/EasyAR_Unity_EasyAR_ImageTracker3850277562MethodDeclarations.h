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

// EasyAR.ImageTracker
struct ImageTracker_t3850277562;
// System.Action`3<EasyAR.ImageTracker,EasyAR.Target,System.Boolean>
struct Action_3_t1992487652;
// EasyAR.CameraDevice
struct CameraDevice_t1807135140;
// EasyAR.Target
struct Target_t2319079912;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_CameraDevice1807135140.h"
#include "EasyAR_Unity_EasyAR_Target2319079912.h"
#include "mscorlib_System_IntPtr3076297692.h"

// System.Void EasyAR.ImageTracker::.ctor()
extern "C"  void ImageTracker__ctor_m1796347739 (ImageTracker_t3850277562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::.cctor()
extern "C"  void ImageTracker__cctor_m3689948830 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::add_TargetLoad(System.Action`3<EasyAR.ImageTracker,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTracker_add_TargetLoad_m2200812127 (ImageTracker_t3850277562 * __this, Action_3_t1992487652 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::remove_TargetLoad(System.Action`3<EasyAR.ImageTracker,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTracker_remove_TargetLoad_m2904909774 (ImageTracker_t3850277562 * __this, Action_3_t1992487652 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::add_TargetUnload(System.Action`3<EasyAR.ImageTracker,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTracker_add_TargetUnload_m1200458636 (ImageTracker_t3850277562 * __this, Action_3_t1992487652 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::remove_TargetUnload(System.Action`3<EasyAR.ImageTracker,EasyAR.Target,System.Boolean>)
extern "C"  void ImageTracker_remove_TargetUnload_m4113062395 (ImageTracker_t3850277562 * __this, Action_3_t1992487652 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::set_IsMultithreadCallback(System.Boolean)
extern "C"  void ImageTracker_set_IsMultithreadCallback_m2512757581 (ImageTracker_t3850277562 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTracker::get_IsMultithreadCallback()
extern "C"  bool ImageTracker_get_IsMultithreadCallback_m3265645668 (ImageTracker_t3850277562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.ImageTracker::get_SimultaneousNum()
extern "C"  int32_t ImageTracker_get_SimultaneousNum_m1336079823 (ImageTracker_t3850277562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::set_SimultaneousNum(System.Int32)
extern "C"  void ImageTracker_set_SimultaneousNum_m3295075262 (ImageTracker_t3850277562 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::Dispose(System.Boolean)
extern "C"  void ImageTracker_Dispose_m1019423455 (ImageTracker_t3850277562 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTracker::CheckCallback()
extern "C"  bool ImageTracker_CheckCallback_m3430851002 (ImageTracker_t3850277562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTracker::AttachCamera(EasyAR.CameraDevice)
extern "C"  bool ImageTracker_AttachCamera_m3065845339 (ImageTracker_t3850277562 * __this, CameraDevice_t1807135140 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTracker::DetachCamera(EasyAR.CameraDevice)
extern "C"  bool ImageTracker_DetachCamera_m1226374715 (ImageTracker_t3850277562 * __this, CameraDevice_t1807135140 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::LoadTarget(EasyAR.Target)
extern "C"  void ImageTracker_LoadTarget_m154359604 (ImageTracker_t3850277562 * __this, Target_t2319079912 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::UnloadTarget(EasyAR.Target)
extern "C"  void ImageTracker_UnloadTarget_m1914888325 (ImageTracker_t3850277562 * __this, Target_t2319079912 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTracker::Start()
extern "C"  bool ImageTracker_Start_m1001001047 (ImageTracker_t3850277562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTracker::Stop()
extern "C"  bool ImageTracker_Stop_m2299832003 (ImageTracker_t3850277562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::OnLoad(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void ImageTracker_OnLoad_m1115192203 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___target, bool ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker::OnUnload(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void ImageTracker_OnUnload_m4211978416 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___target, bool ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
