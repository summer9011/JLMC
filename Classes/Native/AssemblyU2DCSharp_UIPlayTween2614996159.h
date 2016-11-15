#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIPlayTween
struct UIPlayTween_t2614996159;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2607680524;
// System.String
struct String_t;
// UITweener[]
struct UITweenerU5BU5D_t2857044187;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Trigger2598697050.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction2973406773.h"
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition3327227550.h"
#include "AssemblyU2DCSharp_AnimationOrTween_DisableConditio4068738707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPlayTween
struct  UIPlayTween_t2614996159  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject UIPlayTween::tweenTarget
	GameObject_t1366199518 * ___tweenTarget_3;
	// System.Int32 UIPlayTween::tweenGroup
	int32_t ___tweenGroup_4;
	// AnimationOrTween.Trigger UIPlayTween::trigger
	int32_t ___trigger_5;
	// AnimationOrTween.Direction UIPlayTween::playDirection
	int32_t ___playDirection_6;
	// System.Boolean UIPlayTween::resetOnPlay
	bool ___resetOnPlay_7;
	// System.Boolean UIPlayTween::resetIfDisabled
	bool ___resetIfDisabled_8;
	// AnimationOrTween.EnableCondition UIPlayTween::ifDisabledOnPlay
	int32_t ___ifDisabledOnPlay_9;
	// AnimationOrTween.DisableCondition UIPlayTween::disableWhenFinished
	int32_t ___disableWhenFinished_10;
	// System.Boolean UIPlayTween::includeChildren
	bool ___includeChildren_11;
	// System.Collections.Generic.List`1<EventDelegate> UIPlayTween::onFinished
	List_1_t2607680524 * ___onFinished_12;
	// UnityEngine.GameObject UIPlayTween::eventReceiver
	GameObject_t1366199518 * ___eventReceiver_13;
	// System.String UIPlayTween::callWhenFinished
	String_t* ___callWhenFinished_14;
	// UITweener[] UIPlayTween::mTweens
	UITweenerU5BU5D_t2857044187* ___mTweens_15;
	// System.Boolean UIPlayTween::mStarted
	bool ___mStarted_16;
	// System.Int32 UIPlayTween::mActive
	int32_t ___mActive_17;
	// System.Boolean UIPlayTween::mActivated
	bool ___mActivated_18;

