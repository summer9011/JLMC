#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t224878301;

#include "AssemblyU2DCSharp_UIProgressBar3824507790.h"
#include "AssemblyU2DCSharp_UISlider_Direction4219104283.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISlider
struct  UISlider_t2191058247  : public UIProgressBar_t3824507790
{
public:
	// UnityEngine.Transform UISlider::foreground
	Transform_t224878301 * ___foreground_15;
	// System.Single UISlider::rawValue
	float ___rawValue_16;
	// UISlider/Direction UISlider::direction
	int32_t ___direction_17;
	// System.Boolean UISlider::mInverted
	bool ___mInverted_18;

public:
	inline static int32_t get_offset_of_foreground_15() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___foreground_15)); }
	inline Transform_t224878301 * get_foreground_15() const { return ___foreground_15; }
	inline Transform_t224878301 ** get_address_of_foreground_15() { return &___foreground_15; }
	inline void set_foreground_15(Transform_t224878301 * value)
	{
		___foreground_15 = value;
		Il2CppCodeGenWriteBarrier(&___foreground_15, value);
	}

	inline static int32_t get_offset_of_rawValue_16() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___rawValue_16)); }
	inline float get_rawValue_16() const { return ___rawValue_16; }
	inline float* get_address_of_rawValue_16() { return &___rawValue_16; }
	inline void set_rawValue_16(float value)
	{
		___rawValue_16 = value;
	}

	inline static int32_t get_offset_of_direction_17() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___direction_17)); }
	inline int32_t get_direction_17() const { return ___direction_17; }
	inline int32_t* get_address_of_direction_17() { return &___direction_17; }
	inline void set_direction_17(int32_t value)
	{
		___direction_17 = value;
	}

	inline static int32_t get_offset_of_mInverted_18() { return static_cast<int32_t>(offsetof(UISlider_t2191058247, ___mInverted_18)); }
	inline bool get_mInverted_18() const { return ___mInverted_18; }
	inline bool* get_address_of_mInverted_18() { return &___mInverted_18; }
	inline void set_mInverted_18(bool value)
	{
		___mInverted_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
