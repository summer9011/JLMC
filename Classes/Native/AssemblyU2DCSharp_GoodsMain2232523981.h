#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoodsMain
struct  GoodsMain_t2232523981  : public MonoBehaviour_t774292115
{
public:
	// System.Collections.ArrayList GoodsMain::totalGoodDetail
	ArrayList_t1468494371 * ___totalGoodDetail_2;

public:
	inline static int32_t get_offset_of_totalGoodDetail_2() { return static_cast<int32_t>(offsetof(GoodsMain_t2232523981, ___totalGoodDetail_2)); }
	inline ArrayList_t1468494371 * get_totalGoodDetail_2() const { return ___totalGoodDetail_2; }
	inline ArrayList_t1468494371 ** get_address_of_totalGoodDetail_2() { return &___totalGoodDetail_2; }
	inline void set_totalGoodDetail_2(ArrayList_t1468494371 * value)
	{
		___totalGoodDetail_2 = value;
		Il2CppCodeGenWriteBarrier(&___totalGoodDetail_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
