#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NetworkControl/_postData
struct _postData_t645335225;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkControl
struct  NetworkControl_t148274599  : public MonoBehaviour_t774292115
{
public:
	// NetworkControl/_postData NetworkControl::postData
	_postData_t645335225 * ___postData_2;

public:
	inline static int32_t get_offset_of_postData_2() { return static_cast<int32_t>(offsetof(NetworkControl_t148274599, ___postData_2)); }
	inline _postData_t645335225 * get_postData_2() const { return ___postData_2; }
	inline _postData_t645335225 ** get_address_of_postData_2() { return &___postData_2; }
	inline void set_postData_2(_postData_t645335225 * value)
	{
		___postData_2 = value;
		Il2CppCodeGenWriteBarrier(&___postData_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
