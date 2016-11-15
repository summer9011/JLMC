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

#include "AssemblyU2DCSharp_UITweener2986641582.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenRotation
struct  TweenRotation_t1747194511  : public UITweener_t2986641582
{
public:
	// UnityEngine.Vector3 TweenRotation::from
	Vector3_t465617797  ___from_20;
	// UnityEngine.Vector3 TweenRotation::to
	Vector3_t465617797  ___to_21;
	// System.Boolean TweenRotation::quaternionLerp
	bool ___quaternionLerp_22;
	// UnityEngine.Transform TweenRotation::mTrans
	Transform_t224878301 * ___mTrans_23;

public:
	inline static int32_t get_offset_of_from_20() { return static_cast<int32_t>(offsetof(TweenRotation_t1747194511, ___from_20)); }
	inline Vector3_t465617797  get_from_20() const { return ___from_20; }
	inline Vector3_t465617797 * get_address_of_from_20() { return &___from_20; }
	inline void set_from_20(Vector3_t465617797  value)
	{
		___from_20 = value;
	}

	inline static int32_t get_offset_of_to_21() { return static_cast<int32_t>(offsetof(TweenRotation_t1747194511, ___to_21)); }
	inline Vector3_t465617797  get_to_21() const { return ___to_21; }
	inline Vector3_t465617797 * get_address_of_to_21() { return &___to_21; }
	inline void set_to_21(Vector3_t465617797  value)
	{
		___to_21 = value;
	}

	inline static int32_t get_offset_of_quaternionLerp_22() { return static_cast<int32_t>(offsetof(TweenRotation_t1747194511, ___quaternionLerp_22)); }
	inline bool get_quaternionLerp_22() const { return ___quaternionLerp_22; }
	inline bool* get_address_of_quaternionLerp_22() { return &___quaternionLerp_22; }
	inline void set_quaternionLerp_22(bool value)
	{
		___quaternionLerp_22 = value;
	}

	inline static int32_t get_offset_of_mTrans_23() { return static_cast<int32_t>(offsetof(TweenRotation_t1747194511, ___mTrans_23)); }
	inline Transform_t224878301 * get_mTrans_23() const { return ___mTrans_23; }
	inline Transform_t224878301 ** get_address_of_mTrans_23() { return &___mTrans_23; }
	inline void set_mTrans_23(Transform_t224878301 * value)
	{
		___mTrans_23 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
