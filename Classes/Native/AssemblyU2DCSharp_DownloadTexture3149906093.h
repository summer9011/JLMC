#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3575456220;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DownloadTexture
struct  DownloadTexture_t3149906093  : public MonoBehaviour_t774292115
{
public:
	// System.String DownloadTexture::url
	String_t* ___url_2;
	// System.Boolean DownloadTexture::pixelPerfect
	bool ___pixelPerfect_3;
	// UnityEngine.Texture2D DownloadTexture::mTex
	Texture2D_t3575456220 * ___mTex_4;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(DownloadTexture_t3149906093, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier(&___url_2, value);
	}

	inline static int32_t get_offset_of_pixelPerfect_3() { return static_cast<int32_t>(offsetof(DownloadTexture_t3149906093, ___pixelPerfect_3)); }
	inline bool get_pixelPerfect_3() const { return ___pixelPerfect_3; }
	inline bool* get_address_of_pixelPerfect_3() { return &___pixelPerfect_3; }
	inline void set_pixelPerfect_3(bool value)
	{
		___pixelPerfect_3 = value;
	}

	inline static int32_t get_offset_of_mTex_4() { return static_cast<int32_t>(offsetof(DownloadTexture_t3149906093, ___mTex_4)); }
	inline Texture2D_t3575456220 * get_mTex_4() const { return ___mTex_4; }
	inline Texture2D_t3575456220 ** get_address_of_mTex_4() { return &___mTex_4; }
	inline void set_mTex_4(Texture2D_t3575456220 * value)
	{
		___mTex_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTex_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
