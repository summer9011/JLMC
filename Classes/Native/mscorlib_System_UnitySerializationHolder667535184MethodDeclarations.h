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

// System.UnitySerializationHolder
struct UnitySerializationHolder_t667535184;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1581665884;
// System.Reflection.Module
struct Module_t2520131484;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_DBNull1581665884.h"
#include "mscorlib_System_Reflection_Module2520131484.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder__ctor_m2832165173 (UnitySerializationHolder_t667535184 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetTypeData_m3333995932 (Il2CppObject * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetDBNullData_m461795932 (Il2CppObject * __this /* static, unused */, DBNull_t1581665884 * ___instance, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetModuleData_m2945403213 (Il2CppObject * __this /* static, unused */, Module_t2520131484 * ___instance, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetObjectData_m2280028722 (UnitySerializationHolder_t667535184 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Il2CppObject * UnitySerializationHolder_GetRealObject_m286267090 (UnitySerializationHolder_t667535184 * __this, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
