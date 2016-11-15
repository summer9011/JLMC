#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIAtlas
struct UIAtlas_t1304615221;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t2862501359;

#include "AssemblyU2DCSharp_UIBasicSprite754925213.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISprite
struct  UISprite_t603616735  : public UIBasicSprite_t754925213
{
public:
	// UIAtlas UISprite::mAtlas
	UIAtlas_t1304615221 * ___mAtlas_66;
	// System.String UISprite::mSpriteName
	String_t* ___mSpriteName_67;
	// System.Boolean UISprite::mFillCenter
	bool ___mFillCenter_68;
	// UISpriteData UISprite::mSprite
	UISpriteData_t2862501359 * ___mSprite_69;
	// System.Boolean UISprite::mSpriteSet
	bool ___mSpriteSet_70;

public:
	inline static int32_t get_offset_of_mAtlas_66() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mAtlas_66)); }
	inline UIAtlas_t1304615221 * get_mAtlas_66() const { return ___mAtlas_66; }
	inline UIAtlas_t1304615221 ** get_address_of_mAtlas_66() { return &___mAtlas_66; }
	inline void set_mAtlas_66(UIAtlas_t1304615221 * value)
	{
		___mAtlas_66 = value;
		Il2CppCodeGenWriteBarrier(&___mAtlas_66, value);
	}

	inline static int32_t get_offset_of_mSpriteName_67() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mSpriteName_67)); }
	inline String_t* get_mSpriteName_67() const { return ___mSpriteName_67; }
	inline String_t** get_address_of_mSpriteName_67() { return &___mSpriteName_67; }
	inline void set_mSpriteName_67(String_t* value)
	{
		___mSpriteName_67 = value;
		Il2CppCodeGenWriteBarrier(&___mSpriteName_67, value);
	}

	inline static int32_t get_offset_of_mFillCenter_68() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mFillCenter_68)); }
	inline bool get_mFillCenter_68() const { return ___mFillCenter_68; }
	inline bool* get_address_of_mFillCenter_68() { return &___mFillCenter_68; }
	inline void set_mFillCenter_68(bool value)
	{
		___mFillCenter_68 = value;
	}

	inline static int32_t get_offset_of_mSprite_69() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mSprite_69)); }
	inline UISpriteData_t2862501359 * get_mSprite_69() const { return ___mSprite_69; }
	inline UISpriteData_t2862501359 ** get_address_of_mSprite_69() { return &___mSprite_69; }
	inline void set_mSprite_69(UISpriteData_t2862501359 * value)
	{
		___mSprite_69 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_69, value);
	}

	inline static int32_t get_offset_of_mSpriteSet_70() { return static_cast<int32_t>(offsetof(UISprite_t603616735, ___mSpriteSet_70)); }
	inline bool get_mSpriteSet_70() const { return ___mSpriteSet_70; }
	inline bool* get_address_of_mSpriteSet_70() { return &___mSpriteSet_70; }
	inline void set_mSpriteSet_70(bool value)
	{
		___mSpriteSet_70 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
