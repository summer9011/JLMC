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

// System.MulticastDelegate
struct MulticastDelegate_t293776522;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Object
struct Il2CppObject;
// System.Delegate[]
struct DelegateU5BU5D_t2983829859;
// System.Delegate
struct Delegate_t49333446;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Delegate49333446.h"
#include "mscorlib_System_MulticastDelegate293776522.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MulticastDelegate_GetObjectData_m3187757658 (MulticastDelegate_t293776522 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C"  bool MulticastDelegate_Equals_m3064081489 (MulticastDelegate_t293776522 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C"  int32_t MulticastDelegate_GetHashCode_m1352560743 (MulticastDelegate_t293776522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C"  DelegateU5BU5D_t2983829859* MulticastDelegate_GetInvocationList_m1380132617 (MulticastDelegate_t293776522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C"  Delegate_t49333446 * MulticastDelegate_CombineImpl_m3327763192 (MulticastDelegate_t293776522 * __this, Delegate_t49333446 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C"  bool MulticastDelegate_BaseEquals_m2954278638 (MulticastDelegate_t293776522 * __this, MulticastDelegate_t293776522 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C"  MulticastDelegate_t293776522 * MulticastDelegate_KPM_m1592985119 (Il2CppObject * __this /* static, unused */, MulticastDelegate_t293776522 * ___needle, MulticastDelegate_t293776522 * ___haystack, MulticastDelegate_t293776522 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C"  Delegate_t49333446 * MulticastDelegate_RemoveImpl_m2024746777 (MulticastDelegate_t293776522 * __this, Delegate_t49333446 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::op_Inequality(System.MulticastDelegate,System.MulticastDelegate)
extern "C"  bool MulticastDelegate_op_Inequality_m252807755 (Il2CppObject * __this /* static, unused */, MulticastDelegate_t293776522 * ___d1, MulticastDelegate_t293776522 * ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
