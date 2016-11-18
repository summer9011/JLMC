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

// DontDestroy
struct  DontDestroy_t3901757661  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject DontDestroy::model
	GameObject_t1366199518 * ___model_2;
	// UnityEngine.GameObject DontDestroy::Scenceimage
	GameObject_t1366199518 * ___Scenceimage_3;

public:
	inline static int32_t get_offset_of_model_2() { return static_cast<int32_t>(offsetof(DontDestroy_t3901757661, ___model_2)); }
	inline GameObject_t1366199518 * get_model_2() const { return ___model_2; }
	inline GameObject_t1366199518 ** get_address_of_model_2() { return &___model_2; }
	inline void set_model_2(GameObject_t1366199518 * value)
	{
		___model_2 = value;
		Il2CppCodeGenWriteBarrier(&___model_2, value);
	}

	inline static int32_t get_offset_of_Scenceimage_3() { return static_cast<int32_t>(offsetof(DontDestroy_t3901757661, ___Scenceimage_3)); }
	inline GameObject_t1366199518 * get_Scenceimage_3() const { return ___Scenceimage_3; }
	inline GameObject_t1366199518 ** get_address_of_Scenceimage_3() { return &___Scenceimage_3; }
	inline void set_Scenceimage_3(GameObject_t1366199518 * value)
	{
		___Scenceimage_3 = value;
		Il2CppCodeGenWriteBarrier(&___Scenceimage_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
