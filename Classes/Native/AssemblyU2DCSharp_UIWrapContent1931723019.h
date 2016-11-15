#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWrapContent/OnInitializeItem
struct OnInitializeItem_t1517718524;
// UnityEngine.Transform
struct Transform_t224878301;
// UIPanel
struct UIPanel_t1795085332;
// UIScrollView
struct UIScrollView_t3033954930;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t3631216940;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIWrapContent
struct  UIWrapContent_t1931723019  : public MonoBehaviour_t774292115
{
public:
	// System.Int32 UIWrapContent::itemSize
	int32_t ___itemSize_2;
	// System.Boolean UIWrapContent::cullContent
	bool ___cullContent_3;
	// System.Int32 UIWrapContent::minIndex
	int32_t ___minIndex_4;
	// System.Int32 UIWrapContent::maxIndex
	int32_t ___maxIndex_5;
	// UIWrapContent/OnInitializeItem UIWrapContent::onInitializeItem
	OnInitializeItem_t1517718524 * ___onInitializeItem_6;
	// UnityEngine.Transform UIWrapContent::mTrans
	Transform_t224878301 * ___mTrans_7;
	// UIPanel UIWrapContent::mPanel
	UIPanel_t1795085332 * ___mPanel_8;
	// UIScrollView UIWrapContent::mScroll
	UIScrollView_t3033954930 * ___mScroll_9;
	// System.Boolean UIWrapContent::mHorizontal
	bool ___mHorizontal_10;
	// System.Boolean UIWrapContent::mFirstTime
	bool ___mFirstTime_11;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UIWrapContent::mChildren
	List_1_t3631216940 * ___mChildren_12;

public:
	inline static int32_t get_offset_of_itemSize_2() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___itemSize_2)); }
	inline int32_t get_itemSize_2() const { return ___itemSize_2; }
	inline int32_t* get_address_of_itemSize_2() { return &___itemSize_2; }
	inline void set_itemSize_2(int32_t value)
	{
		___itemSize_2 = value;
	}

	inline static int32_t get_offset_of_cullContent_3() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___cullContent_3)); }
	inline bool get_cullContent_3() const { return ___cullContent_3; }
	inline bool* get_address_of_cullContent_3() { return &___cullContent_3; }
	inline void set_cullContent_3(bool value)
	{
		___cullContent_3 = value;
	}

	inline static int32_t get_offset_of_minIndex_4() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___minIndex_4)); }
	inline int32_t get_minIndex_4() const { return ___minIndex_4; }
	inline int32_t* get_address_of_minIndex_4() { return &___minIndex_4; }
	inline void set_minIndex_4(int32_t value)
	{
		___minIndex_4 = value;
	}

	inline static int32_t get_offset_of_maxIndex_5() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___maxIndex_5)); }
	inline int32_t get_maxIndex_5() const { return ___maxIndex_5; }
	inline int32_t* get_address_of_maxIndex_5() { return &___maxIndex_5; }
	inline void set_maxIndex_5(int32_t value)
	{
		___maxIndex_5 = value;
	}

	inline static int32_t get_offset_of_onInitializeItem_6() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___onInitializeItem_6)); }
	inline OnInitializeItem_t1517718524 * get_onInitializeItem_6() const { return ___onInitializeItem_6; }
	inline OnInitializeItem_t1517718524 ** get_address_of_onInitializeItem_6() { return &___onInitializeItem_6; }
	inline void set_onInitializeItem_6(OnInitializeItem_t1517718524 * value)
	{
		___onInitializeItem_6 = value;
		Il2CppCodeGenWriteBarrier(&___onInitializeItem_6, value);
	}

	inline static int32_t get_offset_of_mTrans_7() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___mTrans_7)); }
	inline Transform_t224878301 * get_mTrans_7() const { return ___mTrans_7; }
	inline Transform_t224878301 ** get_address_of_mTrans_7() { return &___mTrans_7; }
	inline void set_mTrans_7(Transform_t224878301 * value)
	{
		___mTrans_7 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_7, value);
	}

	inline static int32_t get_offset_of_mPanel_8() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___mPanel_8)); }
	inline UIPanel_t1795085332 * get_mPanel_8() const { return ___mPanel_8; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_8() { return &___mPanel_8; }
	inline void set_mPanel_8(UIPanel_t1795085332 * value)
	{
		___mPanel_8 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_8, value);
	}

	inline static int32_t get_offset_of_mScroll_9() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___mScroll_9)); }
	inline UIScrollView_t3033954930 * get_mScroll_9() const { return ___mScroll_9; }
	inline UIScrollView_t3033954930 ** get_address_of_mScroll_9() { return &___mScroll_9; }
	inline void set_mScroll_9(UIScrollView_t3033954930 * value)
	{
		___mScroll_9 = value;
		Il2CppCodeGenWriteBarrier(&___mScroll_9, value);
	}

	inline static int32_t get_offset_of_mHorizontal_10() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___mHorizontal_10)); }
	inline bool get_mHorizontal_10() const { return ___mHorizontal_10; }
	inline bool* get_address_of_mHorizontal_10() { return &___mHorizontal_10; }
	inline void set_mHorizontal_10(bool value)
	{
		___mHorizontal_10 = value;
	}

	inline static int32_t get_offset_of_mFirstTime_11() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___mFirstTime_11)); }
	inline bool get_mFirstTime_11() const { return ___mFirstTime_11; }
	inline bool* get_address_of_mFirstTime_11() { return &___mFirstTime_11; }
	inline void set_mFirstTime_11(bool value)
	{
		___mFirstTime_11 = value;
	}

	inline static int32_t get_offset_of_mChildren_12() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___mChildren_12)); }
	inline List_1_t3631216940 * get_mChildren_12() const { return ___mChildren_12; }
	inline List_1_t3631216940 ** get_address_of_mChildren_12() { return &___mChildren_12; }
	inline void set_mChildren_12(List_1_t3631216940 * value)
	{
		___mChildren_12 = value;
		Il2CppCodeGenWriteBarrier(&___mChildren_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
