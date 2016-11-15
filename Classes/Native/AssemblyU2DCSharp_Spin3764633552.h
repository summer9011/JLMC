#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1071364940;
// UnityEngine.Transform
struct Transform_t224878301;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spin
struct  Spin_t3764633552  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.Vector3 Spin::rotationsPerSecond
	Vector3_t465617797  ___rotationsPerSecond_2;
	// System.Boolean Spin::ignoreTimeScale
	bool ___ignoreTimeScale_3;
	// UnityEngine.Rigidbody Spin::mRb
	Rigidbody_t1071364940 * ___mRb_4;
	// UnityEngine.Transform Spin::mTrans
	Transform_t224878301 * ___mTrans_5;

public:
	inline static int32_t get_offset_of_rotationsPerSecond_2() { return static_cast<int32_t>(offsetof(Spin_t3764633552, ___rotationsPerSecond_2)); }
	inline Vector3_t465617797  get_rotationsPerSecond_2() const { return ___rotationsPerSecond_2; }
	inline Vector3_t465617797 * get_address_of_rotationsPerSecond_2() { return &___rotationsPerSecond_2; }
	inline void set_rotationsPerSecond_2(Vector3_t465617797  value)
	{
		___rotationsPerSecond_2 = value;
	}

	inline static int32_t get_offset_of_ignoreTimeScale_3() { return static_cast<int32_t>(offsetof(Spin_t3764633552, ___ignoreTimeScale_3)); }
	inline bool get_ignoreTimeScale_3() const { return ___ignoreTimeScale_3; }
	inline bool* get_address_of_ignoreTimeScale_3() { return &___ignoreTimeScale_3; }
	inline void set_ignoreTimeScale_3(bool value)
	{
		___ignoreTimeScale_3 = value;
	}

	inline static int32_t get_offset_of_mRb_4() { return static_cast<int32_t>(offsetof(Spin_t3764633552, ___mRb_4)); }
	inline Rigidbody_t1071364940 * get_mRb_4() const { return ___mRb_4; }
	inline Rigidbody_t1071364940 ** get_address_of_mRb_4() { return &___mRb_4; }
	inline void set_mRb_4(Rigidbody_t1071364940 * value)
	{
		___mRb_4 = value;
		Il2CppCodeGenWriteBarrier(&___mRb_4, value);
	}

	inline static int32_t get_offset_of_mTrans_5() { return static_cast<int32_t>(offsetof(Spin_t3764633552, ___mTrans_5)); }
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
