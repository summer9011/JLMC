#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ManualResetEvent
struct ManualResetEvent_t955467038;
// System.IO.Stream
struct Stream_t2768948945;
// Mono.Security.Protocol.Tls.Context
struct Context_t2535388339;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol
struct  RecordProtocol_t178237055  : public Il2CppObject
{
public:
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t2768948945 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t2535388339 * ___context_2;

public:
	inline static int32_t get_offset_of_innerStream_1() { return static_cast<int32_t>(offsetof(RecordProtocol_t178237055, ___innerStream_1)); }
	inline Stream_t2768948945 * get_innerStream_1() const { return ___innerStream_1; }
	inline Stream_t2768948945 ** get_address_of_innerStream_1() { return &___innerStream_1; }
	inline void set_innerStream_1(Stream_t2768948945 * value)
	{
		___innerStream_1 = value;
		Il2CppCodeGenWriteBarrier(&___innerStream_1, value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(RecordProtocol_t178237055, ___context_2)); }
	inline Context_t2535388339 * get_context_2() const { return ___context_2; }
	inline Context_t2535388339 ** get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(Context_t2535388339 * value)
	{
		___context_2 = value;
		Il2CppCodeGenWriteBarrier(&___context_2, value);
	}
};

struct RecordProtocol_t178237055_StaticFields
{
public:
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t955467038 * ___record_processing_0;

public:
	inline static int32_t get_offset_of_record_processing_0() { return static_cast<int32_t>(offsetof(RecordProtocol_t178237055_StaticFields, ___record_processing_0)); }
	inline ManualResetEvent_t955467038 * get_record_processing_0() const { return ___record_processing_0; }
	inline ManualResetEvent_t955467038 ** get_address_of_record_processing_0() { return &___record_processing_0; }
	inline void set_record_processing_0(ManualResetEvent_t955467038 * value)
	{
		___record_processing_0 = value;
		Il2CppCodeGenWriteBarrier(&___record_processing_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
