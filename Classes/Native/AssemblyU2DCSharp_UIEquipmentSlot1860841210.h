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

#include "AssemblyU2DCSharp_UIItemSlot676407275.h"
#include "AssemblyU2DCSharp_InvBaseItem_Slot2521022228.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIEquipmentSlot
struct  UIEquipmentSlot_t1860841210  : public UIItemSlot_t676407275
{
public:
	// InvEquipment UIEquipmentSlot::equipment
	InvEquipment_t384603053 * ___equipment_11;
	// InvBaseItem/Slot UIEquipmentSlot::slot
	int32_t ___slot_12;

public:
	inline static int32_t get_offset_of_equipment_11() { return static_cast<int32_t>(offsetof(UIEquipmentSlot_t1860841210, ___equipment_11)); }
	inline InvEquipment_t384603053 * get_equipment_11() const { return ___equipment_11; }
	inline InvEquipment_t384603053 ** get_address_of_equipment_11() { return &___equipment_11; }
	inline void set_equipment_11(InvEquipment_t384603053 * value)
	{
		___equipment_11 = value;
		Il2CppCodeGenWriteBarrier(&___equipment_11, value);
	}

	inline static int32_t get_offset_of_slot_12() { return static_cast<int32_t>(offsetof(UIEquipmentSlot_t1860841210, ___slot_12)); }
	inline int32_t get_slot_12() const { return ___slot_12; }
	inline int32_t* get_address_of_slot_12() { return &___slot_12; }
	inline void set_slot_12(int32_t value)
	{
		___slot_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
