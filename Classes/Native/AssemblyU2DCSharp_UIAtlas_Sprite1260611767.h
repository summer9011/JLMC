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

#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIAtlas/Sprite
struct  Sprite_t1260611767  : public Il2CppObject
{
public:
	// System.String UIAtlas/Sprite::name
	String_t* ___name_0;
	// UnityEngine.Rect UIAtlas/Sprite::outer
	Rect_t2553848979  ___outer_1;
	// UnityEngine.Rect UIAtlas/Sprite::inner
	Rect_t2553848979  ___inner_2;
	// System.Boolean UIAtlas/Sprite::rotated
	bool ___rotated_3;
	// System.Single UIAtlas/Sprite::paddingLeft
	float ___paddingLeft_4;
	// System.Single UIAtlas/Sprite::paddingRight
	float ___paddingRight_5;
	// System.Single UIAtlas/Sprite::paddingTop
	float ___paddingTop_6;
	// System.Single UIAtlas/Sprite::paddingBottom
	float ___paddingBottom_7;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Sprite_t1260611767, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_outer_1() { return static_cast<int32_t>(offsetof(Sprite_t1260611767, ___outer_1)); }
	inline Rect_t2553848979  get_outer_1() const { return ___outer_1; }
	inline Rect_t2553848979 * get_address_of_outer_1() { return &___outer_1; }
	inline void set_outer_1(Rect_t2553848979  value)
	{
		___outer_1 = value;
	}

	inline static int32_t get_offset_of_inner_2() { return static_cast<int32_t>(offsetof(Sprite_t1260611767, ___inner_2)); }
	inline Rect_t2553848979  get_inner_2() const { return ___inner_2; }
	inline Rect_t2553848979 * get_address_of_inner_2() { return &___inner_2; }
	inline void set_inner_2(Rect_t2553848979  value)
	{
		___inner_2 = value;
	}

	inline static int32_t get_offset_of_rotated_3() { return static_cast<int32_t>(offsetof(Sprite_t1260611767, ___rotated_3)); }
	inline bool get_rotated_3() const { return ___rotated_3; }
	inline bool* get_address_of_rotated_3() { return &___rotated_3; }
	inline void set_rotated_3(bool value)
	{
		___rotated_3 = value;
	}

	inline static int32_t get_offset_of_paddingLeft_4() { return static_cast<int32_t>(offsetof(Sprite_t1260611767, ___paddingLeft_4)); }
	inline float get_paddingLeft_4() const { return ___paddingLeft_4; }
	inline float* get_address_of_paddingLeft_4() { return &___paddingLeft_4; }
	inline void set_paddingLeft_4(float value)
	{
		___paddingLeft_4 = value;
	}

	inline static int32_t get_offset_of_paddingRight_5() { return static_cast<int32_t>(offsetof(Sprite_t1260611767, ___paddingRight_5)); }
	inline float get_paddingRight_5() const { return ___paddingRight_5; }
	inline float* get_address_of_paddingRight_5() { return &___paddingRight_5; }
	inline void set_paddingRight_5(float value)
	{
		___paddingRight_5 = value;
	}

	inline static int32_t get_offset_of_paddingTop_6() { return static_cast<int32_t>(offsetof(Sprite_t1260611767, ___paddingTop_6)); }
	inline float get_paddingTop_6() const { return ___paddingTop_6; }
	inline float* get_address_of_paddingTop_6() { return &___paddingTop_6; }
	inline void set_paddingTop_6(float value)
	{
		___paddingTop_6 = value;
	}

	inline static int32_t get_offset_of_paddingBottom_7() { return static_cast<int32_t>(offsetof(Sprite_t1260611767, ___paddingBottom_7)); }
	inline float get_paddingBottom_7() const { return ___paddingBottom_7; }
	inline float* get_address_of_paddingBottom_7() { return &___paddingBottom_7; }
	inline void set_paddingBottom_7(float value)
	{
		___paddingBottom_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
