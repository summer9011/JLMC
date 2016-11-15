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

// System.Reflection.CustomAttributeData
struct CustomAttributeData_t2380814493;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2856386896;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t4287356134;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t3855643147;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData>
struct IList_1_t2624947087;
// System.Reflection.Assembly
struct Assembly_t141003736;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Module
struct Module_t2520131484;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1994030457;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_ConstructorInfo2856386896.h"
#include "mscorlib_System_Reflection_Assembly141003736.h"
#include "mscorlib_System_Reflection_MemberInfo1952312350.h"
#include "mscorlib_System_Reflection_Module2520131484.h"
#include "mscorlib_System_Reflection_ParameterInfo1994030457.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Reflection.CustomAttributeData::.ctor(System.Reflection.ConstructorInfo,System.Object[],System.Object[])
extern "C"  void CustomAttributeData__ctor_m1358286409 (CustomAttributeData_t2380814493 * __this, ConstructorInfo_t2856386896 * ___ctorInfo, ObjectU5BU5D_t3632007997* ___ctorArgs, ObjectU5BU5D_t3632007997* ___namedArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::get_Constructor()
extern "C"  ConstructorInfo_t2856386896 * CustomAttributeData_get_Constructor_m2529070599 (CustomAttributeData_t2380814493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::get_ConstructorArguments()
extern "C"  Il2CppObject* CustomAttributeData_get_ConstructorArguments_m1625171154 (CustomAttributeData_t2380814493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::get_NamedArguments()
extern "C"  Il2CppObject* CustomAttributeData_get_NamedArguments_m708818174 (CustomAttributeData_t2380814493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.Assembly)
extern "C"  Il2CppObject* CustomAttributeData_GetCustomAttributes_m4124612360 (Il2CppObject * __this /* static, unused */, Assembly_t141003736 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.MemberInfo)
extern "C"  Il2CppObject* CustomAttributeData_GetCustomAttributes_m2421330738 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.Module)
extern "C"  Il2CppObject* CustomAttributeData_GetCustomAttributes_m119332220 (Il2CppObject * __this /* static, unused */, Module_t2520131484 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.ParameterInfo)
extern "C"  Il2CppObject* CustomAttributeData_GetCustomAttributes_m3258419955 (Il2CppObject * __this /* static, unused */, ParameterInfo_t1994030457 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.CustomAttributeData::ToString()
extern "C"  String_t* CustomAttributeData_ToString_m1673522836 (CustomAttributeData_t2380814493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.CustomAttributeData::Equals(System.Object)
extern "C"  bool CustomAttributeData_Equals_m909425978 (CustomAttributeData_t2380814493 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.CustomAttributeData::GetHashCode()
extern "C"  int32_t CustomAttributeData_GetHashCode_m3989739430 (CustomAttributeData_t2380814493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
