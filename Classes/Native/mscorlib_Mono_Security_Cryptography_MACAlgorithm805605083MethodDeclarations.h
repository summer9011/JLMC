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

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t805605083;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4145793369;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_SymmetricAlg4145793369.h"

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  void MACAlgorithm__ctor_m2165161608 (MACAlgorithm_t805605083 * __this, SymmetricAlgorithm_t4145793369 * ___algorithm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C"  void MACAlgorithm_Initialize_m133885420 (MACAlgorithm_t805605083 * __this, ByteU5BU5D_t3835026402* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C"  void MACAlgorithm_Core_m2390605245 (MACAlgorithm_t805605083 * __this, ByteU5BU5D_t3835026402* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C"  ByteU5BU5D_t3835026402* MACAlgorithm_Final_m4076939925 (MACAlgorithm_t805605083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
