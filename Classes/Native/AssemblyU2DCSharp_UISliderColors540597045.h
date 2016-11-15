#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UISprite
struct UISprite_t603616735;
// UnityEngine.Color[]
struct ColorU5BU5D_t1147925413;
// UIProgressBar
struct UIProgressBar_t3824507790;
// UIBasicSprite
struct UIBasicSprite_t754925213;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISliderColors
struct  UISliderColors_t540597045  : public MonoBehaviour_t774292115
{
public:
	// UISprite UISliderColors::sprite
	UISprite_t603616735 * ___sprite_2;
	// UnityEngine.Color[] UISliderColors::colors
	ColorU5BU5D_t1147925413* ___colors_3;
	// UIProgressBar UISliderColors::mBar
	UIProgressBar_t3824507790 * ___mBar_4;
	// UIBasicSprite UISliderColors::mSprite
	UIBasicSprite_t754925213 * ___mSprite_5;

public:
	inline static int32_t get_offset_of_sprite_2() { return static_cast<int32_t>(offsetof(UISliderColors_t540597045, ___sprite_2)); }
	inline UISprite_t603616735 * get_sprite_2() const { return ___sprite_2; }
	inline UISprite_t603616735 ** get_address_of_sprite_2() { return &___sprite_2; }
	inline void set_sprite_2(UISprite_t603616735 * value)
	{
		___sprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_2, value);
	}

	inline static int32_t get_offset_of_colors_3() { return static_cast<int32_t>(offsetof(UISliderColors_t540597045, ___colors_3)); }
	inline ColorU5BU5D_t1147925413* get_colors_3() const { return ___colors_3; }
	inline ColorU5BU5D_t1147925413** get_address_of_colors_3() { return &___colors_3; }
	inline void set_colors_3(ColorU5BU5D_t1147925413* value)
	{
		___colors_3 = value;
		Il2CppCodeGenWriteBarrier(&___colors_3, value);
	}

	inline static int32_t get_offset_of_mBar_4() { return static_cast<int32_t>(offsetof(UISliderColors_t540597045, ___mBar_4)); }
	inline UIProgressBar_t3824507790 * get_mBar_4() const { return ___mBar_4; }
	inline UIProgressBar_t3824507790 ** get_address_of_mBar_4() { return &___mBar_4; }
	inline void set_mBar_4(UIProgressBar_t3824507790 * value)
	{
		___mBar_4 = value;
		Il2CppCodeGenWriteBarrier(&___mBar_4, value);
	}

	inline static int32_t get_offset_of_mSprite_5() { return static_cast<int32_t>(offsetof(UISliderColors_t540597045, ___mSprite_5)); }
	inline UIBasicSprite_t754925213 * get_mSprite_5() const { return ___mSprite_5; }
	inline UIBasicSprite_t754925213 ** get_address_of_mSprite_5() { return &___mSprite_5; }
	inline void set_mSprite_5(UIBasicSprite_t754925213 * value)
	{
		___mSprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
