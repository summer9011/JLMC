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

// Mono.Security.X509.X509Certificate
struct X509Certificate_t4061077789;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Security.Cryptography.DSA
struct DSA_t2777155605;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1407999943;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t2777156203;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2387210216;
// Mono.Security.ASN1
struct ASN1_t2605720235;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSA2777155605.h"
#include "mscorlib_System_Security_Cryptography_RSA2777156203.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl2387210216.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C"  void X509Certificate__ctor_m2143220811 (X509Certificate_t4061077789 * __this, ByteU5BU5D_t3835026402* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C"  void X509Certificate__cctor_m2984068893 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C"  void X509Certificate_Parse_m1764345628 (X509Certificate_t4061077789 * __this, ByteU5BU5D_t3835026402* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* X509Certificate_GetUnsignedBigInteger_m2102946512 (X509Certificate_t4061077789 * __this, ByteU5BU5D_t3835026402* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C"  DSA_t2777155605 * X509Certificate_get_DSA_m2452394785 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
extern "C"  void X509Certificate_set_DSA_m1358261980 (X509Certificate_t4061077789 * __this, DSA_t2777155605 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C"  X509ExtensionCollection_t1407999943 * X509Certificate_get_Extensions_m1784966408 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern "C"  ByteU5BU5D_t3835026402* X509Certificate_get_Hash_m2470366345 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C"  String_t* X509Certificate_get_IssuerName_m3907994144 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
extern "C"  String_t* X509Certificate_get_KeyAlgorithm_m454927092 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C"  ByteU5BU5D_t3835026402* X509Certificate_get_KeyAlgorithmParameters_m1701675565 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
extern "C"  void X509Certificate_set_KeyAlgorithmParameters_m17826364 (X509Certificate_t4061077789 * __this, ByteU5BU5D_t3835026402* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C"  ByteU5BU5D_t3835026402* X509Certificate_get_PublicKey_m933487733 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
extern "C"  RSA_t2777156203 * X509Certificate_get_RSA_m1167362983 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
extern "C"  void X509Certificate_set_RSA_m1038416652 (X509Certificate_t4061077789 * __this, RSA_t2777156203 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C"  ByteU5BU5D_t3835026402* X509Certificate_get_RawData_m1262574599 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
extern "C"  ByteU5BU5D_t3835026402* X509Certificate_get_SerialNumber_m2509150920 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
extern "C"  ByteU5BU5D_t3835026402* X509Certificate_get_Signature_m3664033367 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
extern "C"  String_t* X509Certificate_get_SignatureAlgorithm_m2111916881 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C"  String_t* X509Certificate_get_SubjectName_m3533705485 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C"  DateTime_t2933746480  X509Certificate_get_ValidFrom_m1740754472 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C"  DateTime_t2933746480  X509Certificate_get_ValidUntil_m4037777446 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C"  int32_t X509Certificate_get_Version_m3031985157 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern "C"  bool X509Certificate_get_IsCurrent_m424898544 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
extern "C"  bool X509Certificate_WasCurrent_m3632049416 (X509Certificate_t4061077789 * __this, DateTime_t2933746480  ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
extern "C"  bool X509Certificate_VerifySignature_m4020723406 (X509Certificate_t4061077789 * __this, DSA_t2777155605 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern "C"  bool X509Certificate_VerifySignature_m4020723740 (X509Certificate_t4061077789 * __this, RSA_t2777156203 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  bool X509Certificate_VerifySignature_m2806336005 (X509Certificate_t4061077789 * __this, AsymmetricAlgorithm_t2387210216 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern "C"  bool X509Certificate_get_IsSelfSigned_m3860357831 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C"  ASN1_t2605720235 * X509Certificate_GetIssuerName_m2151596145 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C"  ASN1_t2605720235 * X509Certificate_GetSubjectName_m1189079906 (X509Certificate_t4061077789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate_GetObjectData_m2064274370 (X509Certificate_t4061077789 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* X509Certificate_PEM_m49854707 (Il2CppObject * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t3835026402* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
