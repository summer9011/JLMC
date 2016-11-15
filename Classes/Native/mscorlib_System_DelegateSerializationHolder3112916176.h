#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Delegate
struct Delegate_t49333446;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder
struct  DelegateSerializationHolder_t3112916176  : public Il2CppObject
{
public:
	// System.Delegate System.DelegateSerializationHolder::_delegate
	Delegate_t49333446 * ____delegate_0;

public:
	inline static int32_t get_offset_of__delegate_0() { return static_cast<int32_t>(offsetof(DelegateSerializationHolder_t3112916176, ____delegate_0)); }
	inline Delegate_t49333446 * get__delegate_0() const { return ____delegate_0; }
	inline Delegate_t49333446 ** get_address_of__delegate_0() { return &____delegate_0; }
	inline void set__delegate_0(Delegate_t49333446 * value)
	{
		____delegate_0 = value;
		Il2CppCodeGenWriteBarrier(&____delegate_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
