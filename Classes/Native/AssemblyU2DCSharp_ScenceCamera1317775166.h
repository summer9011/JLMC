#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1366199518;
// UnityEngine.WebCamTexture
struct WebCamTexture_t4098188425;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScenceCamera
struct  ScenceCamera_t1317775166  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject ScenceCamera::bg
	GameObject_t1366199518 * ___bg_2;
	// UnityEngine.WebCamTexture ScenceCamera::mWebCamTexture
	WebCamTexture_t4098188425 * ___mWebCamTexture_3;

public:
	inline static int32_t get_offset_of_bg_2() { return static_cast<int32_t>(offsetof(ScenceCamera_t1317775166, ___bg_2)); }
	inline GameObject_t1366199518 * get_bg_2() const { return ___bg_2; }
	inline GameObject_t1366199518 ** get_address_of_bg_2() { return &___bg_2; }
	inline void set_bg_2(GameObject_t1366199518 * value)
	{
		___bg_2 = value;
		Il2CppCodeGenWriteBarrier(&___bg_2, value);
	}

	inline static int32_t get_offset_of_mWebCamTexture_3() { return static_cast<int32_t>(offsetof(ScenceCamera_t1317775166, ___mWebCamTexture_3)); }
	inline WebCamTexture_t4098188425 * get_mWebCamTexture_3() const { return ___mWebCamTexture_3; }
	inline WebCamTexture_t4098188425 ** get_address_of_mWebCamTexture_3() { return &___mWebCamTexture_3; }
	inline void set_mWebCamTexture_3(WebCamTexture_t4098188425 * value)
	{
		___mWebCamTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___mWebCamTexture_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
