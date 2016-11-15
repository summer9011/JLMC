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

// TweenColor
struct TweenColor_t3390486518;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"

// System.Void TweenColor::.ctor()
extern "C"  void TweenColor__ctor_m3378177727 (TweenColor_t3390486518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::Cache()
extern "C"  void TweenColor_Cache_m2190712507 (TweenColor_t3390486518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TweenColor::get_color()
extern "C"  Color_t2250949164  TweenColor_get_color_m3907252680 (TweenColor_t3390486518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::set_color(UnityEngine.Color)
extern "C"  void TweenColor_set_color_m1296090733 (TweenColor_t3390486518 * __this, Color_t2250949164  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TweenColor::get_value()
extern "C"  Color_t2250949164  TweenColor_get_value_m140198158 (TweenColor_t3390486518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::set_value(UnityEngine.Color)
extern "C"  void TweenColor_set_value_m472883499 (TweenColor_t3390486518 * __this, Color_t2250949164  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenColor_OnUpdate_m452913689 (TweenColor_t3390486518 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenColor TweenColor::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Color)
extern "C"  TweenColor_t3390486518 * TweenColor_Begin_m1014254184 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, float ___duration, Color_t2250949164  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::SetStartToCurrentValue()
extern "C"  void TweenColor_SetStartToCurrentValue_m3761684582 (TweenColor_t3390486518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::SetEndToCurrentValue()
extern "C"  void TweenColor_SetEndToCurrentValue_m196989807 (TweenColor_t3390486518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::SetCurrentValueToStart()
extern "C"  void TweenColor_SetCurrentValueToStart_m1166767104 (TweenColor_t3390486518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::SetCurrentValueToEnd()
extern "C"  void TweenColor_SetCurrentValueToEnd_m4211671971 (TweenColor_t3390486518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
