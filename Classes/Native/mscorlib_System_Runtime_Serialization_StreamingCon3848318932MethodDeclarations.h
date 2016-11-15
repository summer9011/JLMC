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

// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1279909356.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates)
extern "C"  void StreamingContext__ctor_m3756336578 (StreamingContext_t3848318932 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates,System.Object)
extern "C"  void StreamingContext__ctor_m3063421596 (StreamingContext_t3848318932 * __this, int32_t ___state, Il2CppObject * ___additional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::get_State()
extern "C"  int32_t StreamingContext_get_State_m4191542657 (StreamingContext_t3848318932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.StreamingContext::Equals(System.Object)
extern "C"  bool StreamingContext_Equals_m3075503931 (StreamingContext_t3848318932 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.StreamingContext::GetHashCode()
extern "C"  int32_t StreamingContext_GetHashCode_m3109182873 (StreamingContext_t3848318932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct StreamingContext_t3848318932;
struct StreamingContext_t3848318932_marshaled_com;

extern "C" void StreamingContext_t3848318932_marshal_com(const StreamingContext_t3848318932& unmarshaled, StreamingContext_t3848318932_marshaled_com& marshaled);
extern "C" void StreamingContext_t3848318932_marshal_com_back(const StreamingContext_t3848318932_marshaled_com& marshaled, StreamingContext_t3848318932& unmarshaled);
extern "C" void StreamingContext_t3848318932_marshal_com_cleanup(StreamingContext_t3848318932_marshaled_com& marshaled);
