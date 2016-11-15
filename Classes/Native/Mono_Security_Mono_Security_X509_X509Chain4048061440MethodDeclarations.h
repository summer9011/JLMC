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

// Mono.Security.X509.X509Chain
struct X509Chain_t4048061440;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1157533551;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4061077789;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo1157533550.h"
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFl2083237559.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate4061077788.h"

// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C"  void X509Chain__ctor_m3522797144 (X509Chain_t4048061440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C"  void X509Chain__ctor_m1113875360 (X509Chain_t4048061440 * __this, X509CertificateCollection_t1157533551 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::get_Status()
extern "C"  int32_t X509Chain_get_Status_m2726750609 (X509Chain_t4048061440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C"  X509CertificateCollection_t1157533551 * X509Chain_get_TrustAnchors_m930867182 (X509Chain_t4048061440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_Build_m175470596 (X509Chain_t4048061440 * __this, X509Certificate_t4061077789 * ___leaf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsValid_m4184995162 (X509Chain_t4048061440 * __this, X509Certificate_t4061077789 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t4061077789 * X509Chain_FindCertificateParent_m3122224229 (X509Chain_t4048061440 * __this, X509Certificate_t4061077789 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t4061077789 * X509Chain_FindCertificateRoot_m589250107 (X509Chain_t4048061440 * __this, X509Certificate_t4061077789 * ___potentialRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsTrusted_m2834338719 (X509Chain_t4048061440 * __this, X509Certificate_t4061077789 * ___potentialTrusted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsParent_m2578316632 (X509Chain_t4048061440 * __this, X509Certificate_t4061077789 * ___child, X509Certificate_t4061077789 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
