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
// MySpriteDetail
struct MySpriteDetail_t913424694;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MySpriteItem
struct  MySpriteItem_t3317553624  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject MySpriteItem::gameManager
	GameObject_t1366199518 * ___gameManager_2;
	// MySpriteDetail MySpriteItem::mMySpriteDetail
	MySpriteDetail_t913424694 * ___mMySpriteDetail_3;
	// UnityEngine.GameObject MySpriteItem::UIControl
	GameObject_t1366199518 * ___UIControl_4;

public:
	inline static int32_t get_offset_of_gameManager_2() { return static_cast<int32_t>(offsetof(MySpriteItem_t3317553624, ___gameManager_2)); }
	inline GameObject_t1366199518 * get_gameManager_2() const { return ___gameManager_2; }
	inline GameObject_t1366199518 ** get_address_of_gameManager_2() { return &___gameManager_2; }
	inline void set_gameManager_2(GameObject_t1366199518 * value)
	{
		___gameManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_2, value);
	}

	inline static int32_t get_offset_of_mMySpriteDetail_3() { return static_cast<int32_t>(offsetof(MySpriteItem_t3317553624, ___mMySpriteDetail_3)); }
	inline MySpriteDetail_t913424694 * get_mMySpriteDetail_3() const { return ___mMySpriteDetail_3; }
	inline MySpriteDetail_t913424694 ** get_address_of_mMySpriteDetail_3() { return &___mMySpriteDetail_3; }
	inline void set_mMySpriteDetail_3(MySpriteDetail_t913424694 * value)
	{
		___mMySpriteDetail_3 = value;
		Il2CppCodeGenWriteBarrier(&___mMySpriteDetail_3, value);
	}

	inline static int32_t get_offset_of_UIControl_4() { return static_cast<int32_t>(offsetof(MySpriteItem_t3317553624, ___UIControl_4)); }
	inline GameObject_t1366199518 * get_UIControl_4() const { return ___UIControl_4; }
	inline GameObject_t1366199518 ** get_address_of_UIControl_4() { return &___UIControl_4; }
	inline void set_UIControl_4(GameObject_t1366199518 * value)
	{
		___UIControl_4 = value;
		Il2CppCodeGenWriteBarrier(&___UIControl_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
