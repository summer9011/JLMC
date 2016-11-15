#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UITextList
struct UITextList_t652111117;
// UIInput
struct UIInput_t860674234;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatInput
struct  ChatInput_t3005926974  : public MonoBehaviour_t774292115
{
public:
	// UITextList ChatInput::textList
	UITextList_t652111117 * ___textList_2;
	// System.Boolean ChatInput::fillWithDummyData
	bool ___fillWithDummyData_3;
	// UIInput ChatInput::mInput
	UIInput_t860674234 * ___mInput_4;

public:
	inline static int32_t get_offset_of_textList_2() { return static_cast<int32_t>(offsetof(ChatInput_t3005926974, ___textList_2)); }
	inline UITextList_t652111117 * get_textList_2() const { return ___textList_2; }
	inline UITextList_t652111117 ** get_address_of_textList_2() { return &___textList_2; }
	inline void set_textList_2(UITextList_t652111117 * value)
	{
		___textList_2 = value;
		Il2CppCodeGenWriteBarrier(&___textList_2, value);
	}

	inline static int32_t get_offset_of_fillWithDummyData_3() { return static_cast<int32_t>(offsetof(ChatInput_t3005926974, ___fillWithDummyData_3)); }
	inline bool get_fillWithDummyData_3() const { return ___fillWithDummyData_3; }
	inline bool* get_address_of_fillWithDummyData_3() { return &___fillWithDummyData_3; }
	inline void set_fillWithDummyData_3(bool value)
	{
		___fillWithDummyData_3 = value;
	}

	inline static int32_t get_offset_of_mInput_4() { return static_cast<int32_t>(offsetof(ChatInput_t3005926974, ___mInput_4)); }
	inline UIInput_t860674234 * get_mInput_4() const { return ___mInput_4; }
	inline UIInput_t860674234 ** get_address_of_mInput_4() { return &___mInput_4; }
	inline void set_mInput_4(UIInput_t860674234 * value)
	{
		___mInput_4 = value;
		Il2CppCodeGenWriteBarrier(&___mInput_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
