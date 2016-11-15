#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t224878301;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnvelopContent
struct  EnvelopContent_t2204160058  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.Transform EnvelopContent::targetRoot
	Transform_t224878301 * ___targetRoot_2;
	// System.Int32 EnvelopContent::padLeft
	int32_t ___padLeft_3;
	// System.Int32 EnvelopContent::padRight
	int32_t ___padRight_4;
	// System.Int32 EnvelopContent::padBottom
	int32_t ___padBottom_5;
	// System.Int32 EnvelopContent::padTop
	int32_t ___padTop_6;
	// System.Boolean EnvelopContent::mStarted
	bool ___mStarted_7;

public:
	inline static int32_t get_offset_of_targetRoot_2() { return static_cast<int32_t>(offsetof(EnvelopContent_t2204160058, ___targetRoot_2)); }
	inline Transform_t224878301 * get_targetRoot_2() const { return ___targetRoot_2; }
	inline Transform_t224878301 ** get_address_of_targetRoot_2() { return &___targetRoot_2; }
	inline void set_targetRoot_2(Transform_t224878301 * value)
	{
		___targetRoot_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetRoot_2, value);
	}

	inline static int32_t get_offset_of_padLeft_3() { return static_cast<int32_t>(offsetof(EnvelopContent_t2204160058, ___padLeft_3)); }
	inline int32_t get_padLeft_3() const { return ___padLeft_3; }
	inline int32_t* get_address_of_padLeft_3() { return &___padLeft_3; }
	inline void set_padLeft_3(int32_t value)
	{
		___padLeft_3 = value;
	}

	inline static int32_t get_offset_of_padRight_4() { return static_cast<int32_t>(offsetof(EnvelopContent_t2204160058, ___padRight_4)); }
	inline int32_t get_padRight_4() const { return ___padRight_4; }
	inline int32_t* get_address_of_padRight_4() { return &___padRight_4; }
	inline void set_padRight_4(int32_t value)
	{
		___padRight_4 = value;
	}

	inline static int32_t get_offset_of_padBottom_5() { return static_cast<int32_t>(offsetof(EnvelopContent_t2204160058, ___padBottom_5)); }
	inline int32_t get_padBottom_5() const { return ___padBottom_5; }
	inline int32_t* get_address_of_padBottom_5() { return &___padBottom_5; }
	inline void set_padBottom_5(int32_t value)
	{
		___padBottom_5 = value;
	}

	inline static int32_t get_offset_of_padTop_6() { return static_cast<int32_t>(offsetof(EnvelopContent_t2204160058, ___padTop_6)); }
	inline int32_t get_padTop_6() const { return ___padTop_6; }
	inline int32_t* get_address_of_padTop_6() { return &___padTop_6; }
	inline void set_padTop_6(int32_t value)
	{
		___padTop_6 = value;
	}

	inline static int32_t get_offset_of_mStarted_7() { return static_cast<int32_t>(offsetof(EnvelopContent_t2204160058, ___mStarted_7)); }
	inline bool get_mStarted_7() const { return ___mStarted_7; }
	inline bool* get_address_of_mStarted_7() { return &___mStarted_7; }
	inline void set_mStarted_7(bool value)
	{
		___mStarted_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
