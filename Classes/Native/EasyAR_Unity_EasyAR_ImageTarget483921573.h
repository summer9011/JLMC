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

#include "EasyAR_Unity_EasyAR_Target2319079912.h"
#include "EasyAR_Unity_EasyAR_StorageType622972528.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ImageTarget
struct  ImageTarget_t483921573  : public Target_t2319079912
{
public:
	// EasyAR.StorageType EasyAR.ImageTarget::BehaviourStorage
	int32_t ___BehaviourStorage_7;
	// System.String EasyAR.ImageTarget::BehaviourPath
	String_t* ___BehaviourPath_8;

public:
	inline static int32_t get_offset_of_BehaviourStorage_7() { return static_cast<int32_t>(offsetof(ImageTarget_t483921573, ___BehaviourStorage_7)); }
	inline int32_t get_BehaviourStorage_7() const { return ___BehaviourStorage_7; }
	inline int32_t* get_address_of_BehaviourStorage_7() { return &___BehaviourStorage_7; }
	inline void set_BehaviourStorage_7(int32_t value)
	{
		___BehaviourStorage_7 = value;
	}

	inline static int32_t get_offset_of_BehaviourPath_8() { return static_cast<int32_t>(offsetof(ImageTarget_t483921573, ___BehaviourPath_8)); }
	inline String_t* get_BehaviourPath_8() const { return ___BehaviourPath_8; }
	inline String_t** get_address_of_BehaviourPath_8() { return &___BehaviourPath_8; }
	inline void set_BehaviourPath_8(String_t* value)
	{
		___BehaviourPath_8 = value;
		Il2CppCodeGenWriteBarrier(&___BehaviourPath_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
