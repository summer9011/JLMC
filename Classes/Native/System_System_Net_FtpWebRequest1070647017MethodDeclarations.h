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

// System.Net.FtpWebRequest
struct FtpWebRequest_t1070647017;
// System.Uri
struct Uri_t3338506287;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1429855556;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1416839208;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri3338506287.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1429855556.h"
#include "System_System_Security_Cryptography_X509Certificat1416839208.h"
#include "System_System_Net_Security_SslPolicyErrors2347475853.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern "C"  void FtpWebRequest__ctor_m3003551676 (FtpWebRequest_t1070647017 * __this, Uri_t3338506287 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
extern "C"  void FtpWebRequest__cctor_m2500702602 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool FtpWebRequest_U3CcallbackU3Em__B_m4153123054 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender, X509Certificate_t1429855556 * ___certificate, X509Chain_t1416839208 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
