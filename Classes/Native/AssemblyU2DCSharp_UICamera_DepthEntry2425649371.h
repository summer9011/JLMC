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

#include "mscorlib_System_ValueType4028081426.h"
#include "UnityEngine_UnityEngine_RaycastHit317570005.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera/DepthEntry
struct  DepthEntry_t2425649371 
{
public:
	// System.Int32 UICamera/DepthEntry::depth
	int32_t ___depth_0;
	// UnityEngine.RaycastHit UICamera/DepthEntry::hit
	RaycastHit_t317570005  ___hit_1;
	// UnityEngine.Vector3 UICamera/DepthEntry::point
	Vector3_t465617797  ___point_2;
	// UnityEngine.GameObject UICamera/DepthEntry::go
	GameObject_t1366199518 * ___go_3;

public:
	inline static int32_t get_offset_of_depth_0() { return static_cast<int32_t>(offsetof(DepthEntry_t2425649371, ___depth_0)); }
	inline int32_t get_depth_0() const { return ___depth_0; }
	inline int32_t* get_address_of_depth_0() { return &___depth_0; }
	inline void set_depth_0(int32_t value)
	{
		___depth_0 = value;
	}

	inline static int32_t get_offset_of_hit_1() { return static_cast<int32_t>(offsetof(DepthEntry_t2425649371, ___hit_1)); }
	inline RaycastHit_t317570005  get_hit_1() const { return ___hit_1; }
	inline RaycastHit_t317570005 * get_address_of_hit_1() { return &___hit_1; }
	inline void set_hit_1(RaycastHit_t317570005  value)
	{
		___hit_1 = value;
	}

	inline static int32_t get_offset_of_point_2() { return static_cast<int32_t>(offsetof(DepthEntry_t2425649371, ___point_2)); }
	inline Vector3_t465617797  get_point_2() const { return ___point_2; }
	inline Vector3_t465617797 * get_address_of_point_2() { return &___point_2; }
	inline void set_point_2(Vector3_t465617797  value)
	{
		___point_2 = value;
	}

	inline static int32_t get_offset_of_go_3() { return static_cast<int32_t>(offsetof(DepthEntry_t2425649371, ___go_3)); }
	inline GameObject_t1366199518 * get_go_3() const { return ___go_3; }
	inline GameObject_t1366199518 ** get_address_of_go_3() { return &___go_3; }
	inline void set_go_3(GameObject_t1366199518 * value)
	{
		___go_3 = value;
		Il2CppCodeGenWriteBarrier(&___go_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
