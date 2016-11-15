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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA2777156203.h"

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C"  int32_t CryptoConvert_ToInt32LE_m3103589321 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C"  uint32_t CryptoConvert_ToUInt32LE_m27102829 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C"  ByteU5BU5D_t3835026402* CryptoConvert_GetBytesLE_m4026062242 (Il2CppObject * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t3835026402* CryptoConvert_ToCapiPrivateKeyBlob_m850465939 (Il2CppObject * __this /* static, unused */, RSA_t2777156203 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C"  RSA_t2777156203 * CryptoConvert_FromCapiPublicKeyBlob_m547807126 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t2777156203 * CryptoConvert_FromCapiPublicKeyBlob_m812595523 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t3835026402* CryptoConvert_ToCapiPublicKeyBlob_m924651951 (Il2CppObject * __this /* static, unused */, RSA_t2777156203 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C"  ByteU5BU5D_t3835026402* CryptoConvert_ToCapiKeyBlob_m607484285 (Il2CppObject * __this /* static, unused */, RSA_t2777156203 * ___rsa, bool ___includePrivateKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
