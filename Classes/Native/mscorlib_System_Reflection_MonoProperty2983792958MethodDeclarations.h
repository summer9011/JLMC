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

// System.Reflection.MonoProperty
struct MonoProperty_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2802799118;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t3027888260;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1798355058;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t1934246024;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.Type[]
struct TypeU5BU5D_t2442356668;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PInfo2639935616.h"
#include "mscorlib_System_Reflection_PropertyAttributes2970087148.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_BindingFlags3354691680.h"
#include "mscorlib_System_Reflection_Binder1934246024.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Reflection.MonoProperty::.ctor()
extern "C"  void MonoProperty__ctor_m945517100 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
extern "C"  void MonoProperty_CachePropertyInfo_m1437316683 (MonoProperty_t * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
extern "C"  int32_t MonoProperty_get_Attributes_m2589593297 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
extern "C"  bool MonoProperty_get_CanRead_m1173212369 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
extern "C"  bool MonoProperty_get_CanWrite_m2124922514 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_PropertyType()
extern "C"  Type_t * MonoProperty_get_PropertyType_m1921201152 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
extern "C"  Type_t * MonoProperty_get_ReflectedType_m903353661 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
extern "C"  Type_t * MonoProperty_get_DeclaringType_m4236036432 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::get_Name()
extern "C"  String_t* MonoProperty_get_Name_m1248249317 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
extern "C"  MethodInfoU5BU5D_t2802799118* MonoProperty_GetAccessors_m3704698731 (MonoProperty_t * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
extern "C"  MethodInfo_t * MonoProperty_GetGetMethod_m1100580870 (MonoProperty_t * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
extern "C"  ParameterInfoU5BU5D_t3027888260* MonoProperty_GetIndexParameters_m832800404 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
extern "C"  MethodInfo_t * MonoProperty_GetSetMethod_m436306154 (MonoProperty_t * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoProperty_IsDefined_m2473061021 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* MonoProperty_GetCustomAttributes_m1497967922 (MonoProperty_t * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* MonoProperty_GetCustomAttributes_m1756234231 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
extern "C"  GetterAdapter_t1798355058 * MonoProperty_CreateGetterDelegate_m2961258839 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
extern "C"  Il2CppObject * MonoProperty_GetValue_m3088777694 (MonoProperty_t * __this, Il2CppObject * ___obj, ObjectU5BU5D_t3632007997* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MonoProperty_GetValue_m2150318626 (MonoProperty_t * __this, Il2CppObject * ___obj, int32_t ___invokeAttr, Binder_t1934246024 * ___binder, ObjectU5BU5D_t3632007997* ___index, CultureInfo_t634113868 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  void MonoProperty_SetValue_m1423050605 (MonoProperty_t * __this, Il2CppObject * ___obj, Il2CppObject * ___value, int32_t ___invokeAttr, Binder_t1934246024 * ___binder, ObjectU5BU5D_t3632007997* ___index, CultureInfo_t634113868 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::ToString()
extern "C"  String_t* MonoProperty_ToString_m1379465861 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
extern "C"  TypeU5BU5D_t2442356668* MonoProperty_GetOptionalCustomModifiers_m3827844355 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
extern "C"  TypeU5BU5D_t2442356668* MonoProperty_GetRequiredCustomModifiers_m576853384 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoProperty_GetObjectData_m2540252220 (MonoProperty_t * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
