#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpringPosition
struct SpringPosition_t434217086;
// SpringPosition/OnFinished
struct OnFinished_t2353230626;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t224878301;
// UIScrollView
struct UIScrollView_t3033954930;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpringPosition
struct  SpringPosition_t434217086  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.Vector3 SpringPosition::target
	Vector3_t465617797  ___target_3;
	// System.Single SpringPosition::strength
	float ___strength_4;
	// System.Boolean SpringPosition::worldSpace
	bool ___worldSpace_5;
	// System.Boolean SpringPosition::ignoreTimeScale
	bool ___ignoreTimeScale_6;
	// System.Boolean SpringPosition::updateScrollView
	bool ___updateScrollView_7;
	// SpringPosition/OnFinished SpringPosition::onFinished
	OnFinished_t2353230626 * ___onFinished_8;
	// UnityEngine.GameObject SpringPosition::eventReceiver
	GameObject_t1366199518 * ___eventReceiver_9;
	// System.String SpringPosition::callWhenFinished
	String_t* ___callWhenFinished_10;
	// UnityEngine.Transform SpringPosition::mTrans
	Transform_t224878301 * ___mTrans_11;
	// System.Single SpringPosition::mThreshold
	float ___mThreshold_12;
	// UIScrollView SpringPosition::mSv
	UIScrollView_t3033954930 * ___mSv_13;

public:
	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___target_3)); }
	inline Vector3_t465617797  get_target_3() const { return ___target_3; }
	inline Vector3_t465617797 * get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Vector3_t465617797  value)
	{
		___target_3 = value;
	}

	inline static int32_t get_offset_of_strength_4() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___strength_4)); }
	inline float get_strength_4() const { return ___strength_4; }
	inline float* get_address_of_strength_4() { return &___strength_4; }
	inline void set_strength_4(float value)
	{
		___strength_4 = value;
	}

	inline static int32_t get_offset_of_worldSpace_5() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___worldSpace_5)); }
	inline bool get_worldSpace_5() const { return ___worldSpace_5; }
	inline bool* get_address_of_worldSpace_5() { return &___worldSpace_5; }
	inline void set_worldSpace_5(bool value)
	{
		___worldSpace_5 = value;
	}

	inline static int32_t get_offset_of_ignoreTimeScale_6() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___ignoreTimeScale_6)); }
	inline bool get_ignoreTimeScale_6() const { return ___ignoreTimeScale_6; }
	inline bool* get_address_of_ignoreTimeScale_6() { return &___ignoreTimeScale_6; }
	inline void set_ignoreTimeScale_6(bool value)
	{
		___ignoreTimeScale_6 = value;
	}

	inline static int32_t get_offset_of_updateScrollView_7() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___updateScrollView_7)); }
	inline bool get_updateScrollView_7() const { return ___updateScrollView_7; }
	inline bool* get_address_of_updateScrollView_7() { return &___updateScrollView_7; }
	inline void set_updateScrollView_7(bool value)
	{
		___updateScrollView_7 = value;
	}

	inline static int32_t get_offset_of_onFinished_8() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___onFinished_8)); }
	inline OnFinished_t2353230626 * get_onFinished_8() const { return ___onFinished_8; }
	inline OnFinished_t2353230626 ** get_address_of_onFinished_8() { return &___onFinished_8; }
	inline void set_onFinished_8(OnFinished_t2353230626 * value)
	{
		___onFinished_8 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_8, value);
	}

	inline static int32_t get_offset_of_eventReceiver_9() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___eventReceiver_9)); }
	inline GameObject_t1366199518 * get_eventReceiver_9() const { return ___eventReceiver_9; }
	inline GameObject_t1366199518 ** get_address_of_eventReceiver_9() { return &___eventReceiver_9; }
	inline void set_eventReceiver_9(GameObject_t1366199518 * value)
	{
		___eventReceiver_9 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_9, value);
	}

	inline static int32_t get_offset_of_callWhenFinished_10() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___callWhenFinished_10)); }
	inline String_t* get_callWhenFinished_10() const { return ___callWhenFinished_10; }
	inline String_t** get_address_of_callWhenFinished_10() { return &___callWhenFinished_10; }
	inline void set_callWhenFinished_10(String_t* value)
	{
		___callWhenFinished_10 = value;
		Il2CppCodeGenWriteBarrier(&___callWhenFinished_10, value);
	}

	inline static int32_t get_offset_of_mTrans_11() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___mTrans_11)); }
	inline Transform_t224878301 * get_mTrans_11() const { return ___mTrans_11; }
	inline Transform_t224878301 ** get_address_of_mTrans_11() { return &___mTrans_11; }
	inline void set_mTrans_11(Transform_t224878301 * value)
	{
		___mTrans_11 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_11, value);
	}

	inline static int32_t get_offset_of_mThreshold_12() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___mThreshold_12)); }
	inline float get_mThreshold_12() const { return ___mThreshold_12; }
	inline float* get_address_of_mThreshold_12() { return &___mThreshold_12; }
	inline void set_mThreshold_12(float value)
	{
		___mThreshold_12 = value;
	}

	inline static int32_t get_offset_of_mSv_13() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086, ___mSv_13)); }
	inline UIScrollView_t3033954930 * get_mSv_13() const { return ___mSv_13; }
	inline UIScrollView_t3033954930 ** get_address_of_mSv_13() { return &___mSv_13; }
	inline void set_mSv_13(UIScrollView_t3033954930 * value)
	{
		___mSv_13 = value;
		Il2CppCodeGenWriteBarrier(&___mSv_13, value);
	}
};

struct SpringPosition_t434217086_StaticFields
{
public:
	// SpringPosition SpringPosition::current
	SpringPosition_t434217086 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(SpringPosition_t434217086_StaticFields, ___current_2)); }
	inline SpringPosition_t434217086 * get_current_2() const { return ___current_2; }
	inline SpringPosition_t434217086 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(SpringPosition_t434217086 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
