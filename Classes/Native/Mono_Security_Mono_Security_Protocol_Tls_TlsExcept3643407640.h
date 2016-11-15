#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.Alert
struct Alert_t4052785496;

#include "mscorlib_System_Exception1145979430.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.TlsException
struct  TlsException_t3643407640  : public Exception_t1145979430
{
public:
	// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::alert
	Alert_t4052785496 * ___alert_11;

public:
	inline static int32_t get_offset_of_alert_11() { return static_cast<int32_t>(offsetof(TlsException_t3643407640, ___alert_11)); }
	inline Alert_t4052785496 * get_alert_11() const { return ___alert_11; }
	inline Alert_t4052785496 ** get_address_of_alert_11() { return &___alert_11; }
	inline void set_alert_11(Alert_t4052785496 * value)
	{
		___alert_11 = value;
		Il2CppCodeGenWriteBarrier(&___alert_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
