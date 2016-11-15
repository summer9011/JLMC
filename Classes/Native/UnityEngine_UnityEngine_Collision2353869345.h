#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1071364940;
// UnityEngine.Collider
struct Collider_t2798266161;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t138408958;

#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t2353869345  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t465617797  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t465617797  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t1071364940 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t2798266161 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t138408958* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t2353869345, ___m_Impulse_0)); }
	inline Vector3_t465617797  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t465617797 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t465617797  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t2353869345, ___m_RelativeVelocity_1)); }
	inline Vector3_t465617797  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t465617797 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t465617797  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t2353869345, ___m_Rigidbody_2)); }
	inline Rigidbody_t1071364940 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t1071364940 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t1071364940 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_2, value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t2353869345, ___m_Collider_3)); }
	inline Collider_t2798266161 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t2798266161 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t2798266161 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Collider_3, value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t2353869345, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t138408958* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t138408958** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t138408958* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Contacts_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
