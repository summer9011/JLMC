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
#include "mscorlib_System_RuntimeTypeHandle2078935215.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.RuntimeTypeHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RuntimeTypeHandle__ctor_m235560320 (RuntimeTypeHandle_t2078935215 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeTypeHandle::get_Value()
extern "C"  IntPtr_t RuntimeTypeHandle_get_Value_m2239757882 (RuntimeTypeHandle_t2078935215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeTypeHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RuntimeTypeHandle_GetObjectData_m3567098501 (RuntimeTypeHandle_t2078935215 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeTypeHandle::Equals(System.Object)
extern "C"  bool RuntimeTypeHandle_Equals_m452760426 (RuntimeTypeHandle_t2078935215 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeTypeHandle::GetHashCode()
extern "C"  int32_t RuntimeTypeHandle_GetHashCode_m3697629454 (RuntimeTypeHandle_t2078935215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct RuntimeTypeHandle_t2078935215;
struct RuntimeTypeHandle_t2078935215_marshaled_pinvoke;

extern "C" void RuntimeTypeHandle_t2078935215_marshal_pinvoke(const RuntimeTypeHandle_t2078935215& unmarshaled, RuntimeTypeHandle_t2078935215_marshaled_pinvoke& marshaled);
extern "C" void RuntimeTypeHandle_t2078935215_marshal_pinvoke_back(const RuntimeTypeHandle_t2078935215_marshaled_pinvoke& marshaled, RuntimeTypeHandle_t2078935215& unmarshaled);
extern "C" void RuntimeTypeHandle_t2078935215_marshal_pinvoke_cleanup(RuntimeTypeHandle_t2078935215_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct RuntimeTypeHandle_t2078935215;
struct RuntimeTypeHandle_t2078935215_marshaled_com;

extern "C" void RuntimeTypeHandle_t2078935215_marshal_com(const RuntimeTypeHandle_t2078935215& unmarshaled, RuntimeTypeHandle_t2078935215_marshaled_com& marshaled);
extern "C" void RuntimeTypeHandle_t2078935215_marshal_com_back(const RuntimeTypeHandle_t2078935215_marshaled_com& marshaled, RuntimeTypeHandle_t2078935215& unmarshaled);
extern "C" void RuntimeTypeHandle_t2078935215_marshal_com_cleanup(RuntimeTypeHandle_t2078935215_marshaled_com& marshaled);
