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

// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t3565273119;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1157533551;
// System.Security.Cryptography.RSA
struct RSA_t2777156203;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t1163649260;
// System.String[]
struct StringU5BU5D_t3764931161;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo1157533550.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter3076502791.h"

// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::.ctor()
extern "C"  void TlsServerSettings__ctor_m1125867683 (TlsServerSettings_t3565273119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_ServerKeyExchange()
extern "C"  bool TlsServerSettings_get_ServerKeyExchange_m1147981947 (TlsServerSettings_t3565273119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_ServerKeyExchange(System.Boolean)
extern "C"  void TlsServerSettings_set_ServerKeyExchange_m4199779410 (TlsServerSettings_t3565273119 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::get_Certificates()
extern "C"  X509CertificateCollection_t1157533551 * TlsServerSettings_get_Certificates_m3301336199 (TlsServerSettings_t3565273119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_Certificates(Mono.Security.X509.X509CertificateCollection)
extern "C"  void TlsServerSettings_set_Certificates_m67827830 (TlsServerSettings_t3565273119 * __this, X509CertificateCollection_t1157533551 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRSA()
extern "C"  RSA_t2777156203 * TlsServerSettings_get_CertificateRSA_m1899388839 (TlsServerSettings_t3565273119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::get_RsaParameters()
extern "C"  RSAParameters_t3076502791  TlsServerSettings_get_RsaParameters_m1327440044 (TlsServerSettings_t3565273119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_RsaParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void TlsServerSettings_set_RsaParameters_m3165273449 (TlsServerSettings_t3565273119 * __this, RSAParameters_t3076502791  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_SignedParams(System.Byte[])
extern "C"  void TlsServerSettings_set_SignedParams_m1826385315 (TlsServerSettings_t3565273119 * __this, ByteU5BU5D_t3835026402* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRequest()
extern "C"  bool TlsServerSettings_get_CertificateRequest_m1204669838 (TlsServerSettings_t3565273119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateRequest(System.Boolean)
extern "C"  void TlsServerSettings_set_CertificateRequest_m3419519893 (TlsServerSettings_t3565273119 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateTypes(Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[])
extern "C"  void TlsServerSettings_set_CertificateTypes_m264196087 (TlsServerSettings_t3565273119 * __this, ClientCertificateTypeU5BU5D_t1163649260* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_DistinguisedNames(System.String[])
extern "C"  void TlsServerSettings_set_DistinguisedNames_m2290049644 (TlsServerSettings_t3565273119 * __this, StringU5BU5D_t3764931161* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::UpdateCertificateRSA()
extern "C"  void TlsServerSettings_UpdateCertificateRSA_m2025051563 (TlsServerSettings_t3565273119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