public:
	inline static int32_t get_offset_of_tweenTarget_3() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___tweenTarget_3)); }
	inline GameObject_t1366199518 * get_tweenTarget_3() const { return ___tweenTarget_3; }
	inline GameObject_t1366199518 ** get_address_of_tweenTarget_3() { return &___tweenTarget_3; }
	inline void set_tweenTarget_3(GameObject_t1366199518 * value)
	{
		___tweenTarget_3 = value;
		Il2CppCodeGenWriteBarrier(&___tweenTarget_3, value);
	}

	inline static int32_t get_offset_of_tweenGroup_4() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___tweenGroup_4)); }
	inline int32_t get_tweenGroup_4() const { return ___tweenGroup_4; }
	inline int32_t* get_address_of_tweenGroup_4() { return &___tweenGroup_4; }
	inline void set_tweenGroup_4(int32_t value)
	{
		___tweenGroup_4 = value;
	}

	inline static int32_t get_offset_of_trigger_5() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___trigger_5)); }
	inline int32_t get_trigger_5() const { return ___trigger_5; }
	inline int32_t* get_address_of_trigger_5() { return &___trigger_5; }
	inline void set_trigger_5(int32_t value)
	{
		___trigger_5 = value;
	}

	inline static int32_t get_offset_of_playDirection_6() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___playDirection_6)); }
	inline int32_t get_playDirection_6() const { return ___playDirection_6; }
	inline int32_t* get_address_of_playDirection_6() { return &___playDirection_6; }
	inline void set_playDirection_6(int32_t value)
	{
		___playDirection_6 = value;
	}

	inline static int32_t get_offset_of_resetOnPlay_7() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___resetOnPlay_7)); }
	inline bool get_resetOnPlay_7() const { return ___resetOnPlay_7; }
	inline bool* get_address_of_resetOnPlay_7() { return &___resetOnPlay_7; }
	inline void set_resetOnPlay_7(bool value)
	{
		___resetOnPlay_7 = value;
	}

	inline static int32_t get_offset_of_resetIfDisabled_8() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___resetIfDisabled_8)); }
	inline bool get_resetIfDisabled_8() const { return ___resetIfDisabled_8; }
	inline bool* get_address_of_resetIfDisabled_8() { return &___resetIfDisabled_8; }
	inline void set_resetIfDisabled_8(bool value)
	{
		___resetIfDisabled_8 = value;
	}

	inline static int32_t get_offset_of_ifDisabledOnPlay_9() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___ifDisabledOnPlay_9)); }
	inline int32_t get_ifDisabledOnPlay_9() const { return ___ifDisabledOnPlay_9; }
	inline int32_t* get_address_of_ifDisabledOnPlay_9() { return &___ifDisabledOnPlay_9; }
	inline void set_ifDisabledOnPlay_9(int32_t value)
	{
		___ifDisabledOnPlay_9 = value;
	}

	inline static int32_t get_offset_of_disableWhenFinished_10() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___disableWhenFinished_10)); }
	inline int32_t get_disableWhenFinished_10() const { return ___disableWhenFinished_10; }
	inline int32_t* get_address_of_disableWhenFinished_10() { return &___disableWhenFinished_10; }
	inline void set_disableWhenFinished_10(int32_t value)
	{
		___disableWhenFinished_10 = value;
	}

	inline static int32_t get_offset_of_includeChildren_11() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___includeChildren_11)); }
	inline bool get_includeChildren_11() const { return ___includeChildren_11; }
	inline bool* get_address_of_includeChildren_11() { return &___includeChildren_11; }
	inline void set_includeChildren_11(bool value)
	{
		___includeChildren_11 = value;
	}

	inline static int32_t get_offset_of_onFinished_12() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___onFinished_12)); }
	inline List_1_t2607680524 * get_onFinished_12() const { return ___onFinished_12; }
	inline List_1_t2607680524 ** get_address_of_onFinished_12() { return &___onFinished_12; }
	inline void set_onFinished_12(List_1_t2607680524 * value)
	{
		___onFinished_12 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_12, value);
	}

	inline static int32_t get_offset_of_eventReceiver_13() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___eventReceiver_13)); }
	inline GameObject_t1366199518 * get_eventReceiver_13() const { return ___eventReceiver_13; }
	inline GameObject_t1366199518 ** get_address_of_eventReceiver_13() { return &___eventReceiver_13; }
	inline void set_eventReceiver_13(GameObject_t1366199518 * value)
	{
		___eventReceiver_13 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_13, value);
	}

	inline static int32_t get_offset_of_callWhenFinished_14() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___callWhenFinished_14)); }
	inline String_t* get_callWhenFinished_14() const { return ___callWhenFinished_14; }
	inline String_t** get_address_of_callWhenFinished_14() { return &___callWhenFinished_14; }
	inline void set_callWhenFinished_14(String_t* value)
	{
		___callWhenFinished_14 = value;
		Il2CppCodeGenWriteBarrier(&___callWhenFinished_14, value);
	}

	inline static int32_t get_offset_of_mTweens_15() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___mTweens_15)); }
	inline UITweenerU5BU5D_t2857044187* get_mTweens_15() const { return ___mTweens_15; }
	inline UITweenerU5BU5D_t2857044187** get_address_of_mTweens_15() { return &___mTweens_15; }
	inline void set_mTweens_15(UITweenerU5BU5D_t2857044187* value)
	{
		___mTweens_15 = value;
		Il2CppCodeGenWriteBarrier(&___mTweens_15, value);
	}

	inline static int32_t get_offset_of_mStarted_16() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___mStarted_16)); }
	inline bool get_mStarted_16() const { return ___mStarted_16; }
	inline bool* get_address_of_mStarted_16() { return &___mStarted_16; }
	inline void set_mStarted_16(bool value)
	{
		___mStarted_16 = value;
	}

	inline static int32_t get_offset_of_mActive_17() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___mActive_17)); }
	inline int32_t get_mActive_17() const { return ___mActive_17; }
	inline int32_t* get_address_of_mActive_17() { return &___mActive_17; }
	inline void set_mActive_17(int32_t value)
	{
		___mActive_17 = value;
	}

	inline static int32_t get_offset_of_mActivated_18() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159, ___mActivated_18)); }
	inline bool get_mActivated_18() const { return ___mActivated_18; }
	inline bool* get_address_of_mActivated_18() { return &___mActivated_18; }
	inline void set_mActivated_18(bool value)
	{
		___mActivated_18 = value;
	}
};

struct UIPlayTween_t2614996159_StaticFields
{
public:
	// UIPlayTween UIPlayTween::current
	UIPlayTween_t2614996159 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(UIPlayTween_t2614996159_StaticFields, ___current_2)); }
	inline UIPlayTween_t2614996159 * get_current_2() const { return ___current_2; }
	inline UIPlayTween_t2614996159 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(UIPlayTween_t2614996159 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
