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

// UIControlMySpirit
struct  UIControlMySpirit_t24001844  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject UIControlMySpirit::SceneLoadImage
	GameObject_t1366199518 * ___SceneLoadImage_2;
	// UnityEngine.GameObject UIControlMySpirit::SceneUI
	GameObject_t1366199518 * ___SceneUI_3;

public:
	inline static int32_t get_offset_of_SceneLoadImage_2() { return static_cast<int32_t>(offsetof(UIControlMySpirit_t24001844, ___SceneLoadImage_2)); }
	inline GameObject_t1366199518 * get_SceneLoadImage_2() const { return ___SceneLoadImage_2; }
	inline GameObject_t1366199518 ** get_address_of_SceneLoadImage_2() { return &___SceneLoadImage_2; }
	inline void set_SceneLoadImage_2(GameObject_t1366199518 * value)
	{
		___SceneLoadImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___SceneLoadImage_2, value);
	}

	inline static int32_t get_offset_of_SceneUI_3() { return static_cast<int32_t>(offsetof(UIControlMySpirit_t24001844, ___SceneUI_3)); }
	inline GameObject_t1366199518 * get_SceneUI_3() const { return ___SceneUI_3; }
	inline GameObject_t1366199518 ** get_address_of_SceneUI_3() { return &___SceneUI_3; }
	inline void set_SceneUI_3(GameObject_t1366199518 * value)
	{
		___SceneUI_3 = value;
		Il2CppCodeGenWriteBarrier(&___SceneUI_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
