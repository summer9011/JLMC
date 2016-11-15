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

// UnityEngine.WWW
struct WWW_t3146501818;
// System.String
struct String_t;
// UnityEngine.WWWForm
struct WWWForm_t986061696;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Text.Encoding
struct Encoding_t2125916575;
// UnityEngine.Texture2D
struct Texture2D_t3575456220;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t484745624;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_WWWForm986061696.h"

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C"  void WWW__ctor_m2024029190 (WWW_t3146501818 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C"  void WWW__ctor_m578693146 (WWW_t3146501818 * __this, String_t* ___url, WWWForm_t986061696 * ___form, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C"  void WWW_Dispose_m2554269413 (WWW_t3146501818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C"  void WWW_Finalize_m3300880244 (WWW_t3146501818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C"  void WWW_DestroyWWW_m2548500174 (WWW_t3146501818 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C"  void WWW_InitWWW_m1194933100 (WWW_t3146501818 * __this, String_t* ___url, ByteU5BU5D_t3835026402* ___postData, StringU5BU5D_t3764931161* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C"  Encoding_t2125916575 * WWW_get_DefaultEncoding_m1497697991 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::GetTexture(System.Boolean)
extern "C"  Texture2D_t3575456220 * WWW_GetTexture_m2539490669 (WWW_t3146501818 * __this, bool ___markNonReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
extern "C"  Texture2D_t3575456220 * WWW_get_texture_m1121178301 (WWW_t3146501818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  StringU5BU5D_t3764931161* WWW_FlattenedHeadersFrom_m3590846145 (Il2CppObject * __this /* static, unused */, Dictionary_2_t484745624 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
