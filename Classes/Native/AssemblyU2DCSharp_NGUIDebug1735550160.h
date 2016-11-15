#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1079102679;
// NGUIDebug
struct NGUIDebug_t1735550160;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NGUIDebug
struct  NGUIDebug_t1735550160  : public MonoBehaviour_t774292115
{
public:

public:
};

struct NGUIDebug_t1735550160_StaticFields
{
public:
	// System.Boolean NGUIDebug::mRayDebug
	bool ___mRayDebug_2;
	// System.Collections.Generic.List`1<System.String> NGUIDebug::mLines
	List_1_t1079102679 * ___mLines_3;
	// NGUIDebug NGUIDebug::mInstance
	NGUIDebug_t1735550160 * ___mInstance_4;

public:
	inline static int32_t get_offset_of_mRayDebug_2() { return static_cast<int32_t>(offsetof(NGUIDebug_t1735550160_StaticFields, ___mRayDebug_2)); }
	inline bool get_mRayDebug_2() const { return ___mRayDebug_2; }
	inline bool* get_address_of_mRayDebug_2() { return &___mRayDebug_2; }
	inline void set_mRayDebug_2(bool value)
	{
		___mRayDebug_2 = value;
	}

	inline static int32_t get_offset_of_mLines_3() { return static_cast<int32_t>(offsetof(NGUIDebug_t1735550160_StaticFields, ___mLines_3)); }
	inline List_1_t1079102679 * get_mLines_3() const { return ___mLines_3; }
	inline List_1_t1079102679 ** get_address_of_mLines_3() { return &___mLines_3; }
	inline void set_mLines_3(List_1_t1079102679 * value)
	{
		___mLines_3 = value;
		Il2CppCodeGenWriteBarrier(&___mLines_3, value);
	}

	inline static int32_t get_offset_of_mInstance_4() { return static_cast<int32_t>(offsetof(NGUIDebug_t1735550160_StaticFields, ___mInstance_4)); }
	inline NGUIDebug_t1735550160 * get_mInstance_4() const { return ___mInstance_4; }
	inline NGUIDebug_t1735550160 ** get_address_of_mInstance_4() { return &___mInstance_4; }
	inline void set_mInstance_4(NGUIDebug_t1735550160 * value)
	{
		___mInstance_4 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
