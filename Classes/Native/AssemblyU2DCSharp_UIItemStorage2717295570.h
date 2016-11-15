#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1366199518;
// UIWidget
struct UIWidget_t1453041918;
// System.Collections.Generic.List`1<InvGameItem>
struct List_1_t1202908321;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIItemStorage
struct  UIItemStorage_t2717295570  : public MonoBehaviour_t774292115
{
public:
	// System.Int32 UIItemStorage::maxItemCount
	int32_t ___maxItemCount_2;
	// System.Int32 UIItemStorage::maxRows
	int32_t ___maxRows_3;
	// System.Int32 UIItemStorage::maxColumns
	int32_t ___maxColumns_4;
	// UnityEngine.GameObject UIItemStorage::template
	GameObject_t1366199518 * ___template_5;
	// UIWidget UIItemStorage::background
	UIWidget_t1453041918 * ___background_6;
	// System.Int32 UIItemStorage::spacing
	int32_t ___spacing_7;
	// System.Int32 UIItemStorage::padding
	int32_t ___padding_8;
	// System.Collections.Generic.List`1<InvGameItem> UIItemStorage::mItems
	List_1_t1202908321 * ___mItems_9;

public:
	inline static int32_t get_offset_of_maxItemCount_2() { return static_cast<int32_t>(offsetof(UIItemStorage_t2717295570, ___maxItemCount_2)); }
	inline int32_t get_maxItemCount_2() const { return ___maxItemCount_2; }
	inline int32_t* get_address_of_maxItemCount_2() { return &___maxItemCount_2; }
	inline void set_maxItemCount_2(int32_t value)
	{
		___maxItemCount_2 = value;
	}

	inline static int32_t get_offset_of_maxRows_3() { return static_cast<int32_t>(offsetof(UIItemStorage_t2717295570, ___maxRows_3)); }
	inline int32_t get_maxRows_3() const { return ___maxRows_3; }
	inline int32_t* get_address_of_maxRows_3() { return &___maxRows_3; }
	inline void set_maxRows_3(int32_t value)
	{
		___maxRows_3 = value;
	}

	inline static int32_t get_offset_of_maxColumns_4() { return static_cast<int32_t>(offsetof(UIItemStorage_t2717295570, ___maxColumns_4)); }
	inline int32_t get_maxColumns_4() const { return ___maxColumns_4; }
	inline int32_t* get_address_of_maxColumns_4() { return &___maxColumns_4; }
	inline void set_maxColumns_4(int32_t value)
	{
		___maxColumns_4 = value;
	}

	inline static int32_t get_offset_of_template_5() { return static_cast<int32_t>(offsetof(UIItemStorage_t2717295570, ___template_5)); }
	inline GameObject_t1366199518 * get_template_5() const { return ___template_5; }
	inline GameObject_t1366199518 ** get_address_of_template_5() { return &___template_5; }
	inline void set_template_5(GameObject_t1366199518 * value)
	{
		___template_5 = value;
		Il2CppCodeGenWriteBarrier(&___template_5, value);
	}

	inline static int32_t get_offset_of_background_6() { return static_cast<int32_t>(offsetof(UIItemStorage_t2717295570, ___background_6)); }
	inline UIWidget_t1453041918 * get_background_6() const { return ___background_6; }
	inline UIWidget_t1453041918 ** get_address_of_background_6() { return &___background_6; }
	inline void set_background_6(UIWidget_t1453041918 * value)
	{
		___background_6 = value;
		Il2CppCodeGenWriteBarrier(&___background_6, value);
	}

	inline static int32_t get_offset_of_spacing_7() { return static_cast<int32_t>(offsetof(UIItemStorage_t2717295570, ___spacing_7)); }
	inline int32_t get_spacing_7() const { return ___spacing_7; }
	inline int32_t* get_address_of_spacing_7() { return &___spacing_7; }
	inline void set_spacing_7(int32_t value)
	{
		___spacing_7 = value;
	}

	inline static int32_t get_offset_of_padding_8() { return static_cast<int32_t>(offsetof(UIItemStorage_t2717295570, ___padding_8)); }
	inline int32_t get_padding_8() const { return ___padding_8; }
	inline int32_t* get_address_of_padding_8() { return &___padding_8; }
	inline void set_padding_8(int32_t value)
	{
		___padding_8 = value;
	}

	inline static int32_t get_offset_of_mItems_9() { return static_cast<int32_t>(offsetof(UIItemStorage_t2717295570, ___mItems_9)); }
	inline List_1_t1202908321 * get_mItems_9() const { return ___mItems_9; }
	inline List_1_t1202908321 ** get_address_of_mItems_9() { return &___mItems_9; }
	inline void set_mItems_9(List_1_t1202908321 * value)
	{
		___mItems_9 = value;
		Il2CppCodeGenWriteBarrier(&___mItems_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
