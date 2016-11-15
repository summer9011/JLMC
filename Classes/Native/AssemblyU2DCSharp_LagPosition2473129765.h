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
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LagPosition
struct  LagPosition_t2473129765  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.Vector3 LagPosition::speed
	Vector3_t465617797  ___speed_2;
	// System.Boolean LagPosition::ignoreTimeScale
	bool ___ignoreTimeScale_3;
	// UnityEngine.Transform LagPosition::mTrans
	Transform_t224878301 * ___mTrans_4;
	// UnityEngine.Vector3 LagPosition::mRelative
	Vector3_t465617797  ___mRelative_5;
	// UnityEngine.Vector3 LagPosition::mAbsolute
	Vector3_t465617797  ___mAbsolute_6;
	// System.Boolean LagPosition::mStarted
	bool ___mStarted_7;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(LagPosition_t2473129765, ___speed_2)); }
	inline Vector3_t465617797  get_speed_2() const { return ___speed_2; }
	inline Vector3_t465617797 * get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(Vector3_t465617797  value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_ignoreTimeScale_3() { return static_cast<int32_t>(offsetof(LagPosition_t2473129765, ___ignoreTimeScale_3)); }
	inline bool get_ignoreTimeScale_3() const { return ___ignoreTimeScale_3; }
	inline bool* get_address_of_ignoreTimeScale_3() { return &___ignoreTimeScale_3; }
	inline void set_ignoreTimeScale_3(bool value)
	{
		___ignoreTimeScale_3 = value;
	}

	inline static int32_t get_offset_of_mTrans_4() { return static_cast<int32_t>(offsetof(LagPosition_t2473129765, ___mTrans_4)); }
	inline Transform_t224878301 * get_mTrans_4() const { return ___mTrans_4; }
	inline Transform_t224878301 ** get_address_of_mTrans_4() { return &___mTrans_4; }
	inline void set_mTrans_4(Transform_t224878301 * value)
	{
		___mTrans_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_4, value);
	}

	inline static int32_t get_offset_of_mRelative_5() { return static_cast<int32_t>(offsetof(LagPosition_t2473129765, ___mRelative_5)); }
	inline Vector3_t465617797  get_mRelative_5() const { return ___mRelative_5; }
	inline Vector3_t465617797 * get_address_of_mRelative_5() { return &___mRelative_5; }
	inline void set_mRelative_5(Vector3_t465617797  value)
	{
		___mRelative_5 = value;
	}

	inline static int32_t get_offset_of_mAbsolute_6() { return static_cast<int32_t>(offsetof(LagPosition_t2473129765, ___mAbsolute_6)); }
	inline Vector3_t465617797  get_mAbsolute_6() const { return ___mAbsolute_6; }
	inline Vector3_t465617797 * get_address_of_mAbsolute_6() { return &___mAbsolute_6; }
	inline void set_mAbsolute_6(Vector3_t465617797  value)
	{
		___mAbsolute_6 = value;
	}

	inline static int32_t get_offset_of_mStarted_7() { return static_cast<int32_t>(offsetof(LagPosition_t2473129765, ___mStarted_7)); }
	inline bool get_mStarted_7() const { return ___mStarted_7; }
	inline bool* get_address_of_mStarted_7() { return &___mStarted_7; }
	inline void set_mStarted_7(bool value)
	{
		___mStarted_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
