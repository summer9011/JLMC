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

// EasyAR.CameraDevice
struct CameraDevice_t1807135140;
// EasyAR.CameraCalibration
struct CameraCalibration_t2954674694;
// System.Single[]
struct SingleU5BU5D_t662464656;
// EasyAR.Vector2I[]
struct Vector2IU5BU5D_t3987642366;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_CameraCalibration2954674694.h"
#include "EasyAR_Unity_EasyAR_Vector2I2584456199.h"
#include "EasyAR_Unity_EasyAR_CameraDevice_Device862337626.h"
#include "EasyAR_Unity_EasyAR_CameraDevice_FocusMode2539261905.h"

// System.Void EasyAR.CameraDevice::.ctor()
extern "C"  void CameraDevice__ctor_m4394213 (CameraDevice_t1807135140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.CameraCalibration EasyAR.CameraDevice::get_Calibration()
extern "C"  CameraCalibration_t2954674694 * CameraDevice_get_Calibration_m1887046809 (CameraDevice_t1807135140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::set_Calibration(EasyAR.CameraCalibration)
extern "C"  void CameraDevice_set_Calibration_m2722880752 (CameraDevice_t1807135140 * __this, CameraCalibration_t2954674694 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] EasyAR.CameraDevice::get_SupportedFPS()
extern "C"  SingleU5BU5D_t662464656* CameraDevice_get_SupportedFPS_m2082042447 (CameraDevice_t1807135140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::set_SupportedFPS(System.Single[])
extern "C"  void CameraDevice_set_SupportedFPS_m816907482 (CameraDevice_t1807135140 * __this, SingleU5BU5D_t662464656* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.Vector2I[] EasyAR.CameraDevice::get_SupportedSize()
extern "C"  Vector2IU5BU5D_t3987642366* CameraDevice_get_SupportedSize_m3201007463 (CameraDevice_t1807135140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::set_SupportedSize(EasyAR.Vector2I[])
extern "C"  void CameraDevice_set_SupportedSize_m313564932 (CameraDevice_t1807135140 * __this, Vector2IU5BU5D_t3987642366* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::set_FPS(System.Single)
extern "C"  void CameraDevice_set_FPS_m895918942 (CameraDevice_t1807135140 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.Vector2I EasyAR.CameraDevice::get_Size()
extern "C"  Vector2I_t2584456199  CameraDevice_get_Size_m729634683 (CameraDevice_t1807135140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::set_Size(EasyAR.Vector2I)
extern "C"  void CameraDevice_set_Size_m808224476 (CameraDevice_t1807135140 * __this, Vector2I_t2584456199  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::set_HorizontalFlip(System.Boolean)
extern "C"  void CameraDevice_set_HorizontalFlip_m2199272178 (CameraDevice_t1807135140 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.CameraDevice::HFlip()
extern "C"  bool CameraDevice_HFlip_m1695867340 (CameraDevice_t1807135140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::GetSize()
extern "C"  void CameraDevice_GetSize_m2449862012 (CameraDevice_t1807135140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::Dispose(System.Boolean)
extern "C"  void CameraDevice_Dispose_m3084799825 (CameraDevice_t1807135140 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.CameraDevice::InitProperties()
extern "C"  void CameraDevice_InitProperties_m786244510 (CameraDevice_t1807135140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.CameraDevice::Start()
extern "C"  bool CameraDevice_Start_m1279565305 (CameraDevice_t1807135140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.CameraDevice::Stop()
extern "C"  bool CameraDevice_Stop_m2810264585 (CameraDevice_t1807135140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.CameraDevice::Open(EasyAR.CameraDevice/Device)
extern "C"  bool CameraDevice_Open_m3845342570 (CameraDevice_t1807135140 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.CameraDevice::Open(System.Int32)
extern "C"  bool CameraDevice_Open_m3502124954 (CameraDevice_t1807135140 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.CameraDevice::Close()
extern "C"  bool CameraDevice_Close_m612185843 (CameraDevice_t1807135140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.CameraDevice::SetFocusMode(EasyAR.CameraDevice/FocusMode)
extern "C"  bool CameraDevice_SetFocusMode_m1472287642 (CameraDevice_t1807135140 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
