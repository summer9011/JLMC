#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIPopupList
struct UIPopupList_t109953940;
// UIAtlas
struct UIAtlas_t1304615221;
// UIFont
struct UIFont_t389944949;
// UnityEngine.Font
struct Font_t2560754878;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1079102679;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t4114307779;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2607680524;
// UIPanel
struct UIPanel_t1795085332;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// UISprite
struct UISprite_t603616735;
// UILabel
struct UILabel_t1795115428;
// System.Collections.Generic.List`1<UILabel>
struct List_1_t906486771;
// UIPopupList/LegacyEvent
struct LegacyEvent_t2974200515;

#include "AssemblyU2DCSharp_UIWidgetContainer701016325.h"
#include "UnityEngine_UnityEngine_FontStyle664461563.h"
#include "AssemblyU2DCSharp_UIPopupList_Position1661510619.h"
#include "AssemblyU2DCSharp_NGUIText_Alignment766049597.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "AssemblyU2DCSharp_UIPopupList_OpenOn675746547.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPopupList
struct  UIPopupList_t109953940  : public UIWidgetContainer_t701016325
{
public:
	// UIAtlas UIPopupList::atlas
	UIAtlas_t1304615221 * ___atlas_4;
	// UIFont UIPopupList::bitmapFont
	UIFont_t389944949 * ___bitmapFont_5;
	// UnityEngine.Font UIPopupList::trueTypeFont
	Font_t2560754878 * ___trueTypeFont_6;
	// System.Int32 UIPopupList::fontSize
	int32_t ___fontSize_7;
	// UnityEngine.FontStyle UIPopupList::fontStyle
	int32_t ___fontStyle_8;
	// System.String UIPopupList::backgroundSprite
	String_t* ___backgroundSprite_9;
	// System.String UIPopupList::highlightSprite
	String_t* ___highlightSprite_10;
	// UIPopupList/Position UIPopupList::position
	int32_t ___position_11;
	// NGUIText/Alignment UIPopupList::alignment
	int32_t ___alignment_12;
	// System.Collections.Generic.List`1<System.String> UIPopupList::items
	List_1_t1079102679 * ___items_13;
	// System.Collections.Generic.List`1<System.Object> UIPopupList::itemData
	List_1_t4114307779 * ___itemData_14;
	// UnityEngine.Vector2 UIPopupList::padding
	Vector2_t465617798  ___padding_15;
	// UnityEngine.Color UIPopupList::textColor
	Color_t2250949164  ___textColor_16;
	// UnityEngine.Color UIPopupList::backgroundColor
	Color_t2250949164  ___backgroundColor_17;
	// UnityEngine.Color UIPopupList::highlightColor
	Color_t2250949164  ___highlightColor_18;
	// System.Boolean UIPopupList::isAnimated
	bool ___isAnimated_19;
	// System.Boolean UIPopupList::isLocalized
	bool ___isLocalized_20;
	// UIPopupList/OpenOn UIPopupList::openOn
	int32_t ___openOn_21;
	// System.Collections.Generic.List`1<EventDelegate> UIPopupList::onChange
	List_1_t2607680524 * ___onChange_22;
	// System.String UIPopupList::mSelectedItem
	String_t* ___mSelectedItem_23;
	// UIPanel UIPopupList::mPanel
	UIPanel_t1795085332 * ___mPanel_24;
	// UnityEngine.GameObject UIPopupList::mChild
	GameObject_t1366199518 * ___mChild_25;
	// UISprite UIPopupList::mBackground
	UISprite_t603616735 * ___mBackground_26;
	// UISprite UIPopupList::mHighlight
	UISprite_t603616735 * ___mHighlight_27;
	// UILabel UIPopupList::mHighlightedLabel
	UILabel_t1795115428 * ___mHighlightedLabel_28;
	// System.Collections.Generic.List`1<UILabel> UIPopupList::mLabelList
	List_1_t906486771 * ___mLabelList_29;
	// System.Single UIPopupList::mBgBorder
	float ___mBgBorder_30;
	// UnityEngine.GameObject UIPopupList::mSelection
	GameObject_t1366199518 * ___mSelection_31;
	// UnityEngine.GameObject UIPopupList::eventReceiver
	GameObject_t1366199518 * ___eventReceiver_32;
	// System.String UIPopupList::functionName
	String_t* ___functionName_33;
	// System.Single UIPopupList::textScale
	float ___textScale_34;
	// UIFont UIPopupList::font
	UIFont_t389944949 * ___font_35;
	// UILabel UIPopupList::textLabel
	UILabel_t1795115428 * ___textLabel_36;
	// UIPopupList/LegacyEvent UIPopupList::mLegacyEvent
	LegacyEvent_t2974200515 * ___mLegacyEvent_37;
	// System.Boolean UIPopupList::mUseDynamicFont
	bool ___mUseDynamicFont_38;
	// System.Boolean UIPopupList::mTweening
	bool ___mTweening_39;

public:
	inline static int32_t get_offset_of_atlas_4() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___atlas_4)); }
	inline UIAtlas_t1304615221 * get_atlas_4() const { return ___atlas_4; }
	inline UIAtlas_t1304615221 ** get_address_of_atlas_4() { return &___atlas_4; }
	inline void set_atlas_4(UIAtlas_t1304615221 * value)
	{
		___atlas_4 = value;
		Il2CppCodeGenWriteBarrier(&___atlas_4, value);
	}

	inline static int32_t get_offset_of_bitmapFont_5() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___bitmapFont_5)); }
	inline UIFont_t389944949 * get_bitmapFont_5() const { return ___bitmapFont_5; }
	inline UIFont_t389944949 ** get_address_of_bitmapFont_5() { return &___bitmapFont_5; }
	inline void set_bitmapFont_5(UIFont_t389944949 * value)
	{
		___bitmapFont_5 = value;
		Il2CppCodeGenWriteBarrier(&___bitmapFont_5, value);
	}

	inline static int32_t get_offset_of_trueTypeFont_6() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___trueTypeFont_6)); }
	inline Font_t2560754878 * get_trueTypeFont_6() const { return ___trueTypeFont_6; }
	inline Font_t2560754878 ** get_address_of_trueTypeFont_6() { return &___trueTypeFont_6; }
	inline void set_trueTypeFont_6(Font_t2560754878 * value)
	{
		___trueTypeFont_6 = value;
		Il2CppCodeGenWriteBarrier(&___trueTypeFont_6, value);
	}

	inline static int32_t get_offset_of_fontSize_7() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___fontSize_7)); }
	inline int32_t get_fontSize_7() const { return ___fontSize_7; }
	inline int32_t* get_address_of_fontSize_7() { return &___fontSize_7; }
	inline void set_fontSize_7(int32_t value)
	{
		___fontSize_7 = value;
	}

	inline static int32_t get_offset_of_fontStyle_8() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___fontStyle_8)); }
	inline int32_t get_fontStyle_8() const { return ___fontStyle_8; }
	inline int32_t* get_address_of_fontStyle_8() { return &___fontStyle_8; }
	inline void set_fontStyle_8(int32_t value)
	{
		___fontStyle_8 = value;
	}

	inline static int32_t get_offset_of_backgroundSprite_9() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___backgroundSprite_9)); }
	inline String_t* get_backgroundSprite_9() const { return ___backgroundSprite_9; }
	inline String_t** get_address_of_backgroundSprite_9() { return &___backgroundSprite_9; }
	inline void set_backgroundSprite_9(String_t* value)
	{
		___backgroundSprite_9 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundSprite_9, value);
	}

	inline static int32_t get_offset_of_highlightSprite_10() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___highlightSprite_10)); }
	inline String_t* get_highlightSprite_10() const { return ___highlightSprite_10; }
	inline String_t** get_address_of_highlightSprite_10() { return &___highlightSprite_10; }
	inline void set_highlightSprite_10(String_t* value)
	{
		___highlightSprite_10 = value;
		Il2CppCodeGenWriteBarrier(&___highlightSprite_10, value);
	}

	inline static int32_t get_offset_of_position_11() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___position_11)); }
	inline int32_t get_position_11() const { return ___position_11; }
	inline int32_t* get_address_of_position_11() { return &___position_11; }
	inline void set_position_11(int32_t value)
	{
		___position_11 = value;
	}

	inline static int32_t get_offset_of_alignment_12() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___alignment_12)); }
	inline int32_t get_alignment_12() const { return ___alignment_12; }
	inline int32_t* get_address_of_alignment_12() { return &___alignment_12; }
	inline void set_alignment_12(int32_t value)
	{
		___alignment_12 = value;
	}

	inline static int32_t get_offset_of_items_13() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___items_13)); }
	inline List_1_t1079102679 * get_items_13() const { return ___items_13; }
	inline List_1_t1079102679 ** get_address_of_items_13() { return &___items_13; }
	inline void set_items_13(List_1_t1079102679 * value)
	{
		___items_13 = value;
		Il2CppCodeGenWriteBarrier(&___items_13, value);
	}

	inline static int32_t get_offset_of_itemData_14() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___itemData_14)); }
	inline List_1_t4114307779 * get_itemData_14() const { return ___itemData_14; }
	inline List_1_t4114307779 ** get_address_of_itemData_14() { return &___itemData_14; }
	inline void set_itemData_14(List_1_t4114307779 * value)
	{
		___itemData_14 = value;
		Il2CppCodeGenWriteBarrier(&___itemData_14, value);
	}

	inline static int32_t get_offset_of_padding_15() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___padding_15)); }
	inline Vector2_t465617798  get_padding_15() const { return ___padding_15; }
	inline Vector2_t465617798 * get_address_of_padding_15() { return &___padding_15; }
	inline void set_padding_15(Vector2_t465617798  value)
	{
		___padding_15 = value;
	}

	inline static int32_t get_offset_of_textColor_16() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___textColor_16)); }
	inline Color_t2250949164  get_textColor_16() const { return ___textColor_16; }
	inline Color_t2250949164 * get_address_of_textColor_16() { return &___textColor_16; }
	inline void set_textColor_16(Color_t2250949164  value)
	{
		___textColor_16 = value;
	}

	inline static int32_t get_offset_of_backgroundColor_17() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___backgroundColor_17)); }
	inline Color_t2250949164  get_backgroundColor_17() const { return ___backgroundColor_17; }
	inline Color_t2250949164 * get_address_of_backgroundColor_17() { return &___backgroundColor_17; }
	inline void set_backgroundColor_17(Color_t2250949164  value)
	{
		___backgroundColor_17 = value;
	}

	inline static int32_t get_offset_of_highlightColor_18() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___highlightColor_18)); }
	inline Color_t2250949164  get_highlightColor_18() const { return ___highlightColor_18; }
	inline Color_t2250949164 * get_address_of_highlightColor_18() { return &___highlightColor_18; }
	inline void set_highlightColor_18(Color_t2250949164  value)
	{
		___highlightColor_18 = value;
	}

	inline static int32_t get_offset_of_isAnimated_19() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___isAnimated_19)); }
	inline bool get_isAnimated_19() const { return ___isAnimated_19; }
	inline bool* get_address_of_isAnimated_19() { return &___isAnimated_19; }
	inline void set_isAnimated_19(bool value)
	{
		___isAnimated_19 = value;
	}

	inline static int32_t get_offset_of_isLocalized_20() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___isLocalized_20)); }
	inline bool get_isLocalized_20() const { return ___isLocalized_20; }
	inline bool* get_address_of_isLocalized_20() { return &___isLocalized_20; }
	inline void set_isLocalized_20(bool value)
	{
		___isLocalized_20 = value;
	}

	inline static int32_t get_offset_of_openOn_21() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___openOn_21)); }
	inline int32_t get_openOn_21() const { return ___openOn_21; }
	inline int32_t* get_address_of_openOn_21() { return &___openOn_21; }
	inline void set_openOn_21(int32_t value)
	{
		___openOn_21 = value;
	}

	inline static int32_t get_offset_of_onChange_22() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___onChange_22)); }
	inline List_1_t2607680524 * get_onChange_22() const { return ___onChange_22; }
	inline List_1_t2607680524 ** get_address_of_onChange_22() { return &___onChange_22; }
	inline void set_onChange_22(List_1_t2607680524 * value)
	{
		___onChange_22 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_22, value);
	}

	inline static int32_t get_offset_of_mSelectedItem_23() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mSelectedItem_23)); }
	inline String_t* get_mSelectedItem_23() const { return ___mSelectedItem_23; }
	inline String_t** get_address_of_mSelectedItem_23() { return &___mSelectedItem_23; }
	inline void set_mSelectedItem_23(String_t* value)
	{
		___mSelectedItem_23 = value;
		Il2CppCodeGenWriteBarrier(&___mSelectedItem_23, value);
	}

	inline static int32_t get_offset_of_mPanel_24() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mPanel_24)); }
	inline UIPanel_t1795085332 * get_mPanel_24() const { return ___mPanel_24; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_24() { return &___mPanel_24; }
	inline void set_mPanel_24(UIPanel_t1795085332 * value)
	{
		___mPanel_24 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_24, value);
	}

	inline static int32_t get_offset_of_mChild_25() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mChild_25)); }
	inline GameObject_t1366199518 * get_mChild_25() const { return ___mChild_25; }
	inline GameObject_t1366199518 ** get_address_of_mChild_25() { return &___mChild_25; }
	inline void set_mChild_25(GameObject_t1366199518 * value)
	{
		___mChild_25 = value;
		Il2CppCodeGenWriteBarrier(&___mChild_25, value);
	}

	inline static int32_t get_offset_of_mBackground_26() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mBackground_26)); }
	inline UISprite_t603616735 * get_mBackground_26() const { return ___mBackground_26; }
	inline UISprite_t603616735 ** get_address_of_mBackground_26() { return &___mBackground_26; }
	inline void set_mBackground_26(UISprite_t603616735 * value)
	{
		___mBackground_26 = value;
		Il2CppCodeGenWriteBarrier(&___mBackground_26, value);
	}

	inline static int32_t get_offset_of_mHighlight_27() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mHighlight_27)); }
	inline UISprite_t603616735 * get_mHighlight_27() const { return ___mHighlight_27; }
	inline UISprite_t603616735 ** get_address_of_mHighlight_27() { return &___mHighlight_27; }
	inline void set_mHighlight_27(UISprite_t603616735 * value)
	{
		___mHighlight_27 = value;
		Il2CppCodeGenWriteBarrier(&___mHighlight_27, value);
	}

	inline static int32_t get_offset_of_mHighlightedLabel_28() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mHighlightedLabel_28)); }
	inline UILabel_t1795115428 * get_mHighlightedLabel_28() const { return ___mHighlightedLabel_28; }
	inline UILabel_t1795115428 ** get_address_of_mHighlightedLabel_28() { return &___mHighlightedLabel_28; }
	inline void set_mHighlightedLabel_28(UILabel_t1795115428 * value)
	{
		___mHighlightedLabel_28 = value;
		Il2CppCodeGenWriteBarrier(&___mHighlightedLabel_28, value);
	}

	inline static int32_t get_offset_of_mLabelList_29() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mLabelList_29)); }
	inline List_1_t906486771 * get_mLabelList_29() const { return ___mLabelList_29; }
	inline List_1_t906486771 ** get_address_of_mLabelList_29() { return &___mLabelList_29; }
	inline void set_mLabelList_29(List_1_t906486771 * value)
	{
		___mLabelList_29 = value;
		Il2CppCodeGenWriteBarrier(&___mLabelList_29, value);
	}

	inline static int32_t get_offset_of_mBgBorder_30() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mBgBorder_30)); }
	inline float get_mBgBorder_30() const { return ___mBgBorder_30; }
	inline float* get_address_of_mBgBorder_30() { return &___mBgBorder_30; }
	inline void set_mBgBorder_30(float value)
	{
		___mBgBorder_30 = value;
	}

	inline static int32_t get_offset_of_mSelection_31() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mSelection_31)); }
	inline GameObject_t1366199518 * get_mSelection_31() const { return ___mSelection_31; }
	inline GameObject_t1366199518 ** get_address_of_mSelection_31() { return &___mSelection_31; }
	inline void set_mSelection_31(GameObject_t1366199518 * value)
	{
		___mSelection_31 = value;
		Il2CppCodeGenWriteBarrier(&___mSelection_31, value);
	}

	inline static int32_t get_offset_of_eventReceiver_32() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___eventReceiver_32)); }
	inline GameObject_t1366199518 * get_eventReceiver_32() const { return ___eventReceiver_32; }
	inline GameObject_t1366199518 ** get_address_of_eventReceiver_32() { return &___eventReceiver_32; }
	inline void set_eventReceiver_32(GameObject_t1366199518 * value)
	{
		___eventReceiver_32 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_32, value);
	}

	inline static int32_t get_offset_of_functionName_33() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___functionName_33)); }
	inline String_t* get_functionName_33() const { return ___functionName_33; }
	inline String_t** get_address_of_functionName_33() { return &___functionName_33; }
	inline void set_functionName_33(String_t* value)
	{
		___functionName_33 = value;
		Il2CppCodeGenWriteBarrier(&___functionName_33, value);
	}

	inline static int32_t get_offset_of_textScale_34() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___textScale_34)); }
	inline float get_textScale_34() const { return ___textScale_34; }
	inline float* get_address_of_textScale_34() { return &___textScale_34; }
	inline void set_textScale_34(float value)
	{
		___textScale_34 = value;
	}

	inline static int32_t get_offset_of_font_35() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___font_35)); }
	inline UIFont_t389944949 * get_font_35() const { return ___font_35; }
	inline UIFont_t389944949 ** get_address_of_font_35() { return &___font_35; }
	inline void set_font_35(UIFont_t389944949 * value)
	{
		___font_35 = value;
		Il2CppCodeGenWriteBarrier(&___font_35, value);
	}

	inline static int32_t get_offset_of_textLabel_36() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___textLabel_36)); }
	inline UILabel_t1795115428 * get_textLabel_36() const { return ___textLabel_36; }
	inline UILabel_t1795115428 ** get_address_of_textLabel_36() { return &___textLabel_36; }
	inline void set_textLabel_36(UILabel_t1795115428 * value)
	{
		___textLabel_36 = value;
		Il2CppCodeGenWriteBarrier(&___textLabel_36, value);
	}

	inline static int32_t get_offset_of_mLegacyEvent_37() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mLegacyEvent_37)); }
	inline LegacyEvent_t2974200515 * get_mLegacyEvent_37() const { return ___mLegacyEvent_37; }
	inline LegacyEvent_t2974200515 ** get_address_of_mLegacyEvent_37() { return &___mLegacyEvent_37; }
	inline void set_mLegacyEvent_37(LegacyEvent_t2974200515 * value)
	{
		___mLegacyEvent_37 = value;
		Il2CppCodeGenWriteBarrier(&___mLegacyEvent_37, value);
	}

	inline static int32_t get_offset_of_mUseDynamicFont_38() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mUseDynamicFont_38)); }
	inline bool get_mUseDynamicFont_38() const { return ___mUseDynamicFont_38; }
	inline bool* get_address_of_mUseDynamicFont_38() { return &___mUseDynamicFont_38; }
	inline void set_mUseDynamicFont_38(bool value)
	{
		___mUseDynamicFont_38 = value;
	}

	inline static int32_t get_offset_of_mTweening_39() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940, ___mTweening_39)); }
	inline bool get_mTweening_39() const { return ___mTweening_39; }
	inline bool* get_address_of_mTweening_39() { return &___mTweening_39; }
	inline void set_mTweening_39(bool value)
	{
		___mTweening_39 = value;
	}
};

struct UIPopupList_t109953940_StaticFields
{
public:
	// UIPopupList UIPopupList::current
	UIPopupList_t109953940 * ___current_3;

public:
	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(UIPopupList_t109953940_StaticFields, ___current_3)); }
	inline UIPopupList_t109953940 * get_current_3() const { return ___current_3; }
	inline UIPopupList_t109953940 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UIPopupList_t109953940 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier(&___current_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
