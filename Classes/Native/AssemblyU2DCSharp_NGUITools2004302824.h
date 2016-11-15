#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioListener
struct AudioListener_t2109973415;
// UnityEngine.AudioClip
struct AudioClip_t3927647597;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t897805512;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NGUITools
struct  NGUITools_t2004302824  : public Il2CppObject
{
public:

public:
};

struct NGUITools_t2004302824_StaticFields
{
public:
	// UnityEngine.AudioListener NGUITools::mListener
	AudioListener_t2109973415 * ___mListener_0;
	// System.Boolean NGUITools::mLoaded
	bool ___mLoaded_1;
	// System.Single NGUITools::mGlobalVolume
	float ___mGlobalVolume_2;
	// System.Single NGUITools::mLastTimestamp
	float ___mLastTimestamp_3;
	// UnityEngine.AudioClip NGUITools::mLastClip
	AudioClip_t3927647597 * ___mLastClip_4;
	// UnityEngine.Vector3[] NGUITools::mSides
	Vector3U5BU5D_t897805512* ___mSides_5;

public:
	inline static int32_t get_offset_of_mListener_0() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mListener_0)); }
	inline AudioListener_t2109973415 * get_mListener_0() const { return ___mListener_0; }
	inline AudioListener_t2109973415 ** get_address_of_mListener_0() { return &___mListener_0; }
	inline void set_mListener_0(AudioListener_t2109973415 * value)
	{
		___mListener_0 = value;
		Il2CppCodeGenWriteBarrier(&___mListener_0, value);
	}

	inline static int32_t get_offset_of_mLoaded_1() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mLoaded_1)); }
	inline bool get_mLoaded_1() const { return ___mLoaded_1; }
	inline bool* get_address_of_mLoaded_1() { return &___mLoaded_1; }
	inline void set_mLoaded_1(bool value)
	{
		___mLoaded_1 = value;
	}

	inline static int32_t get_offset_of_mGlobalVolume_2() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mGlobalVolume_2)); }
	inline float get_mGlobalVolume_2() const { return ___mGlobalVolume_2; }
	inline float* get_address_of_mGlobalVolume_2() { return &___mGlobalVolume_2; }
	inline void set_mGlobalVolume_2(float value)
	{
		___mGlobalVolume_2 = value;
	}

	inline static int32_t get_offset_of_mLastTimestamp_3() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mLastTimestamp_3)); }
	inline float get_mLastTimestamp_3() const { return ___mLastTimestamp_3; }
	inline float* get_address_of_mLastTimestamp_3() { return &___mLastTimestamp_3; }
	inline void set_mLastTimestamp_3(float value)
	{
		___mLastTimestamp_3 = value;
	}

	inline static int32_t get_offset_of_mLastClip_4() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mLastClip_4)); }
	inline AudioClip_t3927647597 * get_mLastClip_4() const { return ___mLastClip_4; }
	inline AudioClip_t3927647597 ** get_address_of_mLastClip_4() { return &___mLastClip_4; }
	inline void set_mLastClip_4(AudioClip_t3927647597 * value)
	{
		___mLastClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___mLastClip_4, value);
	}

	inline static int32_t get_offset_of_mSides_5() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mSides_5)); }
	inline Vector3U5BU5D_t897805512* get_mSides_5() const { return ___mSides_5; }
	inline Vector3U5BU5D_t897805512** get_address_of_mSides_5() { return &___mSides_5; }
	inline void set_mSides_5(Vector3U5BU5D_t897805512* value)
	{
		___mSides_5 = value;
		Il2CppCodeGenWriteBarrier(&___mSides_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
