#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InvEquipment
struct InvEquipment_t384603053;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EquipRandomItem
struct  EquipRandomItem_t1031555304  : public MonoBehaviour_t774292115
{
public:
	// InvEquipment EquipRandomItem::equipment
	InvEquipment_t384603053 * ___equipment_2;

public:
	inline static int32_t get_offset_of_equipment_2() { return static_cast<int32_t>(offsetof(EquipRandomItem_t1031555304, ___equipment_2)); }
	inline InvEquipment_t384603053 * get_equipment_2() const { return ___equipment_2; }
	inline InvEquipment_t384603053 ** get_address_of_equipment_2() { return &___equipment_2; }
	inline void set_equipment_2(InvEquipment_t384603053 * value)
	{
		___equipment_2 = value;
		Il2CppCodeGenWriteBarrier(&___equipment_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
