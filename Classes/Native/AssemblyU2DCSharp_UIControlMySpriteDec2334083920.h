﻿#pragma once

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

// UIControlMySpriteDec
struct  UIControlMySpriteDec_t2334083920  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject UIControlMySpriteDec::SceneLoadImage
	GameObject_t1366199518 * ___SceneLoadImage_2;
	// UnityEngine.GameObject UIControlMySpriteDec::SceneUI
	GameObject_t1366199518 * ___SceneUI_3;
	// UnityEngine.GameObject UIControlMySpriteDec::GiftDialog
	GameObject_t1366199518 * ___GiftDialog_4;

public:
	inline static int32_t get_offset_of_SceneLoadImage_2() { return static_cast<int32_t>(offsetof(UIControlMySpriteDec_t2334083920, ___SceneLoadImage_2)); }
	inline GameObject_t1366199518 * get_SceneLoadImage_2() const { return ___SceneLoadImage_2; }
	inline GameObject_t1366199518 ** get_address_of_SceneLoadImage_2() { return &___SceneLoadImage_2; }
	inline void set_SceneLoadImage_2(GameObject_t1366199518 * value)
	{
		___SceneLoadImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___SceneLoadImage_2, value);
	}

	inline static int32_t get_offset_of_SceneUI_3() { return static_cast<int32_t>(offsetof(UIControlMySpriteDec_t2334083920, ___SceneUI_3)); }
	inline GameObject_t1366199518 * get_SceneUI_3() const { return ___SceneUI_3; }
	inline GameObject_t1366199518 ** get_address_of_SceneUI_3() { return &___SceneUI_3; }
	inline void set_SceneUI_3(GameObject_t1366199518 * value)
	{
		___SceneUI_3 = value;
		Il2CppCodeGenWriteBarrier(&___SceneUI_3, value);
	}

	inline static int32_t get_offset_of_GiftDialog_4() { return static_cast<int32_t>(offsetof(UIControlMySpriteDec_t2334083920, ___GiftDialog_4)); }
	inline GameObject_t1366199518 * get_GiftDialog_4() const { return ___GiftDialog_4; }
	inline GameObject_t1366199518 ** get_address_of_GiftDialog_4() { return &___GiftDialog_4; }
	inline void set_GiftDialog_4(GameObject_t1366199518 * value)
	{
		___GiftDialog_4 = value;
		Il2CppCodeGenWriteBarrier(&___GiftDialog_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
