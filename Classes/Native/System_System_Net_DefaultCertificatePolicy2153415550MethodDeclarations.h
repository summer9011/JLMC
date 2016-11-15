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

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t2153415550;
// System.Net.ServicePoint
struct ServicePoint_t3647242307;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1429855556;
// System.Net.WebRequest
struct WebRequest_t1478397231;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_ServicePoint3647242307.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1429855556.h"
#include "System_System_Net_WebRequest1478397231.h"

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C"  void DefaultCertificatePolicy__ctor_m4075407028 (DefaultCertificatePolicy_t2153415550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C"  bool DefaultCertificatePolicy_CheckValidationResult_m1093127521 (DefaultCertificatePolicy_t2153415550 * __this, ServicePoint_t3647242307 * ___point, X509Certificate_t1429855556 * ___certificate, WebRequest_t1478397231 * ___request, int32_t ___certificateProblem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
