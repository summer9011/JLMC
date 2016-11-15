#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Font
struct Font_t2560754878;
// UIFont
struct UIFont_t389944949;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t2197338622;
// BetterList`1<UILabel>
struct BetterList_1_t2015504070;
// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Int32>
struct Dictionary_2_t2695545767;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t686006439;
// BetterList`1<System.Int32>
struct BetterList_1_t1668559239;

#include "AssemblyU2DCSharp_UIWidget1453041918.h"
#include "AssemblyU2DCSharp_UILabel_Crispness1896165008.h"
#include "UnityEngine_UnityEngine_FontStyle664461563.h"
#include "AssemblyU2DCSharp_NGUIText_Alignment766049597.h"
#include "AssemblyU2DCSharp_UILabel_Effect1355140969.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "AssemblyU2DCSharp_NGUIText_SymbolStyle2182038263.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "AssemblyU2DCSharp_UILabel_Overflow3572850258.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UILabel
struct  UILabel_t1795115428  : public UIWidget_t1453041918
{
public:
	// UILabel/Crispness UILabel::keepCrispWhenShrunk
	int32_t ___keepCrispWhenShrunk_52;
	// UnityEngine.Font UILabel::mTrueTypeFont
	Font_t2560754878 * ___mTrueTypeFont_53;
	// UIFont UILabel::mFont
	UIFont_t389944949 * ___mFont_54;
	// System.String UILabel::mText
	String_t* ___mText_55;
	// System.Int32 UILabel::mFontSize
	int32_t ___mFontSize_56;
	// UnityEngine.FontStyle UILabel::mFontStyle
	int32_t ___mFontStyle_57;
	// NGUIText/Alignment UILabel::mAlignment
	int32_t ___mAlignment_58;
	// System.Boolean UILabel::mEncoding
	bool ___mEncoding_59;
	// System.Int32 UILabel::mMaxLineCount
	int32_t ___mMaxLineCount_60;
	// UILabel/Effect UILabel::mEffectStyle
	int32_t ___mEffectStyle_61;
	// UnityEngine.Color UILabel::mEffectColor
	Color_t2250949164  ___mEffectColor_62;
	// NGUIText/SymbolStyle UILabel::mSymbols
	int32_t ___mSymbols_63;
	// UnityEngine.Vector2 UILabel::mEffectDistance
	Vector2_t465617798  ___mEffectDistance_64;
	// UILabel/Overflow UILabel::mOverflow
	int32_t ___mOverflow_65;
	// UnityEngine.Material UILabel::mMaterial
	Material_t2197338622 * ___mMaterial_66;
	// System.Boolean UILabel::mApplyGradient
	bool ___mApplyGradient_67;
	// UnityEngine.Color UILabel::mGradientTop
	Color_t2250949164  ___mGradientTop_68;
	// UnityEngine.Color UILabel::mGradientBottom
	Color_t2250949164  ___mGradientBottom_69;
	// System.Int32 UILabel::mSpacingX
	int32_t ___mSpacingX_70;
	// System.Int32 UILabel::mSpacingY
	int32_t ___mSpacingY_71;
	// System.Boolean UILabel::mUseFloatSpacing
	bool ___mUseFloatSpacing_72;
	// System.Single UILabel::mFloatSpacingX
	float ___mFloatSpacingX_73;
	// System.Single UILabel::mFloatSpacingY
	float ___mFloatSpacingY_74;
	// System.Boolean UILabel::mShrinkToFit
	bool ___mShrinkToFit_75;
	// System.Int32 UILabel::mMaxLineWidth
	int32_t ___mMaxLineWidth_76;
	// System.Int32 UILabel::mMaxLineHeight
	int32_t ___mMaxLineHeight_77;
	// System.Single UILabel::mLineWidth
	float ___mLineWidth_78;
	// System.Boolean UILabel::mMultiline
	bool ___mMultiline_79;
	// UnityEngine.Font UILabel::mActiveTTF
	Font_t2560754878 * ___mActiveTTF_80;
	// System.Single UILabel::mDensity
	float ___mDensity_81;
	// System.Boolean UILabel::mShouldBeProcessed
	bool ___mShouldBeProcessed_82;
	// System.String UILabel::mProcessedText
	String_t* ___mProcessedText_83;
	// System.Boolean UILabel::mPremultiply
	bool ___mPremultiply_84;
	// UnityEngine.Vector2 UILabel::mCalculatedSize
	Vector2_t465617798  ___mCalculatedSize_85;
	// System.Single UILabel::mScale
	float ___mScale_86;
	// System.Int32 UILabel::mPrintedSize
	int32_t ___mPrintedSize_87;
	// System.Int32 UILabel::mLastWidth
	int32_t ___mLastWidth_88;
	// System.Int32 UILabel::mLastHeight
	int32_t ___mLastHeight_89;

public:
	inline static int32_t get_offset_of_keepCrispWhenShrunk_52() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___keepCrispWhenShrunk_52)); }
	inline int32_t get_keepCrispWhenShrunk_52() const { return ___keepCrispWhenShrunk_52; }
	inline int32_t* get_address_of_keepCrispWhenShrunk_52() { return &___keepCrispWhenShrunk_52; }
	inline void set_keepCrispWhenShrunk_52(int32_t value)
	{
		___keepCrispWhenShrunk_52 = value;
	}

	inline static int32_t get_offset_of_mTrueTypeFont_53() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mTrueTypeFont_53)); }
	inline Font_t2560754878 * get_mTrueTypeFont_53() const { return ___mTrueTypeFont_53; }
	inline Font_t2560754878 ** get_address_of_mTrueTypeFont_53() { return &___mTrueTypeFont_53; }
	inline void set_mTrueTypeFont_53(Font_t2560754878 * value)
	{
		___mTrueTypeFont_53 = value;
		Il2CppCodeGenWriteBarrier(&___mTrueTypeFont_53, value);
	}

	inline static int32_t get_offset_of_mFont_54() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mFont_54)); }
	inline UIFont_t389944949 * get_mFont_54() const { return ___mFont_54; }
	inline UIFont_t389944949 ** get_address_of_mFont_54() { return &___mFont_54; }
	inline void set_mFont_54(UIFont_t389944949 * value)
	{
		___mFont_54 = value;
		Il2CppCodeGenWriteBarrier(&___mFont_54, value);
	}

	inline static int32_t get_offset_of_mText_55() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mText_55)); }
	inline String_t* get_mText_55() const { return ___mText_55; }
	inline String_t** get_address_of_mText_55() { return &___mText_55; }
	inline void set_mText_55(String_t* value)
	{
		___mText_55 = value;
		Il2CppCodeGenWriteBarrier(&___mText_55, value);
	}

	inline static int32_t get_offset_of_mFontSize_56() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mFontSize_56)); }
	inline int32_t get_mFontSize_56() const { return ___mFontSize_56; }
	inline int32_t* get_address_of_mFontSize_56() { return &___mFontSize_56; }
	inline void set_mFontSize_56(int32_t value)
	{
		___mFontSize_56 = value;
	}

	inline static int32_t get_offset_of_mFontStyle_57() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mFontStyle_57)); }
	inline int32_t get_mFontStyle_57() const { return ___mFontStyle_57; }
	inline int32_t* get_address_of_mFontStyle_57() { return &___mFontStyle_57; }
	inline void set_mFontStyle_57(int32_t value)
	{
		___mFontStyle_57 = value;
	}

	inline static int32_t get_offset_of_mAlignment_58() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mAlignment_58)); }
	inline int32_t get_mAlignment_58() const { return ___mAlignment_58; }
	inline int32_t* get_address_of_mAlignment_58() { return &___mAlignment_58; }
	inline void set_mAlignment_58(int32_t value)
	{
		___mAlignment_58 = value;
	}

	inline static int32_t get_offset_of_mEncoding_59() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mEncoding_59)); }
	inline bool get_mEncoding_59() const { return ___mEncoding_59; }
	inline bool* get_address_of_mEncoding_59() { return &___mEncoding_59; }
	inline void set_mEncoding_59(bool value)
	{
		___mEncoding_59 = value;
	}

	inline static int32_t get_offset_of_mMaxLineCount_60() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mMaxLineCount_60)); }
	inline int32_t get_mMaxLineCount_60() const { return ___mMaxLineCount_60; }
	inline int32_t* get_address_of_mMaxLineCount_60() { return &___mMaxLineCount_60; }
	inline void set_mMaxLineCount_60(int32_t value)
	{
		___mMaxLineCount_60 = value;
	}

	inline static int32_t get_offset_of_mEffectStyle_61() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mEffectStyle_61)); }
	inline int32_t get_mEffectStyle_61() const { return ___mEffectStyle_61; }
	inline int32_t* get_address_of_mEffectStyle_61() { return &___mEffectStyle_61; }
	inline void set_mEffectStyle_61(int32_t value)
	{
		___mEffectStyle_61 = value;
	}

	inline static int32_t get_offset_of_mEffectColor_62() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mEffectColor_62)); }
	inline Color_t2250949164  get_mEffectColor_62() const { return ___mEffectColor_62; }
	inline Color_t2250949164 * get_address_of_mEffectColor_62() { return &___mEffectColor_62; }
	inline void set_mEffectColor_62(Color_t2250949164  value)
	{
		___mEffectColor_62 = value;
	}

	inline static int32_t get_offset_of_mSymbols_63() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mSymbols_63)); }
	inline int32_t get_mSymbols_63() const { return ___mSymbols_63; }
	inline int32_t* get_address_of_mSymbols_63() { return &___mSymbols_63; }
	inline void set_mSymbols_63(int32_t value)
	{
		___mSymbols_63 = value;
	}

	inline static int32_t get_offset_of_mEffectDistance_64() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mEffectDistance_64)); }
	inline Vector2_t465617798  get_mEffectDistance_64() const { return ___mEffectDistance_64; }
	inline Vector2_t465617798 * get_address_of_mEffectDistance_64() { return &___mEffectDistance_64; }
	inline void set_mEffectDistance_64(Vector2_t465617798  value)
	{
		___mEffectDistance_64 = value;
	}

	inline static int32_t get_offset_of_mOverflow_65() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mOverflow_65)); }
	inline int32_t get_mOverflow_65() const { return ___mOverflow_65; }
	inline int32_t* get_address_of_mOverflow_65() { return &___mOverflow_65; }
	inline void set_mOverflow_65(int32_t value)
	{
		___mOverflow_65 = value;
	}

	inline static int32_t get_offset_of_mMaterial_66() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mMaterial_66)); }
	inline Material_t2197338622 * get_mMaterial_66() const { return ___mMaterial_66; }
	inline Material_t2197338622 ** get_address_of_mMaterial_66() { return &___mMaterial_66; }
	inline void set_mMaterial_66(Material_t2197338622 * value)
	{
		___mMaterial_66 = value;
		Il2CppCodeGenWriteBarrier(&___mMaterial_66, value);
	}

	inline static int32_t get_offset_of_mApplyGradient_67() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mApplyGradient_67)); }
	inline bool get_mApplyGradient_67() const { return ___mApplyGradient_67; }
	inline bool* get_address_of_mApplyGradient_67() { return &___mApplyGradient_67; }
	inline void set_mApplyGradient_67(bool value)
	{
		___mApplyGradient_67 = value;
	}

	inline static int32_t get_offset_of_mGradientTop_68() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mGradientTop_68)); }
	inline Color_t2250949164  get_mGradientTop_68() const { return ___mGradientTop_68; }
	inline Color_t2250949164 * get_address_of_mGradientTop_68() { return &___mGradientTop_68; }
	inline void set_mGradientTop_68(Color_t2250949164  value)
	{
		___mGradientTop_68 = value;
	}

	inline static int32_t get_offset_of_mGradientBottom_69() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mGradientBottom_69)); }
	inline Color_t2250949164  get_mGradientBottom_69() const { return ___mGradientBottom_69; }
	inline Color_t2250949164 * get_address_of_mGradientBottom_69() { return &___mGradientBottom_69; }
	inline void set_mGradientBottom_69(Color_t2250949164  value)
	{
		___mGradientBottom_69 = value;
	}

	inline static int32_t get_offset_of_mSpacingX_70() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mSpacingX_70)); }
	inline int32_t get_mSpacingX_70() const { return ___mSpacingX_70; }
	inline int32_t* get_address_of_mSpacingX_70() { return &___mSpacingX_70; }
	inline void set_mSpacingX_70(int32_t value)
	{
		___mSpacingX_70 = value;
	}

	inline static int32_t get_offset_of_mSpacingY_71() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mSpacingY_71)); }
	inline int32_t get_mSpacingY_71() const { return ___mSpacingY_71; }
	inline int32_t* get_address_of_mSpacingY_71() { return &___mSpacingY_71; }
	inline void set_mSpacingY_71(int32_t value)
	{
		___mSpacingY_71 = value;
	}

	inline static int32_t get_offset_of_mUseFloatSpacing_72() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mUseFloatSpacing_72)); }
	inline bool get_mUseFloatSpacing_72() const { return ___mUseFloatSpacing_72; }
	inline bool* get_address_of_mUseFloatSpacing_72() { return &___mUseFloatSpacing_72; }
	inline void set_mUseFloatSpacing_72(bool value)
	{
		___mUseFloatSpacing_72 = value;
	}

	inline static int32_t get_offset_of_mFloatSpacingX_73() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mFloatSpacingX_73)); }
	inline float get_mFloatSpacingX_73() const { return ___mFloatSpacingX_73; }
	inline float* get_address_of_mFloatSpacingX_73() { return &___mFloatSpacingX_73; }
	inline void set_mFloatSpacingX_73(float value)
	{
		___mFloatSpacingX_73 = value;
	}

	inline static int32_t get_offset_of_mFloatSpacingY_74() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mFloatSpacingY_74)); }
	inline float get_mFloatSpacingY_74() const { return ___mFloatSpacingY_74; }
	inline float* get_address_of_mFloatSpacingY_74() { return &___mFloatSpacingY_74; }
	inline void set_mFloatSpacingY_74(float value)
	{
		___mFloatSpacingY_74 = value;
	}

	inline static int32_t get_offset_of_mShrinkToFit_75() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mShrinkToFit_75)); }
	inline bool get_mShrinkToFit_75() const { return ___mShrinkToFit_75; }
	inline bool* get_address_of_mShrinkToFit_75() { return &___mShrinkToFit_75; }
	inline void set_mShrinkToFit_75(bool value)
	{
		___mShrinkToFit_75 = value;
	}

	inline static int32_t get_offset_of_mMaxLineWidth_76() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mMaxLineWidth_76)); }
	inline int32_t get_mMaxLineWidth_76() const { return ___mMaxLineWidth_76; }
	inline int32_t* get_address_of_mMaxLineWidth_76() { return &___mMaxLineWidth_76; }
	inline void set_mMaxLineWidth_76(int32_t value)
	{
		___mMaxLineWidth_76 = value;
	}

	inline static int32_t get_offset_of_mMaxLineHeight_77() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mMaxLineHeight_77)); }
	inline int32_t get_mMaxLineHeight_77() const { return ___mMaxLineHeight_77; }
	inline int32_t* get_address_of_mMaxLineHeight_77() { return &___mMaxLineHeight_77; }
	inline void set_mMaxLineHeight_77(int32_t value)
	{
		___mMaxLineHeight_77 = value;
	}

	inline static int32_t get_offset_of_mLineWidth_78() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mLineWidth_78)); }
	inline float get_mLineWidth_78() const { return ___mLineWidth_78; }
	inline float* get_address_of_mLineWidth_78() { return &___mLineWidth_78; }
	inline void set_mLineWidth_78(float value)
	{
		___mLineWidth_78 = value;
	}

	inline static int32_t get_offset_of_mMultiline_79() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mMultiline_79)); }
	inline bool get_mMultiline_79() const { return ___mMultiline_79; }
	inline bool* get_address_of_mMultiline_79() { return &___mMultiline_79; }
	inline void set_mMultiline_79(bool value)
	{
		___mMultiline_79 = value;
	}

	inline static int32_t get_offset_of_mActiveTTF_80() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mActiveTTF_80)); }
	inline Font_t2560754878 * get_mActiveTTF_80() const { return ___mActiveTTF_80; }
	inline Font_t2560754878 ** get_address_of_mActiveTTF_80() { return &___mActiveTTF_80; }
	inline void set_mActiveTTF_80(Font_t2560754878 * value)
	{
		___mActiveTTF_80 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveTTF_80, value);
	}

	inline static int32_t get_offset_of_mDensity_81() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mDensity_81)); }
	inline float get_mDensity_81() const { return ___mDensity_81; }
	inline float* get_address_of_mDensity_81() { return &___mDensity_81; }
	inline void set_mDensity_81(float value)
	{
		___mDensity_81 = value;
	}

	inline static int32_t get_offset_of_mShouldBeProcessed_82() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mShouldBeProcessed_82)); }
	inline bool get_mShouldBeProcessed_82() const { return ___mShouldBeProcessed_82; }
	inline bool* get_address_of_mShouldBeProcessed_82() { return &___mShouldBeProcessed_82; }
	inline void set_mShouldBeProcessed_82(bool value)
	{
		___mShouldBeProcessed_82 = value;
	}

	inline static int32_t get_offset_of_mProcessedText_83() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mProcessedText_83)); }
	inline String_t* get_mProcessedText_83() const { return ___mProcessedText_83; }
	inline String_t** get_address_of_mProcessedText_83() { return &___mProcessedText_83; }
	inline void set_mProcessedText_83(String_t* value)
	{
		___mProcessedText_83 = value;
		Il2CppCodeGenWriteBarrier(&___mProcessedText_83, value);
	}

	inline static int32_t get_offset_of_mPremultiply_84() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mPremultiply_84)); }
	inline bool get_mPremultiply_84() const { return ___mPremultiply_84; }
	inline bool* get_address_of_mPremultiply_84() { return &___mPremultiply_84; }
	inline void set_mPremultiply_84(bool value)
	{
		___mPremultiply_84 = value;
	}

	inline static int32_t get_offset_of_mCalculatedSize_85() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mCalculatedSize_85)); }
	inline Vector2_t465617798  get_mCalculatedSize_85() const { return ___mCalculatedSize_85; }
	inline Vector2_t465617798 * get_address_of_mCalculatedSize_85() { return &___mCalculatedSize_85; }
	inline void set_mCalculatedSize_85(Vector2_t465617798  value)
	{
		___mCalculatedSize_85 = value;
	}

	inline static int32_t get_offset_of_mScale_86() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mScale_86)); }
	inline float get_mScale_86() const { return ___mScale_86; }
	inline float* get_address_of_mScale_86() { return &___mScale_86; }
	inline void set_mScale_86(float value)
	{
		___mScale_86 = value;
	}

	inline static int32_t get_offset_of_mPrintedSize_87() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mPrintedSize_87)); }
	inline int32_t get_mPrintedSize_87() const { return ___mPrintedSize_87; }
	inline int32_t* get_address_of_mPrintedSize_87() { return &___mPrintedSize_87; }
	inline void set_mPrintedSize_87(int32_t value)
	{
		___mPrintedSize_87 = value;
	}

	inline static int32_t get_offset_of_mLastWidth_88() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mLastWidth_88)); }
	inline int32_t get_mLastWidth_88() const { return ___mLastWidth_88; }
	inline int32_t* get_address_of_mLastWidth_88() { return &___mLastWidth_88; }
	inline void set_mLastWidth_88(int32_t value)
	{
		___mLastWidth_88 = value;
	}

	inline static int32_t get_offset_of_mLastHeight_89() { return static_cast<int32_t>(offsetof(UILabel_t1795115428, ___mLastHeight_89)); }
	inline int32_t get_mLastHeight_89() const { return ___mLastHeight_89; }
	inline int32_t* get_address_of_mLastHeight_89() { return &___mLastHeight_89; }
	inline void set_mLastHeight_89(int32_t value)
	{
		___mLastHeight_89 = value;
	}
};

