#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Assembly
struct Assembly_t141003736;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t564427955  : public Il2CppObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t141003736 * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t3835026402* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t564427955, ___assembly_0)); }
	inline Assembly_t141003736 * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t141003736 ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t141003736 * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier(&___assembly_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t564427955, ___data_1)); }
	inline ByteU5BU5D_t3835026402* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t3835026402** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t3835026402* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
