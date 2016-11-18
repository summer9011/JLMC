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

// UIControlCatch
struct  UIControlCatch_t3983032206  : public MonoBehaviour_t774292115
{
public:
	// System.Boolean UIControlCatch::switchFlagOfImage
	bool ___switchFlagOfImage_2;
	// System.Boolean UIControlCatch::switchFlagOfName
	bool ___switchFlagOfName_3;
	// System.Boolean UIControlCatch::switchFlagOfScence
	bool ___switchFlagOfScence_4;
	// UnityEngine.GameObject UIControlCatch::mGameManager
	GameObject_t1366199518 * ___mGameManager_5;

public:
	inline static int32_t get_offset_of_switchFlagOfImage_2() { return static_cast<int32_t>(offsetof(UIControlCatch_t3983032206, ___switchFlagOfImage_2)); }
	inline bool get_switchFlagOfImage_2() const { return ___switchFlagOfImage_2; }
	inline bool* get_address_of_switchFlagOfImage_2() { return &___switchFlagOfImage_2; }
	inline void set_switchFlagOfImage_2(bool value)
	{
		___switchFlagOfImage_2 = value;
	}

	inline static int32_t get_offset_of_switchFlagOfName_3() { return static_cast<int32_t>(offsetof(UIControlCatch_t3983032206, ___switchFlagOfName_3)); }
	inline bool get_switchFlagOfName_3() const { return ___switchFlagOfName_3; }
	inline bool* get_address_of_switchFlagOfName_3() { return &___switchFlagOfName_3; }
	inline void set_switchFlagOfName_3(bool value)
	{
		___switchFlagOfName_3 = value;
	}

	inline static int32_t get_offset_of_switchFlagOfScence_4() { return static_cast<int32_t>(offsetof(UIControlCatch_t3983032206, ___switchFlagOfScence_4)); }
	inline bool get_switchFlagOfScence_4() const { return ___switchFlagOfScence_4; }
	inline bool* get_address_of_switchFlagOfScence_4() { return &___switchFlagOfScence_4; }
	inline void set_switchFlagOfScence_4(bool value)
	{
		___switchFlagOfScence_4 = value;
	}

	inline static int32_t get_offset_of_mGameManager_5() { return static_cast<int32_t>(offsetof(UIControlCatch_t3983032206, ___mGameManager_5)); }
	inline GameObject_t1366199518 * get_mGameManager_5() const { return ___mGameManager_5; }
	inline GameObject_t1366199518 ** get_address_of_mGameManager_5() { return &___mGameManager_5; }
	inline void set_mGameManager_5(GameObject_t1366199518 * value)
	{
		___mGameManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___mGameManager_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
