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

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t3159695552;
// System.IO.Stream
struct Stream_t2768948945;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2821278614;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3205926943;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1429855556;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2387210216;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "System_System_Security_Cryptography_X509Certificat2821278614.h"
#include "System_System_Net_HttpWebRequest3205926943.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1429855556.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C"  void HttpsClientStream__ctor_m3407922777 (HttpsClientStream_t3159695552 * __this, Stream_t2768948945 * ___stream, X509CertificateCollection_t2821278614 * ___clientCertificates, HttpWebRequest_t3205926943 * ___request, ByteU5BU5D_t3835026402* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C"  bool HttpsClientStream_get_TrustFailure_m1980919191 (HttpsClientStream_t3159695552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool HttpsClientStream_RaiseServerCertificateValidation_m3356770426 (HttpsClientStream_t3159695552 * __this, X509Certificate_t1429855556 * ___certificate, Int32U5BU5D_t3315407976* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t1429855556 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3176353714 (Il2CppObject * __this /* static, unused */, X509CertificateCollection_t2821278614 * ___clientCerts, X509Certificate_t1429855556 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2821278614 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t2387210216 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m4293802471 (Il2CppObject * __this /* static, unused */, X509Certificate_t1429855556 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
