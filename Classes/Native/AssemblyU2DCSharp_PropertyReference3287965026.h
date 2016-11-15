#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Component
struct Component_t1078601330;
// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PropertyReference
struct  PropertyReference_t3287965026  : public Il2CppObject
{
public:
	// UnityEngine.Component PropertyReference::mTarget
	Component_t1078601330 * ___mTarget_0;
	// System.String PropertyReference::mName
	String_t* ___mName_1;
	// System.Reflection.FieldInfo PropertyReference::mField
	FieldInfo_t * ___mField_2;
	// System.Reflection.PropertyInfo PropertyReference::mProperty
	PropertyInfo_t * ___mProperty_3;

public:
	inline static int32_t get_offset_of_mTarget_0() { return static_cast<int32_t>(offsetof(PropertyReference_t3287965026, ___mTarget_0)); }
	inline Component_t1078601330 * get_mTarget_0() const { return ___mTarget_0; }
	inline Component_t1078601330 ** get_address_of_mTarget_0() { return &___mTarget_0; }
	inline void set_mTarget_0(Component_t1078601330 * value)
	{
		___mTarget_0 = value;
		Il2CppCodeGenWriteBarrier(&___mTarget_0, value);
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(PropertyReference_t3287965026, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier(&___mName_1, value);
	}

	inline static int32_t get_offset_of_mField_2() { return static_cast<int32_t>(offsetof(PropertyReference_t3287965026, ___mField_2)); }
	inline FieldInfo_t * get_mField_2() const { return ___mField_2; }
	inline FieldInfo_t ** get_address_of_mField_2() { return &___mField_2; }
	inline void set_mField_2(FieldInfo_t * value)
	{
		___mField_2 = value;
		Il2CppCodeGenWriteBarrier(&___mField_2, value);
	}

	inline static int32_t get_offset_of_mProperty_3() { return static_cast<int32_t>(offsetof(PropertyReference_t3287965026, ___mProperty_3)); }
	inline PropertyInfo_t * get_mProperty_3() const { return ___mProperty_3; }
	inline PropertyInfo_t ** get_address_of_mProperty_3() { return &___mProperty_3; }
	inline void set_mProperty_3(PropertyInfo_t * value)
	{
		___mProperty_3 = value;
		Il2CppCodeGenWriteBarrier(&___mProperty_3, value);
	}
};

struct PropertyReference_t3287965026_StaticFields
{
public:
	// System.Int32 PropertyReference::s_Hash
	int32_t ___s_Hash_4;

public:
	inline static int32_t get_offset_of_s_Hash_4() { return static_cast<int32_t>(offsetof(PropertyReference_t3287965026_StaticFields, ___s_Hash_4)); }
	inline int32_t get_s_Hash_4() const { return ___s_Hash_4; }
	inline int32_t* get_address_of_s_Hash_4() { return &___s_Hash_4; }
	inline void set_s_Hash_4(int32_t value)
	{
		___s_Hash_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
