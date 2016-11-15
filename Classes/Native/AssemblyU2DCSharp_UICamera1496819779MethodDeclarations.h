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

// UICamera
struct UICamera_t1496819779;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// UnityEngine.Camera
struct Camera_t2805735124;
// UnityEngine.Rigidbody
struct Rigidbody_t1071364940;
// UnityEngine.Transform
struct Transform_t224878301;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t2088154582;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UICamera/MouseOrTouch
struct MouseOrTouch_t858607851;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray4121084637.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"
#include "AssemblyU2DCSharp_UICamera1496819779.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry2425649371.h"
#include "UnityEngine_UnityEngine_KeyCode1667950811.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"

// System.Void UICamera::.ctor()
extern "C"  void UICamera__ctor_m3166615176 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::.cctor()
extern "C"  void UICamera__cctor_m2426361557 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_stickyPress()
extern "C"  bool UICamera_get_stickyPress_m1278227735 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UICamera::get_currentRay()
extern "C"  Ray_t4121084637  UICamera_get_currentRay_m1984465614 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_genericEventHandler()
extern "C"  GameObject_t1366199518 * UICamera_get_genericEventHandler_m3829906589 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_genericEventHandler(UnityEngine.GameObject)
extern "C"  void UICamera_set_genericEventHandler_m1620038712 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_handlesEvents()
extern "C"  bool UICamera_get_handlesEvents_m968479517 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_cachedCamera()
extern "C"  Camera_t2805735124 * UICamera_get_cachedCamera_m2689485703 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_isOverUI()
extern "C"  bool UICamera_get_isOverUI_m3832910535 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_selectedObject()
extern "C"  GameObject_t1366199518 * UICamera_get_selectedObject_m317248128 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_selectedObject(UnityEngine.GameObject)
extern "C"  void UICamera_set_selectedObject_m3213041587 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsPressed(UnityEngine.GameObject)
extern "C"  bool UICamera_IsPressed_m545745070 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_touchCount()
extern "C"  int32_t UICamera_get_touchCount_m465207483 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::CountInputSources()
extern "C"  int32_t UICamera_CountInputSources_m3814805083 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_dragCount()
extern "C"  int32_t UICamera_get_dragCount_m68086712 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_mainCamera()
extern "C"  Camera_t2805735124 * UICamera_get_mainCamera_m2710288362 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::get_eventHandler()
extern "C"  UICamera_t1496819779 * UICamera_get_eventHandler_m3089660681 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::CompareFunc(UICamera,UICamera)
extern "C"  int32_t UICamera_CompareFunc_m1448566153 (Il2CppObject * __this /* static, unused */, UICamera_t1496819779 * ___a, UICamera_t1496819779 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UICamera::FindRootRigidbody(UnityEngine.Transform)
extern "C"  Rigidbody_t1071364940 * UICamera_FindRootRigidbody_m3509318412 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UICamera::FindRootRigidbody2D(UnityEngine.Transform)
extern "C"  Rigidbody2D_t2088154582 * UICamera_FindRootRigidbody2D_m2304416364 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::Raycast(UnityEngine.Vector3)
extern "C"  bool UICamera_Raycast_m4102400114 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___inPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UnityEngine.Vector3,UnityEngine.GameObject)
extern "C"  bool UICamera_IsVisible_m1078905463 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___worldPoint, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UICamera/DepthEntry&)
extern "C"  bool UICamera_IsVisible_m3021451623 (Il2CppObject * __this /* static, unused */, DepthEntry_t2425649371 * ___de, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsHighlighted(UnityEngine.GameObject)
extern "C"  bool UICamera_IsHighlighted_m1075874621 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::FindCameraForLayer(System.Int32)
extern "C"  UICamera_t1496819779 * UICamera_FindCameraForLayer_m141587329 (Il2CppObject * __this /* static, unused */, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C"  int32_t UICamera_GetDirection_m130592707 (Il2CppObject * __this /* static, unused */, int32_t ___up, int32_t ___down, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C"  int32_t UICamera_GetDirection_m2195203651 (Il2CppObject * __this /* static, unused */, int32_t ___up0, int32_t ___up1, int32_t ___down0, int32_t ___down1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(System.String)
extern "C"  int32_t UICamera_GetDirection_m1910630809 (Il2CppObject * __this /* static, unused */, String_t* ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Notify(UnityEngine.GameObject,System.String,System.Object)
extern "C"  void UICamera_Notify_m2858345893 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, String_t* ___funcName, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera::GetMouse(System.Int32)
extern "C"  MouseOrTouch_t858607851 * UICamera_GetMouse_m2026747984 (Il2CppObject * __this /* static, unused */, int32_t ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera::GetTouch(System.Int32)
extern "C"  MouseOrTouch_t858607851 * UICamera_GetTouch_m3823754436 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::RemoveTouch(System.Int32)
extern "C"  void UICamera_RemoveTouch_m2691586914 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Awake()
extern "C"  void UICamera_Awake_m3800014275 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnEnable()
extern "C"  void UICamera_OnEnable_m2736726468 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnDisable()
extern "C"  void UICamera_OnDisable_m1171936983 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Start()
extern "C"  void UICamera_Start_m1649977700 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Update()
extern "C"  void UICamera_Update_m927241191 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::LateUpdate()
extern "C"  void UICamera_LateUpdate_m1662225475 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessMouse()
extern "C"  void UICamera_ProcessMouse_m936784574 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouches()
extern "C"  void UICamera_ProcessTouches_m449364206 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessFakeTouches()
extern "C"  void UICamera_ProcessFakeTouches_m4201770379 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessOthers()
extern "C"  void UICamera_ProcessOthers_m2431473538 (UICamera_t1496819779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessPress(System.Boolean,System.Single,System.Single)
extern "C"  void UICamera_ProcessPress_m3513285001 (UICamera_t1496819779 * __this, bool ___pressed, float ___click, float ___drag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessRelease(System.Boolean,System.Single)
extern "C"  void UICamera_ProcessRelease_m3839209750 (UICamera_t1496819779 * __this, bool ___isMouse, float ___drag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouch(System.Boolean,System.Boolean)
extern "C"  void UICamera_ProcessTouch_m203963946 (UICamera_t1496819779 * __this, bool ___pressed, bool ___released, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ShowTooltip(System.Boolean)
extern "C"  void UICamera_ShowTooltip_m1842325303 (UICamera_t1496819779 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::<Raycast>m__2(UICamera/DepthEntry,UICamera/DepthEntry)
extern "C"  int32_t UICamera_U3CRaycastU3Em__2_m134001654 (Il2CppObject * __this /* static, unused */, DepthEntry_t2425649371  ___r1, DepthEntry_t2425649371  ___r2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::<Raycast>m__3(UICamera/DepthEntry,UICamera/DepthEntry)
extern "C"  int32_t UICamera_U3CRaycastU3Em__3_m990100059 (Il2CppObject * __this /* static, unused */, DepthEntry_t2425649371  ___r1, DepthEntry_t2425649371  ___r2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
