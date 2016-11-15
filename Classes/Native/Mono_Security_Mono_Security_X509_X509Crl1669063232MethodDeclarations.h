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

// Mono.Security.X509.X509Crl
struct X509Crl_t1669063232;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1407999943;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t3063881479;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4061077789;
// System.Security.Cryptography.DSA
struct DSA_t2777155605;
// System.Security.Cryptography.RSA
struct RSA_t2777156203;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2387210216;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate4061077788.h"
#include "mscorlib_System_Security_Cryptography_DSA2777155605.h"
#include "mscorlib_System_Security_Cryptography_RSA2777156203.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl2387210216.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C"  void X509Crl__ctor_m2469408229 (X509Crl_t1669063232 * __this, ByteU5BU5D_t3835026402* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C"  void X509Crl_Parse_m3287862528 (X509Crl_t1669063232 * __this, ByteU5BU5D_t3835026402* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C"  X509ExtensionCollection_t1407999943 * X509Crl_get_Extensions_m4055821100 (X509Crl_t1669063232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C"  ByteU5BU5D_t3835026402* X509Crl_get_Hash_m3617397429 (X509Crl_t1669063232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C"  String_t* X509Crl_get_IssuerName_m4008957916 (X509Crl_t1669063232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C"  DateTime_t2933746480  X509Crl_get_NextUpdate_m732409688 (X509Crl_t1669063232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C"  bool X509Crl_Compare_m2229641633 (X509Crl_t1669063232 * __this, ByteU5BU5D_t3835026402* ___array1, ByteU5BU5D_t3835026402* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C"  X509CrlEntry_t3063881479 * X509Crl_GetCrlEntry_m1677459928 (X509Crl_t1669063232 * __this, X509Certificate_t4061077789 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C"  X509CrlEntry_t3063881479 * X509Crl_GetCrlEntry_m550904265 (X509Crl_t1669063232 * __this, ByteU5BU5D_t3835026402* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C"  String_t* X509Crl_GetHashName_m183504634 (X509Crl_t1669063232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C"  bool X509Crl_VerifySignature_m25190802 (X509Crl_t1669063232 * __this, DSA_t2777155605 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C"  bool X509Crl_VerifySignature_m25189948 (X509Crl_t1669063232 * __this, RSA_t2777156203 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  bool X509Crl_VerifySignature_m833718649 (X509Crl_t1669063232 * __this, AsymmetricAlgorithm_t2387210216 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
