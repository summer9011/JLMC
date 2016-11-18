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
// GroupPhotoMain
struct GroupPhotoMain_t323661952;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIControlGroupPhoto
struct  UIControlGroupPhoto_t3169531466  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject UIControlGroupPhoto::mGameManager
	GameObject_t1366199518 * ___mGameManager_2;
	// GroupPhotoMain UIControlGroupPhoto::mGroupPhotoMain
	GroupPhotoMain_t323661952 * ___mGroupPhotoMain_3;

public:
	inline static int32_t get_offset_of_mGameManager_2() { return static_cast<int32_t>(offsetof(UIControlGroupPhoto_t3169531466, ___mGameManager_2)); }
	inline GameObject_t1366199518 * get_mGameManager_2() const { return ___mGameManager_2; }
	inline GameObject_t1366199518 ** get_address_of_mGameManager_2() { return &___mGameManager_2; }
	inline void set_mGameManager_2(GameObject_t1366199518 * value)
	{
		___mGameManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___mGameManager_2, value);
	}

	inline static int32_t get_offset_of_mGroupPhotoMain_3() { return static_cast<int32_t>(offsetof(UIControlGroupPhoto_t3169531466, ___mGroupPhotoMain_3)); }
	inline GroupPhotoMain_t323661952 * get_mGroupPhotoMain_3() const { return ___mGroupPhotoMain_3; }
	inline GroupPhotoMain_t323661952 ** get_address_of_mGroupPhotoMain_3() { return &___mGroupPhotoMain_3; }
	inline void set_mGroupPhotoMain_3(GroupPhotoMain_t323661952 * value)
	{
		___mGroupPhotoMain_3 = value;
		Il2CppCodeGenWriteBarrier(&___mGroupPhotoMain_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
