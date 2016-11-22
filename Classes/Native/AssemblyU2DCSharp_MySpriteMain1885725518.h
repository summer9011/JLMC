#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t1468494371;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MySpriteMain
struct  MySpriteMain_t1885725518  : public MonoBehaviour_t774292115
{
public:
	// System.Collections.ArrayList MySpriteMain::totalMySpriteDetail
	ArrayList_t1468494371 * ___totalMySpriteDetail_2;
	// UnityEngine.GameObject MySpriteMain::mSceneLoadImage
	GameObject_t1366199518 * ___mSceneLoadImage_3;
	// System.Int32 MySpriteMain::MaxIEnumerator
	int32_t ___MaxIEnumerator_4;
	// System.Int32 MySpriteMain::currIEnumerator
	int32_t ___currIEnumerator_5;

public:
	inline static int32_t get_offset_of_totalMySpriteDetail_2() { return static_cast<int32_t>(offsetof(MySpriteMain_t1885725518, ___totalMySpriteDetail_2)); }
	inline ArrayList_t1468494371 * get_totalMySpriteDetail_2() const { return ___totalMySpriteDetail_2; }
	inline ArrayList_t1468494371 ** get_address_of_totalMySpriteDetail_2() { return &___totalMySpriteDetail_2; }
	inline void set_totalMySpriteDetail_2(ArrayList_t1468494371 * value)
	{
		___totalMySpriteDetail_2 = value;
		Il2CppCodeGenWriteBarrier(&___totalMySpriteDetail_2, value);
	}

	inline static int32_t get_offset_of_mSceneLoadImage_3() { return static_cast<int32_t>(offsetof(MySpriteMain_t1885725518, ___mSceneLoadImage_3)); }
	inline GameObject_t1366199518 * get_mSceneLoadImage_3() const { return ___mSceneLoadImage_3; }
	inline GameObject_t1366199518 ** get_address_of_mSceneLoadImage_3() { return &___mSceneLoadImage_3; }
	inline void set_mSceneLoadImage_3(GameObject_t1366199518 * value)
	{
		___mSceneLoadImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___mSceneLoadImage_3, value);
	}

	inline static int32_t get_offset_of_MaxIEnumerator_4() { return static_cast<int32_t>(offsetof(MySpriteMain_t1885725518, ___MaxIEnumerator_4)); }
	inline int32_t get_MaxIEnumerator_4() const { return ___MaxIEnumerator_4; }
	inline int32_t* get_address_of_MaxIEnumerator_4() { return &___MaxIEnumerator_4; }
	inline void set_MaxIEnumerator_4(int32_t value)
	{
		___MaxIEnumerator_4 = value;
	}

	inline static int32_t get_offset_of_currIEnumerator_5() { return static_cast<int32_t>(offsetof(MySpriteMain_t1885725518, ___currIEnumerator_5)); }
	inline int32_t get_currIEnumerator_5() const { return ___currIEnumerator_5; }
	inline int32_t* get_address_of_currIEnumerator_5() { return &___currIEnumerator_5; }
	inline void set_currIEnumerator_5(int32_t value)
	{
		___currIEnumerator_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
