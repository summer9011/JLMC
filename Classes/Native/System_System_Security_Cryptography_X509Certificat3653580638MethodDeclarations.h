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

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3653580638;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t3071745006;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t919040627;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2387210216;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t2758255917;
// System.String
struct String_t;
// System.Security.Cryptography.Oid
struct Oid_t1426139793;
// Mono.Security.ASN1
struct ASN1_t2605720235;
// System.Text.StringBuilder
struct StringBuilder_t2393427626;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4061077789;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "System_System_Security_Cryptography_X509Certificat3481030078.h"
#include "Mono_Security_Mono_Security_ASN12605720234.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1794074436.h"
#include "mscorlib_System_Text_StringBuilder2393427626.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
extern "C"  void X509Certificate2__ctor_m4067762773 (X509Certificate2_t3653580638 * __this, ByteU5BU5D_t3835026402* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
extern "C"  void X509Certificate2__cctor_m3470694777 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
extern "C"  X509ExtensionCollection_t3071745006 * X509Certificate2_get_Extensions_m3374377562 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_IssuerName()
extern "C"  X500DistinguishedName_t919040627 * X509Certificate2_get_IssuerName_m2295833821 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
extern "C"  DateTime_t2933746480  X509Certificate2_get_NotAfter_m3430171627 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
extern "C"  DateTime_t2933746480  X509Certificate2_get_NotBefore_m2972055762 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
extern "C"  AsymmetricAlgorithm_t2387210216 * X509Certificate2_get_PrivateKey_m2896208208 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
extern "C"  PublicKey_t2758255917 * X509Certificate2_get_PublicKey_m2119837179 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
extern "C"  String_t* X509Certificate2_get_SerialNumber_m1521011849 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
extern "C"  Oid_t1426139793 * X509Certificate2_get_SignatureAlgorithm_m3069898012 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_SubjectName()
extern "C"  X500DistinguishedName_t919040627 * X509Certificate2_get_SubjectName_m2958094870 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
extern "C"  String_t* X509Certificate2_get_Thumbprint_m4244025929 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
extern "C"  int32_t X509Certificate2_get_Version_m1927399907 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
extern "C"  String_t* X509Certificate2_GetNameInfo_m402390219 (X509Certificate2_t3653580638 * __this, int32_t ___nameType, bool ___forIssuer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 System.Security.Cryptography.X509Certificates.X509Certificate2::Find(System.Byte[],Mono.Security.ASN1)
extern "C"  ASN1_t2605720235 * X509Certificate2_Find_m833446211 (X509Certificate2_t3653580638 * __this, ByteU5BU5D_t3835026402* ___oid, ASN1_t2605720235 * ___dn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetValueAsString(Mono.Security.ASN1)
extern "C"  String_t* X509Certificate2_GetValueAsString_m1286925493 (X509Certificate2_t3653580638 * __this, ASN1_t2605720235 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::ImportPkcs12(System.Byte[],System.String)
extern "C"  void X509Certificate2_ImportPkcs12_m3993877002 (X509Certificate2_t3653580638 * __this, ByteU5BU5D_t3835026402* ___rawData, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C"  void X509Certificate2_Import_m3813388542 (X509Certificate2_t3653580638 * __this, ByteU5BU5D_t3835026402* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
extern "C"  void X509Certificate2_Reset_m414840175 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
extern "C"  String_t* X509Certificate2_ToString_m3269655217 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
extern "C"  String_t* X509Certificate2_ToString_m4160733282 (X509Certificate2_t3653580638 * __this, bool ___verbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern "C"  void X509Certificate2_AppendBuffer_m3517242299 (Il2CppObject * __this /* static, unused */, StringBuilder_t2393427626 * ___sb, ByteU5BU5D_t3835026402* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::Verify()
extern "C"  bool X509Certificate2_Verify_m1574874641 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::get_MonoCertificate()
extern "C"  X509Certificate_t4061077789 * X509Certificate2_get_MonoCertificate_m2721967882 (X509Certificate2_t3653580638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
