#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<LitJson.JSONNode>
struct List_1_t221102866;

#include "AssemblyU2DCSharp_LitJson_JSONNode1109731523.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JSONArray
struct  JSONArray_t3951369664  : public JSONNode_t1109731523
{
public:
	// System.Collections.Generic.List`1<LitJson.JSONNode> LitJson.JSONArray::m_List
	List_1_t221102866 * ___m_List_0;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(JSONArray_t3951369664, ___m_List_0)); }
	inline List_1_t221102866 * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t221102866 ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t221102866 * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_List_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
