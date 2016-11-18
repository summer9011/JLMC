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

// EasyAR.AugmentedTarget
struct AugmentedTarget_t3213708220;
// EasyAR.Target
struct Target_t2319079912;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "EasyAR_Unity_EasyAR_AugmentedTarget_TrackStatus53621233.h"
#include "EasyAR_Unity_EasyAR_Target2319079912.h"
#include "UnityEngine_UnityEngine_Quaternion83606849.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_Matrix4x41261955742.h"

// System.Void EasyAR.AugmentedTarget::.ctor(System.IntPtr)
extern "C"  void AugmentedTarget__ctor_m2543549415 (AugmentedTarget_t3213708220 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.AugmentedTarget/TrackStatus EasyAR.AugmentedTarget::get_Status()
extern "C"  int32_t AugmentedTarget_get_Status_m3373486177 (AugmentedTarget_t3213708220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmentedTarget::set_Status(EasyAR.AugmentedTarget/TrackStatus)
extern "C"  void AugmentedTarget_set_Status_m1891123264 (AugmentedTarget_t3213708220 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.Target EasyAR.AugmentedTarget::get_Target()
extern "C"  Target_t2319079912 * AugmentedTarget_get_Target_m348905516 (AugmentedTarget_t3213708220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmentedTarget::set_Target(EasyAR.Target)
extern "C"  void AugmentedTarget_set_Target_m3652363143 (AugmentedTarget_t3213708220 * __this, Target_t2319079912 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion EasyAR.AugmentedTarget::get_Rotation()
extern "C"  Quaternion_t83606849  AugmentedTarget_get_Rotation_m562940804 (AugmentedTarget_t3213708220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmentedTarget::set_Rotation(UnityEngine.Quaternion)
extern "C"  void AugmentedTarget_set_Rotation_m1820612135 (AugmentedTarget_t3213708220 * __this, Quaternion_t83606849  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 EasyAR.AugmentedTarget::get_Position()
extern "C"  Vector3_t465617797  AugmentedTarget_get_Position_m1949340911 (AugmentedTarget_t3213708220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmentedTarget::set_Position(UnityEngine.Vector3)
extern "C"  void AugmentedTarget_set_Position_m2159625188 (AugmentedTarget_t3213708220 * __this, Vector3_t465617797  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmentedTarget::Dispose(System.Boolean)
extern "C"  void AugmentedTarget_Dispose_m2378178861 (AugmentedTarget_t3213708220 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion EasyAR.AugmentedTarget::QuaternionFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t83606849  AugmentedTarget_QuaternionFromMatrix_m2707645750 (AugmentedTarget_t3213708220 * __this, Matrix4x4_t1261955742  ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.AugmentedTarget::OnPoseSet(UnityEngine.Matrix4x4)
extern "C"  void AugmentedTarget_OnPoseSet_m2769589823 (AugmentedTarget_t3213708220 * __this, Matrix4x4_t1261955742  ___pose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
