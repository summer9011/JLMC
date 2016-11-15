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

// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t178237055;
// System.IO.Stream
struct Stream_t2768948945;
// Mono.Security.Protocol.Tls.Context
struct Context_t2535388339;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3378505055;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t4052785496;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t3289915003;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context2535388339.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_577592360.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLeve1418906834.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDesc3394828682.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Alert4052785496.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentTy2275266661.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP4187179796.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.Context)
extern "C"  void RecordProtocol__ctor_m168945279 (RecordProtocol_t178237055 * __this, Stream_t2768948945 * ___innerStream, Context_t2535388339 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.cctor()
extern "C"  void RecordProtocol__cctor_m1255542758 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::get_Context()
extern "C"  Context_t2535388339 * RecordProtocol_get_Context_m2688493529 (RecordProtocol_t178237055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  void RecordProtocol_SendRecord_m2977889250 (RecordProtocol_t178237055 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessChangeCipherSpec()
extern "C"  void RecordProtocol_ProcessChangeCipherSpec_m3233959862 (RecordProtocol_t178237055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t3378505055 * RecordProtocol_GetMessage_m594970728 (RecordProtocol_t178237055 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginReceiveRecord(System.IO.Stream,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RecordProtocol_BeginReceiveRecord_m2023581433 (RecordProtocol_t178237055 * __this, Stream_t2768948945 * ___record, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalReceiveRecordCallback(System.IAsyncResult)
extern "C"  void RecordProtocol_InternalReceiveRecordCallback_m2228921492 (RecordProtocol_t178237055 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EndReceiveRecord(System.IAsyncResult)
extern "C"  ByteU5BU5D_t3835026402* RecordProtocol_EndReceiveRecord_m4045980155 (RecordProtocol_t178237055 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReceiveRecord(System.IO.Stream)
extern "C"  ByteU5BU5D_t3835026402* RecordProtocol_ReceiveRecord_m3672584816 (RecordProtocol_t178237055 * __this, Stream_t2768948945 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadRecordBuffer(System.Int32,System.IO.Stream)
extern "C"  ByteU5BU5D_t3835026402* RecordProtocol_ReadRecordBuffer_m1307297230 (RecordProtocol_t178237055 * __this, int32_t ___contentType, Stream_t2768948945 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadClientHelloV2(System.IO.Stream)
extern "C"  ByteU5BU5D_t3835026402* RecordProtocol_ReadClientHelloV2_m103475177 (RecordProtocol_t178237055 * __this, Stream_t2768948945 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadStandardRecordBuffer(System.IO.Stream)
extern "C"  ByteU5BU5D_t3835026402* RecordProtocol_ReadStandardRecordBuffer_m3546484478 (RecordProtocol_t178237055 * __this, Stream_t2768948945 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void RecordProtocol_ProcessAlert_m2650247744 (RecordProtocol_t178237055 * __this, uint8_t ___alertLevel, uint8_t ___alertDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void RecordProtocol_SendAlert_m2622753765 (RecordProtocol_t178237055 * __this, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void RecordProtocol_SendAlert_m2529562669 (RecordProtocol_t178237055 * __this, uint8_t ___level, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.Alert)
extern "C"  void RecordProtocol_SendAlert_m2816808523 (RecordProtocol_t178237055 * __this, Alert_t4052785496 * ___alert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendChangeCipherSpec()
extern "C"  void RecordProtocol_SendChangeCipherSpec_m3542001341 (RecordProtocol_t178237055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RecordProtocol_BeginSendRecord_m3180957815 (RecordProtocol_t178237055 * __this, uint8_t ___handshakeType, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalSendRecordCallback(System.IAsyncResult)
extern "C"  void RecordProtocol_InternalSendRecordCallback_m3984764857 (RecordProtocol_t178237055 * __this, Il2CppObject * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RecordProtocol_BeginSendRecord_m166940611 (RecordProtocol_t178237055 * __this, uint8_t ___contentType, ByteU5BU5D_t3835026402* ___recordData, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::EndSendRecord(System.IAsyncResult)
extern "C"  void RecordProtocol_EndSendRecord_m3304963666 (RecordProtocol_t178237055 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C"  void RecordProtocol_SendRecord_m132002114 (RecordProtocol_t178237055 * __this, uint8_t ___contentType, ByteU5BU5D_t3835026402* ___recordData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* RecordProtocol_EncodeRecord_m1215442978 (RecordProtocol_t178237055 * __this, uint8_t ___contentType, ByteU5BU5D_t3835026402* ___recordData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3835026402* RecordProtocol_EncodeRecord_m3884270352 (RecordProtocol_t178237055 * __this, uint8_t ___contentType, ByteU5BU5D_t3835026402* ___recordData, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::encryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* RecordProtocol_encryptRecordFragment_m1241873183 (RecordProtocol_t178237055 * __this, uint8_t ___contentType, ByteU5BU5D_t3835026402* ___fragment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::decryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* RecordProtocol_decryptRecordFragment_m2510859489 (RecordProtocol_t178237055 * __this, uint8_t ___contentType, ByteU5BU5D_t3835026402* ___fragment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol::Compare(System.Byte[],System.Byte[])
extern "C"  bool RecordProtocol_Compare_m216902730 (RecordProtocol_t178237055 * __this, ByteU5BU5D_t3835026402* ___array1, ByteU5BU5D_t3835026402* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessCipherSpecV2Buffer(Mono.Security.Protocol.Tls.SecurityProtocolType,System.Byte[])
extern "C"  void RecordProtocol_ProcessCipherSpecV2Buffer_m1895848015 (RecordProtocol_t178237055 * __this, int32_t ___protocol, ByteU5BU5D_t3835026402* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.RecordProtocol::MapV2CipherCode(System.String,System.Int32)
extern "C"  CipherSuite_t3289915003 * RecordProtocol_MapV2CipherCode_m4064211604 (RecordProtocol_t178237055 * __this, String_t* ___prefix, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
