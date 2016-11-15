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

// System.Reflection.Emit.FieldBuilder
struct FieldBuilder_t2236466124;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t1934246024;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t860478249;
// System.Exception
struct Exception_t1145979430;
// System.Reflection.Module
struct Module_t2520131484;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_FieldAttributes232801719.h"
#include "mscorlib_System_RuntimeFieldHandle3042581795.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_BindingFlags3354691680.h"
#include "mscorlib_System_Reflection_Binder1934246024.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"

// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::get_Attributes()
extern "C"  int32_t FieldBuilder_get_Attributes_m2174064290 (FieldBuilder_t2236466124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_DeclaringType()
extern "C"  Type_t * FieldBuilder_get_DeclaringType_m726107228 (FieldBuilder_t2236466124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.Emit.FieldBuilder::get_FieldHandle()
extern "C"  RuntimeFieldHandle_t3042581795  FieldBuilder_get_FieldHandle_m1845846823 (FieldBuilder_t2236466124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_FieldType()
extern "C"  Type_t * FieldBuilder_get_FieldType_m2267463269 (FieldBuilder_t2236466124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.FieldBuilder::get_Name()
extern "C"  String_t* FieldBuilder_get_Name_m2243491233 (FieldBuilder_t2236466124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_ReflectedType()
extern "C"  Type_t * FieldBuilder_get_ReflectedType_m3707619461 (FieldBuilder_t2236466124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* FieldBuilder_GetCustomAttributes_m1557425540 (FieldBuilder_t2236466124 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* FieldBuilder_GetCustomAttributes_m291168515 (FieldBuilder_t2236466124 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.FieldBuilder::GetValue(System.Object)
extern "C"  Il2CppObject * FieldBuilder_GetValue_m1323554150 (FieldBuilder_t2236466124 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.FieldBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool FieldBuilder_IsDefined_m2730324893 (FieldBuilder_t2236466124 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.FieldBuilder::GetFieldOffset()
extern "C"  int32_t FieldBuilder_GetFieldOffset_m618194385 (FieldBuilder_t2236466124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.FieldBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern "C"  void FieldBuilder_SetValue_m3109503557 (FieldBuilder_t2236466124 * __this, Il2CppObject * ___obj, Il2CppObject * ___val, int32_t ___invokeAttr, Binder_t1934246024 * ___binder, CultureInfo_t634113868 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::get_UMarshal()
extern "C"  UnmanagedMarshal_t860478249 * FieldBuilder_get_UMarshal_m3138919472 (FieldBuilder_t2236466124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.FieldBuilder::CreateNotSupportedException()
extern "C"  Exception_t1145979430 * FieldBuilder_CreateNotSupportedException_m3999938861 (FieldBuilder_t2236466124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.FieldBuilder::get_Module()
extern "C"  Module_t2520131484 * FieldBuilder_get_Module_m1920701714 (FieldBuilder_t2236466124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
