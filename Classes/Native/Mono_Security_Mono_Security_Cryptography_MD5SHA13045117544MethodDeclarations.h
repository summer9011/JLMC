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

// Mono.Security.Cryptography.MD5SHA1
struct MD5SHA1_t3045117544;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Security.Cryptography.RSA
struct RSA_t2777156203;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA2777156203.h"

// System.Void Mono.Security.Cryptography.MD5SHA1::.ctor()
extern "C"  void MD5SHA1__ctor_m371038734 (MD5SHA1_t3045117544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::Initialize()
extern "C"  void MD5SHA1_Initialize_m3440022970 (MD5SHA1_t3045117544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::HashFinal()
extern "C"  ByteU5BU5D_t3835026402* MD5SHA1_HashFinal_m4051142254 (MD5SHA1_t3045117544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void MD5SHA1_HashCore_m2043482644 (MD5SHA1_t3045117544 * __this, ByteU5BU5D_t3835026402* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::CreateSignature(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t3835026402* MD5SHA1_CreateSignature_m4274114929 (MD5SHA1_t3045117544 * __this, RSA_t2777156203 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.MD5SHA1::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  bool MD5SHA1_VerifySignature_m507888141 (MD5SHA1_t3045117544 * __this, RSA_t2777156203 * ___rsa, ByteU5BU5D_t3835026402* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
