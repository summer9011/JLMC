﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t224878301;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragDropRoot
struct  UIDragDropRoot_t997512525  : public MonoBehaviour_t774292115
{
public:

public:
};

struct UIDragDropRoot_t997512525_StaticFields
{
public:
	// UnityEngine.Transform UIDragDropRoot::root
	Transform_t224878301 * ___root_2;

public:
	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(UIDragDropRoot_t997512525_StaticFields, ___root_2)); }
	inline Transform_t224878301 * get_root_2() const { return ___root_2; }
	inline Transform_t224878301 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(Transform_t224878301 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier(&___root_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
