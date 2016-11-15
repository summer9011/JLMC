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

// UIScrollView
struct UIScrollView_t3033954930;
// UIPanel
struct UIPanel_t1795085332;
// UIProgressBar
struct UIProgressBar_t3824507790;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds968365060.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "AssemblyU2DCSharp_UIProgressBar3824507790.h"

// System.Void UIScrollView::.ctor()
extern "C"  void UIScrollView__ctor_m2133846915 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::.cctor()
extern "C"  void UIScrollView__cctor_m2938492452 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIScrollView::get_panel()
extern "C"  UIPanel_t1795085332 * UIScrollView_get_panel_m1673731729 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_isDragging()
extern "C"  bool UIScrollView_get_isDragging_m113267943 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIScrollView::get_bounds()
extern "C"  Bounds_t968365060  UIScrollView_get_bounds_m1725111940 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_canMoveHorizontally()
extern "C"  bool UIScrollView_get_canMoveHorizontally_m2354316132 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_canMoveVertically()
extern "C"  bool UIScrollView_get_canMoveVertically_m3839155970 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_shouldMoveHorizontally()
extern "C"  bool UIScrollView_get_shouldMoveHorizontally_m4007705125 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_shouldMoveVertically()
extern "C"  bool UIScrollView_get_shouldMoveVertically_m902529449 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_shouldMove()
extern "C"  bool UIScrollView_get_shouldMove_m737897196 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIScrollView::get_currentMomentum()
extern "C"  Vector3_t465617797  UIScrollView_get_currentMomentum_m1622425801 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::set_currentMomentum(UnityEngine.Vector3)
extern "C"  void UIScrollView_set_currentMomentum_m2356352694 (UIScrollView_t3033954930 * __this, Vector3_t465617797  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Awake()
extern "C"  void UIScrollView_Awake_m4023635486 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::OnEnable()
extern "C"  void UIScrollView_OnEnable_m582515615 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Start()
extern "C"  void UIScrollView_Start_m1879853759 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::CheckScrollbars()
extern "C"  void UIScrollView_CheckScrollbars_m826383094 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::OnDisable()
extern "C"  void UIScrollView_OnDisable_m2515488578 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::RestrictWithinBounds(System.Boolean)
extern "C"  bool UIScrollView_RestrictWithinBounds_m1744195664 (UIScrollView_t3033954930 * __this, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::RestrictWithinBounds(System.Boolean,System.Boolean,System.Boolean)
extern "C"  bool UIScrollView_RestrictWithinBounds_m784914434 (UIScrollView_t3033954930 * __this, bool ___instant, bool ___horizontal, bool ___vertical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::DisableSpring()
extern "C"  void UIScrollView_DisableSpring_m1755217400 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::UpdateScrollbars()
extern "C"  void UIScrollView_UpdateScrollbars_m815318725 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::UpdateScrollbars(System.Boolean)
extern "C"  void UIScrollView_UpdateScrollbars_m1479839598 (UIScrollView_t3033954930 * __this, bool ___recalculateBounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::UpdateScrollbars(UIProgressBar,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C"  void UIScrollView_UpdateScrollbars_m2824615104 (UIScrollView_t3033954930 * __this, UIProgressBar_t3824507790 * ___slider, float ___contentMin, float ___contentMax, float ___contentSize, float ___viewSize, bool ___inverted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::SetDragAmount(System.Single,System.Single,System.Boolean)
extern "C"  void UIScrollView_SetDragAmount_m3553959246 (UIScrollView_t3033954930 * __this, float ___x, float ___y, bool ___updateScrollbars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::InvalidateBounds()
extern "C"  void UIScrollView_InvalidateBounds_m1615106971 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::ResetPosition()
extern "C"  void UIScrollView_ResetPosition_m1590151555 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::UpdatePosition()
extern "C"  void UIScrollView_UpdatePosition_m1273852479 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::OnScrollBar()
extern "C"  void UIScrollView_OnScrollBar_m2679539736 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::MoveRelative(UnityEngine.Vector3)
extern "C"  void UIScrollView_MoveRelative_m145788823 (UIScrollView_t3033954930 * __this, Vector3_t465617797  ___relative, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::MoveAbsolute(UnityEngine.Vector3)
extern "C"  void UIScrollView_MoveAbsolute_m341598190 (UIScrollView_t3033954930 * __this, Vector3_t465617797  ___absolute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Press(System.Boolean)
extern "C"  void UIScrollView_Press_m1911391291 (UIScrollView_t3033954930 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Drag()
extern "C"  void UIScrollView_Drag_m3059968951 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Scroll(System.Single)
extern "C"  void UIScrollView_Scroll_m3279274739 (UIScrollView_t3033954930 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::LateUpdate()
extern "C"  void UIScrollView_LateUpdate_m2528942456 (UIScrollView_t3033954930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
