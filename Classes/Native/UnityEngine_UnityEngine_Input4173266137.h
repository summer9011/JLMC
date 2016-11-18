#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Gyroscope
struct Gyroscope_t1746339172;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t4173266137  : public Il2CppObject
{
public:

public:
};

struct Input_t4173266137_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t1746339172 * ___m_MainGyro_0;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t4173266137_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t1746339172 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t1746339172 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t1746339172 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_MainGyro_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
