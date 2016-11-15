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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t1817031650;
// Mono.Security.Protocol.Tls.Context
struct Context_t2535388339;
// System.Security.Cryptography.RSA
struct RSA_t2777156203;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context2535388339.h"
#include "mscorlib_System_Security_Cryptography_RSA2777156203.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsClientCertificateVerify__ctor_m110646389 (TlsClientCertificateVerify_t1817031650 * __this, Context_t2535388339 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C"  void TlsClientCertificateVerify_Update_m1622071203 (TlsClientCertificateVerify_t1817031650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C"  void TlsClientCertificateVerify_ProcessAsSsl3_m3377063356 (TlsClientCertificateVerify_t1817031650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern "C"  void TlsClientCertificateVerify_ProcessAsTls1_m1960818833 (TlsClientCertificateVerify_t1817031650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern "C"  RSA_t2777156203 * TlsClientCertificateVerify_getClientCertRSA_m3799135236 (TlsClientCertificateVerify_t1817031650 * __this, RSA_t2777156203 * ___privKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* TlsClientCertificateVerify_getUnsignedBigInteger_m3357519896 (TlsClientCertificateVerify_t1817031650 * __this, ByteU5BU5D_t3835026402* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
