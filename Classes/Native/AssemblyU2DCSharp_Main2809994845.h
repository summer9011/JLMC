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

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Main
struct  Main_t2809994845  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject Main::mScenceLoadImage
	GameObject_t1366199518 * ___mScenceLoadImage_2;

public:
	inline static int32_t get_offset_of_mScenceLoadImage_2() { return static_cast<int32_t>(offsetof(Main_t2809994845, ___mScenceLoadImage_2)); }
	inline GameObject_t1366199518 * get_mScenceLoadImage_2() const { return ___mScenceLoadImage_2; }
	inline GameObject_t1366199518 ** get_address_of_mScenceLoadImage_2() { return &___mScenceLoadImage_2; }
	inline void set_mScenceLoadImage_2(GameObject_t1366199518 * value)
	{
		___mScenceLoadImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___mScenceLoadImage_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
