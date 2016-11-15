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

// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct RemotingSurrogate_t3567443901;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3185359341;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
extern "C"  void RemotingSurrogate__ctor_m4143261101 (RemotingSurrogate_t3567443901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern "C"  Il2CppObject * RemotingSurrogate_SetObjectData_m2594388993 (RemotingSurrogate_t3567443901 * __this, Il2CppObject * ___obj, SerializationInfo_t1029367511 * ___si, StreamingContext_t3848318932  ___sc, Il2CppObject * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
