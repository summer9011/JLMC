#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIFont
struct UIFont_t389944949;
// UnityEngine.Font
struct Font_t2560754878;
// NGUIText/GlyphInfo
struct GlyphInfo_t3705451274;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t2471337806;
// BetterList`1<System.Single>
struct BetterList_1_t2011908735;
// System.Single[]
struct SingleU5BU5D_t662464656;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t4260152181;

#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_FontStyle664461563.h"
#include "AssemblyU2DCSharp_NGUIText_Alignment766049597.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "AssemblyU2DCSharp_NGUIText_SymbolStyle2182038263.h"
#include "UnityEngine_UnityEngine_CharacterInfo2039054634.h"
#include "UnityEngine_UnityEngine_Color322763012723.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NGUIText
struct  NGUIText_t2042929214  : public Il2CppObject
{
public:

public:
};

struct NGUIText_t2042929214_StaticFields
{
public:
	// UIFont NGUIText::bitmapFont
	UIFont_t389944949 * ___bitmapFont_0;
	// UnityEngine.Font NGUIText::dynamicFont
	Font_t2560754878 * ___dynamicFont_1;
	// NGUIText/GlyphInfo NGUIText::glyph
	GlyphInfo_t3705451274 * ___glyph_2;
	// System.Int32 NGUIText::fontSize
	int32_t ___fontSize_3;
	// System.Single NGUIText::fontScale
	float ___fontScale_4;
	// System.Single NGUIText::pixelDensity
	float ___pixelDensity_5;
	// UnityEngine.FontStyle NGUIText::fontStyle
	int32_t ___fontStyle_6;
	// NGUIText/Alignment NGUIText::alignment
	int32_t ___alignment_7;
	// UnityEngine.Color NGUIText::tint
	Color_t2250949164  ___tint_8;
	// System.Int32 NGUIText::rectWidth
	int32_t ___rectWidth_9;
	// System.Int32 NGUIText::rectHeight
	int32_t ___rectHeight_10;
	// System.Int32 NGUIText::regionWidth
	int32_t ___regionWidth_11;
	// System.Int32 NGUIText::regionHeight
	int32_t ___regionHeight_12;
	// System.Int32 NGUIText::maxLines
	int32_t ___maxLines_13;
	// System.Boolean NGUIText::gradient
	bool ___gradient_14;
	// UnityEngine.Color NGUIText::gradientBottom
	Color_t2250949164  ___gradientBottom_15;
	// UnityEngine.Color NGUIText::gradientTop
	Color_t2250949164  ___gradientTop_16;
	// System.Boolean NGUIText::encoding
	bool ___encoding_17;
	// System.Single NGUIText::spacingX
	float ___spacingX_18;
	// System.Single NGUIText::spacingY
	float ___spacingY_19;
	// System.Boolean NGUIText::premultiply
	bool ___premultiply_20;
	// NGUIText/SymbolStyle NGUIText::symbolStyle
	int32_t ___symbolStyle_21;
	// System.Int32 NGUIText::finalSize
	int32_t ___finalSize_22;
	// System.Single NGUIText::finalSpacingX
	float ___finalSpacingX_23;
	// System.Single NGUIText::finalLineHeight
	float ___finalLineHeight_24;
	// System.Single NGUIText::baseline
	float ___baseline_25;
	// System.Boolean NGUIText::useSymbols
	bool ___useSymbols_26;
	// UnityEngine.Color NGUIText::mInvisible
	Color_t2250949164  ___mInvisible_27;
	// BetterList`1<UnityEngine.Color> NGUIText::mColors
	BetterList_1_t2471337806 * ___mColors_28;
	// System.Single NGUIText::mAlpha
	float ___mAlpha_29;
	// UnityEngine.CharacterInfo NGUIText::mTempChar
	CharacterInfo_t2039054634  ___mTempChar_30;
	// BetterList`1<System.Single> NGUIText::mSizes
	BetterList_1_t2011908735 * ___mSizes_31;
	// UnityEngine.Color32 NGUIText::s_c0
	Color32_t2763012723  ___s_c0_32;
	// UnityEngine.Color32 NGUIText::s_c1
	Color32_t2763012723  ___s_c1_33;
	// System.Single[] NGUIText::mBoldOffset
	SingleU5BU5D_t662464656* ___mBoldOffset_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NGUIText::<>f__switch$map1
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map1_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NGUIText::<>f__switch$map2
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map2_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NGUIText::<>f__switch$map3
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map3_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NGUIText::<>f__switch$map4
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map4_38;

public:
	inline static int32_t get_offset_of_bitmapFont_0() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___bitmapFont_0)); }
	inline UIFont_t389944949 * get_bitmapFont_0() const { return ___bitmapFont_0; }
	inline UIFont_t389944949 ** get_address_of_bitmapFont_0() { return &___bitmapFont_0; }
	inline void set_bitmapFont_0(UIFont_t389944949 * value)
	{
		___bitmapFont_0 = value;
		Il2CppCodeGenWriteBarrier(&___bitmapFont_0, value);
	}

	inline static int32_t get_offset_of_dynamicFont_1() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___dynamicFont_1)); }
	inline Font_t2560754878 * get_dynamicFont_1() const { return ___dynamicFont_1; }
	inline Font_t2560754878 ** get_address_of_dynamicFont_1() { return &___dynamicFont_1; }
	inline void set_dynamicFont_1(Font_t2560754878 * value)
	{
		___dynamicFont_1 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicFont_1, value);
	}

	inline static int32_t get_offset_of_glyph_2() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___glyph_2)); }
	inline GlyphInfo_t3705451274 * get_glyph_2() const { return ___glyph_2; }
	inline GlyphInfo_t3705451274 ** get_address_of_glyph_2() { return &___glyph_2; }
	inline void set_glyph_2(GlyphInfo_t3705451274 * value)
	{
		___glyph_2 = value;
		Il2CppCodeGenWriteBarrier(&___glyph_2, value);
	}

	inline static int32_t get_offset_of_fontSize_3() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___fontSize_3)); }
	inline int32_t get_fontSize_3() const { return ___fontSize_3; }
	inline int32_t* get_address_of_fontSize_3() { return &___fontSize_3; }
	inline void set_fontSize_3(int32_t value)
	{
		___fontSize_3 = value;
	}

	inline static int32_t get_offset_of_fontScale_4() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___fontScale_4)); }
	inline float get_fontScale_4() const { return ___fontScale_4; }
	inline float* get_address_of_fontScale_4() { return &___fontScale_4; }
	inline void set_fontScale_4(float value)
	{
		___fontScale_4 = value;
	}

	inline static int32_t get_offset_of_pixelDensity_5() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___pixelDensity_5)); }
	inline float get_pixelDensity_5() const { return ___pixelDensity_5; }
	inline float* get_address_of_pixelDensity_5() { return &___pixelDensity_5; }
	inline void set_pixelDensity_5(float value)
	{
		___pixelDensity_5 = value;
	}

	inline static int32_t get_offset_of_fontStyle_6() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___fontStyle_6)); }
	inline int32_t get_fontStyle_6() const { return ___fontStyle_6; }
	inline int32_t* get_address_of_fontStyle_6() { return &___fontStyle_6; }
	inline void set_fontStyle_6(int32_t value)
	{
		___fontStyle_6 = value;
	}

	inline static int32_t get_offset_of_alignment_7() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___alignment_7)); }
	inline int32_t get_alignment_7() const { return ___alignment_7; }
	inline int32_t* get_address_of_alignment_7() { return &___alignment_7; }
	inline void set_alignment_7(int32_t value)
	{
		___alignment_7 = value;
	}

	inline static int32_t get_offset_of_tint_8() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___tint_8)); }
	inline Color_t2250949164  get_tint_8() const { return ___tint_8; }
	inline Color_t2250949164 * get_address_of_tint_8() { return &___tint_8; }
	inline void set_tint_8(Color_t2250949164  value)
	{
		___tint_8 = value;
	}

	inline static int32_t get_offset_of_rectWidth_9() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___rectWidth_9)); }
	inline int32_t get_rectWidth_9() const { return ___rectWidth_9; }
	inline int32_t* get_address_of_rectWidth_9() { return &___rectWidth_9; }
	inline void set_rectWidth_9(int32_t value)
	{
		___rectWidth_9 = value;
	}

	inline static int32_t get_offset_of_rectHeight_10() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___rectHeight_10)); }
	inline int32_t get_rectHeight_10() const { return ___rectHeight_10; }
	inline int32_t* get_address_of_rectHeight_10() { return &___rectHeight_10; }
	inline void set_rectHeight_10(int32_t value)
	{
		___rectHeight_10 = value;
	}

	inline static int32_t get_offset_of_regionWidth_11() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___regionWidth_11)); }
	inline int32_t get_regionWidth_11() const { return ___regionWidth_11; }
	inline int32_t* get_address_of_regionWidth_11() { return &___regionWidth_11; }
	inline void set_regionWidth_11(int32_t value)
	{
		___regionWidth_11 = value;
	}

	inline static int32_t get_offset_of_regionHeight_12() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___regionHeight_12)); }
	inline int32_t get_regionHeight_12() const { return ___regionHeight_12; }
	inline int32_t* get_address_of_regionHeight_12() { return &___regionHeight_12; }
	inline void set_regionHeight_12(int32_t value)
	{
		___regionHeight_12 = value;
	}

	inline static int32_t get_offset_of_maxLines_13() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___maxLines_13)); }
	inline int32_t get_maxLines_13() const { return ___maxLines_13; }
	inline int32_t* get_address_of_maxLines_13() { return &___maxLines_13; }
	inline void set_maxLines_13(int32_t value)
	{
		___maxLines_13 = value;
	}

	inline static int32_t get_offset_of_gradient_14() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___gradient_14)); }
	inline bool get_gradient_14() const { return ___gradient_14; }
	inline bool* get_address_of_gradient_14() { return &___gradient_14; }
	inline void set_gradient_14(bool value)
	{
		___gradient_14 = value;
	}

	inline static int32_t get_offset_of_gradientBottom_15() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___gradientBottom_15)); }
	inline Color_t2250949164  get_gradientBottom_15() const { return ___gradientBottom_15; }
	inline Color_t2250949164 * get_address_of_gradientBottom_15() { return &___gradientBottom_15; }
	inline void set_gradientBottom_15(Color_t2250949164  value)
	{
		___gradientBottom_15 = value;
	}

	inline static int32_t get_offset_of_gradientTop_16() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___gradientTop_16)); }
	inline Color_t2250949164  get_gradientTop_16() const { return ___gradientTop_16; }
	inline Color_t2250949164 * get_address_of_gradientTop_16() { return &___gradientTop_16; }
	inline void set_gradientTop_16(Color_t2250949164  value)
	{
		___gradientTop_16 = value;
	}

	inline static int32_t get_offset_of_encoding_17() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___encoding_17)); }
	inline bool get_encoding_17() const { return ___encoding_17; }
	inline bool* get_address_of_encoding_17() { return &___encoding_17; }
	inline void set_encoding_17(bool value)
	{
		___encoding_17 = value;
	}

	inline static int32_t get_offset_of_spacingX_18() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___spacingX_18)); }
	inline float get_spacingX_18() const { return ___spacingX_18; }
	inline float* get_address_of_spacingX_18() { return &___spacingX_18; }
	inline void set_spacingX_18(float value)
	{
		___spacingX_18 = value;
	}

	inline static int32_t get_offset_of_spacingY_19() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___spacingY_19)); }
	inline float get_spacingY_19() const { return ___spacingY_19; }
	inline float* get_address_of_spacingY_19() { return &___spacingY_19; }
	inline void set_spacingY_19(float value)
	{
		___spacingY_19 = value;
	}

	inline static int32_t get_offset_of_premultiply_20() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___premultiply_20)); }
	inline bool get_premultiply_20() const { return ___premultiply_20; }
	inline bool* get_address_of_premultiply_20() { return &___premultiply_20; }
	inline void set_premultiply_20(bool value)
	{
		___premultiply_20 = value;
	}

	inline static int32_t get_offset_of_symbolStyle_21() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___symbolStyle_21)); }
	inline int32_t get_symbolStyle_21() const { return ___symbolStyle_21; }
	inline int32_t* get_address_of_symbolStyle_21() { return &___symbolStyle_21; }
	inline void set_symbolStyle_21(int32_t value)
	{
		___symbolStyle_21 = value;
	}

	inline static int32_t get_offset_of_finalSize_22() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___finalSize_22)); }
	inline int32_t get_finalSize_22() const { return ___finalSize_22; }
	inline int32_t* get_address_of_finalSize_22() { return &___finalSize_22; }
	inline void set_finalSize_22(int32_t value)
	{
		___finalSize_22 = value;
	}

	inline static int32_t get_offset_of_finalSpacingX_23() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___finalSpacingX_23)); }
	inline float get_finalSpacingX_23() const { return ___finalSpacingX_23; }
	inline float* get_address_of_finalSpacingX_23() { return &___finalSpacingX_23; }
	inline void set_finalSpacingX_23(float value)
	{
		___finalSpacingX_23 = value;
	}

	inline static int32_t get_offset_of_finalLineHeight_24() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___finalLineHeight_24)); }
	inline float get_finalLineHeight_24() const { return ___finalLineHeight_24; }
	inline float* get_address_of_finalLineHeight_24() { return &___finalLineHeight_24; }
	inline void set_finalLineHeight_24(float value)
	{
		___finalLineHeight_24 = value;
	}

	inline static int32_t get_offset_of_baseline_25() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___baseline_25)); }
	inline float get_baseline_25() const { return ___baseline_25; }
	inline float* get_address_of_baseline_25() { return &___baseline_25; }
	inline void set_baseline_25(float value)
	{
		___baseline_25 = value;
	}

	inline static int32_t get_offset_of_useSymbols_26() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___useSymbols_26)); }
	inline bool get_useSymbols_26() const { return ___useSymbols_26; }
	inline bool* get_address_of_useSymbols_26() { return &___useSymbols_26; }
	inline void set_useSymbols_26(bool value)
	{
		___useSymbols_26 = value;
	}

	inline static int32_t get_offset_of_mInvisible_27() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___mInvisible_27)); }
	inline Color_t2250949164  get_mInvisible_27() const { return ___mInvisible_27; }
	inline Color_t2250949164 * get_address_of_mInvisible_27() { return &___mInvisible_27; }
	inline void set_mInvisible_27(Color_t2250949164  value)
	{
		___mInvisible_27 = value;
	}

	inline static int32_t get_offset_of_mColors_28() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___mColors_28)); }
	inline BetterList_1_t2471337806 * get_mColors_28() const { return ___mColors_28; }
	inline BetterList_1_t2471337806 ** get_address_of_mColors_28() { return &___mColors_28; }
	inline void set_mColors_28(BetterList_1_t2471337806 * value)
	{
		___mColors_28 = value;
		Il2CppCodeGenWriteBarrier(&___mColors_28, value);
	}

	inline static int32_t get_offset_of_mAlpha_29() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___mAlpha_29)); }
	inline float get_mAlpha_29() const { return ___mAlpha_29; }
	inline float* get_address_of_mAlpha_29() { return &___mAlpha_29; }
	inline void set_mAlpha_29(float value)
	{
		___mAlpha_29 = value;
	}

	inline static int32_t get_offset_of_mTempChar_30() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___mTempChar_30)); }
	inline CharacterInfo_t2039054634  get_mTempChar_30() const { return ___mTempChar_30; }
	inline CharacterInfo_t2039054634 * get_address_of_mTempChar_30() { return &___mTempChar_30; }
	inline void set_mTempChar_30(CharacterInfo_t2039054634  value)
	{
		___mTempChar_30 = value;
	}

	inline static int32_t get_offset_of_mSizes_31() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___mSizes_31)); }
	inline BetterList_1_t2011908735 * get_mSizes_31() const { return ___mSizes_31; }
	inline BetterList_1_t2011908735 ** get_address_of_mSizes_31() { return &___mSizes_31; }
	inline void set_mSizes_31(BetterList_1_t2011908735 * value)
	{
		___mSizes_31 = value;
		Il2CppCodeGenWriteBarrier(&___mSizes_31, value);
	}

	inline static int32_t get_offset_of_s_c0_32() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___s_c0_32)); }
	inline Color32_t2763012723  get_s_c0_32() const { return ___s_c0_32; }
	inline Color32_t2763012723 * get_address_of_s_c0_32() { return &___s_c0_32; }
	inline void set_s_c0_32(Color32_t2763012723  value)
	{
		___s_c0_32 = value;
	}

	inline static int32_t get_offset_of_s_c1_33() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___s_c1_33)); }
	inline Color32_t2763012723  get_s_c1_33() const { return ___s_c1_33; }
	inline Color32_t2763012723 * get_address_of_s_c1_33() { return &___s_c1_33; }
	inline void set_s_c1_33(Color32_t2763012723  value)
	{
		___s_c1_33 = value;
	}

	inline static int32_t get_offset_of_mBoldOffset_34() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___mBoldOffset_34)); }
	inline SingleU5BU5D_t662464656* get_mBoldOffset_34() const { return ___mBoldOffset_34; }
	inline SingleU5BU5D_t662464656** get_address_of_mBoldOffset_34() { return &___mBoldOffset_34; }
	inline void set_mBoldOffset_34(SingleU5BU5D_t662464656* value)
	{
		___mBoldOffset_34 = value;
		Il2CppCodeGenWriteBarrier(&___mBoldOffset_34, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_35() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___U3CU3Ef__switchU24map1_35)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map1_35() const { return ___U3CU3Ef__switchU24map1_35; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map1_35() { return &___U3CU3Ef__switchU24map1_35; }
	inline void set_U3CU3Ef__switchU24map1_35(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map1_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_35, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_36() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___U3CU3Ef__switchU24map2_36)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map2_36() const { return ___U3CU3Ef__switchU24map2_36; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map2_36() { return &___U3CU3Ef__switchU24map2_36; }
	inline void set_U3CU3Ef__switchU24map2_36(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map2_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2_36, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_37() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___U3CU3Ef__switchU24map3_37)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map3_37() const { return ___U3CU3Ef__switchU24map3_37; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map3_37() { return &___U3CU3Ef__switchU24map3_37; }
	inline void set_U3CU3Ef__switchU24map3_37(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map3_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map3_37, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_38() { return static_cast<int32_t>(offsetof(NGUIText_t2042929214_StaticFields, ___U3CU3Ef__switchU24map4_38)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map4_38() const { return ___U3CU3Ef__switchU24map4_38; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map4_38() { return &___U3CU3Ef__switchU24map4_38; }
	inline void set_U3CU3Ef__switchU24map4_38(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map4_38 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map4_38, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
