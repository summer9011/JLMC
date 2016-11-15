#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t349040276;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveComparer
struct  CaseInsensitiveComparer_t349040276  : public Il2CppObject
{
public:
	// System.Globalization.CultureInfo System.Collections.CaseInsensitiveComparer::culture
	CultureInfo_t634113868 * ___culture_2;

public:
	inline static int32_t get_offset_of_culture_2() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t349040276, ___culture_2)); }
	inline CultureInfo_t634113868 * get_culture_2() const { return ___culture_2; }
	inline CultureInfo_t634113868 ** get_address_of_culture_2() { return &___culture_2; }
	inline void set_culture_2(CultureInfo_t634113868 * value)
	{
		___culture_2 = value;
		Il2CppCodeGenWriteBarrier(&___culture_2, value);
	}
};

struct CaseInsensitiveComparer_t349040276_StaticFields
{
public:
	// System.Collections.CaseInsensitiveComparer System.Collections.CaseInsensitiveComparer::defaultComparer
	CaseInsensitiveComparer_t349040276 * ___defaultComparer_0;
	// System.Collections.CaseInsensitiveComparer System.Collections.CaseInsensitiveComparer::defaultInvariantComparer
	CaseInsensitiveComparer_t349040276 * ___defaultInvariantComparer_1;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t349040276_StaticFields, ___defaultComparer_0)); }
	inline CaseInsensitiveComparer_t349040276 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline CaseInsensitiveComparer_t349040276 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(CaseInsensitiveComparer_t349040276 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier(&___defaultComparer_0, value);
	}

	inline static int32_t get_offset_of_defaultInvariantComparer_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t349040276_StaticFields, ___defaultInvariantComparer_1)); }
	inline CaseInsensitiveComparer_t349040276 * get_defaultInvariantComparer_1() const { return ___defaultInvariantComparer_1; }
	inline CaseInsensitiveComparer_t349040276 ** get_address_of_defaultInvariantComparer_1() { return &___defaultInvariantComparer_1; }
	inline void set_defaultInvariantComparer_1(CaseInsensitiveComparer_t349040276 * value)
	{
		___defaultInvariantComparer_1 = value;
		Il2CppCodeGenWriteBarrier(&___defaultInvariantComparer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
