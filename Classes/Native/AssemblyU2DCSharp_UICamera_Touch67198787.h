#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_TouchPhase3373375299.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera/Touch
struct  Touch_t67198787  : public Il2CppObject
{
public:
	// System.Int32 UICamera/Touch::fingerId
	int32_t ___fingerId_0;
	// UnityEngine.TouchPhase UICamera/Touch::phase
	int32_t ___phase_1;
	// UnityEngine.Vector2 UICamera/Touch::position
	Vector2_t465617798  ___position_2;
	// System.Int32 UICamera/Touch::tapCount
	int32_t ___tapCount_3;

public:
	inline static int32_t get_offset_of_fingerId_0() { return static_cast<int32_t>(offsetof(Touch_t67198787, ___fingerId_0)); }
	inline int32_t get_fingerId_0() const { return ___fingerId_0; }
	inline int32_t* get_address_of_fingerId_0() { return &___fingerId_0; }
	inline void set_fingerId_0(int32_t value)
	{
		___fingerId_0 = value;
	}

	inline static int32_t get_offset_of_phase_1() { return static_cast<int32_t>(offsetof(Touch_t67198787, ___phase_1)); }
	inline int32_t get_phase_1() const { return ___phase_1; }
	inline int32_t* get_address_of_phase_1() { return &___phase_1; }
	inline void set_phase_1(int32_t value)
	{
		___phase_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(Touch_t67198787, ___position_2)); }
	inline Vector2_t465617798  get_position_2() const { return ___position_2; }
	inline Vector2_t465617798 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector2_t465617798  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_tapCount_3() { return static_cast<int32_t>(offsetof(Touch_t67198787, ___tapCount_3)); }
	inline int32_t get_tapCount_3() const { return ___tapCount_3; }
	inline int32_t* get_address_of_tapCount_3() { return &___tapCount_3; }
	inline void set_tapCount_3(int32_t value)
	{
		___tapCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
