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
struct RSAManaged_t2731230151;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t3893714978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter3076502791.h"
#include "Mono_Security_Mono_Math_BigInteger3893714977.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor()
extern "C"  void RSAManaged__ctor_m1370411656 (RSAManaged_t2731230151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
extern "C"  void RSAManaged__ctor_m1680944437 (RSAManaged_t2731230151 * __this, int32_t ___keySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
extern "C"  void RSAManaged_Finalize_m3491799840 (RSAManaged_t2731230151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
extern "C"  void RSAManaged_GenerateKeyPair_m1213111262 (RSAManaged_t2731230151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
extern "C"  int32_t RSAManaged_get_KeySize_m3478823737 (RSAManaged_t2731230151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
extern "C"  bool RSAManaged_get_PublicOnly_m343941928 (RSAManaged_t2731230151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* RSAManaged_DecryptValue_m1225349489 (RSAManaged_t2731230151 * __this, ByteU5BU5D_t3835026402* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* RSAManaged_EncryptValue_m1847230963 (RSAManaged_t2731230151 * __this, ByteU5BU5D_t3835026402* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
extern "C"  RSAParameters_t3076502791  RSAManaged_ExportParameters_m2871338879 (RSAManaged_t2731230151 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void RSAManaged_ImportParameters_m3060955884 (RSAManaged_t2731230151 * __this, RSAParameters_t3076502791  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
extern "C"  void RSAManaged_Dispose_m160261748 (RSAManaged_t2731230151 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
extern "C"  String_t* RSAManaged_ToXmlString_m2606223477 (RSAManaged_t2731230151 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
extern "C"  ByteU5BU5D_t3835026402* RSAManaged_GetPaddedValue_m2972141669 (RSAManaged_t2731230151 * __this, BigInteger_t3893714978 * ___value, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
