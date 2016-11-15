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

// UIKeyNavigation
struct UIKeyNavigation_t1158973079;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"
#include "UnityEngine_UnityEngine_KeyCode1667950811.h"

// System.Void UIKeyNavigation::.ctor()
extern "C"  void UIKeyNavigation__ctor_m2880743494 (UIKeyNavigation_t1158973079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::.cctor()
extern "C"  void UIKeyNavigation__cctor_m1420154661 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::OnEnable()
extern "C"  void UIKeyNavigation_OnEnable_m3042176562 (UIKeyNavigation_t1158973079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::OnDisable()
extern "C"  void UIKeyNavigation_OnDisable_m2242374067 (UIKeyNavigation_t1158973079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::GetLeft()
extern "C"  GameObject_t1366199518 * UIKeyNavigation_GetLeft_m3488500246 (UIKeyNavigation_t1158973079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::GetRight()
extern "C"  GameObject_t1366199518 * UIKeyNavigation_GetRight_m1477867587 (UIKeyNavigation_t1158973079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::GetUp()
extern "C"  GameObject_t1366199518 * UIKeyNavigation_GetUp_m4079960266 (UIKeyNavigation_t1158973079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::GetDown()
extern "C"  GameObject_t1366199518 * UIKeyNavigation_GetDown_m3209192569 (UIKeyNavigation_t1158973079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::Get(UnityEngine.Vector3,System.Boolean)
extern "C"  GameObject_t1366199518 * UIKeyNavigation_Get_m331147281 (UIKeyNavigation_t1158973079 * __this, Vector3_t465617797  ___myDir, bool ___horizontal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIKeyNavigation::GetCenter(UnityEngine.GameObject)
extern "C"  Vector3_t465617797  UIKeyNavigation_GetCenter_m206946681 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::OnKey(UnityEngine.KeyCode)
extern "C"  void UIKeyNavigation_OnKey_m2264154817 (UIKeyNavigation_t1158973079 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::OnClick()
extern "C"  void UIKeyNavigation_OnClick_m925403337 (UIKeyNavigation_t1158973079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
