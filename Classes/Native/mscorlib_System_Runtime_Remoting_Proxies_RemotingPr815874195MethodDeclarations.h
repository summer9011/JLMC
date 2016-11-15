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

// System.Runtime.Remoting.Proxies.RemotingProxy
struct RemotingProxy_t815874195;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1094351071;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Runtime_Remoting_ClientIdentity1094351071.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C"  void RemotingProxy__ctor_m1769274309 (RemotingProxy_t815874195 * __this, Type_t * ___type, ClientIdentity_t1094351071 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
extern "C"  void RemotingProxy__ctor_m2362652352 (RemotingProxy_t815874195 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t3632007997* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
extern "C"  void RemotingProxy__cctor_m756457760 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern "C"  String_t* RemotingProxy_get_TypeName_m1400928020 (RemotingProxy_t815874195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
extern "C"  void RemotingProxy_Finalize_m1579141785 (RemotingProxy_t815874195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
