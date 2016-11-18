#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "EasyAR_Unity_EasyAR_Base3566006664.h"
#include "mscorlib_System_IntPtr3076297692.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.Augmenter
struct  Augmenter_t3234512221  : public Base_t3566006664
{
public:
	// System.Int32 EasyAR.Augmenter::RenderingFlag
	int32_t ___RenderingFlag_2;
	// System.Int32 EasyAR.Augmenter::_id
	int32_t ____id_3;
	// System.IntPtr EasyAR.Augmenter::textureID
	IntPtr_t ___textureID_4;

public:
	inline static int32_t get_offset_of_RenderingFlag_2() { return static_cast<int32_t>(offsetof(Augmenter_t3234512221, ___RenderingFlag_2)); }
	inline int32_t get_RenderingFlag_2() const { return ___RenderingFlag_2; }
	inline int32_t* get_address_of_RenderingFlag_2() { return &___RenderingFlag_2; }
	inline void set_RenderingFlag_2(int32_t value)
	{
		___RenderingFlag_2 = value;
	}

	inline static int32_t get_offset_of__id_3() { return static_cast<int32_t>(offsetof(Augmenter_t3234512221, ____id_3)); }
	inline int32_t get__id_3() const { return ____id_3; }
	inline int32_t* get_address_of__id_3() { return &____id_3; }
	inline void set__id_3(int32_t value)
	{
		____id_3 = value;
	}

	inline static int32_t get_offset_of_textureID_4() { return static_cast<int32_t>(offsetof(Augmenter_t3234512221, ___textureID_4)); }
	inline IntPtr_t get_textureID_4() const { return ___textureID_4; }
	inline IntPtr_t* get_address_of_textureID_4() { return &___textureID_4; }
	inline void set_textureID_4(IntPtr_t value)
	{
		___textureID_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
