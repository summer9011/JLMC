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

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t3410132110;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2387210216;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl2387210216.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
extern "C"  void RSAPKCS1SignatureDeformatter__ctor_m562806382 (RSAPKCS1SignatureDeformatter_t3410132110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1SignatureDeformatter__ctor_m3351047962 (RSAPKCS1SignatureDeformatter_t3410132110 * __this, AsymmetricAlgorithm_t2387210216 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
extern "C"  void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m894366837 (RSAPKCS1SignatureDeformatter_t3410132110 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1SignatureDeformatter_SetKey_m4127851139 (RSAPKCS1SignatureDeformatter_t3410132110 * __this, AsymmetricAlgorithm_t2387210216 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C"  bool RSAPKCS1SignatureDeformatter_VerifySignature_m1825067195 (RSAPKCS1SignatureDeformatter_t3410132110 * __this, ByteU5BU5D_t3835026402* ___rgbHash, ByteU5BU5D_t3835026402* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
