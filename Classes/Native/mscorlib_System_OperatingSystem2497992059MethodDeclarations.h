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

// System.OperatingSystem
struct OperatingSystem_t2497992059;
// System.Version
struct Version_t2956351477;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_PlatformID1033796947.h"
#include "mscorlib_System_Version2956351477.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.OperatingSystem::.ctor(System.PlatformID,System.Version)
extern "C"  void OperatingSystem__ctor_m988315539 (OperatingSystem_t2497992059 * __this, int32_t ___platform, Version_t2956351477 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.OperatingSystem::get_Platform()
extern "C"  int32_t OperatingSystem_get_Platform_m2260343279 (OperatingSystem_t2497992059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.OperatingSystem::Clone()
extern "C"  Il2CppObject * OperatingSystem_Clone_m1943707477 (OperatingSystem_t2497992059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OperatingSystem::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void OperatingSystem_GetObjectData_m2276196875 (OperatingSystem_t2497992059 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.OperatingSystem::ToString()
extern "C"  String_t* OperatingSystem_ToString_m2365121878 (OperatingSystem_t2497992059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
