#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadLevelOnClick
struct  LoadLevelOnClick_t1630964649  : public MonoBehaviour_t774292115
{
public:
	// System.String LoadLevelOnClick::levelName
	String_t* ___levelName_2;

public:
	inline static int32_t get_offset_of_levelName_2() { return static_cast<int32_t>(offsetof(LoadLevelOnClick_t1630964649, ___levelName_2)); }
	inline String_t* get_levelName_2() const { return ___levelName_2; }
	inline String_t** get_address_of_levelName_2() { return &___levelName_2; }
	inline void set_levelName_2(String_t* value)
	{
		___levelName_2 = value;
		Il2CppCodeGenWriteBarrier(&___levelName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
