#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3378505055.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
struct  TlsServerFinished_t3283206418  : public HandshakeMessage_t3378505055
{
public:

public:
};

struct TlsServerFinished_t3283206418_StaticFields
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Ssl3Marker
	ByteU5BU5D_t3835026402* ___Ssl3Marker_9;

public:
	inline static int32_t get_offset_of_Ssl3Marker_9() { return static_cast<int32_t>(offsetof(TlsServerFinished_t3283206418_StaticFields, ___Ssl3Marker_9)); }
	inline ByteU5BU5D_t3835026402* get_Ssl3Marker_9() const { return ___Ssl3Marker_9; }
	inline ByteU5BU5D_t3835026402** get_address_of_Ssl3Marker_9() { return &___Ssl3Marker_9; }
	inline void set_Ssl3Marker_9(ByteU5BU5D_t3835026402* value)
	{
		___Ssl3Marker_9 = value;
		Il2CppCodeGenWriteBarrier(&___Ssl3Marker_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
