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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t2758255917;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4061077789;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t4235512629;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2387210216;
// System.Security.Cryptography.Oid
struct Oid_t1426139793;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Security.Cryptography.DSA
struct DSA_t2777155605;
// System.Security.Cryptography.RSA
struct RSA_t2777156203;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate4061077788.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C"  void PublicKey__ctor_m613031465 (PublicKey_t2758255917 * __this, X509Certificate_t4061077789 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C"  AsnEncodedData_t4235512629 * PublicKey_get_EncodedKeyValue_m3051963850 (PublicKey_t2758255917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C"  AsnEncodedData_t4235512629 * PublicKey_get_EncodedParameters_m2182265270 (PublicKey_t2758255917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C"  AsymmetricAlgorithm_t2387210216 * PublicKey_get_Key_m126090744 (PublicKey_t2758255917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C"  Oid_t1426139793 * PublicKey_get_Oid_m4224222642 (PublicKey_t2758255917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* PublicKey_GetUnsignedBigInteger_m913837477 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C"  DSA_t2777155605 * PublicKey_DecodeDSA_m1169363495 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___rawPublicKey, ByteU5BU5D_t3835026402* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C"  RSA_t2777156203 * PublicKey_DecodeRSA_m1627823702 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
