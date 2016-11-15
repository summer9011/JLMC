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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeMethodHandle1598230792.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.RuntimeMethodHandle::.ctor(System.IntPtr)
extern "C"  void RuntimeMethodHandle__ctor_m1162528746 (RuntimeMethodHandle_t1598230792 * __this, IntPtr_t ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RuntimeMethodHandle__ctor_m2437574937 (RuntimeMethodHandle_t1598230792 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeMethodHandle::get_Value()
extern "C"  IntPtr_t RuntimeMethodHandle_get_Value_m333629197 (RuntimeMethodHandle_t1598230792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RuntimeMethodHandle_GetObjectData_m2128133496 (RuntimeMethodHandle_t1598230792 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeMethodHandle::Equals(System.Object)
extern "C"  bool RuntimeMethodHandle_Equals_m813356023 (RuntimeMethodHandle_t1598230792 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeMethodHandle::GetHashCode()
extern "C"  int32_t RuntimeMethodHandle_GetHashCode_m2682236001 (RuntimeMethodHandle_t1598230792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct RuntimeMethodHandle_t1598230792;
struct RuntimeMethodHandle_t1598230792_marshaled_pinvoke;

extern "C" void RuntimeMethodHandle_t1598230792_marshal_pinvoke(const RuntimeMethodHandle_t1598230792& unmarshaled, RuntimeMethodHandle_t1598230792_marshaled_pinvoke& marshaled);
extern "C" void RuntimeMethodHandle_t1598230792_marshal_pinvoke_back(const RuntimeMethodHandle_t1598230792_marshaled_pinvoke& marshaled, RuntimeMethodHandle_t1598230792& unmarshaled);
extern "C" void RuntimeMethodHandle_t1598230792_marshal_pinvoke_cleanup(RuntimeMethodHandle_t1598230792_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct RuntimeMethodHandle_t1598230792;
struct RuntimeMethodHandle_t1598230792_marshaled_com;

extern "C" void RuntimeMethodHandle_t1598230792_marshal_com(const RuntimeMethodHandle_t1598230792& unmarshaled, RuntimeMethodHandle_t1598230792_marshaled_com& marshaled);
extern "C" void RuntimeMethodHandle_t1598230792_marshal_com_back(const RuntimeMethodHandle_t1598230792_marshaled_com& marshaled, RuntimeMethodHandle_t1598230792& unmarshaled);
extern "C" void RuntimeMethodHandle_t1598230792_marshal_com_cleanup(RuntimeMethodHandle_t1598230792_marshaled_com& marshaled);
