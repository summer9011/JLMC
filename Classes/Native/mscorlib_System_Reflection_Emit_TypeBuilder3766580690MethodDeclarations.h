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

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3766580690;
// System.Reflection.Assembly
struct Assembly_t141003736;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t2520131484;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2856386896;
// System.Reflection.Binder
struct Binder_t1934246024;
// System.Type[]
struct TypeU5BU5D_t2442356668;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t3538880115;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1681002962;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t2924918229;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t3499147121;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t3640491129;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2802799118;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Exception
struct Exception_t1145979430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes2928897129.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder3766580690.h"
#include "mscorlib_System_Reflection_BindingFlags3354691680.h"
#include "mscorlib_System_Reflection_Binder1934246024.h"
#include "mscorlib_System_Reflection_CallingConventions2717133484.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Reflection_MethodAttributes1641137380.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_System_RuntimeTypeHandle2078935215.h"

// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern "C"  int32_t TypeBuilder_GetAttributeFlagsImpl_m2593449699 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)
extern "C"  void TypeBuilder_setup_internal_class_m235812026 (TypeBuilder_t3766580690 * __this, TypeBuilder_t3766580690 * ___tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::create_generic_class()
extern "C"  void TypeBuilder_create_generic_class_m986834171 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C"  Assembly_t141003736 * TypeBuilder_get_Assembly_m492491492 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C"  String_t* TypeBuilder_get_AssemblyQualifiedName_m2097258567 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C"  Type_t * TypeBuilder_get_BaseType_m4088672180 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C"  Type_t * TypeBuilder_get_DeclaringType_m3236598700 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern "C"  Type_t * TypeBuilder_get_UnderlyingSystemType_m392404521 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C"  String_t* TypeBuilder_get_FullName_m1626507516 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C"  Module_t2520131484 * TypeBuilder_get_Module_m1668298460 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C"  String_t* TypeBuilder_get_Name_m170882803 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C"  String_t* TypeBuilder_get_Namespace_m3562783599 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C"  Type_t * TypeBuilder_get_ReflectedType_m2504081059 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t2856386896 * TypeBuilder_GetConstructorImpl_m4192168686 (TypeBuilder_t3766580690 * __this, int32_t ___bindingAttr, Binder_t1934246024 * ___binder, int32_t ___callConvention, TypeU5BU5D_t2442356668* ___types, ParameterModifierU5BU5D_t3538880115* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool TypeBuilder_IsDefined_m3186251655 (TypeBuilder_t3766580690 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* TypeBuilder_GetCustomAttributes_m1637538574 (TypeBuilder_t3766580690 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* TypeBuilder_GetCustomAttributes_m2702632361 (TypeBuilder_t3766580690 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[])
extern "C"  ConstructorBuilder_t1681002962 * TypeBuilder_DefineConstructor_m3431248509 (TypeBuilder_t3766580690 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t2442356668* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C"  ConstructorBuilder_t1681002962 * TypeBuilder_DefineConstructor_m2972481149 (TypeBuilder_t3766580690 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t2442356668* ___parameterTypes, TypeU5BU5DU5BU5D_t2924918229* ___requiredCustomModifiers, TypeU5BU5DU5BU5D_t2924918229* ___optionalCustomModifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineDefaultConstructor(System.Reflection.MethodAttributes)
extern "C"  ConstructorBuilder_t1681002962 * TypeBuilder_DefineDefaultConstructor_m2225828699 (TypeBuilder_t3766580690 * __this, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::create_runtime_class(System.Reflection.Emit.TypeBuilder)
extern "C"  Type_t * TypeBuilder_create_runtime_class_m2719530260 (TypeBuilder_t3766580690 * __this, TypeBuilder_t3766580690 * ___tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::is_nested_in(System.Type)
extern "C"  bool TypeBuilder_is_nested_in_m3557898035 (TypeBuilder_t3766580690 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::has_ctor_method()
extern "C"  bool TypeBuilder_has_ctor_method_m3449702467 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::CreateType()
extern "C"  Type_t * TypeBuilder_CreateType_m4126056124 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t3499147121* TypeBuilder_GetConstructors_m774120094 (TypeBuilder_t3766580690 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t3499147121* TypeBuilder_GetConstructorsInternal_m2426192231 (TypeBuilder_t3766580690 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C"  Type_t * TypeBuilder_GetElementType_m3707448372 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * TypeBuilder_GetEvent_m3876348075 (TypeBuilder_t3766580690 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * TypeBuilder_GetField_m2112455315 (TypeBuilder_t3766580690 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t3640491129* TypeBuilder_GetFields_m3875401338 (TypeBuilder_t3766580690 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern "C"  TypeU5BU5D_t2442356668* TypeBuilder_GetInterfaces_m1818658502 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C"  MethodInfoU5BU5D_t2802799118* TypeBuilder_GetMethodsByName_m229541072 (TypeBuilder_t3766580690 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t2802799118* TypeBuilder_GetMethods_m4196862738 (TypeBuilder_t3766580690 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * TypeBuilder_GetMethodImpl_m1443640538 (TypeBuilder_t3766580690 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1934246024 * ___binder, int32_t ___callConvention, TypeU5BU5D_t2442356668* ___types, ParameterModifierU5BU5D_t3538880115* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * TypeBuilder_GetPropertyImpl_m1854119335 (TypeBuilder_t3766580690 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1934246024 * ___binder, Type_t * ___returnType, TypeU5BU5D_t2442356668* ___types, ParameterModifierU5BU5D_t3538880115* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern "C"  bool TypeBuilder_HasElementTypeImpl_m3160520656 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * TypeBuilder_InvokeMember_m1992906893 (TypeBuilder_t3766580690 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1934246024 * ___binder, Il2CppObject * ___target, ObjectU5BU5D_t3632007997* ___args, ParameterModifierU5BU5D_t3538880115* ___modifiers, CultureInfo_t634113868 * ___culture, StringU5BU5D_t3764931161* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern "C"  bool TypeBuilder_IsArrayImpl_m1932432187 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern "C"  bool TypeBuilder_IsByRefImpl_m3716138128 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern "C"  bool TypeBuilder_IsPointerImpl_m3046705585 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern "C"  bool TypeBuilder_IsPrimitiveImpl_m3315689435 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern "C"  bool TypeBuilder_IsValueTypeImpl_m1499671481 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern "C"  Type_t * TypeBuilder_MakeGenericType_m4282022646 (TypeBuilder_t3766580690 * __this, TypeU5BU5D_t2442356668* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t2078935215  TypeBuilder_get_TypeHandle_m922348781 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::SetParent(System.Type)
extern "C"  void TypeBuilder_SetParent_m387557893 (TypeBuilder_t3766580690 * __this, Type_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.TypeBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t TypeBuilder_get_next_table_index_m1415870184 (TypeBuilder_t3766580690 * __this, Il2CppObject * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C"  bool TypeBuilder_get_IsCompilerContext_m3623403919 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C"  bool TypeBuilder_get_is_created_m736553860 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C"  Exception_t1145979430 * TypeBuilder_not_supported_m3178173643 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_not_created()
extern "C"  void TypeBuilder_check_not_created_m2785532739 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C"  void TypeBuilder_check_created_m2929267877 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern "C"  String_t* TypeBuilder_ToString_m1952363535 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern "C"  bool TypeBuilder_IsAssignableFrom_m212977480 (TypeBuilder_t3766580690 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern "C"  bool TypeBuilder_IsSubclassOf_m428846622 (TypeBuilder_t3766580690 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern "C"  bool TypeBuilder_IsAssignableTo_m3210661829 (TypeBuilder_t3766580690 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern "C"  TypeU5BU5D_t2442356668* TypeBuilder_GetGenericArguments_m3241780469 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern "C"  Type_t * TypeBuilder_GetGenericTypeDefinition_m3813000816 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern "C"  bool TypeBuilder_get_ContainsGenericParameters_m493137229 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern "C"  bool TypeBuilder_get_IsGenericParameter_m2604628295 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C"  bool TypeBuilder_get_IsGenericTypeDefinition_m1652226431 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern "C"  bool TypeBuilder_get_IsGenericType_m1475565622 (TypeBuilder_t3766580690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
