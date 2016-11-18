#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.Base
struct  Base_t3566006664  : public Il2CppObject
{
public:
	// System.IntPtr EasyAR.Base::Obj
	IntPtr_t ___Obj_0;
	// System.Boolean EasyAR.Base::Disposed
	bool ___Disposed_1;

public:
	inline static int32_t get_offset_of_Obj_0() { return static_cast<int32_t>(offsetof(Base_t3566006664, ___Obj_0)); }
	inline IntPtr_t get_Obj_0() const { return ___Obj_0; }
	inline IntPtr_t* get_address_of_Obj_0() { return &___Obj_0; }
	inline void set_Obj_0(IntPtr_t value)
	{
		___Obj_0 = value;
	}

	inline static int32_t get_offset_of_Disposed_1() { return static_cast<int32_t>(offsetof(Base_t3566006664, ___Disposed_1)); }
	inline bool get_Disposed_1() const { return ___Disposed_1; }
	inline bool* get_address_of_Disposed_1() { return &___Disposed_1; }
	inline void set_Disposed_1(bool value)
	{
		___Disposed_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
