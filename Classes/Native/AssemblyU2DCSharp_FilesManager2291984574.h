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

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FilesManager
struct  FilesManager_t2291984574  : public MonoBehaviour_t774292115
{
public:
	// System.String FilesManager::MarksDirectory
	String_t* ___MarksDirectory_2;

public:
	inline static int32_t get_offset_of_MarksDirectory_2() { return static_cast<int32_t>(offsetof(FilesManager_t2291984574, ___MarksDirectory_2)); }
	inline String_t* get_MarksDirectory_2() const { return ___MarksDirectory_2; }
	inline String_t** get_address_of_MarksDirectory_2() { return &___MarksDirectory_2; }
	inline void set_MarksDirectory_2(String_t* value)
	{
		___MarksDirectory_2 = value;
		Il2CppCodeGenWriteBarrier(&___MarksDirectory_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
