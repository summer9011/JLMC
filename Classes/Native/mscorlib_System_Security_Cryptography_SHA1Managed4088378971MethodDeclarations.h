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

// System.Security.Cryptography.SHA1Managed
struct SHA1Managed_t4088378971;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA1Managed::.ctor()
extern "C"  void SHA1Managed__ctor_m2252382529 (SHA1Managed_t4088378971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void SHA1Managed_HashCore_m2658295635 (SHA1Managed_t4088378971 * __this, ByteU5BU5D_t3835026402* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1Managed::HashFinal()
extern "C"  ByteU5BU5D_t3835026402* SHA1Managed_HashFinal_m617792367 (SHA1Managed_t4088378971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Managed::Initialize()
extern "C"  void SHA1Managed_Initialize_m3538700609 (SHA1Managed_t4088378971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
