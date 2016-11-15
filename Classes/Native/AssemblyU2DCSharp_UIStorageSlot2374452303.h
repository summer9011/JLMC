#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIItemStorage
struct UIItemStorage_t2717295570;

#include "AssemblyU2DCSharp_UIItemSlot676407275.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIStorageSlot
struct  UIStorageSlot_t2374452303  : public UIItemSlot_t676407275
{
public:
	// UIItemStorage UIStorageSlot::storage
	UIItemStorage_t2717295570 * ___storage_11;
	// System.Int32 UIStorageSlot::slot
	int32_t ___slot_12;

public:
	inline static int32_t get_offset_of_storage_11() { return static_cast<int32_t>(offsetof(UIStorageSlot_t2374452303, ___storage_11)); }
	inline UIItemStorage_t2717295570 * get_storage_11() const { return ___storage_11; }
	inline UIItemStorage_t2717295570 ** get_address_of_storage_11() { return &___storage_11; }
	inline void set_storage_11(UIItemStorage_t2717295570 * value)
	{
		___storage_11 = value;
		Il2CppCodeGenWriteBarrier(&___storage_11, value);
	}

	inline static int32_t get_offset_of_slot_12() { return static_cast<int32_t>(offsetof(UIStorageSlot_t2374452303, ___slot_12)); }
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
