#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.MarshalByRefObject
struct MarshalByRefObject_t3870530982;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t1739457092;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.StackBuilderSink
struct  StackBuilderSink_t811371720  : public Il2CppObject
{
public:
	// System.MarshalByRefObject System.Runtime.Remoting.Messaging.StackBuilderSink::_target
	MarshalByRefObject_t3870530982 * ____target_0;
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Messaging.StackBuilderSink::_rp
	RealProxy_t1739457092 * ____rp_1;

public:
	inline static int32_t get_offset_of__target_0() { return static_cast<int32_t>(offsetof(StackBuilderSink_t811371720, ____target_0)); }
	inline MarshalByRefObject_t3870530982 * get__target_0() const { return ____target_0; }
	inline MarshalByRefObject_t3870530982 ** get_address_of__target_0() { return &____target_0; }
	inline void set__target_0(MarshalByRefObject_t3870530982 * value)
	{
		____target_0 = value;
		Il2CppCodeGenWriteBarrier(&____target_0, value);
	}

	inline static int32_t get_offset_of__rp_1() { return static_cast<int32_t>(offsetof(StackBuilderSink_t811371720, ____rp_1)); }
	inline RealProxy_t1739457092 * get__rp_1() const { return ____rp_1; }
	inline RealProxy_t1739457092 ** get_address_of__rp_1() { return &____rp_1; }
	inline void set__rp_1(RealProxy_t1739457092 * value)
	{
		____rp_1 = value;
		Il2CppCodeGenWriteBarrier(&____rp_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
