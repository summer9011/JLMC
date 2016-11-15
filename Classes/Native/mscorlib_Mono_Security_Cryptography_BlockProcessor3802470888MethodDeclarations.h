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

// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t3802470888;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3351301915;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.BlockProcessor::.ctor(System.Security.Cryptography.ICryptoTransform,System.Int32)
extern "C"  void BlockProcessor__ctor_m1457080072 (BlockProcessor_t3802470888 * __this, Il2CppObject * ___transform, int32_t ___blockSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Finalize()
extern "C"  void BlockProcessor_Finalize_m379027478 (BlockProcessor_t3802470888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Initialize()
extern "C"  void BlockProcessor_Initialize_m3476609078 (BlockProcessor_t3802470888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[])
extern "C"  void BlockProcessor_Core_m1914205130 (BlockProcessor_t3802470888 * __this, ByteU5BU5D_t3835026402* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[],System.Int32,System.Int32)
extern "C"  void BlockProcessor_Core_m582731880 (BlockProcessor_t3802470888 * __this, ByteU5BU5D_t3835026402* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.BlockProcessor::Final()
extern "C"  ByteU5BU5D_t3835026402* BlockProcessor_Final_m3453807370 (BlockProcessor_t3802470888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
