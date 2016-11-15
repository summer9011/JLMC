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

// System.Threading.CompressedStack
struct CompressedStack_t789755832;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_CompressedStack789755832.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Threading.CompressedStack::.ctor(System.Int32)
extern "C"  void CompressedStack__ctor_m2080709323 (CompressedStack_t789755832 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::.ctor(System.Threading.CompressedStack)
extern "C"  void CompressedStack__ctor_m276924800 (CompressedStack_t789755832 * __this, CompressedStack_t789755832 * ___cs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::CreateCopy()
extern "C"  CompressedStack_t789755832 * CompressedStack_CreateCopy_m3321727874 (CompressedStack_t789755832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::Capture()
extern "C"  CompressedStack_t789755832 * CompressedStack_Capture_m179370023 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void CompressedStack_GetObjectData_m2387204186 (CompressedStack_t789755832 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CompressedStack::IsEmpty()
extern "C"  bool CompressedStack_IsEmpty_m2144176681 (CompressedStack_t789755832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
