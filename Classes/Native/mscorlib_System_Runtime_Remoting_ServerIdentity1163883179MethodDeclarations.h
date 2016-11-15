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

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1163883179;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t4239045173;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t786342156;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context4239045173.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C"  void ServerIdentity__ctor_m1576469955 (ServerIdentity_t1163883179 * __this, String_t* ___objectUri, Context_t4239045173 * ___context, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C"  Type_t * ServerIdentity_get_ObjectType_m2310936373 (ServerIdentity_t1163883179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern "C"  ObjRef_t786342156 * ServerIdentity_CreateObjRef_m1056204803 (ServerIdentity_t1163883179 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
