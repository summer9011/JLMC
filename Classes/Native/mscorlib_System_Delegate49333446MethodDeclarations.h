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

// System.Delegate
struct Delegate_t49333446;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Delegate[]
struct DelegateU5BU5D_t2983829859;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Reflection_BindingFlags3354691680.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Delegate49333446.h"

// System.Reflection.MethodInfo System.Delegate::get_Method()
extern "C"  MethodInfo_t * Delegate_get_Method_m2968370506 (Delegate_t49333446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::get_Target()
extern "C"  Il2CppObject * Delegate_get_Target_m896795953 (Delegate_t49333446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate_internal(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
extern "C"  Delegate_t49333446 * Delegate_CreateDelegate_internal_m1567874925 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Il2CppObject * ___target, MethodInfo_t * ___info, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::SetMulticastInvoke()
extern "C"  void Delegate_SetMulticastInvoke_m361277268 (Delegate_t49333446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::arg_type_match(System.Type,System.Type)
extern "C"  bool Delegate_arg_type_match_m1751825687 (Il2CppObject * __this /* static, unused */, Type_t * ___delArgType, Type_t * ___argType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::return_type_match(System.Type,System.Type)
extern "C"  bool Delegate_return_type_match_m4278947849 (Il2CppObject * __this /* static, unused */, Type_t * ___delReturnType, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
extern "C"  Delegate_t49333446 * Delegate_CreateDelegate_m3052767705 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Il2CppObject * ___firstArgument, MethodInfo_t * ___method, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
extern "C"  Delegate_t49333446 * Delegate_CreateDelegate_m2101460062 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Il2CppObject * ___firstArgument, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo,System.Boolean)
extern "C"  Delegate_t49333446 * Delegate_CreateDelegate_m3813023227 (Il2CppObject * __this /* static, unused */, Type_t * ___type, MethodInfo_t * ___method, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String)
extern "C"  Delegate_t49333446 * Delegate_CreateDelegate_m2858111775 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Il2CppObject * ___target, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Delegate::GetCandidateMethod(System.Type,System.Type,System.String,System.Reflection.BindingFlags,System.Boolean,System.Boolean)
extern "C"  MethodInfo_t * Delegate_GetCandidateMethod_m4178439006 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, int32_t ___bflags, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String,System.Boolean,System.Boolean)
extern "C"  Delegate_t49333446 * Delegate_CreateDelegate_m2775155596 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String)
extern "C"  Delegate_t49333446 * Delegate_CreateDelegate_m1864084142 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean,System.Boolean)
extern "C"  Delegate_t49333446 * Delegate_CreateDelegate_m1706525923 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Il2CppObject * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean)
extern "C"  Delegate_t49333446 * Delegate_CreateDelegate_m2923944126 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Il2CppObject * ___target, String_t* ___method, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::Clone()
extern "C"  Il2CppObject * Delegate_Clone_m2661349026 (Delegate_t49333446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::Equals(System.Object)
extern "C"  bool Delegate_Equals_m2235282625 (Delegate_t49333446 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Delegate::GetHashCode()
extern "C"  int32_t Delegate_GetHashCode_m4213744155 (Delegate_t49333446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Delegate_GetObjectData_m1508449364 (Delegate_t49333446 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.Delegate::GetInvocationList()
extern "C"  DelegateU5BU5D_t2983829859* Delegate_GetInvocationList_m3706058733 (Delegate_t49333446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t49333446 * Delegate_Combine_m3791207084 (Il2CppObject * __this /* static, unused */, Delegate_t49333446 * ___a, Delegate_t49333446 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate[])
extern "C"  Delegate_t49333446 * Delegate_Combine_m1976351882 (Il2CppObject * __this /* static, unused */, DelegateU5BU5D_t2983829859* ___delegates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CombineImpl(System.Delegate)
extern "C"  Delegate_t49333446 * Delegate_CombineImpl_m3484632404 (Delegate_t49333446 * __this, Delegate_t49333446 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t49333446 * Delegate_Remove_m2626518725 (Il2CppObject * __this /* static, unused */, Delegate_t49333446 * ___source, Delegate_t49333446 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::RemoveImpl(System.Delegate)
extern "C"  Delegate_t49333446 * Delegate_RemoveImpl_m3666700529 (Delegate_t49333446 * __this, Delegate_t49333446 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
