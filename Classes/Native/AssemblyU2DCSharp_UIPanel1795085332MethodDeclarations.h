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

// UIPanel
struct UIPanel_t1795085332;
// UnityEngine.Texture2D
struct Texture2D_t3575456220;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t897805512;
// UnityEngine.Transform
struct Transform_t224878301;
// UIWidget
struct UIWidget_t1453041918;
// UIDrawCall
struct UIDrawCall_t3291843512;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIPanel1795085332.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "AssemblyU2DCSharp_UIDrawCall_Clipping4079746126.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Texture2D3575456220.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"
#include "AssemblyU2DCSharp_UIWidget1453041918.h"
#include "AssemblyU2DCSharp_UIDrawCall3291843512.h"
#include "UnityEngine_UnityEngine_Bounds968365060.h"

// System.Void UIPanel::.ctor()
extern "C"  void UIPanel__ctor_m1077500321 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::.cctor()
extern "C"  void UIPanel__cctor_m1130496102 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_nextUnusedDepth()
extern "C"  int32_t UIPanel_get_nextUnusedDepth_m4291327822 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_canBeAnchored()
extern "C"  bool UIPanel_get_canBeAnchored_m3332037491 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_alpha()
extern "C"  float UIPanel_get_alpha_m1725163322 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_alpha(System.Single)
extern "C"  void UIPanel_set_alpha_m2862667873 (UIPanel_t1795085332 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_depth()
extern "C"  int32_t UIPanel_get_depth_m1315426983 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_depth(System.Int32)
extern "C"  void UIPanel_set_depth_m1154554720 (UIPanel_t1795085332 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_sortingOrder()
extern "C"  int32_t UIPanel_get_sortingOrder_m3302552024 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_sortingOrder(System.Int32)
extern "C"  void UIPanel_set_sortingOrder_m3976800305 (UIPanel_t1795085332 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::CompareFunc(UIPanel,UIPanel)
extern "C"  int32_t UIPanel_CompareFunc_m2010974746 (Il2CppObject * __this /* static, unused */, UIPanel_t1795085332 * ___a, UIPanel_t1795085332 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_width()
extern "C"  float UIPanel_get_width_m1103668186 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_height()
extern "C"  float UIPanel_get_height_m3866231201 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_halfPixelOffset()
extern "C"  bool UIPanel_get_halfPixelOffset_m2922990942 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_usedForUI()
extern "C"  bool UIPanel_get_usedForUI_m3578085152 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPanel::get_drawCallOffset()
extern "C"  Vector3_t465617797  UIPanel_get_drawCallOffset_m1854552745 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/Clipping UIPanel::get_clipping()
extern "C"  int32_t UIPanel_get_clipping_m2023855476 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipping(UIDrawCall/Clipping)
extern "C"  void UIPanel_set_clipping_m3438397525 (UIPanel_t1795085332 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::get_parentPanel()
extern "C"  UIPanel_t1795085332 * UIPanel_get_parentPanel_m580040935 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_clipCount()
extern "C"  int32_t UIPanel_get_clipCount_m431137591 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_hasClipping()
extern "C"  bool UIPanel_get_hasClipping_m2352230988 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_hasCumulativeClipping()
extern "C"  bool UIPanel_get_hasCumulativeClipping_m1668757633 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_clipsChildren()
extern "C"  bool UIPanel_get_clipsChildren_m11645102 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::get_clipOffset()
extern "C"  Vector2_t465617798  UIPanel_get_clipOffset_m1165225790 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipOffset(UnityEngine.Vector2)
extern "C"  void UIPanel_set_clipOffset_m1085789407 (UIPanel_t1795085332 * __this, Vector2_t465617798  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::InvalidateClipping()
extern "C"  void UIPanel_InvalidateClipping_m3464753788 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UIPanel::get_clipTexture()
extern "C"  Texture2D_t3575456220 * UIPanel_get_clipTexture_m2431145844 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipTexture(UnityEngine.Texture2D)
extern "C"  void UIPanel_set_clipTexture_m2950688819 (UIPanel_t1795085332 * __this, Texture2D_t3575456220 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_clipRange()
extern "C"  Vector4_t465617796  UIPanel_get_clipRange_m3092452698 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipRange(UnityEngine.Vector4)
extern "C"  void UIPanel_set_clipRange_m4165490131 (UIPanel_t1795085332 * __this, Vector4_t465617796  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_baseClipRegion()
extern "C"  Vector4_t465617796  UIPanel_get_baseClipRegion_m1419566798 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_baseClipRegion(UnityEngine.Vector4)
extern "C"  void UIPanel_set_baseClipRegion_m1025429501 (UIPanel_t1795085332 * __this, Vector4_t465617796  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_finalClipRegion()
extern "C"  Vector4_t465617796  UIPanel_get_finalClipRegion_m2643655759 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::get_clipSoftness()
extern "C"  Vector2_t465617798  UIPanel_get_clipSoftness_m3532280798 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipSoftness(UnityEngine.Vector2)
extern "C"  void UIPanel_set_clipSoftness_m4083594479 (UIPanel_t1795085332 * __this, Vector2_t465617798  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::get_localCorners()
extern "C"  Vector3U5BU5D_t897805512* UIPanel_get_localCorners_m1885106741 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::get_worldCorners()
extern "C"  Vector3U5BU5D_t897805512* UIPanel_get_worldCorners_m1323820866 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::GetSides(UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t897805512* UIPanel_GetSides_m746970406 (UIPanel_t1795085332 * __this, Transform_t224878301 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Invalidate(System.Boolean)
extern "C"  void UIPanel_Invalidate_m2936845819 (UIPanel_t1795085332 * __this, bool ___includeChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::CalculateFinalAlpha(System.Int32)
extern "C"  float UIPanel_CalculateFinalAlpha_m2745935440 (UIPanel_t1795085332 * __this, int32_t ___frameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetRect(System.Single,System.Single,System.Single,System.Single)
extern "C"  void UIPanel_SetRect_m2818186895 (UIPanel_t1795085332 * __this, float ___x, float ___y, float ___width, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool UIPanel_IsVisible_m2318422237 (UIPanel_t1795085332 * __this, Vector3_t465617797  ___a, Vector3_t465617797  ___b, Vector3_t465617797  ___c, Vector3_t465617797  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3)
extern "C"  bool UIPanel_IsVisible_m1110511972 (UIPanel_t1795085332 * __this, Vector3_t465617797  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UIWidget)
extern "C"  bool UIPanel_IsVisible_m2056051053 (UIPanel_t1795085332 * __this, UIWidget_t1453041918 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::Affects(UIWidget)
extern "C"  bool UIPanel_Affects_m457322521 (UIPanel_t1795085332 * __this, UIWidget_t1453041918 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RebuildAllDrawCalls()
extern "C"  void UIPanel_RebuildAllDrawCalls_m2421877910 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetDirty()
extern "C"  void UIPanel_SetDirty_m3427091389 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Awake()
extern "C"  void UIPanel_Awake_m2782953536 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::FindParent()
extern "C"  void UIPanel_FindParent_m3789123296 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::ParentHasChanged()
extern "C"  void UIPanel_ParentHasChanged_m3769646157 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnStart()
extern "C"  void UIPanel_OnStart_m536388736 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnEnable()
extern "C"  void UIPanel_OnEnable_m2308028281 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnInit()
extern "C"  void UIPanel_OnInit_m2622737120 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnDisable()
extern "C"  void UIPanel_OnDisable_m3067137960 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateTransformMatrix()
extern "C"  void UIPanel_UpdateTransformMatrix_m3649354251 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnAnchor()
extern "C"  void UIPanel_OnAnchor_m4089075333 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::LateUpdate()
extern "C"  void UIPanel_LateUpdate_m3288864330 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateSelf()
extern "C"  void UIPanel_UpdateSelf_m1169223264 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SortWidgets()
extern "C"  void UIPanel_SortWidgets_m3912063282 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::FillAllDrawCalls()
extern "C"  void UIPanel_FillAllDrawCalls_m3695113220 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::FillDrawCall(UIDrawCall)
extern "C"  bool UIPanel_FillDrawCall_m4176261602 (UIPanel_t1795085332 * __this, UIDrawCall_t3291843512 * ___dc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateDrawCalls()
extern "C"  void UIPanel_UpdateDrawCalls_m1304568365 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateLayers()
extern "C"  void UIPanel_UpdateLayers_m2635080972 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateWidgets()
extern "C"  void UIPanel_UpdateWidgets_m936663019 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIPanel::FindDrawCall(UIWidget)
extern "C"  UIDrawCall_t3291843512 * UIPanel_FindDrawCall_m1532180859 (UIPanel_t1795085332 * __this, UIWidget_t1453041918 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::AddWidget(UIWidget)
extern "C"  void UIPanel_AddWidget_m318008474 (UIPanel_t1795085332 * __this, UIWidget_t1453041918 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RemoveWidget(UIWidget)
extern "C"  void UIPanel_RemoveWidget_m2792282035 (UIPanel_t1795085332 * __this, UIWidget_t1453041918 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Refresh()
extern "C"  void UIPanel_Refresh_m2638687940 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPanel::CalculateConstrainOffset(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector3_t465617797  UIPanel_CalculateConstrainOffset_m3691366311 (UIPanel_t1795085332 * __this, Vector2_t465617798  ___min, Vector2_t465617798  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,UnityEngine.Bounds&,System.Boolean)
extern "C"  bool UIPanel_ConstrainTargetToBounds_m1477943687 (UIPanel_t1795085332 * __this, Transform_t224878301 * ___target, Bounds_t968365060 * ___targetBounds, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,System.Boolean)
extern "C"  bool UIPanel_ConstrainTargetToBounds_m80268627 (UIPanel_t1795085332 * __this, Transform_t224878301 * ___target, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform)
extern "C"  UIPanel_t1795085332 * UIPanel_Find_m3258837136 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform,System.Boolean)
extern "C"  UIPanel_t1795085332 * UIPanel_Find_m2413452129 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___trans, bool ___createIfMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform,System.Boolean,System.Int32)
extern "C"  UIPanel_t1795085332 * UIPanel_Find_m3221384014 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___trans, bool ___createIfMissing, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::GetWindowSize()
extern "C"  Vector2_t465617798  UIPanel_GetWindowSize_m1854683725 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::GetViewSize()
extern "C"  Vector2_t465617798  UIPanel_GetViewSize_m3463760284 (UIPanel_t1795085332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
