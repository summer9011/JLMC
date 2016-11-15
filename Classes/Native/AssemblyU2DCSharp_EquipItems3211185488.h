#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3315407976;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EquipItems
struct  EquipItems_t3211185488  : public MonoBehaviour_t774292115
{
public:
	// System.Int32[] EquipItems::itemIDs
	Int32U5BU5D_t3315407976* ___itemIDs_2;

public:
	inline static int32_t get_offset_of_itemIDs_2() { return static_cast<int32_t>(offsetof(EquipItems_t3211185488, ___itemIDs_2)); }
	inline Int32U5BU5D_t3315407976* get_itemIDs_2() const { return ___itemIDs_2; }
	inline Int32U5BU5D_t3315407976** get_address_of_itemIDs_2() { return &___itemIDs_2; }
	inline void set_itemIDs_2(Int32U5BU5D_t3315407976* value)
	{
		___itemIDs_2 = value;
		Il2CppCodeGenWriteBarrier(&___itemIDs_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
