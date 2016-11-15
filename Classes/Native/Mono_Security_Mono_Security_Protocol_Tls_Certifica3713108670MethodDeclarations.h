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

// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t3713108670;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1429855556;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2821278614;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_System_Security_Cryptography_X509Certificat2821278614.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1429855556.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void CertificateSelectionCallback__ctor_m2302751912 (CertificateSelectionCallback_t3713108670 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t1429855556 * CertificateSelectionCallback_Invoke_m2902629105 (CertificateSelectionCallback_t3713108670 * __this, X509CertificateCollection_t2821278614 * ___clientCertificates, X509Certificate_t1429855556 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2821278614 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" X509Certificate_t1429855556 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t3713108670(Il2CppObject* delegate, X509CertificateCollection_t2821278614 * ___clientCertificates, X509Certificate_t1429855556 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2821278614 * ___serverRequestedCertificates);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CertificateSelectionCallback_BeginInvoke_m990408067 (CertificateSelectionCallback_t3713108670 * __this, X509CertificateCollection_t2821278614 * ___clientCertificates, X509Certificate_t1429855556 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2821278614 * ___serverRequestedCertificates, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C"  X509Certificate_t1429855556 * CertificateSelectionCallback_EndInvoke_m3525317639 (CertificateSelectionCallback_t3713108670 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
