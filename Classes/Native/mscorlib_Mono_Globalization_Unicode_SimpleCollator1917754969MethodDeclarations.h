#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t1917754969;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t901202821;
// Mono.Globalization.Unicode.Contraction
struct Contraction_t3730568393;
// System.String
struct String_t;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t1910217204;
// System.Globalization.SortKey
struct SortKey_t2221302449;
// Mono.Globalization.Unicode.SortKeyBuffer
struct SortKeyBuffer_t2773451152;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexe901202821.h"
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator1447154559.h"
#include "mscorlib_System_Globalization_CompareOptions2768100183.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_Mono_Globalization_Unicode_SortKeyBuffer2773451152.h"
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator2354004257.h"
#include "mscorlib_Mono_Globalization_Unicode_Contraction3730568393.h"

// System.Void Mono.Globalization.Unicode.SimpleCollator::.ctor(System.Globalization.CultureInfo)
extern "C"  void SimpleCollator__ctor_m3789916787 (SimpleCollator_t1917754969 * __this, CultureInfo_t634113868 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::.cctor()
extern "C"  void SimpleCollator__cctor_m2693747668 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::SetCJKTable(System.Globalization.CultureInfo,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C"  void SimpleCollator_SetCJKTable_m1356471502 (SimpleCollator_t1917754969 * __this, CultureInfo_t634113868 * ___culture, CodePointIndexer_t901202821 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t901202821 ** ___lv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Mono.Globalization.Unicode.SimpleCollator::GetNeutralCulture(System.Globalization.CultureInfo)
extern "C"  CultureInfo_t634113868 * SimpleCollator_GetNeutralCulture_m740567665 (Il2CppObject * __this /* static, unused */, CultureInfo_t634113868 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Category(System.Int32)
extern "C"  uint8_t SimpleCollator_Category_m1504096908 (SimpleCollator_t1917754969 * __this, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Level1(System.Int32)
extern "C"  uint8_t SimpleCollator_Level1_m3813786941 (SimpleCollator_t1917754969 * __this, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Level2(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType)
extern "C"  uint8_t SimpleCollator_Level2_m2254535125 (SimpleCollator_t1917754969 * __this, int32_t ___cp, int32_t ___ext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsHalfKana(System.Int32,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsHalfKana_m4255579023 (Il2CppObject * __this /* static, unused */, int32_t ___cp, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetContraction(System.String,System.Int32,System.Int32)
extern "C"  Contraction_t3730568393 * SimpleCollator_GetContraction_m3674789701 (SimpleCollator_t1917754969 * __this, String_t* ___s, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetContraction(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.Contraction[])
extern "C"  Contraction_t3730568393 * SimpleCollator_GetContraction_m1391584430 (SimpleCollator_t1917754969 * __this, String_t* ___s, int32_t ___start, int32_t ___end, ContractionU5BU5D_t1910217204* ___clist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetTailContraction(System.String,System.Int32,System.Int32)
extern "C"  Contraction_t3730568393 * SimpleCollator_GetTailContraction_m374819833 (SimpleCollator_t1917754969 * __this, String_t* ___s, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetTailContraction(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.Contraction[])
extern "C"  Contraction_t3730568393 * SimpleCollator_GetTailContraction_m1037943844 (SimpleCollator_t1917754969 * __this, String_t* ___s, int32_t ___start, int32_t ___end, ContractionU5BU5D_t1910217204* ___clist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::FilterOptions(System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_FilterOptions_m4044781893 (SimpleCollator_t1917754969 * __this, int32_t ___i, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.SimpleCollator/ExtenderType Mono.Globalization.Unicode.SimpleCollator::GetExtenderType(System.Int32)
extern "C"  int32_t SimpleCollator_GetExtenderType_m976831551 (SimpleCollator_t1917754969 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::ToDashTypeValue(Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Globalization.CompareOptions)
extern "C"  uint8_t SimpleCollator_ToDashTypeValue_m2069376469 (Il2CppObject * __this /* static, unused */, int32_t ___ext, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::FilterExtender(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_FilterExtender_m2624562651 (SimpleCollator_t1917754969 * __this, int32_t ___i, int32_t ___ext, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsIgnorable(System.Int32,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsIgnorable_m2485013022 (Il2CppObject * __this /* static, unused */, int32_t ___i, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSafe(System.Int32)
extern "C"  bool SimpleCollator_IsSafe_m2555643371 (SimpleCollator_t1917754969 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Globalization.CompareOptions)
extern "C"  SortKey_t2221302449 * SimpleCollator_GetSortKey_m540875593 (SimpleCollator_t1917754969 * __this, String_t* ___s, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  SortKey_t2221302449 * SimpleCollator_GetSortKey_m1317491197 (SimpleCollator_t1917754969 * __this, String_t* ___s, int32_t ___start, int32_t ___length, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.SortKeyBuffer,System.Globalization.CompareOptions)
extern "C"  void SimpleCollator_GetSortKey_m2188419329 (SimpleCollator_t1917754969 * __this, String_t* ___s, int32_t ___start, int32_t ___end, SortKeyBuffer_t2773451152 * ___buf, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::FillSortKeyRaw(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.SortKeyBuffer,System.Globalization.CompareOptions)
extern "C"  void SimpleCollator_FillSortKeyRaw_m2488618624 (SimpleCollator_t1917754969 * __this, int32_t ___i, int32_t ___ext, SortKeyBuffer_t2773451152 * ___buf, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::FillSurrogateSortKeyRaw(System.Int32,Mono.Globalization.Unicode.SortKeyBuffer)
extern "C"  void SimpleCollator_FillSurrogateSortKeyRaw_m2423780110 (SimpleCollator_t1917754969 * __this, int32_t ___i, SortKeyBuffer_t2773451152 * ___buf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareOrdinal(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_CompareOrdinal_m2176988387 (SimpleCollator_t1917754969 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareQuick(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Boolean&,System.Boolean&,System.Boolean)
extern "C"  int32_t SimpleCollator_CompareQuick_m619038530 (SimpleCollator_t1917754969 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, bool* ___sourceConsumed, bool* ___targetConsumed, bool ___immediateBreakup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareOrdinalIgnoreCase(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_CompareOrdinalIgnoreCase_m3195572467 (SimpleCollator_t1917754969 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_Compare_m168545919 (SimpleCollator_t1917754969 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::ClearBuffer(System.Byte*,System.Int32)
extern "C"  void SimpleCollator_ClearBuffer_m1828762230 (SimpleCollator_t1917754969 * __this, uint8_t* ___buffer, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::QuickCheckPossible(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  bool SimpleCollator_QuickCheckPossible_m3145784891 (SimpleCollator_t1917754969 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___end1, String_t* ___s2, int32_t ___idx2, int32_t ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareInternal(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Boolean&,System.Boolean&,System.Boolean,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_CompareInternal_m280569710 (SimpleCollator_t1917754969 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, bool* ___targetConsumed, bool* ___sourceConsumed, bool ___skipHeadingExtenders, bool ___immediateBreakup, Context_t2354004257 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareFlagPair(System.Boolean,System.Boolean)
extern "C"  int32_t SimpleCollator_CompareFlagPair_m1777501184 (SimpleCollator_t1917754969 * __this, bool ___b1, bool ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsPrefix_m3427394972 (SimpleCollator_t1917754969 * __this, String_t* ___src, String_t* ___target, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsPrefix_m2438516594 (SimpleCollator_t1917754969 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_IsPrefix_m363535963 (SimpleCollator_t1917754969 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, bool ___skipHeadingExtenders, Context_t2354004257 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSuffix(System.String,System.String,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsSuffix_m3137828155 (SimpleCollator_t1917754969 * __this, String_t* ___src, String_t* ___target, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSuffix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsSuffix_m740049399 (SimpleCollator_t1917754969 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::QuickIndexOf(System.String,System.String,System.Int32,System.Int32,System.Boolean&)
extern "C"  int32_t SimpleCollator_QuickIndexOf_m2912556610 (SimpleCollator_t1917754969 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, bool* ___testWasUnable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_IndexOf_m2575613007 (SimpleCollator_t1917754969 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfOrdinal(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_IndexOfOrdinal_m3089683139 (SimpleCollator_t1917754969 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfOrdinalIgnoreCase(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_IndexOfOrdinalIgnoreCase_m2778858347 (SimpleCollator_t1917754969 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfSortKey(System.String,System.Int32,System.Int32,System.Byte*,System.Char,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_IndexOfSortKey_m874776224 (SimpleCollator_t1917754969 * __this, String_t* ___s, int32_t ___start, int32_t ___length, uint8_t* ___sortkey, uint16_t ___target, int32_t ___ti, bool ___noLv4, Context_t2354004257 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Byte*,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_IndexOf_m1409042748 (SimpleCollator_t1917754969 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, uint8_t* ___targetSortKey, Context_t2354004257 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_LastIndexOf_m3919677393 (SimpleCollator_t1917754969 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfOrdinal(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_LastIndexOfOrdinal_m45234497 (SimpleCollator_t1917754969 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfOrdinalIgnoreCase(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_LastIndexOfOrdinalIgnoreCase_m550798345 (SimpleCollator_t1917754969 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfSortKey(System.String,System.Int32,System.Int32,System.Int32,System.Byte*,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_LastIndexOfSortKey_m1695731400 (SimpleCollator_t1917754969 * __this, String_t* ___s, int32_t ___start, int32_t ___orgStart, int32_t ___length, uint8_t* ___sortkey, int32_t ___ti, bool ___noLv4, Context_t2354004257 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Byte*,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_LastIndexOf_m440117924 (SimpleCollator_t1917754969 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, uint8_t* ___targetSortKey, Context_t2354004257 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesForward(System.String,System.Int32&,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_MatchesForward_m3790525709 (SimpleCollator_t1917754969 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, Context_t2354004257 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesForwardCore(System.String,System.Int32&,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.Contraction&,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_MatchesForwardCore_m558011650 (SimpleCollator_t1917754969 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, int32_t ___ext, Contraction_t3730568393 ** ___ct, Context_t2354004257 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesPrimitive(System.Globalization.CompareOptions,System.Byte*,System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Byte*,System.Int32,System.Boolean)
extern "C"  bool SimpleCollator_MatchesPrimitive_m1158768094 (SimpleCollator_t1917754969 * __this, int32_t ___opt, uint8_t* ___source, int32_t ___si, int32_t ___ext, uint8_t* ___target, int32_t ___ti, bool ___noLv4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesBackward(System.String,System.Int32&,System.Int32,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_MatchesBackward_m2208209332 (SimpleCollator_t1917754969 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___orgStart, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, Context_t2354004257 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesBackwardCore(System.String,System.Int32&,System.Int32,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.Contraction&,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_MatchesBackwardCore_m1884994267 (SimpleCollator_t1917754969 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___orgStart, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, int32_t ___ext, Contraction_t3730568393 ** ___ct, Context_t2354004257 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
