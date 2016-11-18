#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Gift
struct Gift_t450896550;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GiftsItem
struct  GiftsItem_t1274332604  : public MonoBehaviour_t774292115
{
public:
	// Gift GiftsItem::mGift
	Gift_t450896550 * ___mGift_2;
	// UnityEngine.GameObject GiftsItem::gameManager
	GameObject_t1366199518 * ___gameManager_3;

public:
	inline static int32_t get_offset_of_mGift_2() { return static_cast<int32_t>(offsetof(GiftsItem_t1274332604, ___mGift_2)); }
	inline Gift_t450896550 * get_mGift_2() const { return ___mGift_2; }
	inline Gift_t450896550 ** get_address_of_mGift_2() { return &___mGift_2; }
	inline void set_mGift_2(Gift_t450896550 * value)
	{
		___mGift_2 = value;
		Il2CppCodeGenWriteBarrier(&___mGift_2, value);
	}

	inline static int32_t get_offset_of_gameManager_3() { return static_cast<int32_t>(offsetof(GiftsItem_t1274332604, ___gameManager_3)); }
	inline GameObject_t1366199518 * get_gameManager_3() const { return ___gameManager_3; }
	inline GameObject_t1366199518 ** get_address_of_gameManager_3() { return &___gameManager_3; }
	inline void set_gameManager_3(GameObject_t1366199518 * value)
	{
		___gameManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
