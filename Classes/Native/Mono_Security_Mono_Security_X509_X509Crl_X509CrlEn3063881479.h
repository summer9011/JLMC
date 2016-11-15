#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3835026402;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1407999943;

#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_DateTime2933746480.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t3063881479  : public Il2CppObject
{
public:
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t3835026402* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t2933746480  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t1407999943 * ___extensions_2;

public:
	inline static int32_t get_offset_of_sn_0() { return static_cast<int32_t>(offsetof(X509CrlEntry_t3063881479, ___sn_0)); }
	inline ByteU5BU5D_t3835026402* get_sn_0() const { return ___sn_0; }
	inline ByteU5BU5D_t3835026402** get_address_of_sn_0() { return &___sn_0; }
	inline void set_sn_0(ByteU5BU5D_t3835026402* value)
	{
		___sn_0 = value;
		Il2CppCodeGenWriteBarrier(&___sn_0, value);
	}

	inline static int32_t get_offset_of_revocationDate_1() { return static_cast<int32_t>(offsetof(X509CrlEntry_t3063881479, ___revocationDate_1)); }
	inline DateTime_t2933746480  get_revocationDate_1() const { return ___revocationDate_1; }
	inline DateTime_t2933746480 * get_address_of_revocationDate_1() { return &___revocationDate_1; }
	inline void set_revocationDate_1(DateTime_t2933746480  value)
	{
		___revocationDate_1 = value;
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(X509CrlEntry_t3063881479, ___extensions_2)); }
	inline X509ExtensionCollection_t1407999943 * get_extensions_2() const { return ___extensions_2; }
	inline X509ExtensionCollection_t1407999943 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(X509ExtensionCollection_t1407999943 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier(&___extensions_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
