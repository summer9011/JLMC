#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// UIEventListener/VoidDelegate
struct VoidDelegate_t1154120061;
// UIEventListener/BoolDelegate
struct BoolDelegate_t173576551;
// UIEventListener/FloatDelegate
struct FloatDelegate_t2914939685;
// UIEventListener/VectorDelegate
struct VectorDelegate_t724328728;
// UIEventListener/ObjectDelegate
struct ObjectDelegate_t2642719036;
// UIEventListener/KeyCodeDelegate
struct KeyCodeDelegate_t3185496719;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIEventListener
struct  UIEventListener_t3982099366  : public MonoBehaviour_t774292115
{
public:
	// System.Object UIEventListener::parameter
	Il2CppObject * ___parameter_2;
	// UIEventListener/VoidDelegate UIEventListener::onSubmit
	VoidDelegate_t1154120061 * ___onSubmit_3;
	// UIEventListener/VoidDelegate UIEventListener::onClick
	VoidDelegate_t1154120061 * ___onClick_4;
	// UIEventListener/VoidDelegate UIEventListener::onDoubleClick
	VoidDelegate_t1154120061 * ___onDoubleClick_5;
	// UIEventListener/BoolDelegate UIEventListener::onHover
	BoolDelegate_t173576551 * ___onHover_6;
	// UIEventListener/BoolDelegate UIEventListener::onPress
	BoolDelegate_t173576551 * ___onPress_7;
	// UIEventListener/BoolDelegate UIEventListener::onSelect
	BoolDelegate_t173576551 * ___onSelect_8;
	// UIEventListener/FloatDelegate UIEventListener::onScroll
	FloatDelegate_t2914939685 * ___onScroll_9;
	// UIEventListener/VoidDelegate UIEventListener::onDragStart
	VoidDelegate_t1154120061 * ___onDragStart_10;
	// UIEventListener/VectorDelegate UIEventListener::onDrag
	VectorDelegate_t724328728 * ___onDrag_11;
	// UIEventListener/VoidDelegate UIEventListener::onDragOver
	VoidDelegate_t1154120061 * ___onDragOver_12;
	// UIEventListener/VoidDelegate UIEventListener::onDragOut
	VoidDelegate_t1154120061 * ___onDragOut_13;
	// UIEventListener/VoidDelegate UIEventListener::onDragEnd
	VoidDelegate_t1154120061 * ___onDragEnd_14;
	// UIEventListener/ObjectDelegate UIEventListener::onDrop
	ObjectDelegate_t2642719036 * ___onDrop_15;
	// UIEventListener/KeyCodeDelegate UIEventListener::onKey
	KeyCodeDelegate_t3185496719 * ___onKey_16;
	// UIEventListener/BoolDelegate UIEventListener::onTooltip
	BoolDelegate_t173576551 * ___onTooltip_17;

public:
	inline static int32_t get_offset_of_parameter_2() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___parameter_2)); }
	inline Il2CppObject * get_parameter_2() const { return ___parameter_2; }
	inline Il2CppObject ** get_address_of_parameter_2() { return &___parameter_2; }
	inline void set_parameter_2(Il2CppObject * value)
	{
		___parameter_2 = value;
		Il2CppCodeGenWriteBarrier(&___parameter_2, value);
	}

	inline static int32_t get_offset_of_onSubmit_3() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onSubmit_3)); }
	inline VoidDelegate_t1154120061 * get_onSubmit_3() const { return ___onSubmit_3; }
	inline VoidDelegate_t1154120061 ** get_address_of_onSubmit_3() { return &___onSubmit_3; }
	inline void set_onSubmit_3(VoidDelegate_t1154120061 * value)
	{
		___onSubmit_3 = value;
		Il2CppCodeGenWriteBarrier(&___onSubmit_3, value);
	}

	inline static int32_t get_offset_of_onClick_4() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onClick_4)); }
	inline VoidDelegate_t1154120061 * get_onClick_4() const { return ___onClick_4; }
	inline VoidDelegate_t1154120061 ** get_address_of_onClick_4() { return &___onClick_4; }
	inline void set_onClick_4(VoidDelegate_t1154120061 * value)
	{
		___onClick_4 = value;
		Il2CppCodeGenWriteBarrier(&___onClick_4, value);
	}

	inline static int32_t get_offset_of_onDoubleClick_5() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onDoubleClick_5)); }
	inline VoidDelegate_t1154120061 * get_onDoubleClick_5() const { return ___onDoubleClick_5; }
	inline VoidDelegate_t1154120061 ** get_address_of_onDoubleClick_5() { return &___onDoubleClick_5; }
	inline void set_onDoubleClick_5(VoidDelegate_t1154120061 * value)
	{
		___onDoubleClick_5 = value;
		Il2CppCodeGenWriteBarrier(&___onDoubleClick_5, value);
	}

	inline static int32_t get_offset_of_onHover_6() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onHover_6)); }
	inline BoolDelegate_t173576551 * get_onHover_6() const { return ___onHover_6; }
	inline BoolDelegate_t173576551 ** get_address_of_onHover_6() { return &___onHover_6; }
	inline void set_onHover_6(BoolDelegate_t173576551 * value)
	{
		___onHover_6 = value;
		Il2CppCodeGenWriteBarrier(&___onHover_6, value);
	}

	inline static int32_t get_offset_of_onPress_7() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onPress_7)); }
	inline BoolDelegate_t173576551 * get_onPress_7() const { return ___onPress_7; }
	inline BoolDelegate_t173576551 ** get_address_of_onPress_7() { return &___onPress_7; }
	inline void set_onPress_7(BoolDelegate_t173576551 * value)
	{
		___onPress_7 = value;
		Il2CppCodeGenWriteBarrier(&___onPress_7, value);
	}

	inline static int32_t get_offset_of_onSelect_8() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onSelect_8)); }
	inline BoolDelegate_t173576551 * get_onSelect_8() const { return ___onSelect_8; }
	inline BoolDelegate_t173576551 ** get_address_of_onSelect_8() { return &___onSelect_8; }
	inline void set_onSelect_8(BoolDelegate_t173576551 * value)
	{
		___onSelect_8 = value;
		Il2CppCodeGenWriteBarrier(&___onSelect_8, value);
	}

	inline static int32_t get_offset_of_onScroll_9() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onScroll_9)); }
	inline FloatDelegate_t2914939685 * get_onScroll_9() const { return ___onScroll_9; }
	inline FloatDelegate_t2914939685 ** get_address_of_onScroll_9() { return &___onScroll_9; }
	inline void set_onScroll_9(FloatDelegate_t2914939685 * value)
	{
		___onScroll_9 = value;
		Il2CppCodeGenWriteBarrier(&___onScroll_9, value);
	}

	inline static int32_t get_offset_of_onDragStart_10() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onDragStart_10)); }
	inline VoidDelegate_t1154120061 * get_onDragStart_10() const { return ___onDragStart_10; }
	inline VoidDelegate_t1154120061 ** get_address_of_onDragStart_10() { return &___onDragStart_10; }
	inline void set_onDragStart_10(VoidDelegate_t1154120061 * value)
	{
		___onDragStart_10 = value;
		Il2CppCodeGenWriteBarrier(&___onDragStart_10, value);
	}

	inline static int32_t get_offset_of_onDrag_11() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onDrag_11)); }
	inline VectorDelegate_t724328728 * get_onDrag_11() const { return ___onDrag_11; }
	inline VectorDelegate_t724328728 ** get_address_of_onDrag_11() { return &___onDrag_11; }
	inline void set_onDrag_11(VectorDelegate_t724328728 * value)
	{
		___onDrag_11 = value;
		Il2CppCodeGenWriteBarrier(&___onDrag_11, value);
	}

	inline static int32_t get_offset_of_onDragOver_12() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onDragOver_12)); }
	inline VoidDelegate_t1154120061 * get_onDragOver_12() const { return ___onDragOver_12; }
	inline VoidDelegate_t1154120061 ** get_address_of_onDragOver_12() { return &___onDragOver_12; }
	inline void set_onDragOver_12(VoidDelegate_t1154120061 * value)
	{
		___onDragOver_12 = value;
		Il2CppCodeGenWriteBarrier(&___onDragOver_12, value);
	}

	inline static int32_t get_offset_of_onDragOut_13() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onDragOut_13)); }
	inline VoidDelegate_t1154120061 * get_onDragOut_13() const { return ___onDragOut_13; }
	inline VoidDelegate_t1154120061 ** get_address_of_onDragOut_13() { return &___onDragOut_13; }
	inline void set_onDragOut_13(VoidDelegate_t1154120061 * value)
	{
		___onDragOut_13 = value;
		Il2CppCodeGenWriteBarrier(&___onDragOut_13, value);
	}

	inline static int32_t get_offset_of_onDragEnd_14() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onDragEnd_14)); }
	inline VoidDelegate_t1154120061 * get_onDragEnd_14() const { return ___onDragEnd_14; }
	inline VoidDelegate_t1154120061 ** get_address_of_onDragEnd_14() { return &___onDragEnd_14; }
	inline void set_onDragEnd_14(VoidDelegate_t1154120061 * value)
	{
		___onDragEnd_14 = value;
		Il2CppCodeGenWriteBarrier(&___onDragEnd_14, value);
	}

	inline static int32_t get_offset_of_onDrop_15() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onDrop_15)); }
	inline ObjectDelegate_t2642719036 * get_onDrop_15() const { return ___onDrop_15; }
	inline ObjectDelegate_t2642719036 ** get_address_of_onDrop_15() { return &___onDrop_15; }
	inline void set_onDrop_15(ObjectDelegate_t2642719036 * value)
	{
		___onDrop_15 = value;
		Il2CppCodeGenWriteBarrier(&___onDrop_15, value);
	}

	inline static int32_t get_offset_of_onKey_16() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onKey_16)); }
	inline KeyCodeDelegate_t3185496719 * get_onKey_16() const { return ___onKey_16; }
	inline KeyCodeDelegate_t3185496719 ** get_address_of_onKey_16() { return &___onKey_16; }
	inline void set_onKey_16(KeyCodeDelegate_t3185496719 * value)
	{
		___onKey_16 = value;
		Il2CppCodeGenWriteBarrier(&___onKey_16, value);
	}

	inline static int32_t get_offset_of_onTooltip_17() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onTooltip_17)); }
	inline BoolDelegate_t173576551 * get_onTooltip_17() const { return ___onTooltip_17; }
	inline BoolDelegate_t173576551 ** get_address_of_onTooltip_17() { return &___onTooltip_17; }
	inline void set_onTooltip_17(BoolDelegate_t173576551 * value)
	{
		___onTooltip_17 = value;
		Il2CppCodeGenWriteBarrier(&___onTooltip_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
