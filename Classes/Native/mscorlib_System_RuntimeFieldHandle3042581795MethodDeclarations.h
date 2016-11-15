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
#include "mscorlib_System_RuntimeFieldHandle3042581795.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.RuntimeFieldHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RuntimeFieldHandle__ctor_m3142573784 (RuntimeFieldHandle_t3042581795 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeFieldHandle::get_Value()
extern "C"  IntPtr_t RuntimeFieldHandle_get_Value_m3963757144 (RuntimeFieldHandle_t3042581795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeFieldHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RuntimeFieldHandle_GetObjectData_m561368939 (RuntimeFieldHandle_t3042581795 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeFieldHandle::Equals(System.Object)
extern "C"  bool RuntimeFieldHandle_Equals_m1202966418 (RuntimeFieldHandle_t3042581795 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeFieldHandle::GetHashCode()
extern "C"  int32_t RuntimeFieldHandle_GetHashCode_m2809187154 (RuntimeFieldHandle_t3042581795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct RuntimeFieldHandle_t3042581795;
struct RuntimeFieldHandle_t3042581795_marshaled_pinvoke;

extern "C" void RuntimeFieldHandle_t3042581795_marshal_pinvoke(const RuntimeFieldHandle_t3042581795& unmarshaled, RuntimeFieldHandle_t3042581795_marshaled_pinvoke& marshaled);
extern "C" void RuntimeFieldHandle_t3042581795_marshal_pinvoke_back(const RuntimeFieldHandle_t3042581795_marshaled_pinvoke& marshaled, RuntimeFieldHandle_t3042581795& unmarshaled);
extern "C" void RuntimeFieldHandle_t3042581795_marshal_pinvoke_cleanup(RuntimeFieldHandle_t3042581795_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct RuntimeFieldHandle_t3042581795;
struct RuntimeFieldHandle_t3042581795_marshaled_com;

extern "C" void RuntimeFieldHandle_t3042581795_marshal_com(const RuntimeFieldHandle_t3042581795& unmarshaled, RuntimeFieldHandle_t3042581795_marshaled_com& marshaled);
extern "C" void RuntimeFieldHandle_t3042581795_marshal_com_back(const RuntimeFieldHandle_t3042581795_marshaled_com& marshaled, RuntimeFieldHandle_t3042581795& unmarshaled);
extern "C" void RuntimeFieldHandle_t3042581795_marshal_com_cleanup(RuntimeFieldHandle_t3042581795_marshaled_com& marshaled);
