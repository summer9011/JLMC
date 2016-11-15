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

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1330171101;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1429855556;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1416839208;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1429855556.h"
#include "System_System_Security_Cryptography_X509Certificat1416839208.h"
#include "System_System_Net_Security_SslPolicyErrors2347475853.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void RemoteCertificateValidationCallback__ctor_m2946714095 (RemoteCertificateValidationCallback_t1330171101 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool RemoteCertificateValidationCallback_Invoke_m3011066238 (RemoteCertificateValidationCallback_t1330171101 * __this, Il2CppObject * ___sender, X509Certificate_t1429855556 * ___certificate, X509Chain_t1416839208 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t1330171101(Il2CppObject* delegate, Il2CppObject * ___sender, X509Certificate_t1429855556 * ___certificate, X509Chain_t1416839208 * ___chain, int32_t ___sslPolicyErrors);
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RemoteCertificateValidationCallback_BeginInvoke_m2492197471 (RemoteCertificateValidationCallback_t1330171101 * __this, Il2CppObject * ___sender, X509Certificate_t1429855556 * ___certificate, X509Chain_t1416839208 * ___chain, int32_t ___sslPolicyErrors, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C"  bool RemoteCertificateValidationCallback_EndInvoke_m449921409 (RemoteCertificateValidationCallback_t1330171101 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
