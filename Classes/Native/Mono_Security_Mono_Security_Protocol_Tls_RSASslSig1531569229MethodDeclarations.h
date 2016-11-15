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

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t1531569229;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2387210216;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl2387210216.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSASslSignatureDeformatter__ctor_m2325995515 (RSASslSignatureDeformatter_t1531569229 * __this, AsymmetricAlgorithm_t2387210216 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C"  bool RSASslSignatureDeformatter_VerifySignature_m3138484348 (RSASslSignatureDeformatter_t1531569229 * __this, ByteU5BU5D_t3835026402* ___rgbHash, ByteU5BU5D_t3835026402* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetHashAlgorithm(System.String)
extern "C"  void RSASslSignatureDeformatter_SetHashAlgorithm_m4048969080 (RSASslSignatureDeformatter_t1531569229 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSASslSignatureDeformatter_SetKey_m1150106904 (RSASslSignatureDeformatter_t1531569229 * __this, AsymmetricAlgorithm_t2387210216 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
