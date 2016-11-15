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

// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t873675405;
// System.Object
struct Il2CppObject;
// System.Threading.WaitHandle
struct WaitHandle_t313797096;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1847988475;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t3097990201;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t1482034754;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t3490341;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethod3490341.h"

// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
extern "C"  void AsyncResult__ctor_m1183194429 (AsyncResult_t873675405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern "C"  Il2CppObject * AsyncResult_get_AsyncState_m4124929294 (AsyncResult_t873675405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t313797096 * AsyncResult_get_AsyncWaitHandle_m1656810902 (AsyncResult_t873675405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern "C"  bool AsyncResult_get_CompletedSynchronously_m1094955585 (AsyncResult_t873675405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern "C"  bool AsyncResult_get_IsCompleted_m2993729823 (AsyncResult_t873675405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern "C"  bool AsyncResult_get_EndInvokeCalled_m2149609872 (AsyncResult_t873675405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
extern "C"  void AsyncResult_set_EndInvokeCalled_m2748329155 (AsyncResult_t873675405 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern "C"  Il2CppObject * AsyncResult_get_AsyncDelegate_m545320384 (AsyncResult_t873675405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern "C"  Il2CppObject * AsyncResult_get_NextSink_m1172723924 (AsyncResult_t873675405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
extern "C"  Il2CppObject * AsyncResult_AsyncProcessMessage_m261394736 (AsyncResult_t873675405 * __this, Il2CppObject * ___msg, Il2CppObject * ___replySink, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
extern "C"  Il2CppObject * AsyncResult_GetReplyMessage_m262842621 (AsyncResult_t873675405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern "C"  void AsyncResult_SetMessageCtrl_m301038022 (AsyncResult_t873675405 * __this, Il2CppObject * ___mc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern "C"  void AsyncResult_SetCompletedSynchronously_m3871832245 (AsyncResult_t873675405 * __this, bool ___completed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern "C"  Il2CppObject * AsyncResult_EndInvoke_m2725573545 (AsyncResult_t873675405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
extern "C"  Il2CppObject * AsyncResult_SyncProcessMessage_m3254063433 (AsyncResult_t873675405 * __this, Il2CppObject * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern "C"  MonoMethodMessage_t3490341 * AsyncResult_get_CallMessage_m3428352375 (AsyncResult_t873675405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
extern "C"  void AsyncResult_set_CallMessage_m4011807282 (AsyncResult_t873675405 * __this, MonoMethodMessage_t3490341 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
