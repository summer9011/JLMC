#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoodDetail
struct GoodDetail_t1652464060;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoodsItem
struct  GoodsItem_t1184035003  : public MonoBehaviour_t774292115
{
public:
	// GoodDetail GoodsItem::mGoodDetail
	GoodDetail_t1652464060 * ___mGoodDetail_2;
	// UnityEngine.GameObject GoodsItem::gameManager
	GameObject_t1366199518 * ___gameManager_3;

public:
	inline static int32_t get_offset_of_mGoodDetail_2() { return static_cast<int32_t>(offsetof(GoodsItem_t1184035003, ___mGoodDetail_2)); }
	inline GoodDetail_t1652464060 * get_mGoodDetail_2() const { return ___mGoodDetail_2; }
	inline GoodDetail_t1652464060 ** get_address_of_mGoodDetail_2() { return &___mGoodDetail_2; }
	inline void set_mGoodDetail_2(GoodDetail_t1652464060 * value)
	{
		___mGoodDetail_2 = value;
		Il2CppCodeGenWriteBarrier(&___mGoodDetail_2, value);
	}

	inline static int32_t get_offset_of_gameManager_3() { return static_cast<int32_t>(offsetof(GoodsItem_t1184035003, ___gameManager_3)); }
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
