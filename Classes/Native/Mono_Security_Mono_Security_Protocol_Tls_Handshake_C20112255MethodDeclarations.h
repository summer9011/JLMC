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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct TlsServerCertificate_t20112255;
// Mono.Security.Protocol.Tls.Context
struct Context_t2535388339;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4061077789;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1157533551;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context2535388339.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate4061077788.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo1157533550.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsServerCertificate__ctor_m3697944709 (TlsServerCertificate_t20112255 * __this, Context_t2535388339 * ___context, ByteU5BU5D_t3835026402* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern "C"  void TlsServerCertificate_Update_m3673209976 (TlsServerCertificate_t20112255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern "C"  void TlsServerCertificate_ProcessAsSsl3_m277089231 (TlsServerCertificate_t20112255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
extern "C"  void TlsServerCertificate_ProcessAsTls1_m3083203628 (TlsServerCertificate_t20112255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern "C"  bool TlsServerCertificate_checkCertificateUsage_m2392234217 (TlsServerCertificate_t20112255 * __this, X509Certificate_t4061077789 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C"  void TlsServerCertificate_validateCertificates_m1988583701 (TlsServerCertificate_t20112255 * __this, X509CertificateCollection_t1157533551 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
extern "C"  bool TlsServerCertificate_checkServerIdentity_m3836435780 (TlsServerCertificate_t20112255 * __this, X509Certificate_t4061077789 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
extern "C"  bool TlsServerCertificate_checkDomainName_m547589480 (TlsServerCertificate_t20112255 * __this, String_t* ___subjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
extern "C"  bool TlsServerCertificate_Match_m239075186 (Il2CppObject * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
