#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t2088154582;
// UnityEngine.Collider2D
struct Collider2D_t445179443;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t3920422848;

#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t2886048419  : public Il2CppObject
{
public:
	// UnityEngine.Rigidbody2D UnityEngine.Collision2D::m_Rigidbody
	Rigidbody2D_t2088154582 * ___m_Rigidbody_0;
	// UnityEngine.Collider2D UnityEngine.Collision2D::m_Collider
	Collider2D_t445179443 * ___m_Collider_1;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_Contacts
	ContactPoint2DU5BU5D_t3920422848* ___m_Contacts_2;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t465617798  ___m_RelativeVelocity_3;
	// System.Boolean UnityEngine.Collision2D::m_Enabled
	bool ___m_Enabled_4;

public:
	inline static int32_t get_offset_of_m_Rigidbody_0() { return static_cast<int32_t>(offsetof(Collision2D_t2886048419, ___m_Rigidbody_0)); }
	inline Rigidbody2D_t2088154582 * get_m_Rigidbody_0() const { return ___m_Rigidbody_0; }
	inline Rigidbody2D_t2088154582 ** get_address_of_m_Rigidbody_0() { return &___m_Rigidbody_0; }
	inline void set_m_Rigidbody_0(Rigidbody2D_t2088154582 * value)
	{
		___m_Rigidbody_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_0, value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(Collision2D_t2886048419, ___m_Collider_1)); }
	inline Collider2D_t445179443 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider2D_t445179443 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider2D_t445179443 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Collider_1, value);
	}

	inline static int32_t get_offset_of_m_Contacts_2() { return static_cast<int32_t>(offsetof(Collision2D_t2886048419, ___m_Contacts_2)); }
	inline ContactPoint2DU5BU5D_t3920422848* get_m_Contacts_2() const { return ___m_Contacts_2; }
	inline ContactPoint2DU5BU5D_t3920422848** get_address_of_m_Contacts_2() { return &___m_Contacts_2; }
	inline void set_m_Contacts_2(ContactPoint2DU5BU5D_t3920422848* value)
	{
		___m_Contacts_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Contacts_2, value);
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_3() { return static_cast<int32_t>(offsetof(Collision2D_t2886048419, ___m_RelativeVelocity_3)); }
	inline Vector2_t465617798  get_m_RelativeVelocity_3() const { return ___m_RelativeVelocity_3; }
	inline Vector2_t465617798 * get_address_of_m_RelativeVelocity_3() { return &___m_RelativeVelocity_3; }
	inline void set_m_RelativeVelocity_3(Vector2_t465617798  value)
	{
		___m_RelativeVelocity_3 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_4() { return static_cast<int32_t>(offsetof(Collision2D_t2886048419, ___m_Enabled_4)); }
	inline bool get_m_Enabled_4() const { return ___m_Enabled_4; }
	inline bool* get_address_of_m_Enabled_4() { return &___m_Enabled_4; }
	inline void set_m_Enabled_4(bool value)
	{
		___m_Enabled_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
