#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIToggle>
struct BetterList_1_t3257128960;
// UIToggle
struct UIToggle_t3036740318;
// UIWidget
struct UIWidget_t1453041918;
// UnityEngine.Animation
struct Animation_t3026096567;
// UnityEngine.Animator
struct Animator_t2442207934;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2607680524;
// UIToggle/Validate
struct Validate_t2842189766;
// UISprite
struct UISprite_t603616735;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_UIWidgetContainer701016325.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIToggle
struct  UIToggle_t3036740318  : public UIWidgetContainer_t701016325
{
public:
	// System.Int32 UIToggle::group
	int32_t ___group_4;
	// UIWidget UIToggle::activeSprite
	UIWidget_t1453041918 * ___activeSprite_5;
	// UnityEngine.Animation UIToggle::activeAnimation
	Animation_t3026096567 * ___activeAnimation_6;
	// UnityEngine.Animator UIToggle::animator
	Animator_t2442207934 * ___animator_7;
	// System.Boolean UIToggle::startsActive
	bool ___startsActive_8;
	// System.Boolean UIToggle::instantTween
	bool ___instantTween_9;
	// System.Boolean UIToggle::optionCanBeNone
	bool ___optionCanBeNone_10;
	// System.Collections.Generic.List`1<EventDelegate> UIToggle::onChange
	List_1_t2607680524 * ___onChange_11;
	// UIToggle/Validate UIToggle::validator
	Validate_t2842189766 * ___validator_12;
	// UISprite UIToggle::checkSprite
	UISprite_t603616735 * ___checkSprite_13;
	// UnityEngine.Animation UIToggle::checkAnimation
	Animation_t3026096567 * ___checkAnimation_14;
	// UnityEngine.GameObject UIToggle::eventReceiver
	GameObject_t1366199518 * ___eventReceiver_15;
	// System.String UIToggle::functionName
	String_t* ___functionName_16;
	// System.Boolean UIToggle::startsChecked
	bool ___startsChecked_17;
	// System.Boolean UIToggle::mIsActive
	bool ___mIsActive_18;
	// System.Boolean UIToggle::mStarted
	bool ___mStarted_19;

public:
	inline static int32_t get_offset_of_group_4() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___group_4)); }
	inline int32_t get_group_4() const { return ___group_4; }
	inline int32_t* get_address_of_group_4() { return &___group_4; }
	inline void set_group_4(int32_t value)
	{
		___group_4 = value;
	}

	inline static int32_t get_offset_of_activeSprite_5() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___activeSprite_5)); }
	inline UIWidget_t1453041918 * get_activeSprite_5() const { return ___activeSprite_5; }
	inline UIWidget_t1453041918 ** get_address_of_activeSprite_5() { return &___activeSprite_5; }
	inline void set_activeSprite_5(UIWidget_t1453041918 * value)
	{
		___activeSprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___activeSprite_5, value);
	}

	inline static int32_t get_offset_of_activeAnimation_6() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___activeAnimation_6)); }
	inline Animation_t3026096567 * get_activeAnimation_6() const { return ___activeAnimation_6; }
	inline Animation_t3026096567 ** get_address_of_activeAnimation_6() { return &___activeAnimation_6; }
	inline void set_activeAnimation_6(Animation_t3026096567 * value)
	{
		___activeAnimation_6 = value;
		Il2CppCodeGenWriteBarrier(&___activeAnimation_6, value);
	}

	inline static int32_t get_offset_of_animator_7() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___animator_7)); }
	inline Animator_t2442207934 * get_animator_7() const { return ___animator_7; }
	inline Animator_t2442207934 ** get_address_of_animator_7() { return &___animator_7; }
	inline void set_animator_7(Animator_t2442207934 * value)
	{
		___animator_7 = value;
		Il2CppCodeGenWriteBarrier(&___animator_7, value);
	}

	inline static int32_t get_offset_of_startsActive_8() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___startsActive_8)); }
	inline bool get_startsActive_8() const { return ___startsActive_8; }
	inline bool* get_address_of_startsActive_8() { return &___startsActive_8; }
	inline void set_startsActive_8(bool value)
	{
		___startsActive_8 = value;
	}

	inline static int32_t get_offset_of_instantTween_9() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___instantTween_9)); }
	inline bool get_instantTween_9() const { return ___instantTween_9; }
	inline bool* get_address_of_instantTween_9() { return &___instantTween_9; }
	inline void set_instantTween_9(bool value)
	{
		___instantTween_9 = value;
	}

	inline static int32_t get_offset_of_optionCanBeNone_10() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___optionCanBeNone_10)); }
	inline bool get_optionCanBeNone_10() const { return ___optionCanBeNone_10; }
	inline bool* get_address_of_optionCanBeNone_10() { return &___optionCanBeNone_10; }
	inline void set_optionCanBeNone_10(bool value)
	{
		___optionCanBeNone_10 = value;
	}

	inline static int32_t get_offset_of_onChange_11() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___onChange_11)); }
	inline List_1_t2607680524 * get_onChange_11() const { return ___onChange_11; }
	inline List_1_t2607680524 ** get_address_of_onChange_11() { return &___onChange_11; }
	inline void set_onChange_11(List_1_t2607680524 * value)
	{
		___onChange_11 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_11, value);
	}

	inline static int32_t get_offset_of_validator_12() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___validator_12)); }
	inline Validate_t2842189766 * get_validator_12() const { return ___validator_12; }
	inline Validate_t2842189766 ** get_address_of_validator_12() { return &___validator_12; }
	inline void set_validator_12(Validate_t2842189766 * value)
	{
		___validator_12 = value;
		Il2CppCodeGenWriteBarrier(&___validator_12, value);
	}

	inline static int32_t get_offset_of_checkSprite_13() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___checkSprite_13)); }
	inline UISprite_t603616735 * get_checkSprite_13() const { return ___checkSprite_13; }
	inline UISprite_t603616735 ** get_address_of_checkSprite_13() { return &___checkSprite_13; }
	inline void set_checkSprite_13(UISprite_t603616735 * value)
	{
		___checkSprite_13 = value;
		Il2CppCodeGenWriteBarrier(&___checkSprite_13, value);
	}

	inline static int32_t get_offset_of_checkAnimation_14() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___checkAnimation_14)); }
	inline Animation_t3026096567 * get_checkAnimation_14() const { return ___checkAnimation_14; }
	inline Animation_t3026096567 ** get_address_of_checkAnimation_14() { return &___checkAnimation_14; }
	inline void set_checkAnimation_14(Animation_t3026096567 * value)
	{
		___checkAnimation_14 = value;
		Il2CppCodeGenWriteBarrier(&___checkAnimation_14, value);
	}

	inline static int32_t get_offset_of_eventReceiver_15() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___eventReceiver_15)); }
	inline GameObject_t1366199518 * get_eventReceiver_15() const { return ___eventReceiver_15; }
	inline GameObject_t1366199518 ** get_address_of_eventReceiver_15() { return &___eventReceiver_15; }
	inline void set_eventReceiver_15(GameObject_t1366199518 * value)
	{
		___eventReceiver_15 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_15, value);
	}

	inline static int32_t get_offset_of_functionName_16() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___functionName_16)); }
	inline String_t* get_functionName_16() const { return ___functionName_16; }
	inline String_t** get_address_of_functionName_16() { return &___functionName_16; }
	inline void set_functionName_16(String_t* value)
	{
		___functionName_16 = value;
		Il2CppCodeGenWriteBarrier(&___functionName_16, value);
	}

	inline static int32_t get_offset_of_startsChecked_17() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___startsChecked_17)); }
	inline bool get_startsChecked_17() const { return ___startsChecked_17; }
	inline bool* get_address_of_startsChecked_17() { return &___startsChecked_17; }
	inline void set_startsChecked_17(bool value)
	{
		___startsChecked_17 = value;
	}

	inline static int32_t get_offset_of_mIsActive_18() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___mIsActive_18)); }
	inline bool get_mIsActive_18() const { return ___mIsActive_18; }
	inline bool* get_address_of_mIsActive_18() { return &___mIsActive_18; }
	inline void set_mIsActive_18(bool value)
	{
		___mIsActive_18 = value;
	}

	inline static int32_t get_offset_of_mStarted_19() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318, ___mStarted_19)); }
	inline bool get_mStarted_19() const { return ___mStarted_19; }
	inline bool* get_address_of_mStarted_19() { return &___mStarted_19; }
	inline void set_mStarted_19(bool value)
	{
		___mStarted_19 = value;
	}
};

struct UIToggle_t3036740318_StaticFields
{
public:
	// BetterList`1<UIToggle> UIToggle::list
	BetterList_1_t3257128960 * ___list_2;
	// UIToggle UIToggle::current
	UIToggle_t3036740318 * ___current_3;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318_StaticFields, ___list_2)); }
	inline BetterList_1_t3257128960 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t3257128960 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t3257128960 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(UIToggle_t3036740318_StaticFields, ___current_3)); }
	inline UIToggle_t3036740318 * get_current_3() const { return ___current_3; }
	inline UIToggle_t3036740318 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UIToggle_t3036740318 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier(&___current_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
