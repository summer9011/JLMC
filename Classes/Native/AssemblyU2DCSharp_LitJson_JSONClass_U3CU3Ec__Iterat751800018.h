#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LitJson.JSONNode
struct JSONNode_t1109731523;
// LitJson.JSONClass
struct JSONClass_t3507943507;

#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1219041832.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22479033419.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JSONClass/<>c__Iterator10
struct  U3CU3Ec__Iterator10_t751800018  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JSONNode> LitJson.JSONClass/<>c__Iterator10::<$s_37>__0
	Enumerator_t1219041832  ___U3CU24s_37U3E__0_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JSONNode> LitJson.JSONClass/<>c__Iterator10::<N>__1
	KeyValuePair_2_t2479033419  ___U3CNU3E__1_1;
	// System.Int32 LitJson.JSONClass/<>c__Iterator10::$PC
	int32_t ___U24PC_2;
	// LitJson.JSONNode LitJson.JSONClass/<>c__Iterator10::$current
	JSONNode_t1109731523 * ___U24current_3;
	// LitJson.JSONClass LitJson.JSONClass/<>c__Iterator10::<>f__this
	JSONClass_t3507943507 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CU24s_37U3E__0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator10_t751800018, ___U3CU24s_37U3E__0_0)); }
	inline Enumerator_t1219041832  get_U3CU24s_37U3E__0_0() const { return ___U3CU24s_37U3E__0_0; }
	inline Enumerator_t1219041832 * get_address_of_U3CU24s_37U3E__0_0() { return &___U3CU24s_37U3E__0_0; }
	inline void set_U3CU24s_37U3E__0_0(Enumerator_t1219041832  value)
	{
		___U3CU24s_37U3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator10_t751800018, ___U3CNU3E__1_1)); }
	inline KeyValuePair_2_t2479033419  get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline KeyValuePair_2_t2479033419 * get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(KeyValuePair_2_t2479033419  value)
	{
		___U3CNU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator10_t751800018, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator10_t751800018, ___U24current_3)); }
	inline JSONNode_t1109731523 * get_U24current_3() const { return ___U24current_3; }
	inline JSONNode_t1109731523 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(JSONNode_t1109731523 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator10_t751800018, ___U3CU3Ef__this_4)); }
	inline JSONClass_t3507943507 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline JSONClass_t3507943507 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(JSONClass_t3507943507 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
