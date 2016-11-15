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

// System.DelegateSerializationHolder
struct DelegateSerializationHolder_t3112916176;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Delegate
struct Delegate_t49333446;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Delegate49333446.h"

// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder__ctor_m3915060553 (DelegateSerializationHolder_t3112916176 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder_GetDelegateData_m1057136238 (Il2CppObject * __this /* static, unused */, Delegate_t49333446 * ___instance, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder_GetObjectData_m3504134864 (DelegateSerializationHolder_t3112916176 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Il2CppObject * DelegateSerializationHolder_GetRealObject_m1233806014 (DelegateSerializationHolder_t3112916176 * __this, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
