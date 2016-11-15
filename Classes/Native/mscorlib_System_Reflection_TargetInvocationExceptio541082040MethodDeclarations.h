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

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t541082040;
// System.Exception
struct Exception_t1145979430;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception1145979430.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C"  void TargetInvocationException__ctor_m1059845570 (TargetInvocationException_t541082040 * __this, Exception_t1145979430 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TargetInvocationException__ctor_m2308614207 (TargetInvocationException_t541082040 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
