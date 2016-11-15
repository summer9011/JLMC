#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Object
struct Object_t1181371020;
struct Object_t1181371020_marshaled_pinvoke;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventDelegate/Parameter
struct  Parameter_t1451795503  : public Il2CppObject
{
public:
	// UnityEngine.Object EventDelegate/Parameter::obj
	Object_t1181371020 * ___obj_0;
	// System.String EventDelegate/Parameter::field
	String_t* ___field_1;
	// System.Object EventDelegate/Parameter::mValue
	Il2CppObject * ___mValue_2;
	// System.Type EventDelegate/Parameter::expectedType
	Type_t * ___expectedType_3;
	// System.Boolean EventDelegate/Parameter::cached
	bool ___cached_4;
	// System.Reflection.PropertyInfo EventDelegate/Parameter::propInfo
	PropertyInfo_t * ___propInfo_5;
	// System.Reflection.FieldInfo EventDelegate/Parameter::fieldInfo
	FieldInfo_t * ___fieldInfo_6;

public:
	inline static int32_t get_offset_of_obj_0() { return static_cast<int32_t>(offsetof(Parameter_t1451795503, ___obj_0)); }
	inline Object_t1181371020 * get_obj_0() const { return ___obj_0; }
	inline Object_t1181371020 ** get_address_of_obj_0() { return &___obj_0; }
	inline void set_obj_0(Object_t1181371020 * value)
	{
		___obj_0 = value;
		Il2CppCodeGenWriteBarrier(&___obj_0, value);
	}

	inline static int32_t get_offset_of_field_1() { return static_cast<int32_t>(offsetof(Parameter_t1451795503, ___field_1)); }
	inline String_t* get_field_1() const { return ___field_1; }
	inline String_t** get_address_of_field_1() { return &___field_1; }
	inline void set_field_1(String_t* value)
	{
		___field_1 = value;
		Il2CppCodeGenWriteBarrier(&___field_1, value);
	}

	inline static int32_t get_offset_of_mValue_2() { return static_cast<int32_t>(offsetof(Parameter_t1451795503, ___mValue_2)); }
	inline Il2CppObject * get_mValue_2() const { return ___mValue_2; }
	inline Il2CppObject ** get_address_of_mValue_2() { return &___mValue_2; }
	inline void set_mValue_2(Il2CppObject * value)
	{
		___mValue_2 = value;
		Il2CppCodeGenWriteBarrier(&___mValue_2, value);
	}

	inline static int32_t get_offset_of_expectedType_3() { return static_cast<int32_t>(offsetof(Parameter_t1451795503, ___expectedType_3)); }
	inline Type_t * get_expectedType_3() const { return ___expectedType_3; }
	inline Type_t ** get_address_of_expectedType_3() { return &___expectedType_3; }
	inline void set_expectedType_3(Type_t * value)
	{
		___expectedType_3 = value;
		Il2CppCodeGenWriteBarrier(&___expectedType_3, value);
	}

	inline static int32_t get_offset_of_cached_4() { return static_cast<int32_t>(offsetof(Parameter_t1451795503, ___cached_4)); }
	inline bool get_cached_4() const { return ___cached_4; }
	inline bool* get_address_of_cached_4() { return &___cached_4; }
	inline void set_cached_4(bool value)
	{
		___cached_4 = value;
	}

	inline static int32_t get_offset_of_propInfo_5() { return static_cast<int32_t>(offsetof(Parameter_t1451795503, ___propInfo_5)); }
	inline PropertyInfo_t * get_propInfo_5() const { return ___propInfo_5; }
	inline PropertyInfo_t ** get_address_of_propInfo_5() { return &___propInfo_5; }
	inline void set_propInfo_5(PropertyInfo_t * value)
	{
		___propInfo_5 = value;
		Il2CppCodeGenWriteBarrier(&___propInfo_5, value);
	}

	inline static int32_t get_offset_of_fieldInfo_6() { return static_cast<int32_t>(offsetof(Parameter_t1451795503, ___fieldInfo_6)); }
	inline FieldInfo_t * get_fieldInfo_6() const { return ___fieldInfo_6; }
	inline FieldInfo_t ** get_address_of_fieldInfo_6() { return &___fieldInfo_6; }
	inline void set_fieldInfo_6(FieldInfo_t * value)
	{
		___fieldInfo_6 = value;
		Il2CppCodeGenWriteBarrier(&___fieldInfo_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
