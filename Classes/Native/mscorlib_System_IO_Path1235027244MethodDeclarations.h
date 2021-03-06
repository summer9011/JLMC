﻿#pragma once

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
// System.Char[]
struct CharU5BU5D_t1685951112;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.IO.Path::.cctor()
extern "C"  void Path__cctor_m3685888661 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C"  String_t* Path_Combine_m3185811654 (Il2CppObject * __this /* static, unused */, String_t* ___path1, String_t* ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::CleanPath(System.String)
extern "C"  String_t* Path_CleanPath_m2294719205 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetDirectoryName(System.String)
extern "C"  String_t* Path_GetDirectoryName_m260633861 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetExtension(System.String)
extern "C"  String_t* Path_GetExtension_m740668066 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetFileName(System.String)
extern "C"  String_t* Path_GetFileName_m893210218 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetFullPath(System.String)
extern "C"  String_t* Path_GetFullPath_m840307057 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::WindowsDriveAdjustment(System.String)
extern "C"  String_t* Path_WindowsDriveAdjustment_m1548620993 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::InsecureGetFullPath(System.String)
extern "C"  String_t* Path_InsecureGetFullPath_m2635272425 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Path::IsDsc(System.Char)
extern "C"  bool Path_IsDsc_m1314465747 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetPathRoot(System.String)
extern "C"  String_t* Path_GetPathRoot_m1269357080 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Path::IsPathRooted(System.String)
extern "C"  bool Path_IsPathRooted_m1347207448 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.IO.Path::GetInvalidPathChars()
extern "C"  CharU5BU5D_t1685951112* Path_GetInvalidPathChars_m1312878345 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Path::findExtension(System.String)
extern "C"  int32_t Path_findExtension_m3026593172 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetServerAndShare(System.String)
extern "C"  String_t* Path_GetServerAndShare_m2968974124 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Path::SameRoot(System.String,System.String)
extern "C"  bool Path_SameRoot_m1837733200 (Il2CppObject * __this /* static, unused */, String_t* ___root, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::CanonicalizePath(System.String)
extern "C"  String_t* Path_CanonicalizePath_m383914732 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
