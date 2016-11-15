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

// System.Runtime.Remoting.Contexts.ContextAttribute
struct ContextAttribute_t1956312537;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Contexts.Context
struct Context_t4239045173;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2690205963;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context4239045173.h"

// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
extern "C"  void ContextAttribute__ctor_m4006843177 (ContextAttribute_t1956312537 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
extern "C"  String_t* ContextAttribute_get_Name_m2899769254 (ContextAttribute_t1956312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
extern "C"  bool ContextAttribute_Equals_m53324298 (ContextAttribute_t1956312537 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::Freeze(System.Runtime.Remoting.Contexts.Context)
extern "C"  void ContextAttribute_Freeze_m4133346275 (ContextAttribute_t1956312537 * __this, Context_t4239045173 * ___newContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
extern "C"  int32_t ContextAttribute_GetHashCode_m3646968314 (ContextAttribute_t1956312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  void ContextAttribute_GetPropertiesForNewContext_m4007241045 (ContextAttribute_t1956312537 * __this, Il2CppObject * ___ctorMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  bool ContextAttribute_IsContextOK_m3281216012 (ContextAttribute_t1956312537 * __this, Context_t4239045173 * ___ctx, Il2CppObject * ___ctorMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsNewContextOK(System.Runtime.Remoting.Contexts.Context)
extern "C"  bool ContextAttribute_IsNewContextOK_m2186905629 (ContextAttribute_t1956312537 * __this, Context_t4239045173 * ___newCtx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
