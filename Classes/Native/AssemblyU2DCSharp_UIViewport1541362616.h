#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2805735124;
// UnityEngine.Transform
struct Transform_t224878301;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIViewport
struct  UIViewport_t1541362616  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.Camera UIViewport::sourceCamera
	Camera_t2805735124 * ___sourceCamera_2;
	// UnityEngine.Transform UIViewport::topLeft
	Transform_t224878301 * ___topLeft_3;
	// UnityEngine.Transform UIViewport::bottomRight
	Transform_t224878301 * ___bottomRight_4;
	// System.Single UIViewport::fullSize
	float ___fullSize_5;
	// UnityEngine.Camera UIViewport::mCam
	Camera_t2805735124 * ___mCam_6;

public:
	inline static int32_t get_offset_of_sourceCamera_2() { return static_cast<int32_t>(offsetof(UIViewport_t1541362616, ___sourceCamera_2)); }
	inline Camera_t2805735124 * get_sourceCamera_2() const { return ___sourceCamera_2; }
	inline Camera_t2805735124 ** get_address_of_sourceCamera_2() { return &___sourceCamera_2; }
	inline void set_sourceCamera_2(Camera_t2805735124 * value)
	{
		___sourceCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___sourceCamera_2, value);
	}

	inline static int32_t get_offset_of_topLeft_3() { return static_cast<int32_t>(offsetof(UIViewport_t1541362616, ___topLeft_3)); }
	inline Transform_t224878301 * get_topLeft_3() const { return ___topLeft_3; }
	inline Transform_t224878301 ** get_address_of_topLeft_3() { return &___topLeft_3; }
	inline void set_topLeft_3(Transform_t224878301 * value)
	{
		___topLeft_3 = value;
		Il2CppCodeGenWriteBarrier(&___topLeft_3, value);
	}

	inline static int32_t get_offset_of_bottomRight_4() { return static_cast<int32_t>(offsetof(UIViewport_t1541362616, ___bottomRight_4)); }
	inline Transform_t224878301 * get_bottomRight_4() const { return ___bottomRight_4; }
	inline Transform_t224878301 ** get_address_of_bottomRight_4() { return &___bottomRight_4; }
	inline void set_bottomRight_4(Transform_t224878301 * value)
	{
		___bottomRight_4 = value;
		Il2CppCodeGenWriteBarrier(&___bottomRight_4, value);
	}

	inline static int32_t get_offset_of_fullSize_5() { return static_cast<int32_t>(offsetof(UIViewport_t1541362616, ___fullSize_5)); }
	inline float get_fullSize_5() const { return ___fullSize_5; }
	inline float* get_address_of_fullSize_5() { return &___fullSize_5; }
	inline void set_fullSize_5(float value)
	{
		___fullSize_5 = value;
	}

	inline static int32_t get_offset_of_mCam_6() { return static_cast<int32_t>(offsetof(UIViewport_t1541362616, ___mCam_6)); }
	inline Camera_t2805735124 * get_mCam_6() const { return ___mCam_6; }
	inline Camera_t2805735124 ** get_address_of_mCam_6() { return &___mCam_6; }
	inline void set_mCam_6(Camera_t2805735124 * value)
	{
		___mCam_6 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
