#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWidget
struct UIWidget_t1453041918;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimatedWidget
struct  AnimatedWidget_t1936580709  : public MonoBehaviour_t774292115
{
public:
	// System.Single AnimatedWidget::width
	float ___width_2;
	// System.Single AnimatedWidget::height
	float ___height_3;
	// UIWidget AnimatedWidget::mWidget
	UIWidget_t1453041918 * ___mWidget_4;

public:
	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(AnimatedWidget_t1936580709, ___width_2)); }
	inline float get_width_2() const { return ___width_2; }
	inline float* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(float value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(AnimatedWidget_t1936580709, ___height_3)); }
	inline float get_height_3() const { return ___height_3; }
	inline float* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(float value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_mWidget_4() { return static_cast<int32_t>(offsetof(AnimatedWidget_t1936580709, ___mWidget_4)); }
	inline UIWidget_t1453041918 * get_mWidget_4() const { return ___mWidget_4; }
	inline UIWidget_t1453041918 ** get_address_of_mWidget_4() { return &___mWidget_4; }
	inline void set_mWidget_4(UIWidget_t1453041918 * value)
	{
		___mWidget_4 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
