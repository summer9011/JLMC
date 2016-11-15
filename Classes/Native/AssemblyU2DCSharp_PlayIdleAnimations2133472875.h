#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animation
struct Animation_t3026096567;
// UnityEngine.AnimationClip
struct AnimationClip_t56321445;
// System.Collections.Generic.List`1<UnityEngine.AnimationClip>
struct List_1_t3462660084;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayIdleAnimations
struct  PlayIdleAnimations_t2133472875  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.Animation PlayIdleAnimations::mAnim
	Animation_t3026096567 * ___mAnim_2;
	// UnityEngine.AnimationClip PlayIdleAnimations::mIdle
	AnimationClip_t56321445 * ___mIdle_3;
	// System.Collections.Generic.List`1<UnityEngine.AnimationClip> PlayIdleAnimations::mBreaks
	List_1_t3462660084 * ___mBreaks_4;
	// System.Single PlayIdleAnimations::mNextBreak
	float ___mNextBreak_5;
	// System.Int32 PlayIdleAnimations::mLastIndex
	int32_t ___mLastIndex_6;

public:
	inline static int32_t get_offset_of_mAnim_2() { return static_cast<int32_t>(offsetof(PlayIdleAnimations_t2133472875, ___mAnim_2)); }
	inline Animation_t3026096567 * get_mAnim_2() const { return ___mAnim_2; }
	inline Animation_t3026096567 ** get_address_of_mAnim_2() { return &___mAnim_2; }
	inline void set_mAnim_2(Animation_t3026096567 * value)
	{
		___mAnim_2 = value;
		Il2CppCodeGenWriteBarrier(&___mAnim_2, value);
	}

	inline static int32_t get_offset_of_mIdle_3() { return static_cast<int32_t>(offsetof(PlayIdleAnimations_t2133472875, ___mIdle_3)); }
	inline AnimationClip_t56321445 * get_mIdle_3() const { return ___mIdle_3; }
	inline AnimationClip_t56321445 ** get_address_of_mIdle_3() { return &___mIdle_3; }
	inline void set_mIdle_3(AnimationClip_t56321445 * value)
	{
		___mIdle_3 = value;
		Il2CppCodeGenWriteBarrier(&___mIdle_3, value);
	}

	inline static int32_t get_offset_of_mBreaks_4() { return static_cast<int32_t>(offsetof(PlayIdleAnimations_t2133472875, ___mBreaks_4)); }
	inline List_1_t3462660084 * get_mBreaks_4() const { return ___mBreaks_4; }
	inline List_1_t3462660084 ** get_address_of_mBreaks_4() { return &___mBreaks_4; }
	inline void set_mBreaks_4(List_1_t3462660084 * value)
	{
		___mBreaks_4 = value;
		Il2CppCodeGenWriteBarrier(&___mBreaks_4, value);
	}

	inline static int32_t get_offset_of_mNextBreak_5() { return static_cast<int32_t>(offsetof(PlayIdleAnimations_t2133472875, ___mNextBreak_5)); }
	inline float get_mNextBreak_5() const { return ___mNextBreak_5; }
	inline float* get_address_of_mNextBreak_5() { return &___mNextBreak_5; }
	inline void set_mNextBreak_5(float value)
	{
		___mNextBreak_5 = value;
	}

	inline static int32_t get_offset_of_mLastIndex_6() { return static_cast<int32_t>(offsetof(PlayIdleAnimations_t2133472875, ___mLastIndex_6)); }
	inline int32_t get_mLastIndex_6() const { return ___mLastIndex_6; }
	inline int32_t* get_address_of_mLastIndex_6() { return &___mLastIndex_6; }
	inline void set_mLastIndex_6(int32_t value)
	{
		___mLastIndex_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
