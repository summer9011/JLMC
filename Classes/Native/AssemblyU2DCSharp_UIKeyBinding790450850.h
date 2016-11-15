#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "UnityEngine_UnityEngine_KeyCode1667950811.h"
#include "AssemblyU2DCSharp_UIKeyBinding_Modifier2917764369.h"
#include "AssemblyU2DCSharp_UIKeyBinding_Action3078013518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIKeyBinding
struct  UIKeyBinding_t790450850  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.KeyCode UIKeyBinding::keyCode
	int32_t ___keyCode_2;
	// UIKeyBinding/Modifier UIKeyBinding::modifier
	int32_t ___modifier_3;
	// UIKeyBinding/Action UIKeyBinding::action
	int32_t ___action_4;
	// System.Boolean UIKeyBinding::mIgnoreUp
	bool ___mIgnoreUp_5;
	// System.Boolean UIKeyBinding::mIsInput
	bool ___mIsInput_6;
	// System.Boolean UIKeyBinding::mPress
	bool ___mPress_7;

public:
	inline static int32_t get_offset_of_keyCode_2() { return static_cast<int32_t>(offsetof(UIKeyBinding_t790450850, ___keyCode_2)); }
	inline int32_t get_keyCode_2() const { return ___keyCode_2; }
	inline int32_t* get_address_of_keyCode_2() { return &___keyCode_2; }
	inline void set_keyCode_2(int32_t value)
	{
		___keyCode_2 = value;
	}

	inline static int32_t get_offset_of_modifier_3() { return static_cast<int32_t>(offsetof(UIKeyBinding_t790450850, ___modifier_3)); }
	inline int32_t get_modifier_3() const { return ___modifier_3; }
	inline int32_t* get_address_of_modifier_3() { return &___modifier_3; }
	inline void set_modifier_3(int32_t value)
	{
		___modifier_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(UIKeyBinding_t790450850, ___action_4)); }
	inline int32_t get_action_4() const { return ___action_4; }
	inline int32_t* get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(int32_t value)
	{
		___action_4 = value;
	}

	inline static int32_t get_offset_of_mIgnoreUp_5() { return static_cast<int32_t>(offsetof(UIKeyBinding_t790450850, ___mIgnoreUp_5)); }
	inline bool get_mIgnoreUp_5() const { return ___mIgnoreUp_5; }
	inline bool* get_address_of_mIgnoreUp_5() { return &___mIgnoreUp_5; }
	inline void set_mIgnoreUp_5(bool value)
	{
		___mIgnoreUp_5 = value;
	}

	inline static int32_t get_offset_of_mIsInput_6() { return static_cast<int32_t>(offsetof(UIKeyBinding_t790450850, ___mIsInput_6)); }
	inline bool get_mIsInput_6() const { return ___mIsInput_6; }
	inline bool* get_address_of_mIsInput_6() { return &___mIsInput_6; }
	inline void set_mIsInput_6(bool value)
	{
		___mIsInput_6 = value;
	}

	inline static int32_t get_offset_of_mPress_7() { return static_cast<int32_t>(offsetof(UIKeyBinding_t790450850, ___mPress_7)); }
	inline bool get_mPress_7() const { return ___mPress_7; }
	inline bool* get_address_of_mPress_7() { return &___mPress_7; }
	inline void set_mPress_7(bool value)
	{
		___mPress_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
