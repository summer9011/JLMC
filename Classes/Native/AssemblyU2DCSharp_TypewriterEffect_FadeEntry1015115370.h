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

#include "mscorlib_System_ValueType4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TypewriterEffect/FadeEntry
struct  FadeEntry_t1015115370 
{
public:
	// System.Int32 TypewriterEffect/FadeEntry::index
	int32_t ___index_0;
	// System.String TypewriterEffect/FadeEntry::text
	String_t* ___text_1;
	// System.Single TypewriterEffect/FadeEntry::alpha
	float ___alpha_2;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(FadeEntry_t1015115370, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(FadeEntry_t1015115370, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier(&___text_1, value);
	}

	inline static int32_t get_offset_of_alpha_2() { return static_cast<int32_t>(offsetof(FadeEntry_t1015115370, ___alpha_2)); }
	inline float get_alpha_2() const { return ___alpha_2; }
	inline float* get_address_of_alpha_2() { return &___alpha_2; }
	inline void set_alpha_2(float value)
	{
		___alpha_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: TypewriterEffect/FadeEntry
struct FadeEntry_t1015115370_marshaled_pinvoke
{
	int32_t ___index_0;
	char* ___text_1;
	float ___alpha_2;
};
// Native definition for marshalling of: TypewriterEffect/FadeEntry
struct FadeEntry_t1015115370_marshaled_com
{
	int32_t ___index_0;
	uint16_t* ___text_1;
	float ___alpha_2;
};
