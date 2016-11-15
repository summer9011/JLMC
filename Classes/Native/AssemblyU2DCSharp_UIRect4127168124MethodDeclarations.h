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

// UIRect
struct UIRect_t4127168124;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// UnityEngine.Transform
struct Transform_t224878301;
// UnityEngine.Camera
struct Camera_t2805735124;
// UIRoot
struct UIRoot_t389944298;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t897805512;
// UIRect/AnchorPoint
struct AnchorPoint_t970610655;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "AssemblyU2DCSharp_UIRect_AnchorPoint970610655.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"

// System.Void UIRect::.ctor()
extern "C"  void UIRect__ctor_m1688524151 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::.cctor()
extern "C"  void UIRect__cctor_m3913652662 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIRect::get_cachedGameObject()
extern "C"  GameObject_t1366199518 * UIRect_get_cachedGameObject_m4223691068 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIRect::get_cachedTransform()
extern "C"  Transform_t224878301 * UIRect_get_cachedTransform_m4093729156 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UIRect::get_anchorCamera()
extern "C"  Camera_t2805735124 * UIRect_get_anchorCamera_m440342595 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_isFullyAnchored()
extern "C"  bool UIRect_get_isFullyAnchored_m2129434494 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_isAnchoredHorizontally()
extern "C"  bool UIRect_get_isAnchoredHorizontally_m919765123 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_isAnchoredVertically()
extern "C"  bool UIRect_get_isAnchoredVertically_m1367145875 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_canBeAnchored()
extern "C"  bool UIRect_get_canBeAnchored_m3266575473 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIRect UIRect::get_parent()
extern "C"  UIRect_t4127168124 * UIRect_get_parent_m2721070757 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIRoot UIRect::get_root()
extern "C"  UIRoot_t389944298 * UIRect_get_root_m2527565969 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_isAnchored()
extern "C"  bool UIRect_get_isAnchored_m4030260496 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRect::get_cameraRayDistance()
extern "C"  float UIRect_get_cameraRayDistance_m1600937440 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::Invalidate(System.Boolean)
extern "C"  void UIRect_Invalidate_m3248007297 (UIRect_t4127168124 * __this, bool ___includeChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIRect::GetSides(UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t897805512* UIRect_GetSides_m2429607854 (UIRect_t4127168124 * __this, Transform_t224878301 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIRect::GetLocalPos(UIRect/AnchorPoint,UnityEngine.Transform)
extern "C"  Vector3_t465617797  UIRect_GetLocalPos_m1346399807 (UIRect_t4127168124 * __this, AnchorPoint_t970610655 * ___ac, Transform_t224878301 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnEnable()
extern "C"  void UIRect_OnEnable_m1291373499 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnInit()
extern "C"  void UIRect_OnInit_m2134624388 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnDisable()
extern "C"  void UIRect_OnDisable_m665651736 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::Start()
extern "C"  void UIRect_Start_m3051411195 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::Update()
extern "C"  void UIRect_Update_m898912158 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::UpdateAnchors()
extern "C"  void UIRect_UpdateAnchors_m2017131450 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::SetAnchor(UnityEngine.Transform)
extern "C"  void UIRect_SetAnchor_m2493674151 (UIRect_t4127168124 * __this, Transform_t224878301 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::SetAnchor(UnityEngine.GameObject)
extern "C"  void UIRect_SetAnchor_m2528197332 (UIRect_t4127168124 * __this, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::SetAnchor(UnityEngine.GameObject,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void UIRect_SetAnchor_m4274130260 (UIRect_t4127168124 * __this, GameObject_t1366199518 * ___go, int32_t ___left, int32_t ___bottom, int32_t ___right, int32_t ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::ResetAnchors()
extern "C"  void UIRect_ResetAnchors_m1361984036 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::ResetAndUpdateAnchors()
extern "C"  void UIRect_ResetAndUpdateAnchors_m3836529778 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::FindCameraFor(UIRect/AnchorPoint)
extern "C"  void UIRect_FindCameraFor_m1634545974 (UIRect_t4127168124 * __this, AnchorPoint_t970610655 * ___ap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::ParentHasChanged()
extern "C"  void UIRect_ParentHasChanged_m2147319067 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnUpdate()
extern "C"  void UIRect_OnUpdate_m3619115095 (UIRect_t4127168124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
