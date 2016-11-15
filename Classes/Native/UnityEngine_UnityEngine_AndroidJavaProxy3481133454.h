#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t3557036640;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_t3481133454  : public Il2CppObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t3557036640 * ___javaInterface_0;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t3481133454, ___javaInterface_0)); }
	inline AndroidJavaClass_t3557036640 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t3557036640 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t3557036640 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier(&___javaInterface_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
