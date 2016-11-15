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
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Quaternion83606849.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanWithMouse
struct  PanWithMouse_t776884274  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.Vector2 PanWithMouse::degrees
	Vector2_t465617798  ___degrees_2;
	// System.Single PanWithMouse::range
	float ___range_3;
	// UnityEngine.Transform PanWithMouse::mTrans
	Transform_t224878301 * ___mTrans_4;
	// UnityEngine.Quaternion PanWithMouse::mStart
	Quaternion_t83606849  ___mStart_5;
	// UnityEngine.Vector2 PanWithMouse::mRot
	Vector2_t465617798  ___mRot_6;

public:
	inline static int32_t get_offset_of_degrees_2() { return static_cast<int32_t>(offsetof(PanWithMouse_t776884274, ___degrees_2)); }
	inline Vector2_t465617798  get_degrees_2() const { return ___degrees_2; }
	inline Vector2_t465617798 * get_address_of_degrees_2() { return &___degrees_2; }
	inline void set_degrees_2(Vector2_t465617798  value)
	{
		___degrees_2 = value;
	}

	inline static int32_t get_offset_of_range_3() { return static_cast<int32_t>(offsetof(PanWithMouse_t776884274, ___range_3)); }
	inline float get_range_3() const { return ___range_3; }
	inline float* get_address_of_range_3() { return &___range_3; }
	inline void set_range_3(float value)
	{
		___range_3 = value;
	}

	inline static int32_t get_offset_of_mTrans_4() { return static_cast<int32_t>(offsetof(PanWithMouse_t776884274, ___mTrans_4)); }
	inline Transform_t224878301 * get_mTrans_4() const { return ___mTrans_4; }
	inline Transform_t224878301 ** get_address_of_mTrans_4() { return &___mTrans_4; }
	inline void set_mTrans_4(Transform_t224878301 * value)
	{
		___mTrans_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_4, value);
	}

	inline static int32_t get_offset_of_mStart_5() { return static_cast<int32_t>(offsetof(PanWithMouse_t776884274, ___mStart_5)); }
	inline Quaternion_t83606849  get_mStart_5() const { return ___mStart_5; }
	inline Quaternion_t83606849 * get_address_of_mStart_5() { return &___mStart_5; }
	inline void set_mStart_5(Quaternion_t83606849  value)
	{
		___mStart_5 = value;
	}

	inline static int32_t get_offset_of_mRot_6() { return static_cast<int32_t>(offsetof(PanWithMouse_t776884274, ___mRot_6)); }
	inline Vector2_t465617798  get_mRot_6() const { return ___mRot_6; }
	inline Vector2_t465617798 * get_address_of_mRot_6() { return &___mRot_6; }
	inline void set_mRot_6(Vector2_t465617798  value)
	{
		___mRot_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
