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

// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t2441175459;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2821278614;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1429855556;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Security_Cryptography_X509Certificat2821278614.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1429855556.h"

// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::.ctor()
extern "C"  void TlsClientSettings__ctor_m3065987087 (TlsClientSettings_t2441175459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.TlsClientSettings::get_TargetHost()
extern "C"  String_t* TlsClientSettings_get_TargetHost_m2817634620 (TlsClientSettings_t2441175459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_TargetHost(System.String)
extern "C"  void TlsClientSettings_set_TargetHost_m3421266913 (TlsClientSettings_t2441175459 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.TlsClientSettings::get_Certificates()
extern "C"  X509CertificateCollection_t2821278614 * TlsClientSettings_get_Certificates_m2509165647 (TlsClientSettings_t2441175459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_Certificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  void TlsClientSettings_set_Certificates_m1110280480 (TlsClientSettings_t2441175459 * __this, X509CertificateCollection_t2821278614 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.TlsClientSettings::get_ClientCertificate()
extern "C"  X509Certificate_t1429855556 * TlsClientSettings_get_ClientCertificate_m89435195 (TlsClientSettings_t2441175459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_ClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void TlsClientSettings_set_ClientCertificate_m442292512 (TlsClientSettings_t2441175459 * __this, X509Certificate_t1429855556 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::UpdateCertificateRSA()
extern "C"  void TlsClientSettings_UpdateCertificateRSA_m1828531911 (TlsClientSettings_t2441175459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
