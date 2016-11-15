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

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t2749144121;
// UnityEngine.RectOffset
struct RectOffset_t2815134268;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t1445391160;
// UnityEngine.GUIStyle
struct GUIStyle_t3545875401;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t561867040;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GUIStyle3545875401.h"
#include "UnityEngine_UnityEngine_GUILayoutEntry561867040.h"

// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern "C"  void GUILayoutGroup__ctor_m992523271 (GUILayoutGroup_t2749144121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
extern "C"  RectOffset_t2815134268 * GUILayoutGroup_get_margin_m790729149 (GUILayoutGroup_t2749144121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayoutGroup_ApplyOptions_m1748499012 (GUILayoutGroup_t2749144121 * __this, GUILayoutOptionU5BU5D_t1445391160* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C"  void GUILayoutGroup_ApplyStyleSettings_m2161650388 (GUILayoutGroup_t2749144121 * __this, GUIStyle_t3545875401 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C"  void GUILayoutGroup_ResetCursor_m3160916532 (GUILayoutGroup_t2749144121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::GetNext()
extern "C"  GUILayoutEntry_t561867040 * GUILayoutGroup_GetNext_m1899084055 (GUILayoutGroup_t2749144121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::Add(UnityEngine.GUILayoutEntry)
extern "C"  void GUILayoutGroup_Add_m211909690 (GUILayoutGroup_t2749144121 * __this, GUILayoutEntry_t561867040 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern "C"  void GUILayoutGroup_CalcWidth_m4107152934 (GUILayoutGroup_t2749144121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern "C"  void GUILayoutGroup_SetHorizontal_m15325071 (GUILayoutGroup_t2749144121 * __this, float ___x, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern "C"  void GUILayoutGroup_CalcHeight_m1454440153 (GUILayoutGroup_t2749144121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern "C"  void GUILayoutGroup_SetVertical_m2197915999 (GUILayoutGroup_t2749144121 * __this, float ___y, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutGroup::ToString()
extern "C"  String_t* GUILayoutGroup_ToString_m2654218848 (GUILayoutGroup_t2749144121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
