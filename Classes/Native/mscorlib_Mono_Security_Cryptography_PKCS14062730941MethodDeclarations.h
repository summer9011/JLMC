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

// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Security.Cryptography.RSA
struct RSA_t2777156203;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4192248498;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3752677216;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA2777156203.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber4192248498.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorith3752677216.h"

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C"  void PKCS1__cctor_m3343707276 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C"  bool PKCS1_Compare_m4211756960 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___array1, ByteU5BU5D_t3835026402* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3835026402* PKCS1_I2OSP_m3905712516 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* PKCS1_OS2IP_m1273945439 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* PKCS1_RSAEP_m3065689068 (Il2CppObject * __this /* static, unused */, RSA_t2777156203 * ___rsa, ByteU5BU5D_t3835026402* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* PKCS1_RSASP1_m1786291617 (Il2CppObject * __this /* static, unused */, RSA_t2777156203 * ___rsa, ByteU5BU5D_t3835026402* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* PKCS1_RSAVP1_m4144423556 (Il2CppObject * __this /* static, unused */, RSA_t2777156203 * ___rsa, ByteU5BU5D_t3835026402* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* PKCS1_Encrypt_v15_m1473661153 (Il2CppObject * __this /* static, unused */, RSA_t2777156203 * ___rsa, RandomNumberGenerator_t4192248498 * ___rng, ByteU5BU5D_t3835026402* ___M, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* PKCS1_Sign_v15_m2137018891 (Il2CppObject * __this /* static, unused */, RSA_t2777156203 * ___rsa, HashAlgorithm_t3752677216 * ___hash, ByteU5BU5D_t3835026402* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C"  bool PKCS1_Verify_v15_m1048842936 (Il2CppObject * __this /* static, unused */, RSA_t2777156203 * ___rsa, HashAlgorithm_t3752677216 * ___hash, ByteU5BU5D_t3835026402* ___hashValue, ByteU5BU5D_t3835026402* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C"  bool PKCS1_Verify_v15_m2571212635 (Il2CppObject * __this /* static, unused */, RSA_t2777156203 * ___rsa, HashAlgorithm_t3752677216 * ___hash, ByteU5BU5D_t3835026402* ___hashValue, ByteU5BU5D_t3835026402* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3835026402* PKCS1_Encode_v15_m2462715278 (Il2CppObject * __this /* static, unused */, HashAlgorithm_t3752677216 * ___hash, ByteU5BU5D_t3835026402* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
