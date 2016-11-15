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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
struct TlsServerCertificateRequest_t3656391740;
// Mono.Security.Protocol.Tls.Context
struct Context_t2535388339;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context2535388339.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsServerCertificateRequest__ctor_m1684270714 (TlsServerCertificateRequest_t3656391740 * __this, Context_t2535388339 * ___context, ByteU5BU5D_t3835026402* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
extern "C"  void TlsServerCertificateRequest_Update_m2674822753 (TlsServerCertificateRequest_t3656391740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
extern "C"  void TlsServerCertificateRequest_ProcessAsSsl3_m3017921864 (TlsServerCertificateRequest_t3656391740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
extern "C"  void TlsServerCertificateRequest_ProcessAsTls1_m3580757431 (TlsServerCertificateRequest_t3656391740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
