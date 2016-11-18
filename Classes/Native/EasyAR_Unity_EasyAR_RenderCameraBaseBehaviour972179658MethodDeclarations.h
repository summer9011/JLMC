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

// EasyAR.RenderCameraBaseBehaviour
struct RenderCameraBaseBehaviour_t972179658;
// EasyAR.AugmenterBaseBehaviour
struct AugmenterBaseBehaviour_t2200604009;
// EasyAR.DeviceAbstractBehaviour
struct DeviceAbstractBehaviour_t4065891864;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_AugmenterBaseBehaviour2200604009.h"
#include "EasyAR_Unity_EasyAR_DeviceAbstractBehaviour4065891864.h"
#include "UnityEngine_UnityEngine_Matrix4x41261955742.h"

// System.Void EasyAR.RenderCameraBaseBehaviour::.ctor()
extern "C"  void RenderCameraBaseBehaviour__ctor_m1086510359 (RenderCameraBaseBehaviour_t972179658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::Bind(EasyAR.AugmenterBaseBehaviour)
extern "C"  void RenderCameraBaseBehaviour_Bind_m634322911 (RenderCameraBaseBehaviour_t972179658 * __this, AugmenterBaseBehaviour_t2200604009 * ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::Bind(EasyAR.DeviceAbstractBehaviour)
extern "C"  void RenderCameraBaseBehaviour_Bind_m404782620 (RenderCameraBaseBehaviour_t972179658 * __this, DeviceAbstractBehaviour_t4065891864 * ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::DetachAndStop()
extern "C"  void RenderCameraBaseBehaviour_DetachAndStop_m1917138279 (RenderCameraBaseBehaviour_t972179658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::AdjustPlane(EasyAR.DeviceAbstractBehaviour,System.Boolean)
extern "C"  void RenderCameraBaseBehaviour_AdjustPlane_m4024066965 (RenderCameraBaseBehaviour_t972179658 * __this, DeviceAbstractBehaviour_t4065891864 * ___device, bool ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::setRflag()
extern "C"  void RenderCameraBaseBehaviour_setRflag_m2700303587 (RenderCameraBaseBehaviour_t972179658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::ChangeHFlip(System.Boolean)
extern "C"  void RenderCameraBaseBehaviour_ChangeHFlip_m1436467781 (RenderCameraBaseBehaviour_t972179658 * __this, bool ___flip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 EasyAR.RenderCameraBaseBehaviour::ResizeGL(System.Int32,System.Int32)
extern "C"  Matrix4x4_t1261955742  RenderCameraBaseBehaviour_ResizeGL_m1463693981 (RenderCameraBaseBehaviour_t972179658 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::OnPreRender()
extern "C"  void RenderCameraBaseBehaviour_OnPreRender_m1238002819 (RenderCameraBaseBehaviour_t972179658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.RenderCameraBaseBehaviour::OnPreCull()
extern "C"  void RenderCameraBaseBehaviour_OnPreCull_m2187121055 (RenderCameraBaseBehaviour_t972179658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
