#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.DecoderFallback
struct DecoderFallback_t702655132;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t486096470;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t3566053706  : public Il2CppObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t702655132 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t486096470 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t3566053706, ___fallback_0)); }
	inline DecoderFallback_t702655132 * get_fallback_0() const { return ___fallback_0; }
	inline DecoderFallback_t702655132 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(DecoderFallback_t702655132 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___fallback_0, value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Decoder_t3566053706, ___fallback_buffer_1)); }
	inline DecoderFallbackBuffer_t486096470 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline DecoderFallbackBuffer_t486096470 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(DecoderFallbackBuffer_t486096470 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___fallback_buffer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
