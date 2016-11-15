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

// Mono.Security.Protocol.Tls.TlsException
struct TlsException_t3643407640;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t4052785496;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLeve1418906834.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDesc3394828682.h"

// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.String)
extern "C"  void TlsException__ctor_m3885720020 (TlsException_t3643407640 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TlsException__ctor_m1249020603 (TlsException_t3643407640 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void TlsException__ctor_m2205512412 (TlsException_t3643407640 * __this, uint8_t ___level, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern "C"  void TlsException__ctor_m3747188020 (TlsException_t3643407640 * __this, uint8_t ___level, uint8_t ___description, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void TlsException__ctor_m2436420036 (TlsException_t3643407640 * __this, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern "C"  void TlsException__ctor_m1988757560 (TlsException_t3643407640 * __this, uint8_t ___description, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::get_Alert()
extern "C"  Alert_t4052785496 * TlsException_get_Alert_m4022765752 (TlsException_t3643407640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
