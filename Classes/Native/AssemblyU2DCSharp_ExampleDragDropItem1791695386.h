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

#include "AssemblyU2DCSharp_UIDragDropItem4109477862.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleDragDropItem
struct  ExampleDragDropItem_t1791695386  : public UIDragDropItem_t4109477862
{
public:
	// UnityEngine.GameObject ExampleDragDropItem::prefab
	GameObject_t1366199518 * ___prefab_19;

public:
	inline static int32_t get_offset_of_prefab_19() { return static_cast<int32_t>(offsetof(ExampleDragDropItem_t1791695386, ___prefab_19)); }
	inline GameObject_t1366199518 * get_prefab_19() const { return ___prefab_19; }
	inline GameObject_t1366199518 ** get_address_of_prefab_19() { return &___prefab_19; }
	inline void set_prefab_19(GameObject_t1366199518 * value)
	{
		___prefab_19 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
