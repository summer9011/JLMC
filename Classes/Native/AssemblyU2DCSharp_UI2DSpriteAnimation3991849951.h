#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t4275260569;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3863917503;
// UI2DSprite
struct UI2DSprite_t1082505957;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UI2DSpriteAnimation
struct  UI2DSpriteAnimation_t3991849951  : public MonoBehaviour_t774292115
{
public:
	// System.Int32 UI2DSpriteAnimation::framerate
	int32_t ___framerate_2;
	// System.Boolean UI2DSpriteAnimation::ignoreTimeScale
	bool ___ignoreTimeScale_3;
	// System.Boolean UI2DSpriteAnimation::loop
	bool ___loop_4;
	// UnityEngine.Sprite[] UI2DSpriteAnimation::frames
	SpriteU5BU5D_t4275260569* ___frames_5;
	// UnityEngine.SpriteRenderer UI2DSpriteAnimation::mUnitySprite
	SpriteRenderer_t3863917503 * ___mUnitySprite_6;
	// UI2DSprite UI2DSpriteAnimation::mNguiSprite
	UI2DSprite_t1082505957 * ___mNguiSprite_7;
	// System.Int32 UI2DSpriteAnimation::mIndex
	int32_t ___mIndex_8;
	// System.Single UI2DSpriteAnimation::mUpdate
	float ___mUpdate_9;

public:
	inline static int32_t get_offset_of_framerate_2() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___framerate_2)); }
	inline int32_t get_framerate_2() const { return ___framerate_2; }
	inline int32_t* get_address_of_framerate_2() { return &___framerate_2; }
	inline void set_framerate_2(int32_t value)
	{
		___framerate_2 = value;
	}

	inline static int32_t get_offset_of_ignoreTimeScale_3() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___ignoreTimeScale_3)); }
	inline bool get_ignoreTimeScale_3() const { return ___ignoreTimeScale_3; }
	inline bool* get_address_of_ignoreTimeScale_3() { return &___ignoreTimeScale_3; }
	inline void set_ignoreTimeScale_3(bool value)
	{
		___ignoreTimeScale_3 = value;
	}

	inline static int32_t get_offset_of_loop_4() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___loop_4)); }
	inline bool get_loop_4() const { return ___loop_4; }
	inline bool* get_address_of_loop_4() { return &___loop_4; }
	inline void set_loop_4(bool value)
	{
		___loop_4 = value;
	}

	inline static int32_t get_offset_of_frames_5() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___frames_5)); }
	inline SpriteU5BU5D_t4275260569* get_frames_5() const { return ___frames_5; }
	inline SpriteU5BU5D_t4275260569** get_address_of_frames_5() { return &___frames_5; }
	inline void set_frames_5(SpriteU5BU5D_t4275260569* value)
	{
		___frames_5 = value;
		Il2CppCodeGenWriteBarrier(&___frames_5, value);
	}

	inline static int32_t get_offset_of_mUnitySprite_6() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___mUnitySprite_6)); }
	inline SpriteRenderer_t3863917503 * get_mUnitySprite_6() const { return ___mUnitySprite_6; }
	inline SpriteRenderer_t3863917503 ** get_address_of_mUnitySprite_6() { return &___mUnitySprite_6; }
	inline void set_mUnitySprite_6(SpriteRenderer_t3863917503 * value)
	{
		___mUnitySprite_6 = value;
		Il2CppCodeGenWriteBarrier(&___mUnitySprite_6, value);
	}

	inline static int32_t get_offset_of_mNguiSprite_7() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___mNguiSprite_7)); }
	inline UI2DSprite_t1082505957 * get_mNguiSprite_7() const { return ___mNguiSprite_7; }
	inline UI2DSprite_t1082505957 ** get_address_of_mNguiSprite_7() { return &___mNguiSprite_7; }
	inline void set_mNguiSprite_7(UI2DSprite_t1082505957 * value)
	{
		___mNguiSprite_7 = value;
		Il2CppCodeGenWriteBarrier(&___mNguiSprite_7, value);
	}

	inline static int32_t get_offset_of_mIndex_8() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___mIndex_8)); }
	inline int32_t get_mIndex_8() const { return ___mIndex_8; }
	inline int32_t* get_address_of_mIndex_8() { return &___mIndex_8; }
	inline void set_mIndex_8(int32_t value)
	{
		___mIndex_8 = value;
	}

	inline static int32_t get_offset_of_mUpdate_9() { return static_cast<int32_t>(offsetof(UI2DSpriteAnimation_t3991849951, ___mUpdate_9)); }
	inline float get_mUpdate_9() const { return ___mUpdate_9; }
	inline float* get_address_of_mUpdate_9() { return &___mUpdate_9; }
	inline void set_mUpdate_9(float value)
	{
		___mUpdate_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
