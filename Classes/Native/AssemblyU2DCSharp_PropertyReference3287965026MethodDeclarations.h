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

// PropertyReference
struct PropertyReference_t3287965026;
// UnityEngine.Component
struct Component_t1078601330;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Component1078601330.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Type77837473.h"

// System.Void PropertyReference::.ctor()
extern "C"  void PropertyReference__ctor_m3839976943 (PropertyReference_t3287965026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::.ctor(UnityEngine.Component,System.String)
extern "C"  void PropertyReference__ctor_m1879222089 (PropertyReference_t3287965026 * __this, Component_t1078601330 * ___target, String_t* ___fieldName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::.cctor()
extern "C"  void PropertyReference__cctor_m555839392 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component PropertyReference::get_target()
extern "C"  Component_t1078601330 * PropertyReference_get_target_m32929308 (PropertyReference_t3287965026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::set_target(UnityEngine.Component)
extern "C"  void PropertyReference_set_target_m967165771 (PropertyReference_t3287965026 * __this, Component_t1078601330 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PropertyReference::get_name()
extern "C"  String_t* PropertyReference_get_name_m1568482388 (PropertyReference_t3287965026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::set_name(System.String)
extern "C"  void PropertyReference_set_name_m3021711843 (PropertyReference_t3287965026 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::get_isValid()
extern "C"  bool PropertyReference_get_isValid_m3011904674 (PropertyReference_t3287965026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::get_isEnabled()
extern "C"  bool PropertyReference_get_isEnabled_m3432131545 (PropertyReference_t3287965026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type PropertyReference::GetPropertyType()
extern "C"  Type_t * PropertyReference_GetPropertyType_m541022258 (PropertyReference_t3287965026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Equals(System.Object)
extern "C"  bool PropertyReference_Equals_m3718226238 (PropertyReference_t3287965026 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PropertyReference::GetHashCode()
extern "C"  int32_t PropertyReference_GetHashCode_m1640501090 (PropertyReference_t3287965026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::Set(UnityEngine.Component,System.String)
extern "C"  void PropertyReference_Set_m1395407787 (PropertyReference_t3287965026 * __this, Component_t1078601330 * ___target, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::Clear()
extern "C"  void PropertyReference_Clear_m4040089428 (PropertyReference_t3287965026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::Reset()
extern "C"  void PropertyReference_Reset_m1278118018 (PropertyReference_t3287965026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PropertyReference::ToString()
extern "C"  String_t* PropertyReference_ToString_m470072062 (PropertyReference_t3287965026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PropertyReference::ToString(UnityEngine.Component,System.String)
extern "C"  String_t* PropertyReference_ToString_m366732338 (Il2CppObject * __this /* static, unused */, Component_t1078601330 * ___comp, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PropertyReference::Get()
extern "C"  Il2CppObject * PropertyReference_Get_m1004147062 (PropertyReference_t3287965026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Set(System.Object)
extern "C"  bool PropertyReference_Set_m1123958567 (PropertyReference_t3287965026 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Cache()
extern "C"  bool PropertyReference_Cache_m3545860923 (PropertyReference_t3287965026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Convert(System.Object&)
extern "C"  bool PropertyReference_Convert_m3182207344 (PropertyReference_t3287965026 * __this, Il2CppObject ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Convert(System.Type,System.Type)
extern "C"  bool PropertyReference_Convert_m2874265434 (Il2CppObject * __this /* static, unused */, Type_t * ___from, Type_t * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Convert(System.Object,System.Type)
extern "C"  bool PropertyReference_Convert_m1234646577 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, Type_t * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Convert(System.Object&,System.Type,System.Type)
extern "C"  bool PropertyReference_Convert_m928640624 (Il2CppObject * __this /* static, unused */, Il2CppObject ** ___value, Type_t * ___from, Type_t * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
