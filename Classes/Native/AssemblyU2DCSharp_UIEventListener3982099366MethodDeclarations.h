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

// UIEventListener
struct UIEventListener_t3982099366;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"
#include "UnityEngine_UnityEngine_KeyCode1667950811.h"

// System.Void UIEventListener::.ctor()
extern "C"  void UIEventListener__ctor_m2978072717 (UIEventListener_t3982099366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnSubmit()
extern "C"  void UIEventListener_OnSubmit_m2957253720 (UIEventListener_t3982099366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnClick()
extern "C"  void UIEventListener_OnClick_m2284113442 (UIEventListener_t3982099366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDoubleClick()
extern "C"  void UIEventListener_OnDoubleClick_m395972859 (UIEventListener_t3982099366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnHover(System.Boolean)
extern "C"  void UIEventListener_OnHover_m2554502645 (UIEventListener_t3982099366 * __this, bool ___isOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnPress(System.Boolean)
extern "C"  void UIEventListener_OnPress_m1513075824 (UIEventListener_t3982099366 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnSelect(System.Boolean)
extern "C"  void UIEventListener_OnSelect_m4265006643 (UIEventListener_t3982099366 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnScroll(System.Single)
extern "C"  void UIEventListener_OnScroll_m1675205486 (UIEventListener_t3982099366 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDragStart()
extern "C"  void UIEventListener_OnDragStart_m3041305096 (UIEventListener_t3982099366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDrag(UnityEngine.Vector2)
extern "C"  void UIEventListener_OnDrag_m3176757458 (UIEventListener_t3982099366 * __this, Vector2_t465617798  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDragOver()
extern "C"  void UIEventListener_OnDragOver_m986243432 (UIEventListener_t3982099366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDragOut()
extern "C"  void UIEventListener_OnDragOut_m1366072520 (UIEventListener_t3982099366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDragEnd()
extern "C"  void UIEventListener_OnDragEnd_m2889236463 (UIEventListener_t3982099366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDrop(UnityEngine.GameObject)
extern "C"  void UIEventListener_OnDrop_m113068665 (UIEventListener_t3982099366 * __this, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnKey(UnityEngine.KeyCode)
extern "C"  void UIEventListener_OnKey_m260896756 (UIEventListener_t3982099366 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnTooltip(System.Boolean)
extern "C"  void UIEventListener_OnTooltip_m3320181748 (UIEventListener_t3982099366 * __this, bool ___show, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIEventListener UIEventListener::Get(UnityEngine.GameObject)
extern "C"  UIEventListener_t3982099366 * UIEventListener_Get_m2094219308 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
