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

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct SendRecordAsyncResult_t4092502320;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3378505055;
// System.Exception
struct Exception_t1145979430;
// System.Threading.WaitHandle
struct WaitHandle_t313797096;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3378505055.h"
#include "mscorlib_System_Exception1145979430.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,Mono.Security.Protocol.Tls.Handshake.HandshakeMessage)
extern "C"  void SendRecordAsyncResult__ctor_m2999905045 (SendRecordAsyncResult_t4092502320 * __this, AsyncCallback_t889871978 * ___userCallback, Il2CppObject * ___userState, HandshakeMessage_t3378505055 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_Message()
extern "C"  HandshakeMessage_t3378505055 * SendRecordAsyncResult_get_Message_m2340978616 (SendRecordAsyncResult_t4092502320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * SendRecordAsyncResult_get_AsyncState_m2299453419 (SendRecordAsyncResult_t4092502320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncException()
extern "C"  Exception_t1145979430 * SendRecordAsyncResult_get_AsyncException_m2088364821 (SendRecordAsyncResult_t4092502320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_CompletedWithError()
extern "C"  bool SendRecordAsyncResult_get_CompletedWithError_m349920476 (SendRecordAsyncResult_t4092502320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t313797096 * SendRecordAsyncResult_get_AsyncWaitHandle_m3532375825 (SendRecordAsyncResult_t4092502320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_IsCompleted()
extern "C"  bool SendRecordAsyncResult_get_IsCompleted_m2666127692 (SendRecordAsyncResult_t4092502320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete(System.Exception)
extern "C"  void SendRecordAsyncResult_SetComplete_m425796521 (SendRecordAsyncResult_t4092502320 * __this, Exception_t1145979430 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete()
extern "C"  void SendRecordAsyncResult_SetComplete_m3006273145 (SendRecordAsyncResult_t4092502320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
