#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t224878301;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LookAtTarget
struct  LookAtTarget_t512724305  : public MonoBehaviour_t774292115
{
public:
	// System.Int32 LookAtTarget::level
	int32_t ___level_2;
	// UnityEngine.Transform LookAtTarget::target
	Transform_t224878301 * ___target_3;
	// System.Single LookAtTarget::speed
	float ___speed_4;
	// UnityEngine.Transform LookAtTarget::mTrans
	Transform_t224878301 * ___mTrans_5;

public:
	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(LookAtTarget_t512724305, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(LookAtTarget_t512724305, ___target_3)); }
	inline Transform_t224878301 * get_target_3() const { return ___target_3; }
	inline Transform_t224878301 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t224878301 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(LookAtTarget_t512724305, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_mTrans_5() { return static_cast<int32_t>(offsetof(LookAtTarget_t512724305, ___mTrans_5)); }
	inline Transform_t224878301 * get_mTrans_5() const { return ___mTrans_5; }
	inline Transform_t224878301 ** get_address_of_mTrans_5() { return &___mTrans_5; }
	inline void set_mTrans_5(Transform_t224878301 * value)
	{
		___mTrans_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
