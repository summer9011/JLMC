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

// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t1739457092;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1094351071;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Identity
struct Identity_t89657068;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Runtime_Remoting_ClientIdentity1094351071.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
extern "C"  void RealProxy__ctor_m2147093603 (RealProxy_t1739457092 * __this, Type_t * ___classToProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C"  void RealProxy__ctor_m2505535530 (RealProxy_t1739457092 * __this, Type_t * ___classToProxy, ClientIdentity_t1094351071 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
extern "C"  void RealProxy__ctor_m3041043303 (RealProxy_t1739457092 * __this, Type_t * ___classToProxy, IntPtr_t ___stub, Il2CppObject * ___stubData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C"  Type_t * RealProxy_InternalGetProxyType_m858618403 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___transparentProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
extern "C"  Type_t * RealProxy_GetProxiedType_m3072222907 (RealProxy_t1739457092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::get_ObjectIdentity()
extern "C"  Identity_t89657068 * RealProxy_get_ObjectIdentity_m1633976845 (RealProxy_t1739457092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
extern "C"  Il2CppObject * RealProxy_InternalGetTransparentProxy_m3415358600 (RealProxy_t1739457092 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
extern "C"  Il2CppObject * RealProxy_GetTransparentProxy_m4192467161 (RealProxy_t1739457092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
extern "C"  void RealProxy_SetTargetDomain_m3940877656 (RealProxy_t1739457092 * __this, int32_t ___domainId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
