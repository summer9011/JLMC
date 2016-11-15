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

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t3517163252;
// System.IO.Stream
struct Stream_t2768948945;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t2432769536;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3378505055;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1430954503;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientCon2432769536.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_577592360.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream1430954503.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C"  void ClientRecordProtocol__ctor_m648586559 (ClientRecordProtocol_t3517163252 * __this, Stream_t2768948945 * ___innerStream, ClientContext_t2432769536 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t3378505055 * ClientRecordProtocol_GetMessage_m2649269799 (ClientRecordProtocol_t3517163252 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C"  void ClientRecordProtocol_ProcessHandshakeMessage_m3590516592 (ClientRecordProtocol_t3517163252 * __this, TlsStream_t1430954503 * ___handMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t3378505055 * ClientRecordProtocol_createClientHandshakeMessage_m811708715 (ClientRecordProtocol_t3517163252 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C"  HandshakeMessage_t3378505055 * ClientRecordProtocol_createServerHandshakeMessage_m3939790866 (ClientRecordProtocol_t3517163252 * __this, uint8_t ___type, ByteU5BU5D_t3835026402* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
