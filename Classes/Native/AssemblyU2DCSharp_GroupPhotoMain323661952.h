#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MySpriteDetail
struct MySpriteDetail_t913424694;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GroupPhotoMain
struct  GroupPhotoMain_t323661952  : public MonoBehaviour_t774292115
{
public:
	// MySpriteDetail GroupPhotoMain::mMySpriteDetail
	MySpriteDetail_t913424694 * ___mMySpriteDetail_2;
	// UnityEngine.GameObject GroupPhotoMain::gameManager
	GameObject_t1366199518 * ___gameManager_3;
	// UnityEngine.GameObject GroupPhotoMain::Sprite3D
	GameObject_t1366199518 * ___Sprite3D_4;

public:
	inline static int32_t get_offset_of_mMySpriteDetail_2() { return static_cast<int32_t>(offsetof(GroupPhotoMain_t323661952, ___mMySpriteDetail_2)); }
	inline MySpriteDetail_t913424694 * get_mMySpriteDetail_2() const { return ___mMySpriteDetail_2; }
	inline MySpriteDetail_t913424694 ** get_address_of_mMySpriteDetail_2() { return &___mMySpriteDetail_2; }
	inline void set_mMySpriteDetail_2(MySpriteDetail_t913424694 * value)
	{
		___mMySpriteDetail_2 = value;
		Il2CppCodeGenWriteBarrier(&___mMySpriteDetail_2, value);
	}

	inline static int32_t get_offset_of_gameManager_3() { return static_cast<int32_t>(offsetof(GroupPhotoMain_t323661952, ___gameManager_3)); }
	inline GameObject_t1366199518 * get_gameManager_3() const { return ___gameManager_3; }
	inline GameObject_t1366199518 ** get_address_of_gameManager_3() { return &___gameManager_3; }
	inline void set_gameManager_3(GameObject_t1366199518 * value)
	{
		___gameManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_3, value);
	}

	inline static int32_t get_offset_of_Sprite3D_4() { return static_cast<int32_t>(offsetof(GroupPhotoMain_t323661952, ___Sprite3D_4)); }
	inline GameObject_t1366199518 * get_Sprite3D_4() const { return ___Sprite3D_4; }
	inline GameObject_t1366199518 ** get_address_of_Sprite3D_4() { return &___Sprite3D_4; }
	inline void set_Sprite3D_4(GameObject_t1366199518 * value)
	{
		___Sprite3D_4 = value;
		Il2CppCodeGenWriteBarrier(&___Sprite3D_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
