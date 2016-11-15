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

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t289755812;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2690205963;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1847988475;
// System.Runtime.Remoting.Contexts.Context
struct Context_t4239045173;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context4239045173.h"

// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern "C"  void SynchronizationAttribute__ctor_m1709985936 (SynchronizationAttribute_t289755812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern "C"  void SynchronizationAttribute__ctor_m4065871636 (SynchronizationAttribute_t289755812 * __this, int32_t ___flag, bool ___reEntrant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
extern "C"  void SynchronizationAttribute_set_Locked_m162980252 (SynchronizationAttribute_t289755812 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern "C"  void SynchronizationAttribute_ReleaseLock_m2873780842 (SynchronizationAttribute_t289755812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  void SynchronizationAttribute_GetPropertiesForNewContext_m2175864602 (SynchronizationAttribute_t289755812 * __this, Il2CppObject * ___ctorMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetClientContextSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C"  Il2CppObject * SynchronizationAttribute_GetClientContextSink_m1264319894 (SynchronizationAttribute_t289755812 * __this, Il2CppObject * ___nextSink, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetServerContextSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C"  Il2CppObject * SynchronizationAttribute_GetServerContextSink_m105122290 (SynchronizationAttribute_t289755812 * __this, Il2CppObject * ___nextSink, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  bool SynchronizationAttribute_IsContextOK_m525966365 (SynchronizationAttribute_t289755812 * __this, Context_t4239045173 * ___ctx, Il2CppObject * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
extern "C"  void SynchronizationAttribute_ExitContext_m2253102541 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern "C"  void SynchronizationAttribute_EnterContext_m2984912761 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
