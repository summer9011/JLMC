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
#include "AssemblyU2DCSharp_InvBaseItem_Slot2521022228.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InvAttachmentPoint
struct  InvAttachmentPoint_t1179389824  : public MonoBehaviour_t774292115
{
public:
	// InvBaseItem/Slot InvAttachmentPoint::slot
	int32_t ___slot_2;
	// UnityEngine.GameObject InvAttachmentPoint::mPrefab
	GameObject_t1366199518 * ___mPrefab_3;
	// UnityEngine.GameObject InvAttachmentPoint::mChild
	GameObject_t1366199518 * ___mChild_4;

public:
	inline static int32_t get_offset_of_slot_2() { return static_cast<int32_t>(offsetof(InvAttachmentPoint_t1179389824, ___slot_2)); }
	inline int32_t get_slot_2() const { return ___slot_2; }
	inline int32_t* get_address_of_slot_2() { return &___slot_2; }
	inline void set_slot_2(int32_t value)
	{
		___slot_2 = value;
	}

	inline static int32_t get_offset_of_mPrefab_3() { return static_cast<int32_t>(offsetof(InvAttachmentPoint_t1179389824, ___mPrefab_3)); }
	inline GameObject_t1366199518 * get_mPrefab_3() const { return ___mPrefab_3; }
	inline GameObject_t1366199518 ** get_address_of_mPrefab_3() { return &___mPrefab_3; }
	inline void set_mPrefab_3(GameObject_t1366199518 * value)
	{
		___mPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___mPrefab_3, value);
	}

	inline static int32_t get_offset_of_mChild_4() { return static_cast<int32_t>(offsetof(InvAttachmentPoint_t1179389824, ___mChild_4)); }
	inline GameObject_t1366199518 * get_mChild_4() const { return ___mChild_4; }
	inline GameObject_t1366199518 ** get_address_of_mChild_4() { return &___mChild_4; }
	inline void set_mChild_4(GameObject_t1366199518 * value)
	{
		___mChild_4 = value;
		Il2CppCodeGenWriteBarrier(&___mChild_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
