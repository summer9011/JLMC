﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LitJson.JSONNode
struct JSONNode_t1109731523;
// LitJson.JSONArray
struct JSONArray_t3951369664;

#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerat482100986.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JSONArray/<>c__IteratorD
struct  U3CU3Ec__IteratorD_t875643801  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1/Enumerator<LitJson.JSONNode> LitJson.JSONArray/<>c__IteratorD::<$s_27>__0
	Enumerator_t482100986  ___U3CU24s_27U3E__0_0;
	// LitJson.JSONNode LitJson.JSONArray/<>c__IteratorD::<N>__1
	JSONNode_t1109731523 * ___U3CNU3E__1_1;
	// System.Int32 LitJson.JSONArray/<>c__IteratorD::$PC
	int32_t ___U24PC_2;
	// LitJson.JSONNode LitJson.JSONArray/<>c__IteratorD::$current
	JSONNode_t1109731523 * ___U24current_3;
	// LitJson.JSONArray LitJson.JSONArray/<>c__IteratorD::<>f__this
	JSONArray_t3951369664 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CU24s_27U3E__0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__IteratorD_t875643801, ___U3CU24s_27U3E__0_0)); }
	inline Enumerator_t482100986  get_U3CU24s_27U3E__0_0() const { return ___U3CU24s_27U3E__0_0; }
	inline Enumerator_t482100986 * get_address_of_U3CU24s_27U3E__0_0() { return &___U3CU24s_27U3E__0_0; }
	inline void set_U3CU24s_27U3E__0_0(Enumerator_t482100986  value)
	{
		___U3CU24s_27U3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__IteratorD_t875643801, ___U3CNU3E__1_1)); }
	inline JSONNode_t1109731523 * get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline JSONNode_t1109731523 ** get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(JSONNode_t1109731523 * value)
	{
		___U3CNU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__IteratorD_t875643801, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__IteratorD_t875643801, ___U24current_3)); }
	inline JSONNode_t1109731523 * get_U24current_3() const { return ___U24current_3; }
	inline JSONNode_t1109731523 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(JSONNode_t1109731523 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__IteratorD_t875643801, ___U3CU3Ef__this_4)); }
	inline JSONArray_t3951369664 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline JSONArray_t3951369664 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(JSONArray_t3951369664 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
