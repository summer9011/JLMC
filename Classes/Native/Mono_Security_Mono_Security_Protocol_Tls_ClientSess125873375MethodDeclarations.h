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

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t2658507369;
// Mono.Security.Protocol.Tls.Context
struct Context_t2535388339;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context2535388339.h"

// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::.cctor()
extern "C"  void ClientSessionCache__cctor_m1134810266 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::Add(System.String,System.Byte[])
extern "C"  void ClientSessionCache_Add_m987180603 (Il2CppObject * __this /* static, unused */, String_t* ___host, ByteU5BU5D_t3835026402* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionCache::FromHost(System.String)
extern "C"  ByteU5BU5D_t3835026402* ClientSessionCache_FromHost_m1396036471 (Il2CppObject * __this /* static, unused */, String_t* ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ClientSessionInfo Mono.Security.Protocol.Tls.ClientSessionCache::FromContext(Mono.Security.Protocol.Tls.Context,System.Boolean)
extern "C"  ClientSessionInfo_t2658507369 * ClientSessionCache_FromContext_m3886959254 (Il2CppObject * __this /* static, unused */, Context_t2535388339 * ___context, bool ___checkValidity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextInCache(Mono.Security.Protocol.Tls.Context)
extern "C"  bool ClientSessionCache_SetContextInCache_m907788136 (Il2CppObject * __this /* static, unused */, Context_t2535388339 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextFromCache(Mono.Security.Protocol.Tls.Context)
extern "C"  bool ClientSessionCache_SetContextFromCache_m3917528339 (Il2CppObject * __this /* static, unused */, Context_t2535388339 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
