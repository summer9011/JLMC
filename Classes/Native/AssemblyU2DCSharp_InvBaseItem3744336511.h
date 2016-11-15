#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<InvStat>
struct List_1_t2520600592;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// UIAtlas
struct UIAtlas_t1304615221;

#include "mscorlib_System_Object707969140.h"
#include "AssemblyU2DCSharp_InvBaseItem_Slot2521022228.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InvBaseItem
struct  InvBaseItem_t3744336511  : public Il2CppObject
{
public:
	// System.Int32 InvBaseItem::id16
	int32_t ___id16_0;
	// System.String InvBaseItem::name
	String_t* ___name_1;
	// System.String InvBaseItem::description
	String_t* ___description_2;
	// InvBaseItem/Slot InvBaseItem::slot
	int32_t ___slot_3;
	// System.Int32 InvBaseItem::minItemLevel
	int32_t ___minItemLevel_4;
	// System.Int32 InvBaseItem::maxItemLevel
	int32_t ___maxItemLevel_5;
	// System.Collections.Generic.List`1<InvStat> InvBaseItem::stats
	List_1_t2520600592 * ___stats_6;
	// UnityEngine.GameObject InvBaseItem::attachment
	GameObject_t1366199518 * ___attachment_7;
	// UnityEngine.Color InvBaseItem::color
	Color_t2250949164  ___color_8;
	// UIAtlas InvBaseItem::iconAtlas
	UIAtlas_t1304615221 * ___iconAtlas_9;
	// System.String InvBaseItem::iconName
	String_t* ___iconName_10;

public:
	inline static int32_t get_offset_of_id16_0() { return static_cast<int32_t>(offsetof(InvBaseItem_t3744336511, ___id16_0)); }
	inline int32_t get_id16_0() const { return ___id16_0; }
	inline int32_t* get_address_of_id16_0() { return &___id16_0; }
	inline void set_id16_0(int32_t value)
	{
		___id16_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(InvBaseItem_t3744336511, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(InvBaseItem_t3744336511, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier(&___description_2, value);
	}

	inline static int32_t get_offset_of_slot_3() { return static_cast<int32_t>(offsetof(InvBaseItem_t3744336511, ___slot_3)); }
	inline int32_t get_slot_3() const { return ___slot_3; }
	inline int32_t* get_address_of_slot_3() { return &___slot_3; }
	inline void set_slot_3(int32_t value)
	{
		___slot_3 = value;
	}

	inline static int32_t get_offset_of_minItemLevel_4() { return static_cast<int32_t>(offsetof(InvBaseItem_t3744336511, ___minItemLevel_4)); }
	inline int32_t get_minItemLevel_4() const { return ___minItemLevel_4; }
	inline int32_t* get_address_of_minItemLevel_4() { return &___minItemLevel_4; }
	inline void set_minItemLevel_4(int32_t value)
	{
		___minItemLevel_4 = value;
	}

	inline static int32_t get_offset_of_maxItemLevel_5() { return static_cast<int32_t>(offsetof(InvBaseItem_t3744336511, ___maxItemLevel_5)); }
	inline int32_t get_maxItemLevel_5() const { return ___maxItemLevel_5; }
	inline int32_t* get_address_of_maxItemLevel_5() { return &___maxItemLevel_5; }
	inline void set_maxItemLevel_5(int32_t value)
	{
		___maxItemLevel_5 = value;
	}

	inline static int32_t get_offset_of_stats_6() { return static_cast<int32_t>(offsetof(InvBaseItem_t3744336511, ___stats_6)); }
	inline List_1_t2520600592 * get_stats_6() const { return ___stats_6; }
	inline List_1_t2520600592 ** get_address_of_stats_6() { return &___stats_6; }
	inline void set_stats_6(List_1_t2520600592 * value)
	{
		___stats_6 = value;
		Il2CppCodeGenWriteBarrier(&___stats_6, value);
	}

	inline static int32_t get_offset_of_attachment_7() { return static_cast<int32_t>(offsetof(InvBaseItem_t3744336511, ___attachment_7)); }
	inline GameObject_t1366199518 * get_attachment_7() const { return ___attachment_7; }
	inline GameObject_t1366199518 ** get_address_of_attachment_7() { return &___attachment_7; }
	inline void set_attachment_7(GameObject_t1366199518 * value)
	{
		___attachment_7 = value;
		Il2CppCodeGenWriteBarrier(&___attachment_7, value);
	}

	inline static int32_t get_offset_of_color_8() { return static_cast<int32_t>(offsetof(InvBaseItem_t3744336511, ___color_8)); }
	inline Color_t2250949164  get_color_8() const { return ___color_8; }
	inline Color_t2250949164 * get_address_of_color_8() { return &___color_8; }
	inline void set_color_8(Color_t2250949164  value)
	{
		___color_8 = value;
	}

	inline static int32_t get_offset_of_iconAtlas_9() { return static_cast<int32_t>(offsetof(InvBaseItem_t3744336511, ___iconAtlas_9)); }
	inline UIAtlas_t1304615221 * get_iconAtlas_9() const { return ___iconAtlas_9; }
	inline UIAtlas_t1304615221 ** get_address_of_iconAtlas_9() { return &___iconAtlas_9; }
	inline void set_iconAtlas_9(UIAtlas_t1304615221 * value)
	{
		___iconAtlas_9 = value;
		Il2CppCodeGenWriteBarrier(&___iconAtlas_9, value);
	}

	inline static int32_t get_offset_of_iconName_10() { return static_cast<int32_t>(offsetof(InvBaseItem_t3744336511, ___iconName_10)); }
	inline String_t* get_iconName_10() const { return ___iconName_10; }
	inline String_t** get_address_of_iconName_10() { return &___iconName_10; }
	inline void set_iconName_10(String_t* value)
	{
		___iconName_10 = value;
		Il2CppCodeGenWriteBarrier(&___iconName_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
