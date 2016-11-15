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

// System.Type
struct Type_t;
// System.MonoType
struct MonoType_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2856386896;
// System.Reflection.Binder
struct Binder_t1934246024;
// System.Type[]
struct TypeU5BU5D_t2442356668;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t3538880115;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t3499147121;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t3640491129;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2802799118;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t2236254246;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Reflection.Assembly
struct Assembly_t141003736;
// System.Reflection.Module
struct Module_t2520131484;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Reflection.MethodBase
struct MethodBase_t591550820;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes2928897129.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Reflection_BindingFlags3354691680.h"
#include "mscorlib_System_Reflection_Binder1934246024.h"
#include "mscorlib_System_Reflection_CallingConventions2717133484.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_System_Reflection_MemberTypes2148131085.h"
#include "mscorlib_System_RuntimeTypeHandle2078935215.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Reflection_MethodBase591550820.h"

// System.Reflection.TypeAttributes System.MonoType::get_attributes(System.Type)
extern "C"  int32_t MonoType_get_attributes_m1493788675 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
extern "C"  ConstructorInfo_t2856386896 * MonoType_GetDefaultConstructor_m925465120 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
extern "C"  int32_t MonoType_GetAttributeFlagsImpl_m250699879 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t2856386896 * MonoType_GetConstructorImpl_m1703214172 (MonoType_t * __this, int32_t ___bindingAttr, Binder_t1934246024 * ___binder, int32_t ___callConvention, TypeU5BU5D_t2442356668* ___types, ParameterModifierU5BU5D_t3538880115* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
extern "C"  ConstructorInfoU5BU5D_t3499147121* MonoType_GetConstructors_internal_m2709619723 (MonoType_t * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t3499147121* MonoType_GetConstructors_m3402398036 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * MonoType_InternalGetEvent_m532443236 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * MonoType_GetEvent_m4160342003 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * MonoType_GetField_m341239795 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)
extern "C"  FieldInfoU5BU5D_t3640491129* MonoType_GetFields_internal_m2022019979 (MonoType_t * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t3640491129* MonoType_GetFields_m2030623572 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetInterfaces()
extern "C"  TypeU5BU5D_t2442356668* MonoType_GetInterfaces_m1917126622 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C"  MethodInfoU5BU5D_t2802799118* MonoType_GetMethodsByName_m1854415088 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t2802799118* MonoType_GetMethods_m353342170 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * MonoType_GetMethodImpl_m593754598 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1934246024 * ___binder, int32_t ___callConvention, TypeU5BU5D_t2442356668* ___types, ParameterModifierU5BU5D_t3538880115* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C"  PropertyInfoU5BU5D_t2236254246* MonoType_GetPropertiesByName_m1524828075 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, bool ___icase, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * MonoType_GetPropertyImpl_m2358827483 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1934246024 * ___binder, Type_t * ___returnType, TypeU5BU5D_t2442356668* ___types, ParameterModifierU5BU5D_t3538880115* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::HasElementTypeImpl()
extern "C"  bool MonoType_HasElementTypeImpl_m1040892148 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsArrayImpl()
extern "C"  bool MonoType_IsArrayImpl_m126199703 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsByRefImpl()
extern "C"  bool MonoType_IsByRefImpl_m2593739268 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPointerImpl()
extern "C"  bool MonoType_IsPointerImpl_m648213545 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPrimitiveImpl()
extern "C"  bool MonoType_IsPrimitiveImpl_m2843720007 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
extern "C"  bool MonoType_IsSubclassOf_m2211166238 (MonoType_t * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * MonoType_InvokeMember_m2947147169 (MonoType_t * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1934246024 * ___binder, Il2CppObject * ___target, ObjectU5BU5D_t3632007997* ___args, ParameterModifierU5BU5D_t3538880115* ___modifiers, CultureInfo_t634113868 * ___culture, StringU5BU5D_t3764931161* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetElementType()
extern "C"  Type_t * MonoType_GetElementType_m2286087352 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_UnderlyingSystemType()
extern "C"  Type_t * MonoType_get_UnderlyingSystemType_m412136521 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.MonoType::get_Assembly()
extern "C"  Assembly_t141003736 * MonoType_get_Assembly_m548508498 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_AssemblyQualifiedName()
extern "C"  String_t* MonoType_get_AssemblyQualifiedName_m2325116127 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
extern "C"  String_t* MonoType_getFullName_m1434947639 (MonoType_t * __this, bool ___full_name, bool ___assembly_qualified, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_BaseType()
extern "C"  Type_t * MonoType_get_BaseType_m3469218400 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_FullName()
extern "C"  String_t* MonoType_get_FullName_m4049129774 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoType_IsDefined_m3203470635 (MonoType_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* MonoType_GetCustomAttributes_m110499900 (MonoType_t * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* MonoType_GetCustomAttributes_m2680938729 (MonoType_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
extern "C"  int32_t MonoType_get_MemberType_m3619652595 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Name()
extern "C"  String_t* MonoType_get_Name_m865859211 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Namespace()
extern "C"  String_t* MonoType_get_Namespace_m3110646319 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.MonoType::get_Module()
extern "C"  Module_t2520131484 * MonoType_get_Module_m3769241394 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_DeclaringType()
extern "C"  Type_t * MonoType_get_DeclaringType_m3267159288 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_ReflectedType()
extern "C"  Type_t * MonoType_get_ReflectedType_m2981714783 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t2078935215  MonoType_get_TypeHandle_m3750614457 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoType::GetArrayRank()
extern "C"  int32_t MonoType_GetArrayRank_m1550632035 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoType_GetObjectData_m2888677152 (MonoType_t * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::ToString()
extern "C"  String_t* MonoType_ToString_m473949831 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetGenericArguments()
extern "C"  TypeU5BU5D_t2442356668* MonoType_GetGenericArguments_m2708198481 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_ContainsGenericParameters()
extern "C"  bool MonoType_get_ContainsGenericParameters_m3229732653 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_IsGenericParameter()
extern "C"  bool MonoType_get_IsGenericParameter_m1335676395 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetGenericTypeDefinition()
extern "C"  Type_t * MonoType_GetGenericTypeDefinition_m2363776160 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
extern "C"  MethodBase_t591550820 * MonoType_CheckMethodSecurity_m4116906190 (MonoType_t * __this, MethodBase_t591550820 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
extern "C"  void MonoType_ReorderParamArrayArguments_m979187413 (MonoType_t * __this, ObjectU5BU5D_t3632007997** ___args, MethodBase_t591550820 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
