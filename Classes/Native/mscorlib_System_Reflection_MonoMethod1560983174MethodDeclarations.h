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

// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t591550820;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t3027888260;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Exception
struct Exception_t1145979430;
// System.Reflection.Binder
struct Binder_t1934246024;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.Runtime.InteropServices.DllImportAttribute
struct DllImportAttribute_t2737297975;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Type[]
struct TypeU5BU5D_t2442356668;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodBase591550820.h"
#include "mscorlib_System_Reflection_MonoMethod1560983174.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Exception1145979430.h"
#include "mscorlib_System_Reflection_BindingFlags3354691680.h"
#include "mscorlib_System_Reflection_Binder1934246024.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_System_RuntimeMethodHandle1598230792.h"
#include "mscorlib_System_Reflection_MethodAttributes1641137380.h"
#include "mscorlib_System_Reflection_CallingConventions2717133484.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Reflection.MonoMethod::.ctor()
extern "C"  void MonoMethod__ctor_m4091684020 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
extern "C"  String_t* MonoMethod_get_name_m1503581873 (Il2CppObject * __this /* static, unused */, MethodBase_t591550820 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
extern "C"  MonoMethod_t * MonoMethod_get_base_definition_m1625237055 (Il2CppObject * __this /* static, unused */, MonoMethod_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
extern "C"  MethodInfo_t * MonoMethod_GetBaseDefinition_m1738989472 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReturnType()
extern "C"  Type_t * MonoMethod_get_ReturnType_m4218706049 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
extern "C"  ParameterInfoU5BU5D_t3027888260* MonoMethod_GetParameters_m1240674378 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C"  Il2CppObject * MonoMethod_InternalInvoke_m4055929538 (MonoMethod_t * __this, Il2CppObject * ___obj, ObjectU5BU5D_t3632007997* ___parameters, Exception_t1145979430 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MonoMethod_Invoke_m3376991795 (MonoMethod_t * __this, Il2CppObject * ___obj, int32_t ___invokeAttr, Binder_t1934246024 * ___binder, ObjectU5BU5D_t3632007997* ___parameters, CultureInfo_t634113868 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t1598230792  MonoMethod_get_MethodHandle_m1882915015 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
extern "C"  int32_t MonoMethod_get_Attributes_m4038185617 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
extern "C"  int32_t MonoMethod_get_CallingConvention_m2978714873 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
extern "C"  Type_t * MonoMethod_get_ReflectedType_m3966408549 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
extern "C"  Type_t * MonoMethod_get_DeclaringType_m4119916616 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_Name()
extern "C"  String_t* MonoMethod_get_Name_m1650258269 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoMethod_IsDefined_m2322670981 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* MonoMethod_GetCustomAttributes_m2493833930 (MonoMethod_t * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* MonoMethod_GetCustomAttributes_m3212448303 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
extern "C"  DllImportAttribute_t2737297975 * MonoMethod_GetDllImportAttribute_m2757463479 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mhandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
extern "C"  ObjectU5BU5D_t3632007997* MonoMethod_GetPseudoCustomAttributes_m466965107 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
extern "C"  bool MonoMethod_ShouldPrintFullName_m2343680861 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::ToString()
extern "C"  String_t* MonoMethod_ToString_m1014895917 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoMethod_GetObjectData_m3146497844 (MonoMethod_t * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
extern "C"  MethodInfo_t * MonoMethod_MakeGenericMethod_m3628255919 (MonoMethod_t * __this, TypeU5BU5D_t2442356668* ___methodInstantiation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
extern "C"  MethodInfo_t * MonoMethod_MakeGenericMethod_impl_m2063853616 (MonoMethod_t * __this, TypeU5BU5D_t2442356668* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
extern "C"  TypeU5BU5D_t2442356668* MonoMethod_GetGenericArguments_m1043327523 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
extern "C"  bool MonoMethod_get_IsGenericMethodDefinition_m2424433610 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
extern "C"  bool MonoMethod_get_IsGenericMethod_m4276550811 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
extern "C"  bool MonoMethod_get_ContainsGenericParameters_m2891719083 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
