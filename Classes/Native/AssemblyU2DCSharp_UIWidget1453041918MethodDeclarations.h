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

// UIWidget
struct UIWidget_t1453041918;
// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t1022625346;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t897805512;
// UnityEngine.Material
struct Material_t2197338622;
// UnityEngine.Texture
struct Texture_t465682066;
// UnityEngine.Shader
struct Shader_t2331662484;
// UnityEngine.Transform
struct Transform_t224878301;
// UIPanel
struct UIPanel_t1795085332;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t686006439;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t686006440;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t2983401365;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t686006438;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIDrawCall_OnRenderCallback1022625346.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot2110476880.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_Material2197338622.h"
#include "UnityEngine_UnityEngine_Texture465682066.h"
#include "UnityEngine_UnityEngine_Shader2331662484.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"
#include "AssemblyU2DCSharp_UIWidget1453041918.h"
#include "UnityEngine_UnityEngine_Bounds968365060.h"

// System.Void UIWidget::.ctor()
extern "C"  void UIWidget__ctor_m1747155039 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/OnRenderCallback UIWidget::get_onRender()
extern "C"  OnRenderCallback_t1022625346 * UIWidget_get_onRender_m4232393577 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_onRender(UIDrawCall/OnRenderCallback)
extern "C"  void UIWidget_set_onRender_m2573789460 (UIWidget_t1453041918 * __this, OnRenderCallback_t1022625346 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_drawRegion()
extern "C"  Vector4_t465617796  UIWidget_get_drawRegion_m3587096183 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_drawRegion(UnityEngine.Vector4)
extern "C"  void UIWidget_set_drawRegion_m454391600 (UIWidget_t1453041918 * __this, Vector4_t465617796  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_pivotOffset()
extern "C"  Vector2_t465617798  UIWidget_get_pivotOffset_m943693420 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_width()
extern "C"  int32_t UIWidget_get_width_m1323147272 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_width(System.Int32)
extern "C"  void UIWidget_set_width_m1785998957 (UIWidget_t1453041918 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_height()
extern "C"  int32_t UIWidget_get_height_m613271667 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_height(System.Int32)
extern "C"  void UIWidget_set_height_m3993111822 (UIWidget_t1453041918 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UIWidget::get_color()
extern "C"  Color_t2250949164  UIWidget_get_color_m338614656 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_color(UnityEngine.Color)
extern "C"  void UIWidget_set_color_m1406575269 (UIWidget_t1453041918 * __this, Color_t2250949164  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::get_alpha()
extern "C"  float UIWidget_get_alpha_m1577200396 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_alpha(System.Single)
extern "C"  void UIWidget_set_alpha_m4102714563 (UIWidget_t1453041918 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_isVisible()
extern "C"  bool UIWidget_get_isVisible_m1555008678 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_hasVertices()
extern "C"  bool UIWidget_get_hasVertices_m455088681 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot UIWidget::get_rawPivot()
extern "C"  int32_t UIWidget_get_rawPivot_m701429390 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_rawPivot(UIWidget/Pivot)
extern "C"  void UIWidget_set_rawPivot_m2483066965 (UIWidget_t1453041918 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot UIWidget::get_pivot()
extern "C"  int32_t UIWidget_get_pivot_m678429010 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_pivot(UIWidget/Pivot)
extern "C"  void UIWidget_set_pivot_m2500521417 (UIWidget_t1453041918 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_depth()
extern "C"  int32_t UIWidget_get_depth_m3794940569 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_depth(System.Int32)
extern "C"  void UIWidget_set_depth_m2276777530 (UIWidget_t1453041918 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_raycastDepth()
extern "C"  int32_t UIWidget_get_raycastDepth_m2960564342 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::get_localCorners()
extern "C"  Vector3U5BU5D_t897805512* UIWidget_get_localCorners_m320454507 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_localSize()
extern "C"  Vector2_t465617798  UIWidget_get_localSize_m368013321 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIWidget::get_localCenter()
extern "C"  Vector3_t465617797  UIWidget_get_localCenter_m1865171662 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::get_worldCorners()
extern "C"  Vector3U5BU5D_t897805512* UIWidget_get_worldCorners_m3247184012 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIWidget::get_worldCenter()
extern "C"  Vector3_t465617797  UIWidget_get_worldCenter_m1326689473 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_drawingDimensions()
extern "C"  Vector4_t465617796  UIWidget_get_drawingDimensions_m1954568534 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIWidget::get_material()
extern "C"  Material_t2197338622 * UIWidget_get_material_m570210584 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_material(UnityEngine.Material)
extern "C"  void UIWidget_set_material_m1102044077 (UIWidget_t1453041918 * __this, Material_t2197338622 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIWidget::get_mainTexture()
extern "C"  Texture_t465682066 * UIWidget_get_mainTexture_m582147825 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_mainTexture(UnityEngine.Texture)
extern "C"  void UIWidget_set_mainTexture_m448685722 (UIWidget_t1453041918 * __this, Texture_t465682066 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UIWidget::get_shader()
extern "C"  Shader_t2331662484 * UIWidget_get_shader_m1961722432 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_shader(UnityEngine.Shader)
extern "C"  void UIWidget_set_shader_m3834103641 (UIWidget_t1453041918 * __this, Shader_t2331662484 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_relativeSize()
extern "C"  Vector2_t465617798  UIWidget_get_relativeSize_m2102430774 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_hasBoxCollider()
extern "C"  bool UIWidget_get_hasBoxCollider_m2614473607 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::SetDimensions(System.Int32,System.Int32)
extern "C"  void UIWidget_SetDimensions_m1379791388 (UIWidget_t1453041918 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::GetSides(UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t897805512* UIWidget_GetSides_m2442461784 (UIWidget_t1453041918 * __this, Transform_t224878301 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::CalculateFinalAlpha(System.Int32)
extern "C"  float UIWidget_CalculateFinalAlpha_m1063953086 (UIWidget_t1453041918 * __this, int32_t ___frameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::UpdateFinalAlpha(System.Int32)
extern "C"  void UIWidget_UpdateFinalAlpha_m4015810103 (UIWidget_t1453041918 * __this, int32_t ___frameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Invalidate(System.Boolean)
extern "C"  void UIWidget_Invalidate_m657250173 (UIWidget_t1453041918 * __this, bool ___includeChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::CalculateCumulativeAlpha(System.Int32)
extern "C"  float UIWidget_CalculateCumulativeAlpha_m2522743069 (UIWidget_t1453041918 * __this, int32_t ___frameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::SetRect(System.Single,System.Single,System.Single,System.Single)
extern "C"  void UIWidget_SetRect_m1687821069 (UIWidget_t1453041918 * __this, float ___x, float ___y, float ___width, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::ResizeCollider()
extern "C"  void UIWidget_ResizeCollider_m4072963299 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::FullCompareFunc(UIWidget,UIWidget)
extern "C"  int32_t UIWidget_FullCompareFunc_m1697745011 (Il2CppObject * __this /* static, unused */, UIWidget_t1453041918 * ___left, UIWidget_t1453041918 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::PanelCompareFunc(UIWidget,UIWidget)
extern "C"  int32_t UIWidget_PanelCompareFunc_m4031376758 (Il2CppObject * __this /* static, unused */, UIWidget_t1453041918 * ___left, UIWidget_t1453041918 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIWidget::CalculateBounds()
extern "C"  Bounds_t968365060  UIWidget_CalculateBounds_m2654683567 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIWidget::CalculateBounds(UnityEngine.Transform)
extern "C"  Bounds_t968365060  UIWidget_CalculateBounds_m3265295620 (UIWidget_t1453041918 * __this, Transform_t224878301 * ___relativeParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::SetDirty()
extern "C"  void UIWidget_SetDirty_m3367984983 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::RemoveFromPanel()
extern "C"  void UIWidget_RemoveFromPanel_m2657016785 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MarkAsChanged()
extern "C"  void UIWidget_MarkAsChanged_m3276847846 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIWidget::CreatePanel()
extern "C"  UIPanel_t1795085332 * UIWidget_CreatePanel_m3689313888 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::CheckLayer()
extern "C"  void UIWidget_CheckLayer_m2160812004 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::ParentHasChanged()
extern "C"  void UIWidget_ParentHasChanged_m3532498979 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Awake()
extern "C"  void UIWidget_Awake_m1113369770 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnInit()
extern "C"  void UIWidget_OnInit_m2528938130 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::UpgradeFrom265()
extern "C"  void UIWidget_UpgradeFrom265_m1253861766 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnStart()
extern "C"  void UIWidget_OnStart_m4254763914 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnAnchor()
extern "C"  void UIWidget_OnAnchor_m1980491791 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnUpdate()
extern "C"  void UIWidget_OnUpdate_m4095118167 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnApplicationPause(System.Boolean)
extern "C"  void UIWidget_OnApplicationPause_m1203259445 (UIWidget_t1453041918 * __this, bool ___paused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnDisable()
extern "C"  void UIWidget_OnDisable_m1865079414 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnDestroy()
extern "C"  void UIWidget_OnDestroy_m4104971420 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::UpdateVisibility(System.Boolean,System.Boolean)
extern "C"  bool UIWidget_UpdateVisibility_m2482889154 (UIWidget_t1453041918 * __this, bool ___visibleByAlpha, bool ___visibleByPanel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::UpdateTransform(System.Int32)
extern "C"  bool UIWidget_UpdateTransform_m1671498507 (UIWidget_t1453041918 * __this, int32_t ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::UpdateGeometry(System.Int32)
extern "C"  bool UIWidget_UpdateGeometry_m387959493 (UIWidget_t1453041918 * __this, int32_t ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::WriteToBuffers(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>)
extern "C"  void UIWidget_WriteToBuffers_m3134340184 (UIWidget_t1453041918 * __this, BetterList_1_t686006439 * ___v, BetterList_1_t686006440 * ___u, BetterList_1_t2983401365 * ___c, BetterList_1_t686006439 * ___n, BetterList_1_t686006438 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MakePixelPerfect()
extern "C"  void UIWidget_MakePixelPerfect_m1134133674 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_minWidth()
extern "C"  int32_t UIWidget_get_minWidth_m1221315338 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_minHeight()
extern "C"  int32_t UIWidget_get_minHeight_m2377742789 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_border()
extern "C"  Vector4_t465617796  UIWidget_get_border_m2075395219 (UIWidget_t1453041918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_border(UnityEngine.Vector4)
extern "C"  void UIWidget_set_border_m3688808592 (UIWidget_t1453041918 * __this, Vector4_t465617796  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void UIWidget_OnFill_m1558183438 (UIWidget_t1453041918 * __this, BetterList_1_t686006439 * ___verts, BetterList_1_t686006440 * ___uvs, BetterList_1_t2983401365 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
