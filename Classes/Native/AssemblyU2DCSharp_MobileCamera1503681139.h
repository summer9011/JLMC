#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WebCamTexture
struct WebCamTexture_t4098188425;
// System.String
struct String_t;
// UITexture
struct UITexture_t2537039969;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "UnityEngine_UnityEngine_Quaternion83606849.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MobileCamera
struct  MobileCamera_t1503681139  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.WebCamTexture MobileCamera::cameraTexture
	WebCamTexture_t4098188425 * ___cameraTexture_2;
	// System.String MobileCamera::cameraName
	String_t* ___cameraName_3;
	// UITexture MobileCamera::mUITexture
	UITexture_t2537039969 * ___mUITexture_4;
	// UnityEngine.Quaternion MobileCamera::baseRotation
	Quaternion_t83606849  ___baseRotation_5;

public:
	inline static int32_t get_offset_of_cameraTexture_2() { return static_cast<int32_t>(offsetof(MobileCamera_t1503681139, ___cameraTexture_2)); }
	inline WebCamTexture_t4098188425 * get_cameraTexture_2() const { return ___cameraTexture_2; }
	inline WebCamTexture_t4098188425 ** get_address_of_cameraTexture_2() { return &___cameraTexture_2; }
	inline void set_cameraTexture_2(WebCamTexture_t4098188425 * value)
	{
		___cameraTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTexture_2, value);
	}

	inline static int32_t get_offset_of_cameraName_3() { return static_cast<int32_t>(offsetof(MobileCamera_t1503681139, ___cameraName_3)); }
	inline String_t* get_cameraName_3() const { return ___cameraName_3; }
	inline String_t** get_address_of_cameraName_3() { return &___cameraName_3; }
	inline void set_cameraName_3(String_t* value)
	{
		___cameraName_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraName_3, value);
	}

	inline static int32_t get_offset_of_mUITexture_4() { return static_cast<int32_t>(offsetof(MobileCamera_t1503681139, ___mUITexture_4)); }
	inline UITexture_t2537039969 * get_mUITexture_4() const { return ___mUITexture_4; }
	inline UITexture_t2537039969 ** get_address_of_mUITexture_4() { return &___mUITexture_4; }
	inline void set_mUITexture_4(UITexture_t2537039969 * value)
	{
		___mUITexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___mUITexture_4, value);
	}

	inline static int32_t get_offset_of_baseRotation_5() { return static_cast<int32_t>(offsetof(MobileCamera_t1503681139, ___baseRotation_5)); }
	inline Quaternion_t83606849  get_baseRotation_5() const { return ___baseRotation_5; }
	inline Quaternion_t83606849 * get_address_of_baseRotation_5() { return &___baseRotation_5; }
	inline void set_baseRotation_5(Quaternion_t83606849  value)
	{
		___baseRotation_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
