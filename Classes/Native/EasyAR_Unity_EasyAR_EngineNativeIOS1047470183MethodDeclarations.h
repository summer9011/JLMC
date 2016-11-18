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

// EasyAR.EngineNativeIOS
struct EngineNativeIOS_t1047470183;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t662464656;
// EasyAR.EngineNativeIOS/LogFunc
struct LogFunc_t2891211277;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// EasyAR.ImageTracker/TargetLoadCallbackC
struct TargetLoadCallbackC_t2114246551;
// EasyAR.VideoPlayer/CallBack
struct CallBack_t1186946879;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "EasyAR_Unity_EasyAR_EngineNativeIOS_LogFunc2891211276.h"
#include "EasyAR_Unity_EasyAR_ImageTracker_TargetLoadCallbac2114246551.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer_CallBack1186946879.h"

// System.Void EasyAR.EngineNativeIOS::.ctor()
extern "C"  void EngineNativeIOS__ctor_m219101194 (EngineNativeIOS_t1047470183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Log(System.String)
extern "C"  void EngineNativeIOS_Log_m2657973302 (Il2CppObject * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::DeInitialize()
extern "C"  void EngineNativeIOS_DeInitialize_m622576271 (EngineNativeIOS_t1047470183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::Initialize(System.String,System.IntPtr)
extern "C"  bool EngineNativeIOS_Initialize_m144763754 (EngineNativeIOS_t1047470183 * __this, String_t* ___key, IntPtr_t ___activity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Resume()
extern "C"  void EngineNativeIOS_Resume_m13244555 (EngineNativeIOS_t1047470183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Pause()
extern "C"  void EngineNativeIOS_Pause_m580696508 (EngineNativeIOS_t1047470183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::GetProjectionGL(System.IntPtr,System.Single,System.Single,System.Int32,System.Single[])
extern "C"  void EngineNativeIOS_GetProjectionGL_m2600828030 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___calib, float ___nearPlane, float ___farPlane, int32_t ___rotation, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::SetAssetPath(System.String)
extern "C"  void EngineNativeIOS_SetAssetPath_m513830807 (EngineNativeIOS_t1047470183 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::RegisterLogFunc(EasyAR.EngineNativeIOS/LogFunc)
extern "C"  void EngineNativeIOS_RegisterLogFunc_m1695546217 (EngineNativeIOS_t1047470183 * __this, LogFunc_t2891211277 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::Base_IsValid(System.IntPtr)
extern "C"  bool EngineNativeIOS_Base_IsValid_m1489096428 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::Rotate(System.Int32)
extern "C"  int32_t EngineNativeIOS_Rotate_m921991988 (EngineNativeIOS_t1047470183 * __this, int32_t ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_Augmenter()
extern "C"  IntPtr_t EngineNativeIOS_Create_Augmenter_m1118303634 (EngineNativeIOS_t1047470183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_Augmenter(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_Augmenter_m2388454131 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Augmenter_newFrame(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_Augmenter_newFrame_m851067733 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::Augmenter_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_Augmenter_attachCamera_m2071174885 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::Augmenter_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_Augmenter_detachCamera_m1368233421 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Augmenter_getVideoBackgroundTextureSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_Augmenter_getVideoBackgroundTextureSize_m2790319729 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::Augmenter_getVideoBackgroundTextureFormat(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_Augmenter_getVideoBackgroundTextureFormat_m2431759512 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Augmenter_setVideoBackgroundTextureID(System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_Augmenter_setVideoBackgroundTextureID_m633997092 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, IntPtr_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::Augmenter_getID(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_Augmenter_getID_m1380910320 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::Augmenter_getRenderingFlag(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_Augmenter_getRenderingFlag_m3496948495 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_CameraCalibration()
extern "C"  IntPtr_t EngineNativeIOS_Create_CameraCalibration_m1346576659 (EngineNativeIOS_t1047470183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_CameraCalibration(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_CameraCalibration_m3065141102 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::CameraCalibration_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_CameraCalibration_getSize_m1061215096 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::CameraCalibration_getFocalLength(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_CameraCalibration_getFocalLength_m2060407976 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::CameraCalibration_getPrincipalPoint(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_CameraCalibration_getPrincipalPoint_m1574488855 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::CameraCalibration_getDistortionParameters(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_CameraCalibration_getDistortionParameters_m2738252936 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_CameraDevice()
extern "C"  IntPtr_t EngineNativeIOS_Create_CameraDevice_m3551612529 (EngineNativeIOS_t1047470183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_CameraDevice(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_CameraDevice_m2719460690 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::CameraDevice_start(System.IntPtr)
extern "C"  bool EngineNativeIOS_CameraDevice_start_m3291046398 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::CameraDevice_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_CameraDevice_stop_m3446275916 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::CameraDevice_open(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_CameraDevice_open_m982798435 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::CameraDevice_close(System.IntPtr)
extern "C"  bool EngineNativeIOS_CameraDevice_close_m984660906 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::CameraDevice_getNumSupportedFrameRate(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_CameraDevice_getNumSupportedFrameRate_m578235213 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNativeIOS::CameraDevice_getSupportedFrameRate(System.IntPtr,System.Int32)
extern "C"  float EngineNativeIOS_CameraDevice_getSupportedFrameRate_m3956361032 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::CameraDevice_setFrameRate(System.IntPtr,System.Single)
extern "C"  bool EngineNativeIOS_CameraDevice_setFrameRate_m2658035942 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, float ___fps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::CameraDevice_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_CameraDevice_getSize_m2687560030 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::CameraDevice_getNumSupportedSize(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_CameraDevice_getNumSupportedSize_m1259493343 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::CameraDevice_getSupportedSize(System.IntPtr,System.Int32,System.Int32[])
extern "C"  void EngineNativeIOS_CameraDevice_getSupportedSize_m2685365561 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, int32_t ___idx, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::CameraDevice_setSize(System.IntPtr,System.Int32,System.Int32)
extern "C"  bool EngineNativeIOS_CameraDevice_setSize_m2346854273 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, int32_t ___w, int32_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::CameraDevice_getCameraCalibration(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_CameraDevice_getCameraCalibration_m1665358480 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::CameraDevice_setFocusMode(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_CameraDevice_setFocusMode_m1788440308 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::CameraDevice_setHorizontalFlip(System.IntPtr,System.Boolean)
extern "C"  void EngineNativeIOS_CameraDevice_setHorizontalFlip_m3189955648 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, bool ___flip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_Frame()
extern "C"  IntPtr_t EngineNativeIOS_Create_Frame_m3355968081 (EngineNativeIOS_t1047470183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_Frame(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_Frame_m3318351838 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double EasyAR.EngineNativeIOS::Frame_getTimeStamp(System.IntPtr)
extern "C"  double EngineNativeIOS_Frame_getTimeStamp_m1306734203 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::Frame_getIndex(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_Frame_getIndex_m2923183154 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Frame_targets(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_Frame_targets_m4047007329 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Frame_text(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_Frame_text_m358680782 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_Image(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_Image_m3353100962 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_ImageTarget()
extern "C"  IntPtr_t EngineNativeIOS_Create_ImageTarget_m1618911434 (EngineNativeIOS_t1047470183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_ImageTarget(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_ImageTarget_m2255278283 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ImageTarget_getSize(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_ImageTarget_getSize_m1521603873 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTarget_setSize(System.IntPtr,System.Single,System.Single)
extern "C"  bool EngineNativeIOS_ImageTarget_setSize_m3884498636 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, float ___w, float ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTarget_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNativeIOS_ImageTarget_load_m274857418 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, String_t* ___path, int32_t ___storageType, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_Target()
extern "C"  IntPtr_t EngineNativeIOS_Create_Target_m984257237 (EngineNativeIOS_t1047470183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_Target(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_Target_m4050541790 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::Target_getId(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_Target_getId_m3839337883 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Target_getName(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_Target_getName_m1891459902 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Target_getUid(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_Target_getUid_m716105221 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Target_metaData(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_Target_metaData_m3601794056 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::Target_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNativeIOS_Target_load_m3979479113 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, String_t* ___path, int32_t ___storageType, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_AugmentedTargetList(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_AugmentedTargetList_m2433537724 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::AugmentedTargetList_size(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_AugmentedTargetList_size_m2021284099 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::AugmentedTargetList_at(System.IntPtr,System.Int32)
extern "C"  IntPtr_t EngineNativeIOS_AugmentedTargetList_at_m1663243009 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_AugmentedTarget(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_AugmentedTarget_m2039976200 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::AugmentedTarget_status(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_AugmentedTarget_status_m2938567154 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::AugmentedTarget_target(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_AugmentedTarget_target_m3013235838 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::AugmentedTarget_pose(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_AugmentedTarget_pose_m632738898 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_ImageTracker()
extern "C"  IntPtr_t EngineNativeIOS_Create_ImageTracker_m2739632691 (EngineNativeIOS_t1047470183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_ImageTracker(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_ImageTracker_m3555406824 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTracker_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ImageTracker_attachCamera_m3584773696 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTracker_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ImageTracker_detachCamera_m346543530 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ImageTracker_loadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_ImageTracker_loadTarget_m79026635 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, IntPtr_t ___ds, IntPtr_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ImageTracker_unloadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_ImageTracker_unloadTarget_m3302582670 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, IntPtr_t ___ds, IntPtr_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTracker_start(System.IntPtr)
extern "C"  bool EngineNativeIOS_ImageTracker_start_m2368727700 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTracker_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_ImageTracker_stop_m314920538 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_TargetLoadCallBackUnity(System.IntPtr,EasyAR.ImageTracker/TargetLoadCallbackC)
extern "C"  IntPtr_t EngineNativeIOS_Create_TargetLoadCallBackUnity_m2363187741 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, TargetLoadCallbackC_t2114246551 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_TargetLoadCallBackUnity(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_TargetLoadCallBackUnity_m1022977608 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTracker_checkCallBack(System.IntPtr)
extern "C"  bool EngineNativeIOS_ImageTracker_checkCallBack_m475403527 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ImageTracker_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNativeIOS_ImageTracker_setCallBackThread_m2385842694 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ImageTracker_setSimultaneousNum(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_ImageTracker_setSimultaneousNum_m1259664550 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ImageTracker_simultaneousNum(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ImageTracker_simultaneousNum_m1686059697 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_BarCodeScanner()
extern "C"  IntPtr_t EngineNativeIOS_Create_BarCodeScanner_m1633677414 (EngineNativeIOS_t1047470183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_BarCodeScanner(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_BarCodeScanner_m3067855199 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::BarCodeScanner_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_BarCodeScanner_attachCamera_m2769888689 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::BarCodeScanner_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_BarCodeScanner_detachCamera_m3519138609 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::BarCodeScanner_start(System.IntPtr)
extern "C"  bool EngineNativeIOS_BarCodeScanner_start_m4012743173 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::BarCodeScanner_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_BarCodeScanner_stop_m1617621825 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_VideoPlayer()
extern "C"  IntPtr_t EngineNativeIOS_Create_VideoPlayer_m4100575044 (EngineNativeIOS_t1047470183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_VideoPlayer(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_VideoPlayer_m3609943507 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::VideoPlayer_setRenderTexture(System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_VideoPlayer_setRenderTexture_m3270529710 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, IntPtr_t ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::VideoPlayer_setVideoType(System.IntPtr,System.Int32)
extern "C"  void EngineNativeIOS_VideoPlayer_setVideoType_m2879547235 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, int32_t ___videoType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::VideoPlayer_open(System.IntPtr,System.String,System.Int32,System.IntPtr)
extern "C"  void EngineNativeIOS_VideoPlayer_open_m1572666542 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, String_t* ___path, int32_t ___storageType, IntPtr_t ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::VideoPlayer_close(System.IntPtr)
extern "C"  void EngineNativeIOS_VideoPlayer_close_m3263498919 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::VideoPlayer_play(System.IntPtr)
extern "C"  bool EngineNativeIOS_VideoPlayer_play_m137282209 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::VideoPlayer_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_VideoPlayer_stop_m3561879209 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::VideoPlayer_pause(System.IntPtr)
extern "C"  bool EngineNativeIOS_VideoPlayer_pause_m3011400111 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::VideoPlayer_updateFrame(System.IntPtr)
extern "C"  void EngineNativeIOS_VideoPlayer_updateFrame_m2090626385 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::VideoPlayer_duration(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_VideoPlayer_duration_m3961930793 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::VideoPlayer_currentPosition(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_VideoPlayer_currentPosition_m877781803 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::VideoPlayer_seek(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_VideoPlayer_seek_m2842704032 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::VideoPlayer_size(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_VideoPlayer_size_m1953493415 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___arr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNativeIOS::VideoPlayer_volume(System.IntPtr)
extern "C"  float EngineNativeIOS_VideoPlayer_volume_m3170338611 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::VideoPlayer_setVolume(System.IntPtr,System.Single)
extern "C"  bool EngineNativeIOS_VideoPlayer_setVolume_m1081260384 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, float ___volume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Create_VideoPlayerCallBackUnity(System.IntPtr,EasyAR.VideoPlayer/CallBack)
extern "C"  IntPtr_t EngineNativeIOS_Create_VideoPlayerCallBackUnity_m3303018273 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, CallBack_t1186946879 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::VideoPlayer_checkCallBack(System.IntPtr)
extern "C"  bool EngineNativeIOS_VideoPlayer_checkCallBack_m1368507328 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::VideoPlayer_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNativeIOS_VideoPlayer_setCallBackThread_m1554388503 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___callback, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::Destory_VideoPlayerCallBackUnity(System.IntPtr)
extern "C"  void EngineNativeIOS_Destory_VideoPlayerCallBackUnity_m3361585649 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::Cast_Target2ImageTarget(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_Cast_Target2ImageTarget_m3162906092 (EngineNativeIOS_t1047470183 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarGetProjectionGL(System.IntPtr,System.Single,System.Single,System.Int32,System.Single[])
extern "C"  void EngineNativeIOS_ezarGetProjectionGL_m2307621522 (Il2CppObject * __this /* static, unused */, IntPtr_t ___calib, float ___nearPlane, float ___farPlane, int32_t ___rotation, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarSetAssetPath(System.String)
extern "C"  void EngineNativeIOS_ezarSetAssetPath_m1242544211 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarRegisterLogFunc(EasyAR.EngineNativeIOS/LogFunc)
extern "C"  void EngineNativeIOS_ezarRegisterLogFunc_m3302492093 (Il2CppObject * __this /* static, unused */, LogFunc_t2891211277 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarBase_IsValid(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarBase_IsValid_m340884984 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarOnResume()
extern "C"  void EngineNativeIOS_ezarOnResume_m1347189370 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarOnPause()
extern "C"  void EngineNativeIOS_ezarOnPause_m3015858977 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarNativeInit(System.String,System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarNativeInit_m716861573 (Il2CppObject * __this /* static, unused */, String_t* ___key, IntPtr_t ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarSetRotation(System.Int32)
extern "C"  int32_t EngineNativeIOS_ezarSetRotation_m2224720687 (Il2CppObject * __this /* static, unused */, int32_t ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_Augmenter()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_Augmenter_m3787425166 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_Augmenter(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_Augmenter_m2362994527 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarAugmenter_newFrame(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarAugmenter_newFrame_m3473232041 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarAugmenter_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarAugmenter_attachCamera_m2645789609 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarAugmenter_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarAugmenter_detachCamera_m427907097 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarAugmenter_getVideoBackgroundTextureSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_ezarAugmenter_getVideoBackgroundTextureSize_m3270256581 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarAugmenter_getVideoBackgroundTextureFormat(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarAugmenter_getVideoBackgroundTextureFormat_m4099121420 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarAugmenter_setVideoBackgroundTextureID(System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_ezarAugmenter_setVideoBackgroundTextureID_m2617229536 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarAugmenter_getID(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarAugmenter_getID_m4069868860 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarAugmenter_getRenderingFlag(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarAugmenter_getRenderingFlag_m1893520459 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_CameraCalibration()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_CameraCalibration_m2412659047 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_CameraCalibration(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_CameraCalibration_m3382695834 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarCameraCalibration_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_ezarCameraCalibration_getSize_m3415178612 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarCameraCalibration_getFocalLength(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_ezarCameraCalibration_getFocalLength_m190374804 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarCameraCalibration_getPrincipalPoint(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_ezarCameraCalibration_getPrincipalPoint_m2452266459 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarCameraCalibration_getDistortionParameters(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_ezarCameraCalibration_getDistortionParameters_m2947822044 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_CameraDevice()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_CameraDevice_m206099765 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_CameraDevice(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_CameraDevice_m1716181910 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarCameraDevice_start(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarCameraDevice_start_m55157562 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarCameraDevice_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarCameraDevice_stop_m3588790784 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarCameraDevice_open(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_ezarCameraDevice_open_m3396149103 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarCameraDevice_close(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarCameraDevice_close_m4170175542 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarCameraDevice_getNumSupportedFrameRate(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarCameraDevice_getNumSupportedFrameRate_m3969607113 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNativeIOS::ezarCameraDevice_getSupportedFrameRate(System.IntPtr,System.Int32)
extern "C"  float EngineNativeIOS_ezarCameraDevice_getSupportedFrameRate_m3588548932 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarCameraDevice_setFrameRate(System.IntPtr,System.Single)
extern "C"  bool EngineNativeIOS_ezarCameraDevice_setFrameRate_m2660050738 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, float ___fps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarCameraDevice_getSize(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_ezarCameraDevice_getSize_m1756944202 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarCameraDevice_getNumSupportedSize(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarCameraDevice_getNumSupportedSize_m3640507115 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarCameraDevice_getSupportedSize(System.IntPtr,System.Int32,System.Int32[])
extern "C"  void EngineNativeIOS_ezarCameraDevice_getSupportedSize_m3120302693 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___idx, Int32U5BU5D_t3315407976* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarCameraDevice_setSize(System.IntPtr,System.Int32,System.Int32)
extern "C"  bool EngineNativeIOS_ezarCameraDevice_setSize_m2876812101 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___w, int32_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCameraDevice_getCameraCalibration(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarCameraDevice_getCameraCalibration_m1585760124 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarCameraDevice_setFocusMode(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_ezarCameraDevice_setFocusMode_m1128481640 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarCameraDevice_setHorizontalFlip(System.IntPtr,System.Boolean)
extern "C"  void EngineNativeIOS_ezarCameraDevice_setHorizontalFlip_m352752964 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, bool ___flip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_Frame()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_Frame_m175470245 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_Frame(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_Frame_m3361106610 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double EasyAR.EngineNativeIOS::ezarFrame_getTimeStamp(System.IntPtr)
extern "C"  double EngineNativeIOS_ezarFrame_getTimeStamp_m2409523919 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarFrame_getIndex(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarFrame_getIndex_m2780421926 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarFrame_targets(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarFrame_targets_m3159059165 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarFrame_text(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarFrame_text_m680885050 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_Image(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_Image_m1296329758 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_ImageTarget()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_ImageTarget_m96377142 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_ImageTarget(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_ImageTarget_m2877342215 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarImageTarget_getSize(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_ezarImageTarget_getSize_m611260045 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTarget_setSize(System.IntPtr,System.Single,System.Single)
extern "C"  bool EngineNativeIOS_ezarImageTarget_setSize_m1957158032 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, float ___w, float ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTarget_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNativeIOS_ezarImageTarget_load_m529705166 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, String_t* ___path, int32_t ___storageType, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_Target()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_Target_m3259822353 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_Target(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_Target_m2586951642 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarTarget_getId(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarTarget_getId_m532715471 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarTarget_getName(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarTarget_getName_m3805843202 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarTarget_getUid(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarTarget_getUid_m918178289 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarTarget_metaData(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarTarget_metaData_m114312948 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarTarget_load(System.IntPtr,System.String,System.Int32,System.String)
extern "C"  bool EngineNativeIOS_ezarTarget_load_m173625093 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, String_t* ___path, int32_t ___storageType, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_AugmentedTargetList(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_AugmentedTargetList_m269740792 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarAugmentedTargetList_size(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarAugmentedTargetList_size_m215505039 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarAugmentedTargetList_at(System.IntPtr,System.Int32)
extern "C"  IntPtr_t EngineNativeIOS_ezarAugmentedTargetList_at_m982383293 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_AugmentedTarget(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_AugmentedTarget_m2409003532 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarAugmentedTarget_status(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarAugmentedTarget_status_m661558206 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarAugmentedTarget_target(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarAugmentedTarget_target_m2985937746 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarAugmentedTarget_pose(System.IntPtr,System.Single[])
extern "C"  void EngineNativeIOS_ezarAugmentedTarget_pose_m2760034854 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, SingleU5BU5D_t662464656* ___outarr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_ImageTracker()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_ImageTracker_m1343213111 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_ImageTracker(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_ImageTracker_m2066254884 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTracker_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarImageTracker_attachCamera_m1553182284 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTracker_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarImageTracker_detachCamera_m4124078390 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarImageTracker_loadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_ezarImageTracker_loadTarget_m1047332727 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___ds, IntPtr_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarImageTracker_unloadTarget(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_ezarImageTracker_unloadTarget_m1552136146 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___ds, IntPtr_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTracker_start(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarImageTracker_start_m2073731032 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTracker_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarImageTracker_stop_m2933738022 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_TargetLoadCallBackUnity(System.IntPtr,EasyAR.ImageTracker/TargetLoadCallbackC)
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_TargetLoadCallBackUnity_m2904255577 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, TargetLoadCallbackC_t2114246551 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_TargetLoadCallBackUnity(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_TargetLoadCallBackUnity_m1351825652 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTracker_checkCallBack(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarImageTracker_checkCallBack_m1194438011 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarImageTracker_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNativeIOS_ezarImageTracker_setCallBackThread_m964160962 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarImageTracker_setSimultaneousNum(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_ezarImageTracker_setSimultaneousNum_m1667318874 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarImageTracker_simultaneousNum(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarImageTracker_simultaneousNum_m639335461 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_BarCodeScanner()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_BarCodeScanner_m393974818 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_BarCodeScanner(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_BarCodeScanner_m1174350795 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarBarCodeScanner_attachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarBarCodeScanner_attachCamera_m2286944557 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarBarCodeScanner_detachCamera(System.IntPtr,System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarBarCodeScanner_detachCamera_m3043104045 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarBarCodeScanner_start(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarBarCodeScanner_start_m3600582201 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarBarCodeScanner_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarBarCodeScanner_stop_m1712981885 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_VideoPlayer()
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_VideoPlayer_m2337777072 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_VideoPlayer(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_VideoPlayer_m790501095 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarVideoPlayer_setRenderTexture(System.IntPtr,System.IntPtr)
extern "C"  void EngineNativeIOS_ezarVideoPlayer_setRenderTexture_m397436954 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarVideoPlayer_setVideoType(System.IntPtr,System.Int32)
extern "C"  void EngineNativeIOS_ezarVideoPlayer_setVideoType_m2022112055 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___videoType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarVideoPlayer_open(System.IntPtr,System.String,System.Int32,System.IntPtr)
extern "C"  void EngineNativeIOS_ezarVideoPlayer_open_m2008884210 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, String_t* ___path, int32_t ___storageType, IntPtr_t ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarVideoPlayer_close(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarVideoPlayer_close_m1472729515 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarVideoPlayer_play(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarVideoPlayer_play_m2202908005 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarVideoPlayer_stop(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarVideoPlayer_stop_m1074351605 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarVideoPlayer_pause(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarVideoPlayer_pause_m3543357547 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarVideoPlayer_updateFrame(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarVideoPlayer_updateFrame_m2099243005 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarVideoPlayer_duration(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarVideoPlayer_duration_m1013221 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.EngineNativeIOS::ezarVideoPlayer_currentPosition(System.IntPtr)
extern "C"  int32_t EngineNativeIOS_ezarVideoPlayer_currentPosition_m451447735 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarVideoPlayer_seek(System.IntPtr,System.Int32)
extern "C"  bool EngineNativeIOS_ezarVideoPlayer_seek_m1863296812 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarVideoPlayer_size(System.IntPtr,System.Int32[])
extern "C"  void EngineNativeIOS_ezarVideoPlayer_size_m1646858939 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, Int32U5BU5D_t3315407976* ___arr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.EngineNativeIOS::ezarVideoPlayer_volume(System.IntPtr)
extern "C"  float EngineNativeIOS_ezarVideoPlayer_volume_m2613189047 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarVideoPlayer_setVolume(System.IntPtr,System.Single)
extern "C"  bool EngineNativeIOS_ezarVideoPlayer_setVolume_m1656257900 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, float ___volume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCreate_VideoPlayerCallBackUnity(System.IntPtr,EasyAR.VideoPlayer/CallBack)
extern "C"  IntPtr_t EngineNativeIOS_ezarCreate_VideoPlayerCallBackUnity_m1899711797 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, CallBack_t1186946879 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.EngineNativeIOS::ezarVideoPlayer_checkCallBack(System.IntPtr)
extern "C"  bool EngineNativeIOS_ezarVideoPlayer_checkCallBack_m1181946492 (Il2CppObject * __this /* static, unused */, IntPtr_t ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarVideoPlayer_setCallBackThread(System.IntPtr,System.Boolean)
extern "C"  void EngineNativeIOS_ezarVideoPlayer_setCallBackThread_m1662628059 (Il2CppObject * __this /* static, unused */, IntPtr_t ___callback, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNativeIOS::ezarDestory_VideoPlayerCallBackUnity(System.IntPtr)
extern "C"  void EngineNativeIOS_ezarDestory_VideoPlayerCallBackUnity_m697266821 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr EasyAR.EngineNativeIOS::ezarCast_Target2ImageTarget(System.IntPtr)
extern "C"  IntPtr_t EngineNativeIOS_ezarCast_Target2ImageTarget_m3851245080 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
