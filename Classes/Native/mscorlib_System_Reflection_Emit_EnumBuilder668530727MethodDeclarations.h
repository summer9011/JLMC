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

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t668530727;
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
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t3499147121;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t3640491129;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2802799118;
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
#include "mscorlib_System_RuntimeTypeHandle2078935215.h"
#include "mscorlib_System_Reflection_TypeAttributes2928897129.h"
#include "mscorlib_System_Reflection_BindingFlags3354691680.h"
#include "mscorlib_System_Reflection_Binder1934246024.h"
#include "mscorlib_System_Reflection_CallingConventions2717133484.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
extern "C"  Assembly_t141003736 * EnumBuilder_get_Assembly_m4285228003 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
extern "C"  String_t* EnumBuilder_get_AssemblyQualifiedName_m3662466844 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
extern "C"  Type_t * EnumBuilder_get_BaseType_m63295819 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
extern "C"  Type_t * EnumBuilder_get_DeclaringType_m1949466083 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
extern "C"  String_t* EnumBuilder_get_FullName_m2818393911 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
extern "C"  Module_t2520131484 * EnumBuilder_get_Module_m431986379 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
extern "C"  String_t* EnumBuilder_get_Name_m2088160658 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
extern "C"  String_t* EnumBuilder_get_Namespace_m3109232562 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
extern "C"  Type_t * EnumBuilder_get_ReflectedType_m2679108928 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t2078935215  EnumBuilder_get_TypeHandle_m724362740 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
extern "C"  Type_t * EnumBuilder_get_UnderlyingSystemType_m1699680520 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
extern "C"  int32_t EnumBuilder_GetAttributeFlagsImpl_m4263246832 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t2856386896 * EnumBuilder_GetConstructorImpl_m331611313 (EnumBuilder_t668530727 * __this, int32_t ___bindingAttr, Binder_t1934246024 * ___binder, int32_t ___callConvention, TypeU5BU5D_t2442356668* ___types, ParameterModifierU5BU5D_t3538880115* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t3499147121* EnumBuilder_GetConstructors_m3240699827 (EnumBuilder_t668530727 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* EnumBuilder_GetCustomAttributes_m432109445 (EnumBuilder_t668530727 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* EnumBuilder_GetCustomAttributes_m2001415610 (EnumBuilder_t668530727 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
extern "C"  Type_t * EnumBuilder_GetElementType_m1228393631 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * EnumBuilder_GetEvent_m3989421960 (EnumBuilder_t668530727 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * EnumBuilder_GetField_m1324325036 (EnumBuilder_t668530727 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.EnumBuilder::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t3640491129* EnumBuilder_GetFields_m2003258635 (EnumBuilder_t668530727 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
extern "C"  TypeU5BU5D_t2442356668* EnumBuilder_GetInterfaces_m198423261 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * EnumBuilder_GetMethodImpl_m2091516387 (EnumBuilder_t668530727 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1934246024 * ___binder, int32_t ___callConvention, TypeU5BU5D_t2442356668* ___types, ParameterModifierU5BU5D_t3538880115* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t2802799118* EnumBuilder_GetMethods_m342174319 (EnumBuilder_t668530727 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * EnumBuilder_GetPropertyImpl_m2717304076 (EnumBuilder_t668530727 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1934246024 * ___binder, Type_t * ___returnType, TypeU5BU5D_t2442356668* ___types, ParameterModifierU5BU5D_t3538880115* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
extern "C"  bool EnumBuilder_HasElementTypeImpl_m1414733955 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * EnumBuilder_InvokeMember_m633176706 (EnumBuilder_t668530727 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1934246024 * ___binder, Il2CppObject * ___target, ObjectU5BU5D_t3632007997* ___args, ParameterModifierU5BU5D_t3538880115* ___modifiers, CultureInfo_t634113868 * ___culture, StringU5BU5D_t3764931161* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
extern "C"  bool EnumBuilder_IsArrayImpl_m3185704898 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
extern "C"  bool EnumBuilder_IsByRefImpl_m3302439719 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
extern "C"  bool EnumBuilder_IsPointerImpl_m2768502902 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
extern "C"  bool EnumBuilder_IsPrimitiveImpl_m3485654502 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
extern "C"  bool EnumBuilder_IsValueTypeImpl_m3635754638 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool EnumBuilder_IsDefined_m255842204 (EnumBuilder_t668530727 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
extern "C"  Exception_t1145979430 * EnumBuilder_CreateNotSupportedException_m62763134 (EnumBuilder_t668530727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
