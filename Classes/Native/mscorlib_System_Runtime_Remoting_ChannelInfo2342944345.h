#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ChannelInfo
struct  ChannelInfo_t2342944345  : public Il2CppObject
{
public:
	// System.Object[] System.Runtime.Remoting.ChannelInfo::channelData
	ObjectU5BU5D_t3632007997* ___channelData_0;

public:
	inline static int32_t get_offset_of_channelData_0() { return static_cast<int32_t>(offsetof(ChannelInfo_t2342944345, ___channelData_0)); }
	inline ObjectU5BU5D_t3632007997* get_channelData_0() const { return ___channelData_0; }
	inline ObjectU5BU5D_t3632007997** get_address_of_channelData_0() { return &___channelData_0; }
	inline void set_channelData_0(ObjectU5BU5D_t3632007997* value)
	{
		___channelData_0 = value;
		Il2CppCodeGenWriteBarrier(&___channelData_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
