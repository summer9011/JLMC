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

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t717531547;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Security.Cryptography.RSA
struct RSA_t2777156203;
// System.Security.Cryptography.DSA
struct DSA_t2777155605;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter1143778581.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C"  void PrivateKeyInfo__ctor_m2683279425 (PrivateKeyInfo_t717531547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C"  void PrivateKeyInfo__ctor_m3851924948 (PrivateKeyInfo_t717531547 * __this, ByteU5BU5D_t3835026402* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C"  ByteU5BU5D_t3835026402* PrivateKeyInfo_get_PrivateKey_m2127503870 (PrivateKeyInfo_t717531547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C"  void PrivateKeyInfo_Decode_m1053025782 (PrivateKeyInfo_t717531547 * __this, ByteU5BU5D_t3835026402* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* PrivateKeyInfo_RemoveLeadingZero_m3396807048 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3835026402* PrivateKeyInfo_Normalize_m1192796352 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C"  RSA_t2777156203 * PrivateKeyInfo_DecodeRSA_m919734506 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C"  DSA_t2777155605 * PrivateKeyInfo_DecodeDSA_m2497561917 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___privateKey, DSAParameters_t1143778581  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
