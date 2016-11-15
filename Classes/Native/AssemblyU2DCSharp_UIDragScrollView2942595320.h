#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIScrollView
struct UIScrollView_t3033954930;
// UnityEngine.Transform
struct Transform_t224878301;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragScrollView
struct  UIDragScrollView_t2942595320  : public MonoBehaviour_t774292115
{
public:
	// UIScrollView UIDragScrollView::scrollView
	UIScrollView_t3033954930 * ___scrollView_2;
	// UIScrollView UIDragScrollView::draggablePanel
	UIScrollView_t3033954930 * ___draggablePanel_3;
	// UnityEngine.Transform UIDragScrollView::mTrans
	Transform_t224878301 * ___mTrans_4;
	// UIScrollView UIDragScrollView::mScroll
	UIScrollView_t3033954930 * ___mScroll_5;
	// System.Boolean UIDragScrollView::mAutoFind
	bool ___mAutoFind_6;
	// System.Boolean UIDragScrollView::mStarted
	bool ___mStarted_7;

public:
	inline static int32_t get_offset_of_scrollView_2() { return static_cast<int32_t>(offsetof(UIDragScrollView_t2942595320, ___scrollView_2)); }
	inline UIScrollView_t3033954930 * get_scrollView_2() const { return ___scrollView_2; }
	inline UIScrollView_t3033954930 ** get_address_of_scrollView_2() { return &___scrollView_2; }
	inline void set_scrollView_2(UIScrollView_t3033954930 * value)
	{
		___scrollView_2 = value;
		Il2CppCodeGenWriteBarrier(&___scrollView_2, value);
	}

	inline static int32_t get_offset_of_draggablePanel_3() { return static_cast<int32_t>(offsetof(UIDragScrollView_t2942595320, ___draggablePanel_3)); }
	inline UIScrollView_t3033954930 * get_draggablePanel_3() const { return ___draggablePanel_3; }
	inline UIScrollView_t3033954930 ** get_address_of_draggablePanel_3() { return &___draggablePanel_3; }
	inline void set_draggablePanel_3(UIScrollView_t3033954930 * value)
	{
		___draggablePanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___draggablePanel_3, value);
	}

	inline static int32_t get_offset_of_mTrans_4() { return static_cast<int32_t>(offsetof(UIDragScrollView_t2942595320, ___mTrans_4)); }
	inline Transform_t224878301 * get_mTrans_4() const { return ___mTrans_4; }
	inline Transform_t224878301 ** get_address_of_mTrans_4() { return &___mTrans_4; }
	inline void set_mTrans_4(Transform_t224878301 * value)
	{
		___mTrans_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_4, value);
	}

	inline static int32_t get_offset_of_mScroll_5() { return static_cast<int32_t>(offsetof(UIDragScrollView_t2942595320, ___mScroll_5)); }
	inline UIScrollView_t3033954930 * get_mScroll_5() const { return ___mScroll_5; }
	inline UIScrollView_t3033954930 ** get_address_of_mScroll_5() { return &___mScroll_5; }
	inline void set_mScroll_5(UIScrollView_t3033954930 * value)
	{
		___mScroll_5 = value;
		Il2CppCodeGenWriteBarrier(&___mScroll_5, value);
	}

	inline static int32_t get_offset_of_mAutoFind_6() { return static_cast<int32_t>(offsetof(UIDragScrollView_t2942595320, ___mAutoFind_6)); }
	inline bool get_mAutoFind_6() const { return ___mAutoFind_6; }
	inline bool* get_address_of_mAutoFind_6() { return &___mAutoFind_6; }
	inline void set_mAutoFind_6(bool value)
	{
		___mAutoFind_6 = value;
	}

	inline static int32_t get_offset_of_mStarted_7() { return static_cast<int32_t>(offsetof(UIDragScrollView_t2942595320, ___mStarted_7)); }
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
