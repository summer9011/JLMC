#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t3338506287;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ServicePointManager/SPKey
struct  SPKey_t4167823070  : public Il2CppObject
{
public:
	// System.Uri System.Net.ServicePointManager/SPKey::uri
	Uri_t3338506287 * ___uri_0;
	// System.Boolean System.Net.ServicePointManager/SPKey::use_connect
	bool ___use_connect_1;

public:
	inline static int32_t get_offset_of_uri_0() { return static_cast<int32_t>(offsetof(SPKey_t4167823070, ___uri_0)); }
	inline Uri_t3338506287 * get_uri_0() const { return ___uri_0; }
	inline Uri_t3338506287 ** get_address_of_uri_0() { return &___uri_0; }
	inline void set_uri_0(Uri_t3338506287 * value)
	{
		___uri_0 = value;
		Il2CppCodeGenWriteBarrier(&___uri_0, value);
	}

	inline static int32_t get_offset_of_use_connect_1() { return static_cast<int32_t>(offsetof(SPKey_t4167823070, ___use_connect_1)); }
	inline bool get_use_connect_1() const { return ___use_connect_1; }
	inline bool* get_address_of_use_connect_1() { return &___use_connect_1; }
	inline void set_use_connect_1(bool value)
	{
		___use_connect_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
