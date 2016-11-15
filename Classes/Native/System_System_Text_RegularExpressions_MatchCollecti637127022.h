#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Match
struct Match_t2000248932;
// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MatchCollection
struct  MatchCollection_t637127022  : public Il2CppObject
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::current
	Match_t2000248932 * ___current_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::list
	ArrayList_t1468494371 * ___list_1;

public:
	inline static int32_t get_offset_of_current_0() { return static_cast<int32_t>(offsetof(MatchCollection_t637127022, ___current_0)); }
	inline Match_t2000248932 * get_current_0() const { return ___current_0; }
	inline Match_t2000248932 ** get_address_of_current_0() { return &___current_0; }
	inline void set_current_0(Match_t2000248932 * value)
	{
		___current_0 = value;
		Il2CppCodeGenWriteBarrier(&___current_0, value);
	}

	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(MatchCollection_t637127022, ___list_1)); }
	inline ArrayList_t1468494371 * get_list_1() const { return ___list_1; }
	inline ArrayList_t1468494371 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(ArrayList_t1468494371 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier(&___list_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
