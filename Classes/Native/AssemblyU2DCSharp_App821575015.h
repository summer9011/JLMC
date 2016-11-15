#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Stack
struct Stack_t3925292378;
// App
struct App_t821575015;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// App
struct  App_t821575015  : public Il2CppObject
{
public:
	// System.Collections.Stack App::sceneNameStack
	Stack_t3925292378 * ___sceneNameStack_0;

public:
	inline static int32_t get_offset_of_sceneNameStack_0() { return static_cast<int32_t>(offsetof(App_t821575015, ___sceneNameStack_0)); }
	inline Stack_t3925292378 * get_sceneNameStack_0() const { return ___sceneNameStack_0; }
	inline Stack_t3925292378 ** get_address_of_sceneNameStack_0() { return &___sceneNameStack_0; }
	inline void set_sceneNameStack_0(Stack_t3925292378 * value)
	{
		___sceneNameStack_0 = value;
		Il2CppCodeGenWriteBarrier(&___sceneNameStack_0, value);
	}
};

struct App_t821575015_StaticFields
{
public:
	// App App::instance
	App_t821575015 * ___instance_1;

public:
	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___instance_1)); }
	inline App_t821575015 * get_instance_1() const { return ___instance_1; }
	inline App_t821575015 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(App_t821575015 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier(&___instance_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
