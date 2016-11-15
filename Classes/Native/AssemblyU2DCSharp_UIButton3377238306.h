#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIButton
struct UIButton_t3377238306;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t1118776648;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2607680524;
// UISprite
struct UISprite_t603616735;
// UI2DSprite
struct UI2DSprite_t1082505957;

#include "AssemblyU2DCSharp_UIButtonColor3793385709.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIButton
struct  UIButton_t3377238306  : public UIButtonColor_t3793385709
{
public:
	// System.Boolean UIButton::dragHighlight
	bool ___dragHighlight_13;
	// System.String UIButton::hoverSprite
	String_t* ___hoverSprite_14;
	// System.String UIButton::pressedSprite
	String_t* ___pressedSprite_15;
	// System.String UIButton::disabledSprite
	String_t* ___disabledSprite_16;
	// UnityEngine.Sprite UIButton::hoverSprite2D
	Sprite_t1118776648 * ___hoverSprite2D_17;
	// UnityEngine.Sprite UIButton::pressedSprite2D
	Sprite_t1118776648 * ___pressedSprite2D_18;
	// UnityEngine.Sprite UIButton::disabledSprite2D
	Sprite_t1118776648 * ___disabledSprite2D_19;
	// System.Boolean UIButton::pixelSnap
	bool ___pixelSnap_20;
	// System.Collections.Generic.List`1<EventDelegate> UIButton::onClick
	List_1_t2607680524 * ___onClick_21;
	// UISprite UIButton::mSprite
	UISprite_t603616735 * ___mSprite_22;
	// UI2DSprite UIButton::mSprite2D
	UI2DSprite_t1082505957 * ___mSprite2D_23;
	// System.String UIButton::mNormalSprite
	String_t* ___mNormalSprite_24;
	// UnityEngine.Sprite UIButton::mNormalSprite2D
	Sprite_t1118776648 * ___mNormalSprite2D_25;

public:
	inline static int32_t get_offset_of_dragHighlight_13() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___dragHighlight_13)); }
	inline bool get_dragHighlight_13() const { return ___dragHighlight_13; }
	inline bool* get_address_of_dragHighlight_13() { return &___dragHighlight_13; }
	inline void set_dragHighlight_13(bool value)
	{
		___dragHighlight_13 = value;
	}

	inline static int32_t get_offset_of_hoverSprite_14() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___hoverSprite_14)); }
	inline String_t* get_hoverSprite_14() const { return ___hoverSprite_14; }
	inline String_t** get_address_of_hoverSprite_14() { return &___hoverSprite_14; }
	inline void set_hoverSprite_14(String_t* value)
	{
		___hoverSprite_14 = value;
		Il2CppCodeGenWriteBarrier(&___hoverSprite_14, value);
	}

	inline static int32_t get_offset_of_pressedSprite_15() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___pressedSprite_15)); }
	inline String_t* get_pressedSprite_15() const { return ___pressedSprite_15; }
	inline String_t** get_address_of_pressedSprite_15() { return &___pressedSprite_15; }
	inline void set_pressedSprite_15(String_t* value)
	{
		___pressedSprite_15 = value;
		Il2CppCodeGenWriteBarrier(&___pressedSprite_15, value);
	}

	inline static int32_t get_offset_of_disabledSprite_16() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___disabledSprite_16)); }
	inline String_t* get_disabledSprite_16() const { return ___disabledSprite_16; }
	inline String_t** get_address_of_disabledSprite_16() { return &___disabledSprite_16; }
	inline void set_disabledSprite_16(String_t* value)
	{
		___disabledSprite_16 = value;
		Il2CppCodeGenWriteBarrier(&___disabledSprite_16, value);
	}

	inline static int32_t get_offset_of_hoverSprite2D_17() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___hoverSprite2D_17)); }
	inline Sprite_t1118776648 * get_hoverSprite2D_17() const { return ___hoverSprite2D_17; }
	inline Sprite_t1118776648 ** get_address_of_hoverSprite2D_17() { return &___hoverSprite2D_17; }
	inline void set_hoverSprite2D_17(Sprite_t1118776648 * value)
	{
		___hoverSprite2D_17 = value;
		Il2CppCodeGenWriteBarrier(&___hoverSprite2D_17, value);
	}

	inline static int32_t get_offset_of_pressedSprite2D_18() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___pressedSprite2D_18)); }
	inline Sprite_t1118776648 * get_pressedSprite2D_18() const { return ___pressedSprite2D_18; }
	inline Sprite_t1118776648 ** get_address_of_pressedSprite2D_18() { return &___pressedSprite2D_18; }
	inline void set_pressedSprite2D_18(Sprite_t1118776648 * value)
	{
		___pressedSprite2D_18 = value;
		Il2CppCodeGenWriteBarrier(&___pressedSprite2D_18, value);
	}

	inline static int32_t get_offset_of_disabledSprite2D_19() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___disabledSprite2D_19)); }
	inline Sprite_t1118776648 * get_disabledSprite2D_19() const { return ___disabledSprite2D_19; }
	inline Sprite_t1118776648 ** get_address_of_disabledSprite2D_19() { return &___disabledSprite2D_19; }
	inline void set_disabledSprite2D_19(Sprite_t1118776648 * value)
	{
		___disabledSprite2D_19 = value;
		Il2CppCodeGenWriteBarrier(&___disabledSprite2D_19, value);
	}

	inline static int32_t get_offset_of_pixelSnap_20() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___pixelSnap_20)); }
	inline bool get_pixelSnap_20() const { return ___pixelSnap_20; }
	inline bool* get_address_of_pixelSnap_20() { return &___pixelSnap_20; }
	inline void set_pixelSnap_20(bool value)
	{
		___pixelSnap_20 = value;
	}

	inline static int32_t get_offset_of_onClick_21() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___onClick_21)); }
	inline List_1_t2607680524 * get_onClick_21() const { return ___onClick_21; }
	inline List_1_t2607680524 ** get_address_of_onClick_21() { return &___onClick_21; }
	inline void set_onClick_21(List_1_t2607680524 * value)
	{
		___onClick_21 = value;
		Il2CppCodeGenWriteBarrier(&___onClick_21, value);
	}

	inline static int32_t get_offset_of_mSprite_22() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___mSprite_22)); }
	inline UISprite_t603616735 * get_mSprite_22() const { return ___mSprite_22; }
	inline UISprite_t603616735 ** get_address_of_mSprite_22() { return &___mSprite_22; }
	inline void set_mSprite_22(UISprite_t603616735 * value)
	{
		___mSprite_22 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_22, value);
	}

	inline static int32_t get_offset_of_mSprite2D_23() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___mSprite2D_23)); }
	inline UI2DSprite_t1082505957 * get_mSprite2D_23() const { return ___mSprite2D_23; }
	inline UI2DSprite_t1082505957 ** get_address_of_mSprite2D_23() { return &___mSprite2D_23; }
	inline void set_mSprite2D_23(UI2DSprite_t1082505957 * value)
	{
		___mSprite2D_23 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite2D_23, value);
	}

	inline static int32_t get_offset_of_mNormalSprite_24() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___mNormalSprite_24)); }
	inline String_t* get_mNormalSprite_24() const { return ___mNormalSprite_24; }
	inline String_t** get_address_of_mNormalSprite_24() { return &___mNormalSprite_24; }
	inline void set_mNormalSprite_24(String_t* value)
	{
		___mNormalSprite_24 = value;
		Il2CppCodeGenWriteBarrier(&___mNormalSprite_24, value);
	}

	inline static int32_t get_offset_of_mNormalSprite2D_25() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___mNormalSprite2D_25)); }
	inline Sprite_t1118776648 * get_mNormalSprite2D_25() const { return ___mNormalSprite2D_25; }
	inline Sprite_t1118776648 ** get_address_of_mNormalSprite2D_25() { return &___mNormalSprite2D_25; }
	inline void set_mNormalSprite2D_25(Sprite_t1118776648 * value)
	{
		___mNormalSprite2D_25 = value;
		Il2CppCodeGenWriteBarrier(&___mNormalSprite2D_25, value);
	}
};

struct UIButton_t3377238306_StaticFields
{
public:
	// UIButton UIButton::current
	UIButton_t3377238306 * ___current_12;

public:
	inline static int32_t get_offset_of_current_12() { return static_cast<int32_t>(offsetof(UIButton_t3377238306_StaticFields, ___current_12)); }
	inline UIButton_t3377238306 * get_current_12() const { return ___current_12; }
	inline UIButton_t3377238306 ** get_address_of_current_12() { return &___current_12; }
	inline void set_current_12(UIButton_t3377238306 * value)
	{
		___current_12 = value;
		Il2CppCodeGenWriteBarrier(&___current_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
