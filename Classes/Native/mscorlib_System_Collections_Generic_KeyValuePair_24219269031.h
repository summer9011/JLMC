#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyAR.ImageTargetBaseBehaviour
struct ImageTargetBaseBehaviour_t1600490913;
// EasyAR.AugmentedTarget
struct AugmentedTarget_t3213708220;

#include "mscorlib_System_ValueType4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<EasyAR.ImageTargetBaseBehaviour,EasyAR.AugmentedTarget>
struct  KeyValuePair_2_t4219269031 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	ImageTargetBaseBehaviour_t1600490913 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	AugmentedTarget_t3213708220 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4219269031, ___key_0)); }
	inline ImageTargetBaseBehaviour_t1600490913 * get_key_0() const { return ___key_0; }
	inline ImageTargetBaseBehaviour_t1600490913 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(ImageTargetBaseBehaviour_t1600490913 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4219269031, ___value_1)); }
	inline AugmentedTarget_t3213708220 * get_value_1() const { return ___value_1; }
	inline AugmentedTarget_t3213708220 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(AugmentedTarget_t3213708220 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
