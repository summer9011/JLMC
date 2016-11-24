#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LitJson.JSONNode
struct JSONNode_t1109731523;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CatchMain
struct  CatchMain_t3787564590  : public MonoBehaviour_t774292115
{
public:
	// LitJson.JSONNode CatchMain::detail
	JSONNode_t1109731523 * ___detail_2;
	// UnityEngine.GameObject CatchMain::MySprite3D
	GameObject_t1366199518 * ___MySprite3D_3;
	// UnityEngine.GameObject CatchMain::CatchQuan
	GameObject_t1366199518 * ___CatchQuan_4;
	// System.Int32 CatchMain::ScenceCode
	int32_t ___ScenceCode_5;

public:
	inline static int32_t get_offset_of_detail_2() { return static_cast<int32_t>(offsetof(CatchMain_t3787564590, ___detail_2)); }
	inline JSONNode_t1109731523 * get_detail_2() const { return ___detail_2; }
	inline JSONNode_t1109731523 ** get_address_of_detail_2() { return &___detail_2; }
	inline void set_detail_2(JSONNode_t1109731523 * value)
	{
		___detail_2 = value;
		Il2CppCodeGenWriteBarrier(&___detail_2, value);
	}

	inline static int32_t get_offset_of_MySprite3D_3() { return static_cast<int32_t>(offsetof(CatchMain_t3787564590, ___MySprite3D_3)); }
	inline GameObject_t1366199518 * get_MySprite3D_3() const { return ___MySprite3D_3; }
	inline GameObject_t1366199518 ** get_address_of_MySprite3D_3() { return &___MySprite3D_3; }
	inline void set_MySprite3D_3(GameObject_t1366199518 * value)
	{
		___MySprite3D_3 = value;
		Il2CppCodeGenWriteBarrier(&___MySprite3D_3, value);
	}

	inline static int32_t get_offset_of_CatchQuan_4() { return static_cast<int32_t>(offsetof(CatchMain_t3787564590, ___CatchQuan_4)); }
	inline GameObject_t1366199518 * get_CatchQuan_4() const { return ___CatchQuan_4; }
	inline GameObject_t1366199518 ** get_address_of_CatchQuan_4() { return &___CatchQuan_4; }
	inline void set_CatchQuan_4(GameObject_t1366199518 * value)
	{
		___CatchQuan_4 = value;
		Il2CppCodeGenWriteBarrier(&___CatchQuan_4, value);
	}

	inline static int32_t get_offset_of_ScenceCode_5() { return static_cast<int32_t>(offsetof(CatchMain_t3787564590, ___ScenceCode_5)); }
	inline int32_t get_ScenceCode_5() const { return ___ScenceCode_5; }
	inline int32_t* get_address_of_ScenceCode_5() { return &___ScenceCode_5; }
	inline void set_ScenceCode_5(int32_t value)
	{
		___ScenceCode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
