#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyAR.EngineNative/LogFunc
struct LogFunc_t2891211276;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.EngineNative
struct  EngineNative_t1199083046  : public Il2CppObject
{
public:

public:
};

struct EngineNative_t1199083046_StaticFields
{
public:
	// EasyAR.EngineNative/LogFunc EasyAR.EngineNative::_log
	LogFunc_t2891211276 * ____log_0;

public:
	inline static int32_t get_offset_of__log_0() { return static_cast<int32_t>(offsetof(EngineNative_t1199083046_StaticFields, ____log_0)); }
	inline LogFunc_t2891211276 * get__log_0() const { return ____log_0; }
	inline LogFunc_t2891211276 ** get_address_of__log_0() { return &____log_0; }
	inline void set__log_0(LogFunc_t2891211276 * value)
	{
		____log_0 = value;
		Il2CppCodeGenWriteBarrier(&____log_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
