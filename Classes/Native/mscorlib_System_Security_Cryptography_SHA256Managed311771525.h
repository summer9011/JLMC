#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt32[]
struct UInt32U5BU5D_t3352404215;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "mscorlib_System_Security_Cryptography_SHA256217385558.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t311771525  : public SHA256_t217385558
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t3352404215* ____H_4;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_5;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t3835026402* ____ProcessingBuffer_6;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_7;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t3352404215* ___buff_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(SHA256Managed_t311771525, ____H_4)); }
	inline UInt32U5BU5D_t3352404215* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t3352404215** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t3352404215* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier(&____H_4, value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(SHA256Managed_t311771525, ___count_5)); }
	inline uint64_t get_count_5() const { return ___count_5; }
	inline uint64_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(uint64_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t311771525, ____ProcessingBuffer_6)); }
	inline ByteU5BU5D_t3835026402* get__ProcessingBuffer_6() const { return ____ProcessingBuffer_6; }
	inline ByteU5BU5D_t3835026402** get_address_of__ProcessingBuffer_6() { return &____ProcessingBuffer_6; }
	inline void set__ProcessingBuffer_6(ByteU5BU5D_t3835026402* value)
	{
		____ProcessingBuffer_6 = value;
		Il2CppCodeGenWriteBarrier(&____ProcessingBuffer_6, value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t311771525, ____ProcessingBufferCount_7)); }
	inline int32_t get__ProcessingBufferCount_7() const { return ____ProcessingBufferCount_7; }
	inline int32_t* get_address_of__ProcessingBufferCount_7() { return &____ProcessingBufferCount_7; }
	inline void set__ProcessingBufferCount_7(int32_t value)
	{
		____ProcessingBufferCount_7 = value;
	}

	inline static int32_t get_offset_of_buff_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t311771525, ___buff_8)); }
	inline UInt32U5BU5D_t3352404215* get_buff_8() const { return ___buff_8; }
	inline UInt32U5BU5D_t3352404215** get_address_of_buff_8() { return &___buff_8; }
	inline void set_buff_8(UInt32U5BU5D_t3352404215* value)
	{
		___buff_8 = value;
		Il2CppCodeGenWriteBarrier(&___buff_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
