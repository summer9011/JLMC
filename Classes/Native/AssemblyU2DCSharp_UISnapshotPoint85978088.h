#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3575456220;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISnapshotPoint
struct  UISnapshotPoint_t85978088  : public MonoBehaviour_t774292115
{
public:
	// System.Boolean UISnapshotPoint::isOrthographic
	bool ___isOrthographic_2;
	// System.Single UISnapshotPoint::nearClip
	float ___nearClip_3;
	// System.Single UISnapshotPoint::farClip
	float ___farClip_4;
	// System.Int32 UISnapshotPoint::fieldOfView
	int32_t ___fieldOfView_5;
	// System.Single UISnapshotPoint::orthoSize
	float ___orthoSize_6;
	// UnityEngine.Texture2D UISnapshotPoint::thumbnail
	Texture2D_t3575456220 * ___thumbnail_7;

public:
	inline static int32_t get_offset_of_isOrthographic_2() { return static_cast<int32_t>(offsetof(UISnapshotPoint_t85978088, ___isOrthographic_2)); }
	inline bool get_isOrthographic_2() const { return ___isOrthographic_2; }
	inline bool* get_address_of_isOrthographic_2() { return &___isOrthographic_2; }
	inline void set_isOrthographic_2(bool value)
	{
		___isOrthographic_2 = value;
	}

	inline static int32_t get_offset_of_nearClip_3() { return static_cast<int32_t>(offsetof(UISnapshotPoint_t85978088, ___nearClip_3)); }
	inline float get_nearClip_3() const { return ___nearClip_3; }
	inline float* get_address_of_nearClip_3() { return &___nearClip_3; }
	inline void set_nearClip_3(float value)
	{
		___nearClip_3 = value;
	}

	inline static int32_t get_offset_of_farClip_4() { return static_cast<int32_t>(offsetof(UISnapshotPoint_t85978088, ___farClip_4)); }
	inline float get_farClip_4() const { return ___farClip_4; }
	inline float* get_address_of_farClip_4() { return &___farClip_4; }
	inline void set_farClip_4(float value)
	{
		___farClip_4 = value;
	}

	inline static int32_t get_offset_of_fieldOfView_5() { return static_cast<int32_t>(offsetof(UISnapshotPoint_t85978088, ___fieldOfView_5)); }
	inline int32_t get_fieldOfView_5() const { return ___fieldOfView_5; }
	inline int32_t* get_address_of_fieldOfView_5() { return &___fieldOfView_5; }
	inline void set_fieldOfView_5(int32_t value)
	{
		___fieldOfView_5 = value;
	}

	inline static int32_t get_offset_of_orthoSize_6() { return static_cast<int32_t>(offsetof(UISnapshotPoint_t85978088, ___orthoSize_6)); }
	inline float get_orthoSize_6() const { return ___orthoSize_6; }
	inline float* get_address_of_orthoSize_6() { return &___orthoSize_6; }
	inline void set_orthoSize_6(float value)
	{
		___orthoSize_6 = value;
	}

	inline static int32_t get_offset_of_thumbnail_7() { return static_cast<int32_t>(offsetof(UISnapshotPoint_t85978088, ___thumbnail_7)); }
	inline Texture2D_t3575456220 * get_thumbnail_7() const { return ___thumbnail_7; }
	inline Texture2D_t3575456220 ** get_address_of_thumbnail_7() { return &___thumbnail_7; }
	inline void set_thumbnail_7(Texture2D_t3575456220 * value)
	{
		___thumbnail_7 = value;
		Il2CppCodeGenWriteBarrier(&___thumbnail_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
