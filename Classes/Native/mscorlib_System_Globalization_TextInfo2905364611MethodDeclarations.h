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

// System.Globalization.TextInfo
struct TextInfo_t2905364611;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_System_Void2799814243.h"
#include "mscorlib_System_Globalization_TextInfo2905364611.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Globalization.TextInfo::.ctor(System.Globalization.CultureInfo,System.Int32,System.Void*,System.Boolean)
extern "C"  void TextInfo__ctor_m2782608694 (TextInfo_t2905364611 * __this, CultureInfo_t634113868 * ___ci, int32_t ___lcid, void* ___data, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.TextInfo::.ctor(System.Globalization.TextInfo)
extern "C"  void TextInfo__ctor_m1263401274 (TextInfo_t2905364611 * __this, TextInfo_t2905364611 * ___textInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.TextInfo::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void TextInfo_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m4238883895 (TextInfo_t2905364611 * __this, Il2CppObject * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::get_ListSeparator()
extern "C"  String_t* TextInfo_get_ListSeparator_m3426465394 (TextInfo_t2905364611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::get_CultureName()
extern "C"  String_t* TextInfo_get_CultureName_m1675775132 (TextInfo_t2905364611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.TextInfo::Equals(System.Object)
extern "C"  bool TextInfo_Equals_m3277307958 (TextInfo_t2905364611 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.TextInfo::GetHashCode()
extern "C"  int32_t TextInfo_GetHashCode_m2424856298 (TextInfo_t2905364611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToString()
extern "C"  String_t* TextInfo_ToString_m3325858116 (TextInfo_t2905364611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Globalization.TextInfo::ToLower(System.Char)
extern "C"  uint16_t TextInfo_ToLower_m2088701136 (TextInfo_t2905364611 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Globalization.TextInfo::ToUpper(System.Char)
extern "C"  uint16_t TextInfo_ToUpper_m299550697 (TextInfo_t2905364611 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToLower(System.String)
extern "C"  String_t* TextInfo_ToLower_m2178569214 (TextInfo_t2905364611 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToUpper(System.String)
extern "C"  String_t* TextInfo_ToUpper_m2522535645 (TextInfo_t2905364611 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.TextInfo::Clone()
extern "C"  Il2CppObject * TextInfo_Clone_m1096841305 (TextInfo_t2905364611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
