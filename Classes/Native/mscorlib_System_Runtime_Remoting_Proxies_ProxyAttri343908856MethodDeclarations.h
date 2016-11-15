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

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t343908856;
// System.MarshalByRefObject
struct MarshalByRefObject_t3870530982;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t1739457092;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t786342156;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Contexts.Context
struct Context_t4239045173;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2690205963;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Runtime_Remoting_ObjRef786342156.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context4239045173.h"

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern "C"  MarshalByRefObject_t3870530982 * ProxyAttribute_CreateInstance_m546961127 (ProxyAttribute_t343908856 * __this, Type_t * ___serverType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern "C"  RealProxy_t1739457092 * ProxyAttribute_CreateProxy_m2593224783 (ProxyAttribute_t343908856 * __this, ObjRef_t786342156 * ___objRef, Type_t * ___serverType, Il2CppObject * ___serverObject, Context_t4239045173 * ___serverContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  void ProxyAttribute_GetPropertiesForNewContext_m3587421540 (ProxyAttribute_t343908856 * __this, Il2CppObject * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  bool ProxyAttribute_IsContextOK_m2391079277 (ProxyAttribute_t343908856 * __this, Context_t4239045173 * ___ctx, Il2CppObject * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
