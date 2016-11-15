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

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1094351071;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t786342156;
// System.MarshalByRefObject
struct MarshalByRefObject_t3870530982;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Remoting_ObjRef786342156.h"
#include "mscorlib_System_MarshalByRefObject3870530982.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C"  void ClientIdentity__ctor_m1342022863 (ClientIdentity_t1094351071 * __this, String_t* ___objectUri, ObjRef_t786342156 * ___objRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C"  MarshalByRefObject_t3870530982 * ClientIdentity_get_ClientProxy_m4052942792 (ClientIdentity_t1094351071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C"  void ClientIdentity_set_ClientProxy_m3932647473 (ClientIdentity_t1094351071 * __this, MarshalByRefObject_t3870530982 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C"  ObjRef_t786342156 * ClientIdentity_CreateObjRef_m3625915063 (ClientIdentity_t1094351071 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C"  String_t* ClientIdentity_get_TargetUri_m1801235322 (ClientIdentity_t1094351071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
