#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIGrid/OnReposition
struct OnReposition_t4123304149;
// System.Comparison`1<UnityEngine.Transform>
struct Comparison_1_t61460781;
// UIPanel
struct UIPanel_t1795085332;

#include "AssemblyU2DCSharp_UIWidgetContainer701016325.h"
#include "AssemblyU2DCSharp_UIGrid_Arrangement2693967440.h"
#include "AssemblyU2DCSharp_UIGrid_Sorting835527812.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot2110476880.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIGrid
struct  UIGrid_t2420180906  : public UIWidgetContainer_t701016325
{
public:
	// UIGrid/Arrangement UIGrid::arrangement
	int32_t ___arrangement_2;
	// UIGrid/Sorting UIGrid::sorting
	int32_t ___sorting_3;
	// UIWidget/Pivot UIGrid::pivot
	int32_t ___pivot_4;
	// System.Int32 UIGrid::maxPerLine
	int32_t ___maxPerLine_5;
	// System.Single UIGrid::cellWidth
	float ___cellWidth_6;
	// System.Single UIGrid::cellHeight
	float ___cellHeight_7;
	// System.Boolean UIGrid::animateSmoothly
	bool ___animateSmoothly_8;
	// System.Boolean UIGrid::hideInactive
	bool ___hideInactive_9;
	// System.Boolean UIGrid::keepWithinPanel
	bool ___keepWithinPanel_10;
	// UIGrid/OnReposition UIGrid::onReposition
	OnReposition_t4123304149 * ___onReposition_11;
	// System.Comparison`1<UnityEngine.Transform> UIGrid::onCustomSort
	Comparison_1_t61460781 * ___onCustomSort_12;
	// System.Boolean UIGrid::sorted
	bool ___sorted_13;
	// System.Boolean UIGrid::mReposition
	bool ___mReposition_14;
	// UIPanel UIGrid::mPanel
	UIPanel_t1795085332 * ___mPanel_15;
	// System.Boolean UIGrid::mInitDone
	bool ___mInitDone_16;

public:
	inline static int32_t get_offset_of_arrangement_2() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___arrangement_2)); }
	inline int32_t get_arrangement_2() const { return ___arrangement_2; }
	inline int32_t* get_address_of_arrangement_2() { return &___arrangement_2; }
	inline void set_arrangement_2(int32_t value)
	{
		___arrangement_2 = value;
	}

	inline static int32_t get_offset_of_sorting_3() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___sorting_3)); }
	inline int32_t get_sorting_3() const { return ___sorting_3; }
	inline int32_t* get_address_of_sorting_3() { return &___sorting_3; }
	inline void set_sorting_3(int32_t value)
	{
		___sorting_3 = value;
	}

	inline static int32_t get_offset_of_pivot_4() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___pivot_4)); }
	inline int32_t get_pivot_4() const { return ___pivot_4; }
	inline int32_t* get_address_of_pivot_4() { return &___pivot_4; }
	inline void set_pivot_4(int32_t value)
	{
		___pivot_4 = value;
	}

	inline static int32_t get_offset_of_maxPerLine_5() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___maxPerLine_5)); }
	inline int32_t get_maxPerLine_5() const { return ___maxPerLine_5; }
	inline int32_t* get_address_of_maxPerLine_5() { return &___maxPerLine_5; }
	inline void set_maxPerLine_5(int32_t value)
	{
		___maxPerLine_5 = value;
	}

	inline static int32_t get_offset_of_cellWidth_6() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___cellWidth_6)); }
	inline float get_cellWidth_6() const { return ___cellWidth_6; }
	inline float* get_address_of_cellWidth_6() { return &___cellWidth_6; }
	inline void set_cellWidth_6(float value)
	{
		___cellWidth_6 = value;
	}

	inline static int32_t get_offset_of_cellHeight_7() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___cellHeight_7)); }
	inline float get_cellHeight_7() const { return ___cellHeight_7; }
	inline float* get_address_of_cellHeight_7() { return &___cellHeight_7; }
	inline void set_cellHeight_7(float value)
	{
		___cellHeight_7 = value;
	}

	inline static int32_t get_offset_of_animateSmoothly_8() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___animateSmoothly_8)); }
	inline bool get_animateSmoothly_8() const { return ___animateSmoothly_8; }
	inline bool* get_address_of_animateSmoothly_8() { return &___animateSmoothly_8; }
	inline void set_animateSmoothly_8(bool value)
	{
		___animateSmoothly_8 = value;
	}

	inline static int32_t get_offset_of_hideInactive_9() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___hideInactive_9)); }
	inline bool get_hideInactive_9() const { return ___hideInactive_9; }
	inline bool* get_address_of_hideInactive_9() { return &___hideInactive_9; }
	inline void set_hideInactive_9(bool value)
	{
		___hideInactive_9 = value;
	}

	inline static int32_t get_offset_of_keepWithinPanel_10() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___keepWithinPanel_10)); }
	inline bool get_keepWithinPanel_10() const { return ___keepWithinPanel_10; }
	inline bool* get_address_of_keepWithinPanel_10() { return &___keepWithinPanel_10; }
	inline void set_keepWithinPanel_10(bool value)
	{
		___keepWithinPanel_10 = value;
	}

	inline static int32_t get_offset_of_onReposition_11() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___onReposition_11)); }
	inline OnReposition_t4123304149 * get_onReposition_11() const { return ___onReposition_11; }
	inline OnReposition_t4123304149 ** get_address_of_onReposition_11() { return &___onReposition_11; }
	inline void set_onReposition_11(OnReposition_t4123304149 * value)
	{
		___onReposition_11 = value;
		Il2CppCodeGenWriteBarrier(&___onReposition_11, value);
	}

	inline static int32_t get_offset_of_onCustomSort_12() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___onCustomSort_12)); }
	inline Comparison_1_t61460781 * get_onCustomSort_12() const { return ___onCustomSort_12; }
	inline Comparison_1_t61460781 ** get_address_of_onCustomSort_12() { return &___onCustomSort_12; }
	inline void set_onCustomSort_12(Comparison_1_t61460781 * value)
	{
		___onCustomSort_12 = value;
		Il2CppCodeGenWriteBarrier(&___onCustomSort_12, value);
	}

	inline static int32_t get_offset_of_sorted_13() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___sorted_13)); }
	inline bool get_sorted_13() const { return ___sorted_13; }
	inline bool* get_address_of_sorted_13() { return &___sorted_13; }
	inline void set_sorted_13(bool value)
	{
		___sorted_13 = value;
	}

	inline static int32_t get_offset_of_mReposition_14() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mReposition_14)); }
	inline bool get_mReposition_14() const { return ___mReposition_14; }
	inline bool* get_address_of_mReposition_14() { return &___mReposition_14; }
	inline void set_mReposition_14(bool value)
	{
		___mReposition_14 = value;
	}

	inline static int32_t get_offset_of_mPanel_15() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mPanel_15)); }
	inline UIPanel_t1795085332 * get_mPanel_15() const { return ___mPanel_15; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_15() { return &___mPanel_15; }
	inline void set_mPanel_15(UIPanel_t1795085332 * value)
	{
		___mPanel_15 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_15, value);
	}

	inline static int32_t get_offset_of_mInitDone_16() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mInitDone_16)); }
	inline bool get_mInitDone_16() const { return ___mInitDone_16; }
	inline bool* get_address_of_mInitDone_16() { return &___mInitDone_16; }
	inline void set_mInitDone_16(bool value)
	{
		___mInitDone_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
