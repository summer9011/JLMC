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

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t2731230150;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1529204745;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t3893714977;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_Cryptography_RSAManaged_Key1529204744.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter3076502791.h"
#include "mscorlib_Mono_Math_BigInteger3893714977.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
extern "C"  void RSAManaged__ctor_m4210377437 (RSAManaged_t2731230150 * __this, int32_t ___keySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::add_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
extern "C"  void RSAManaged_add_KeyGenerated_m4116417337 (RSAManaged_t2731230150 * __this, KeyGeneratedEventHandler_t1529204745 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
extern "C"  void RSAManaged_remove_KeyGenerated_m452989252 (RSAManaged_t2731230150 * __this, KeyGeneratedEventHandler_t1529204745 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
extern "C"  void RSAManaged_Finalize_m279303070 (RSAManaged_t2731230150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
extern "C"  void RSAManaged_GenerateKeyPair_m3091094352 (RSAManaged_t2731230150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
extern "C"  int32_t RSAManaged_get_KeySize_m741890017 (RSAManaged_t2731230150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
extern "C"  bool RSAManaged_get_PublicOnly_m2603845138 (RSAManaged_t2731230150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* RSAManaged_DecryptValue_m3341922225 (RSAManaged_t2731230150 * __this, ByteU5BU5D_t3835026402* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* RSAManaged_EncryptValue_m4089823119 (RSAManaged_t2731230150 * __this, ByteU5BU5D_t3835026402* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
extern "C"  RSAParameters_t3076502791  RSAManaged_ExportParameters_m2873993187 (RSAManaged_t2731230150 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void RSAManaged_ImportParameters_m2382611442 (RSAManaged_t2731230150 * __this, RSAParameters_t3076502791  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
extern "C"  void RSAManaged_Dispose_m3018788098 (RSAManaged_t2731230150 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
extern "C"  String_t* RSAManaged_ToXmlString_m484938173 (RSAManaged_t2731230150 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_IsCrtPossible()
extern "C"  bool RSAManaged_get_IsCrtPossible_m855038123 (RSAManaged_t2731230150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
extern "C"  ByteU5BU5D_t3835026402* RSAManaged_GetPaddedValue_m4394397 (RSAManaged_t2731230150 * __this, BigInteger_t3893714977 * ___value, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
