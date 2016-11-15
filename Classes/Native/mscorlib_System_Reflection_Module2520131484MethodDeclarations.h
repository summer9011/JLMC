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

// System.Reflection.Module
struct Module_t2520131484;
// System.Reflection.Assembly
struct Assembly_t141003736;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Type[]
struct TypeU5BU5D_t2442356668;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Reflection.Module::.ctor()
extern "C"  void Module__ctor_m3853650010 (Module_t2520131484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::.cctor()
extern "C"  void Module__cctor_m2698817211 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C"  Assembly_t141003736 * Module_get_Assembly_m3690289982 (Module_t2520131484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::get_ScopeName()
extern "C"  String_t* Module_get_ScopeName_m207704721 (Module_t2520131484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Module::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* Module_GetCustomAttributes_m3581287913 (Module_t2520131484 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Module_GetObjectData_m3106234990 (Module_t2520131484 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Module::InternalGetTypes()
extern "C"  TypeU5BU5D_t2442356668* Module_InternalGetTypes_m4286760634 (Module_t2520131484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Module::GetTypes()
extern "C"  TypeU5BU5D_t2442356668* Module_GetTypes_m736359871 (Module_t2520131484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsDefined(System.Type,System.Boolean)
extern "C"  bool Module_IsDefined_m3561426235 (Module_t2520131484 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsResource()
extern "C"  bool Module_IsResource_m663979284 (Module_t2520131484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::ToString()
extern "C"  String_t* Module_ToString_m2343839315 (Module_t2520131484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name(System.Type,System.Object)
extern "C"  bool Module_filter_by_type_name_m2283758100 (Il2CppObject * __this /* static, unused */, Type_t * ___m, Il2CppObject * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name_ignore_case(System.Type,System.Object)
extern "C"  bool Module_filter_by_type_name_ignore_case_m3574895736 (Il2CppObject * __this /* static, unused */, Type_t * ___m, Il2CppObject * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
