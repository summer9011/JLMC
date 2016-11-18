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

// EasyAR.EngineNative
struct EngineNative_t1199083046;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t662464656;
// EasyAR.EngineNative/LogFunc
struct LogFunc_t2891211276;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// EasyAR.ImageTracker/TargetLoadCallbackC
struct TargetLoadCallbackC_t2114246551;
// EasyAR.VideoPlayer/CallBack
struct CallBack_t1186946879;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "EasyAR_Unity_EasyAR_EngineNative_LogFunc2891211276.h"
#include "EasyAR_Unity_EasyAR_ImageTracker_TargetLoadCallbac2114246551.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer_CallBack1186946879.h"

// System.Void EasyAR.EngineNative::.ctor()
extern "C"  void EngineNative__ctor_m444818887 (EngineNative_t1199083046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Log(System.String)
extern "C"  void EngineNative_Log_m2821737113 (Il2CppObject * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::DeInitialize()
extern "C"  void EngineNative_DeInitialize_m4223201936 (EngineNative_t1199083046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::Initialize(System.String,System.IntPtr)
extern "C"  bool EngineNative_Initialize_m2188113851 (EngineNative_t1199083046 * __this, String_t* ___key, IntPtr_t ___activity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Resume()
extern "C"  void EngineNative_Resume_m3436657002 (EngineNative_t1199083046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Pause()
extern "C"  void EngineNative_Pause_m90692609 (EngineNative_t1199083046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::GetProjectionGL(System.IntPtr,System.Single,System.Single,System.Int32,System.Single[])
extern "C"  void EngineNative_GetProjectionGL_m2542485699 (EngineNative_t1199083046 * __this, IntPtr_t ___calib, float ___nearPlane, float ___farPlane, int32_t ___rotation, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::SetAssetPath(System.String)
extern "C"  void EngineNative_SetAssetPath_m2601975448 (EngineNative_t1199083046 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::RegisterLogFunc(EasyAR.EngineNative/LogFunc)
extern "C"  void EngineNative_RegisterLogFunc_m1894646657 (EngineNative_t1199083046 * __this, LogFunc_t2891211276 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::Base_IsValid(System.IntPtr)
extern "C"  bool EngineNative_Base_IsValid_m709617123 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::Rotate(System.Int32)
extern "C"  int32_t EngineNative_Rotate_m4154453505 (EngineNative_t1199083046 * __this, int32_t ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_Augmenter()
extern "C"  IntPtr_t EngineNative_Create_Augmenter_m1635038035 (EngineNative_t1199083046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_Augmenter(System.IntPtr)
extern "C"  void EngineNative_Destory_Augmenter_m3430442244 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Augmenter_newFrame(System.IntPtr)
extern "C"  IntPtr_t EngineNative_Augmenter_newFrame_m2347928258 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::Augmenter_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_Augmenter_attachCamera_m2451497282 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::Augmenter_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_Augmenter_detachCamera_m735022368 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Augmenter_getVideoBackgroundTextureSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_Augmenter_getVideoBackgroundTextureSize_m2502992856 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::Augmenter_getVideoBackgroundTextureFormat(System.IntPtr)
extern "C"  int32_t EngineNative_Augmenter_getVideoBackgroundTextureFormat_m1076628895 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Augmenter_setVideoBackgroundTextureID(System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_Augmenter_setVideoBackgroundTextureID_m1051042761 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, IntPtr_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::Augmenter_getID(System.IntPtr)
extern "C"  int32_t EngineNative_Augmenter_getID_m93307173 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::Augmenter_getRenderingFlag(System.IntPtr)
extern "C"  int32_t EngineNative_Augmenter_getRenderingFlag_m1474364970 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_CameraCalibration()
extern "C"  IntPtr_t EngineNative_Create_CameraCalibration_m3157848296 (EngineNative_t1199083046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_CameraCalibration(System.IntPtr)
extern "C"  void EngineNative_Destory_CameraCalibration_m3286467035 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::CameraCalibration_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_CameraCalibration_getSize_m4186544445 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::CameraCalibration_getFocalLength(System.IntPtr,System.Single[])
extern "C"  void EngineNative_CameraCalibration_getFocalLength_m3061385587 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::CameraCalibration_getPrincipalPoint(System.IntPtr,System.Single[])
extern "C"  void EngineNative_CameraCalibration_getPrincipalPoint_m4234054640 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::CameraCalibration_getDistortionParameters(System.IntPtr,System.Single[])
extern "C"  void EngineNative_CameraCalibration_getDistortionParameters_m3612095189 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_CameraDevice()
extern "C"  IntPtr_t EngineNative_Create_CameraDevice_m2487373836 (EngineNative_t1199083046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_CameraDevice(System.IntPtr)
extern "C"  void EngineNative_Destory_CameraDevice_m2566945325 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::CameraDevice_start(System.IntPtr)
extern "C"  bool EngineNative_CameraDevice_start_m356773983 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::CameraDevice_stop(System.IntPtr)
extern "C"  bool EngineNative_CameraDevice_stop_m2848869051 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::CameraDevice_open(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_CameraDevice_open_m241235296 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::CameraDevice_close(System.IntPtr)
extern "C"  bool EngineNative_CameraDevice_close_m2421159049 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::CameraDevice_getNumSupportedFrameRate(System.IntPtr)
extern "C"  int32_t EngineNative_CameraDevice_getNumSupportedFrameRate_m2685927214 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNative::CameraDevice_getSupportedFrameRate(System.IntPtr,System.Int32)
extern "C"  float EngineNative_CameraDevice_getSupportedFrameRate_m1533231195 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::CameraDevice_setFrameRate(System.IntPtr,System.Single)
extern "C"  bool EngineNative_CameraDevice_setFrameRate_m1273639479 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, float ___fps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::CameraDevice_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_CameraDevice_getSize_m2460198475 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::CameraDevice_getNumSupportedSize(System.IntPtr)
extern "C"  int32_t EngineNative_CameraDevice_getNumSupportedSize_m3135715412 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::CameraDevice_getSupportedSize(System.IntPtr,System.Int32,System.Int32[])
extern "C"  void EngineNative_CameraDevice_getSupportedSize_m1354198968 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, int32_t ___idx, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::CameraDevice_setSize(System.IntPtr,System.Int32,System.Int32)
extern "C"  bool EngineNative_CameraDevice_setSize_m1807887036 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, int32_t ___w, int32_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::CameraDevice_getCameraCalibration(System.IntPtr)
extern "C"  IntPtr_t EngineNative_CameraDevice_getCameraCalibration_m1440073863 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::CameraDevice_setFocusMode(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_CameraDevice_setFocusMode_m2067136435 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::CameraDevice_setHorizontalFlip(System.IntPtr,System.Boolean)
extern "C"  void EngineNative_CameraDevice_setHorizontalFlip_m3850161395 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, bool ___flip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_Frame()
extern "C"  IntPtr_t EngineNative_Create_Frame_m1135919484 (EngineNative_t1199083046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_Frame(System.IntPtr)
extern "C"  void EngineNative_Destory_Frame_m3484747241 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double EasyAR.EngineNative::Frame_getTimeStamp(System.IntPtr)
extern "C"  double EngineNative_Frame_getTimeStamp_m211911422 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::Frame_getIndex(System.IntPtr)
extern "C"  int32_t EngineNative_Frame_getIndex_m3279339133 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Frame_targets(System.IntPtr)
extern "C"  IntPtr_t EngineNative_Frame_targets_m1408664470 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Frame_text(System.IntPtr)
extern "C"  IntPtr_t EngineNative_Frame_text_m4112174047 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_Image(System.IntPtr)
extern "C"  void EngineNative_Destory_Image_m3938675279 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_ImageTarget()
extern "C"  IntPtr_t EngineNative_Create_ImageTarget_m2967935611 (EngineNative_t1199083046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_ImageTarget(System.IntPtr)
extern "C"  void EngineNative_Destory_ImageTarget_m2148007084 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ImageTarget_getSize(System.IntPtr,System.Single[])
extern "C"  void EngineNative_ImageTarget_getSize_m901960784 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTarget_setSize(System.IntPtr,System.Single,System.Single)
extern "C"  bool EngineNative_ImageTarget_setSize_m2908437739 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, float ___w, float ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTarget_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNative_ImageTarget_load_m2672178499 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, String_t* ___path, int32_t ___storageType, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_Target()
extern "C"  IntPtr_t EngineNative_Create_Target_m3896831352 (EngineNative_t1199083046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_Target(System.IntPtr)
extern "C"  void EngineNative_Destory_Target_m1786237825 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::Target_getId(System.IntPtr)
extern "C"  int32_t EngineNative_Target_getId_m1471880806 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Target_getName(System.IntPtr)
extern "C"  IntPtr_t EngineNative_Target_getName_m4267869575 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Target_getUid(System.IntPtr)
extern "C"  IntPtr_t EngineNative_Target_getUid_m1716252954 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Target_metaData(System.IntPtr)
extern "C"  IntPtr_t EngineNative_Target_metaData_m1925487103 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::Target_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNative_Target_load_m1374650844 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, String_t* ___path, int32_t ___storageType, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_AugmentedTargetList(System.IntPtr)
extern "C"  void EngineNative_Destory_AugmentedTargetList_m2532189559 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::AugmentedTargetList_size(System.IntPtr)
extern "C"  int32_t EngineNative_AugmentedTargetList_size_m4272786784 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::AugmentedTargetList_at(System.IntPtr,System.Int32)
extern "C"  IntPtr_t EngineNative_AugmentedTargetList_at_m3348838790 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_AugmentedTarget(System.IntPtr)
extern "C"  void EngineNative_Destory_AugmentedTarget_m1665989125 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::AugmentedTarget_status(System.IntPtr)
extern "C"  int32_t EngineNative_AugmentedTarget_status_m2725316021 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::AugmentedTarget_target(System.IntPtr)
extern "C"  IntPtr_t EngineNative_AugmentedTarget_target_m1613771815 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::AugmentedTarget_pose(System.IntPtr,System.Single[])
extern "C"  void EngineNative_AugmentedTarget_pose_m1059040301 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_ImageTracker()
extern "C"  IntPtr_t EngineNative_Create_ImageTracker_m57166822 (EngineNative_t1199083046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_ImageTracker(System.IntPtr)
extern "C"  void EngineNative_Destory_ImageTracker_m1225707555 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTracker_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ImageTracker_attachCamera_m1499404169 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTracker_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ImageTracker_detachCamera_m3396803097 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ImageTracker_loadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_ImageTracker_loadTarget_m1436663314 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, IntPtr_t ___ds, IntPtr_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ImageTracker_unloadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_ImageTracker_unloadTarget_m1699924105 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, IntPtr_t ___ds, IntPtr_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTracker_start(System.IntPtr)
extern "C"  bool EngineNative_ImageTracker_start_m2045412149 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTracker_stop(System.IntPtr)
extern "C"  bool EngineNative_ImageTracker_stop_m2826028601 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_TargetLoadCallBackUnity(System.IntPtr,EasyAR.ImageTracker/TargetLoadCallbackC)
extern "C"  IntPtr_t EngineNative_Create_TargetLoadCallBackUnity_m1607255122 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, TargetLoadCallbackC_t2114246551 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_TargetLoadCallBackUnity(System.IntPtr)
extern "C"  void EngineNative_Destory_TargetLoadCallBackUnity_m3528976045 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTracker_checkCallBack(System.IntPtr)
extern "C"  bool EngineNative_ImageTracker_checkCallBack_m3031656874 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ImageTracker_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNative_ImageTracker_setCallBackThread_m956860531 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ImageTracker_setSimultaneousNum(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_ImageTracker_setSimultaneousNum_m3223295613 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ImageTracker_simultaneousNum(System.IntPtr)
extern "C"  int32_t EngineNative_ImageTracker_simultaneousNum_m2991959026 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_BarCodeScanner()
extern "C"  IntPtr_t EngineNative_Create_BarCodeScanner_m3204891239 (EngineNative_t1199083046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_BarCodeScanner(System.IntPtr)
extern "C"  void EngineNative_Destory_BarCodeScanner_m3012401120 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::BarCodeScanner_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_BarCodeScanner_attachCamera_m2309580708 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::BarCodeScanner_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_BarCodeScanner_detachCamera_m3711851574 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::BarCodeScanner_start(System.IntPtr)
extern "C"  bool EngineNative_BarCodeScanner_start_m1838776240 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::BarCodeScanner_stop(System.IntPtr)
extern "C"  bool EngineNative_BarCodeScanner_stop_m2070562390 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_VideoPlayer()
extern "C"  IntPtr_t EngineNative_Create_VideoPlayer_m569136891 (EngineNative_t1199083046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_VideoPlayer(System.IntPtr)
extern "C"  void EngineNative_Destory_VideoPlayer_m1770243474 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::VideoPlayer_setRenderTexture(System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_VideoPlayer_setRenderTexture_m3789867137 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, IntPtr_t ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::VideoPlayer_setVideoType(System.IntPtr,System.Int32)
extern "C"  void EngineNative_VideoPlayer_setVideoType_m1287706604 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, int32_t ___videoType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::VideoPlayer_open(System.IntPtr,System.String,System.Int32,System.IntPtr)
extern "C"  void EngineNative_VideoPlayer_open_m3947678185 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, String_t* ___path, int32_t ___storageType, IntPtr_t ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::VideoPlayer_close(System.IntPtr)
extern "C"  void EngineNative_VideoPlayer_close_m3950640086 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::VideoPlayer_play(System.IntPtr)
extern "C"  bool EngineNative_VideoPlayer_play_m97701948 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::VideoPlayer_stop(System.IntPtr)
extern "C"  bool EngineNative_VideoPlayer_stop_m1582918110 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::VideoPlayer_pause(System.IntPtr)
extern "C"  bool EngineNative_VideoPlayer_pause_m623121642 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::VideoPlayer_updateFrame(System.IntPtr)
extern "C"  void EngineNative_VideoPlayer_updateFrame_m4250609664 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::VideoPlayer_duration(System.IntPtr)
extern "C"  int32_t EngineNative_VideoPlayer_duration_m1593515250 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::VideoPlayer_currentPosition(System.IntPtr)
extern "C"  int32_t EngineNative_VideoPlayer_currentPosition_m3026906366 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::VideoPlayer_seek(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_VideoPlayer_seek_m3080319849 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::VideoPlayer_size(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_VideoPlayer_size_m3794945686 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___arr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNative::VideoPlayer_volume(System.IntPtr)
extern "C"  float EngineNative_VideoPlayer_volume_m1581759604 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::VideoPlayer_setVolume(System.IntPtr,System.Single)
extern "C"  bool EngineNative_VideoPlayer_setVolume_m637241031 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, float ___volume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Create_VideoPlayerCallBackUnity(System.IntPtr,EasyAR.VideoPlayer/CallBack)
extern "C"  IntPtr_t EngineNative_Create_VideoPlayerCallBackUnity_m3813401596 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, CallBack_t1186946879 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::VideoPlayer_checkCallBack(System.IntPtr)
extern "C"  bool EngineNative_VideoPlayer_checkCallBack_m1707557271 (EngineNative_t1199083046 * __this, IntPtr_t ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::VideoPlayer_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNative_VideoPlayer_setCallBackThread_m2549172742 (EngineNative_t1199083046 * __this, IntPtr_t ___callback, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::Destory_VideoPlayerCallBackUnity(System.IntPtr)
extern "C"  void EngineNative_Destory_VideoPlayerCallBackUnity_m494358904 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::Cast_Target2ImageTarget(System.IntPtr)
extern "C"  IntPtr_t EngineNative_Cast_Target2ImageTarget_m3280536931 (EngineNative_t1199083046 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarGetProjectionGL(System.IntPtr,System.Single,System.Single,System.Int32,System.Single[])
extern "C"  void EngineNative_ezarGetProjectionGL_m2916226767 (Il2CppObject * __this /* static, unused */, IntPtr_t ___calib, float ___nearPlane, float ___farPlane, int32_t ___rotation, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarSetAssetPath(System.String)
extern "C"  void EngineNative_ezarSetAssetPath_m1944517532 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarRegisterLogFunc(EasyAR.EngineNative/LogFunc)
extern "C"  void EngineNative_ezarRegisterLogFunc_m2264617869 (Il2CppObject * __this /* static, unused */, LogFunc_t2891211276 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarBase_IsValid(System.IntPtr)
extern "C"  bool EngineNative_ezarBase_IsValid_m2344918775 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarOnResume()
extern "C"  void EngineNative_ezarOnResume_m3977828671 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarOnPause()
extern "C"  void EngineNative_ezarOnPause_m1591961264 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarNativeInit(System.String,System.IntPtr)
extern "C"  bool EngineNative_ezarNativeInit_m3883224240 (Il2CppObject * __this /* static, unused */, String_t* ___key, IntPtr_t ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarSetRotation(System.Int32)
extern "C"  int32_t EngineNative_ezarSetRotation_m139219716 (Il2CppObject * __this /* static, unused */, int32_t ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_Augmenter()
extern "C"  IntPtr_t EngineNative_ezarCreate_Augmenter_m2047858135 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_Augmenter(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_Augmenter_m1797692408 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarAugmenter_newFrame(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarAugmenter_newFrame_m3596138062 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarAugmenter_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ezarAugmenter_attachCamera_m472309694 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarAugmenter_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ezarAugmenter_detachCamera_m1986470900 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarAugmenter_getVideoBackgroundTextureSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_ezarAugmenter_getVideoBackgroundTextureSize_m1298093092 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarAugmenter_getVideoBackgroundTextureFormat(System.IntPtr)
extern "C"  int32_t EngineNative_ezarAugmenter_getVideoBackgroundTextureFormat_m595671779 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarAugmenter_setVideoBackgroundTextureID(System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_ezarAugmenter_setVideoBackgroundTextureID_m1627825357 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarAugmenter_getID(System.IntPtr)
extern "C"  int32_t EngineNative_ezarAugmenter_getID_m22328993 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarAugmenter_getRenderingFlag(System.IntPtr)
extern "C"  int32_t EngineNative_ezarAugmenter_getRenderingFlag_m3586863702 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_CameraCalibration()
extern "C"  IntPtr_t EngineNative_ezarCreate_CameraCalibration_m789266420 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_CameraCalibration(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_CameraCalibration_m7036943 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarCameraCalibration_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_ezarCameraCalibration_getSize_m3239797889 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarCameraCalibration_getFocalLength(System.IntPtr,System.Single[])
extern "C"  void EngineNative_ezarCameraCalibration_getFocalLength_m1103753191 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarCameraCalibration_getPrincipalPoint(System.IntPtr,System.Single[])
extern "C"  void EngineNative_ezarCameraCalibration_getPrincipalPoint_m1321661804 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarCameraCalibration_getDistortionParameters(System.IntPtr,System.Single[])
extern "C"  void EngineNative_ezarCameraCalibration_getDistortionParameters_m2744262177 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_CameraDevice()
extern "C"  IntPtr_t EngineNative_ezarCreate_CameraDevice_m741304904 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_CameraDevice(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_CameraDevice_m452923433 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarCameraDevice_start(System.IntPtr)
extern "C"  bool EngineNative_ezarCameraDevice_start_m4279398883 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarCameraDevice_stop(System.IntPtr)
extern "C"  bool EngineNative_ezarCameraDevice_stop_m2299278439 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarCameraDevice_open(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_ezarCameraDevice_open_m2022564596 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarCameraDevice_close(System.IntPtr)
extern "C"  bool EngineNative_ezarCameraDevice_close_m2890941213 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarCameraDevice_getNumSupportedFrameRate(System.IntPtr)
extern "C"  int32_t EngineNative_ezarCameraDevice_getNumSupportedFrameRate_m2945061018 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNative::ezarCameraDevice_getSupportedFrameRate(System.IntPtr,System.Int32)
extern "C"  float EngineNative_ezarCameraDevice_getSupportedFrameRate_m3914590807 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarCameraDevice_setFrameRate(System.IntPtr,System.Single)
extern "C"  bool EngineNative_ezarCameraDevice_setFrameRate_m3392247819 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, float ___fps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarCameraDevice_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_ezarCameraDevice_getSize_m3929056959 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarCameraDevice_getNumSupportedSize(System.IntPtr)
extern "C"  int32_t EngineNative_ezarCameraDevice_getNumSupportedSize_m2559151760 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarCameraDevice_getSupportedSize(System.IntPtr,System.Int32,System.Int32[])
extern "C"  void EngineNative_ezarCameraDevice_getSupportedSize_m2050729068 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___idx, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarCameraDevice_setSize(System.IntPtr,System.Int32,System.Int32)
extern "C"  bool EngineNative_ezarCameraDevice_setSize_m1163669944 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___w, int32_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCameraDevice_getCameraCalibration(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarCameraDevice_getCameraCalibration_m28711227 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarCameraDevice_setFocusMode(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_ezarCameraDevice_setFocusMode_m3955443359 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarCameraDevice_setHorizontalFlip(System.IntPtr,System.Boolean)
extern "C"  void EngineNative_ezarCameraDevice_setHorizontalFlip_m3827411887 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, bool ___flip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_Frame()
extern "C"  IntPtr_t EngineNative_ezarCreate_Frame_m3618445704 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_Frame(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_Frame_m3233349045 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double EasyAR.EngineNative::ezarFrame_getTimeStamp(System.IntPtr)
extern "C"  double EngineNative_ezarFrame_getTimeStamp_m2372808586 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarFrame_getIndex(System.IntPtr)
extern "C"  int32_t EngineNative_ezarFrame_getIndex_m1678427201 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarFrame_targets(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarFrame_targets_m2357766426 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarFrame_text(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarFrame_text_m2345987091 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_Image(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_Image_m3067278995 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_ImageTarget()
extern "C"  IntPtr_t EngineNative_ezarCreate_ImageTarget_m328272559 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_ImageTarget(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_ImageTarget_m1228860336 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarImageTarget_getSize(System.IntPtr,System.Single[])
extern "C"  void EngineNative_ezarImageTarget_getSize_m3225765444 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTarget_setSize(System.IntPtr,System.Single,System.Single)
extern "C"  bool EngineNative_ezarImageTarget_setSize_m3601036263 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, float ___w, float ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTarget_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNative_ezarImageTarget_load_m2670001535 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, String_t* ___path, int32_t ___storageType, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_Target()
extern "C"  IntPtr_t EngineNative_ezarCreate_Target_m2791233340 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_Target(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_Target_m153991877 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarTarget_getId(System.IntPtr)
extern "C"  int32_t EngineNative_ezarTarget_getId_m2000860522 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarTarget_getName(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarTarget_getName_m3407823171 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarTarget_getUid(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarTarget_getUid_m2747186894 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarTarget_metaData(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarTarget_metaData_m1979624755 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarTarget_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNative_ezarTarget_load_m3870460640 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, String_t* ___path, int32_t ___storageType, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_AugmentedTargetList(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_AugmentedTargetList_m616509563 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarAugmentedTargetList_size(System.IntPtr)
extern "C"  int32_t EngineNative_ezarAugmentedTargetList_size_m3262208924 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarAugmentedTargetList_at(System.IntPtr,System.Int32)
extern "C"  IntPtr_t EngineNative_ezarAugmentedTargetList_at_m2309457482 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_AugmentedTarget(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_AugmentedTarget_m3702790849 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarAugmentedTarget_status(System.IntPtr)
extern "C"  int32_t EngineNative_ezarAugmentedTarget_status_m3282261041 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarAugmentedTarget_target(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarAugmentedTarget_target_m2134587699 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarAugmentedTarget_pose(System.IntPtr,System.Single[])
extern "C"  void EngineNative_ezarAugmentedTarget_pose_m3962609913 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_ImageTracker()
extern "C"  IntPtr_t EngineNative_ezarCreate_ImageTracker_m165253346 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_ImageTracker(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_ImageTracker_m2342907559 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTracker_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ezarImageTracker_attachCamera_m2978121885 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTracker_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ezarImageTracker_detachCamera_m1390090925 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarImageTracker_loadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_ezarImageTracker_loadTarget_m3557646278 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___ds, IntPtr_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarImageTracker_unloadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_ezarImageTracker_unloadTarget_m3493874181 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___ds, IntPtr_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTracker_start(System.IntPtr)
extern "C"  bool EngineNative_ezarImageTracker_start_m2308446129 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTracker_stop(System.IntPtr)
extern "C"  bool EngineNative_ezarImageTracker_stop_m3337169037 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_TargetLoadCallBackUnity(System.IntPtr,EasyAR.ImageTracker/TargetLoadCallbackC)
extern "C"  IntPtr_t EngineNative_ezarCreate_TargetLoadCallBackUnity_m2993422870 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, TargetLoadCallbackC_t2114246551 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_TargetLoadCallBackUnity(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_TargetLoadCallBackUnity_m2142827489 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTracker_checkCallBack(System.IntPtr)
extern "C"  bool EngineNative_ezarImageTracker_checkCallBack_m741525398 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarImageTracker_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNative_ezarImageTracker_setCallBackThread_m2188820727 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarImageTracker_setSimultaneousNum(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_ezarImageTracker_setSimultaneousNum_m4017474345 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarImageTracker_simultaneousNum(System.IntPtr)
extern "C"  int32_t EngineNative_ezarImageTracker_simultaneousNum_m1406173878 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_BarCodeScanner()
extern "C"  IntPtr_t EngineNative_ezarCreate_BarCodeScanner_m3493886123 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_BarCodeScanner(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_BarCodeScanner_m3650426452 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarBarCodeScanner_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ezarBarCodeScanner_attachCamera_m2248160360 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarBarCodeScanner_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNative_ezarBarCodeScanner_detachCamera_m3481896570 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarBarCodeScanner_start(System.IntPtr)
extern "C"  bool EngineNative_ezarBarCodeScanner_start_m3925466076 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarBarCodeScanner_stop(System.IntPtr)
extern "C"  bool EngineNative_ezarBarCodeScanner_stop_m3329924570 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_VideoPlayer()
extern "C"  IntPtr_t EngineNative_ezarCreate_VideoPlayer_m3348992815 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_VideoPlayer(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_VideoPlayer_m3824663966 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarVideoPlayer_setRenderTexture(System.IntPtr,System.IntPtr)
extern "C"  void EngineNative_ezarVideoPlayer_setRenderTexture_m1654393205 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarVideoPlayer_setVideoType(System.IntPtr,System.Int32)
extern "C"  void EngineNative_ezarVideoPlayer_setVideoType_m2453678776 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___videoType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarVideoPlayer_open(System.IntPtr,System.String,System.Int32,System.IntPtr)
extern "C"  void EngineNative_ezarVideoPlayer_open_m1903897317 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, String_t* ___path, int32_t ___storageType, IntPtr_t ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarVideoPlayer_close(System.IntPtr)
extern "C"  void EngineNative_ezarVideoPlayer_close_m4074953618 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarVideoPlayer_play(System.IntPtr)
extern "C"  bool EngineNative_ezarVideoPlayer_play_m2740866488 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarVideoPlayer_stop(System.IntPtr)
extern "C"  bool EngineNative_ezarVideoPlayer_stop_m902706354 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarVideoPlayer_pause(System.IntPtr)
extern "C"  bool EngineNative_ezarVideoPlayer_pause_m3346641134 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarVideoPlayer_updateFrame(System.IntPtr)
extern "C"  void EngineNative_ezarVideoPlayer_updateFrame_m2616146100 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarVideoPlayer_duration(System.IntPtr)
extern "C"  int32_t EngineNative_ezarVideoPlayer_duration_m4061482398 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNative::ezarVideoPlayer_currentPosition(System.IntPtr)
extern "C"  int32_t EngineNative_ezarVideoPlayer_currentPosition_m288546490 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarVideoPlayer_seek(System.IntPtr,System.Int32)
extern "C"  bool EngineNative_ezarVideoPlayer_seek_m3268192253 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarVideoPlayer_size(System.IntPtr,System.Int32[])
extern "C"  void EngineNative_ezarVideoPlayer_size_m4291701538 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___arr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNative::ezarVideoPlayer_volume(System.IntPtr)
extern "C"  float EngineNative_ezarVideoPlayer_volume_m4208330744 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarVideoPlayer_setVolume(System.IntPtr,System.Single)
extern "C"  bool EngineNative_ezarVideoPlayer_setVolume_m4086726235 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, float ___volume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCreate_VideoPlayerCallBackUnity(System.IntPtr,EasyAR.VideoPlayer/CallBack)
extern "C"  IntPtr_t EngineNative_ezarCreate_VideoPlayerCallBackUnity_m773897288 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, CallBack_t1186946879 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNative::ezarVideoPlayer_checkCallBack(System.IntPtr)
extern "C"  bool EngineNative_ezarVideoPlayer_checkCallBack_m2174075035 (Il2CppObject * __this /* static, unused */, IntPtr_t ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarVideoPlayer_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNative_ezarVideoPlayer_setCallBackThread_m2012226434 (Il2CppObject * __this /* static, unused */, IntPtr_t ___callback, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative::ezarDestory_VideoPlayerCallBackUnity(System.IntPtr)
extern "C"  void EngineNative_ezarDestory_VideoPlayerCallBackUnity_m1694509444 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNative::ezarCast_Target2ImageTarget(System.IntPtr)
extern "C"  IntPtr_t EngineNative_ezarCast_Target2ImageTarget_m4077132119 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
