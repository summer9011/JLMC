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

// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t1445391160;
// UnityEngine.GUIContent
struct GUIContent_t2981625813;
// UnityEngine.GUIStyle
struct GUIStyle_t3545875401;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2722935253;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_GUIContent2981625813.h"
#include "UnityEngine_UnityEngine_GUIStyle3545875401.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m3466110979 (Il2CppObject * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t1445391160* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoLabel_m3790214718 (Il2CppObject * __this /* static, unused */, GUIContent_t2981625813 * ___content, GUIStyle_t3545875401 * ___style, GUILayoutOptionU5BU5D_t1445391160* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C"  GUILayoutOption_t2722935253 * GUILayout_Width_m261136689 (Il2CppObject * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C"  GUILayoutOption_t2722935253 * GUILayout_Height_m607115982 (Il2CppObject * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