struct UILabel_t1795115428_StaticFields
{
public:
	// BetterList`1<UILabel> UILabel::mList
	BetterList_1_t2015504070 * ___mList_90;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Int32> UILabel::mFontUsage
	Dictionary_2_t2695545767 * ___mFontUsage_91;
	// System.Boolean UILabel::mTexRebuildAdded
	bool ___mTexRebuildAdded_92;
	// BetterList`1<UnityEngine.Vector3> UILabel::mTempVerts
	BetterList_1_t686006439 * ___mTempVerts_93;
	// BetterList`1<System.Int32> UILabel::mTempIndices
	BetterList_1_t1668559239 * ___mTempIndices_94;

public:
	inline static int32_t get_offset_of_mList_90() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___mList_90)); }
	inline BetterList_1_t2015504070 * get_mList_90() const { return ___mList_90; }
	inline BetterList_1_t2015504070 ** get_address_of_mList_90() { return &___mList_90; }
	inline void set_mList_90(BetterList_1_t2015504070 * value)
	{
		___mList_90 = value;
		Il2CppCodeGenWriteBarrier(&___mList_90, value);
	}

	inline static int32_t get_offset_of_mFontUsage_91() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___mFontUsage_91)); }
	inline Dictionary_2_t2695545767 * get_mFontUsage_91() const { return ___mFontUsage_91; }
	inline Dictionary_2_t2695545767 ** get_address_of_mFontUsage_91() { return &___mFontUsage_91; }
	inline void set_mFontUsage_91(Dictionary_2_t2695545767 * value)
	{
		___mFontUsage_91 = value;
		Il2CppCodeGenWriteBarrier(&___mFontUsage_91, value);
	}

	inline static int32_t get_offset_of_mTexRebuildAdded_92() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___mTexRebuildAdded_92)); }
	inline bool get_mTexRebuildAdded_92() const { return ___mTexRebuildAdded_92; }
	inline bool* get_address_of_mTexRebuildAdded_92() { return &___mTexRebuildAdded_92; }
	inline void set_mTexRebuildAdded_92(bool value)
	{
		___mTexRebuildAdded_92 = value;
	}

	inline static int32_t get_offset_of_mTempVerts_93() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___mTempVerts_93)); }
	inline BetterList_1_t686006439 * get_mTempVerts_93() const { return ___mTempVerts_93; }
	inline BetterList_1_t686006439 ** get_address_of_mTempVerts_93() { return &___mTempVerts_93; }
	inline void set_mTempVerts_93(BetterList_1_t686006439 * value)
	{
		___mTempVerts_93 = value;
		Il2CppCodeGenWriteBarrier(&___mTempVerts_93, value);
	}

	inline static int32_t get_offset_of_mTempIndices_94() { return static_cast<int32_t>(offsetof(UILabel_t1795115428_StaticFields, ___mTempIndices_94)); }
	inline BetterList_1_t1668559239 * get_mTempIndices_94() const { return ___mTempIndices_94; }
	inline BetterList_1_t1668559239 ** get_address_of_mTempIndices_94() { return &___mTempIndices_94; }
	inline void set_mTempIndices_94(BetterList_1_t1668559239 * value)
	{
		___mTempIndices_94 = value;
		Il2CppCodeGenWriteBarrier(&___mTempIndices_94, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
