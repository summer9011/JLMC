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

// Mono.Globalization.Unicode.TailoringInfo
struct TailoringInfo_t291714550;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t1910217204;
// Mono.Globalization.Unicode.Level2Map[]
struct Level2MapU5BU5D_t3589892322;
// System.String
struct String_t;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t901202821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_Mono_Globalization_Unicode_TailoringInfo291714550.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexe901202821.h"
#include "mscorlib_System_IntPtr3076297692.h"

// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::.cctor()
extern "C"  void MSCompatUnicodeTable__cctor_m4045930951 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.TailoringInfo Mono.Globalization.Unicode.MSCompatUnicodeTable::GetTailoringInfo(System.Int32)
extern "C"  TailoringInfo_t291714550 * MSCompatUnicodeTable_GetTailoringInfo_m2792223347 (Il2CppObject * __this /* static, unused */, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::BuildTailoringTables(System.Globalization.CultureInfo,Mono.Globalization.Unicode.TailoringInfo,Mono.Globalization.Unicode.Contraction[]&,Mono.Globalization.Unicode.Level2Map[]&)
extern "C"  void MSCompatUnicodeTable_BuildTailoringTables_m3024392854 (Il2CppObject * __this /* static, unused */, CultureInfo_t634113868 * ___culture, TailoringInfo_t291714550 * ___t, ContractionU5BU5D_t1910217204** ___contractions, Level2MapU5BU5D_t3589892322** ___diacriticals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::SetCJKReferences(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C"  void MSCompatUnicodeTable_SetCJKReferences_m3868493963 (Il2CppObject * __this /* static, unused */, String_t* ___name, CodePointIndexer_t901202821 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t901202821 ** ___lv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Category(System.Int32)
extern "C"  uint8_t MSCompatUnicodeTable_Category_m3854768527 (Il2CppObject * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level1(System.Int32)
extern "C"  uint8_t MSCompatUnicodeTable_Level1_m2297588822 (Il2CppObject * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level2(System.Int32)
extern "C"  uint8_t MSCompatUnicodeTable_Level2_m3059550747 (Il2CppObject * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level3(System.Int32)
extern "C"  uint8_t MSCompatUnicodeTable_Level3_m260824928 (Il2CppObject * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorable(System.Int32,System.Byte)
extern "C"  bool MSCompatUnicodeTable_IsIgnorable_m2816251577 (Il2CppObject * __this /* static, unused */, int32_t ___cp, uint8_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorableNonSpacing(System.Int32)
extern "C"  bool MSCompatUnicodeTable_IsIgnorableNonSpacing_m3661476786 (Il2CppObject * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::ToKanaTypeInsensitive(System.Int32)
extern "C"  int32_t MSCompatUnicodeTable_ToKanaTypeInsensitive_m908833112 (Il2CppObject * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::ToWidthCompat(System.Int32)
extern "C"  int32_t MSCompatUnicodeTable_ToWidthCompat_m2299599532 (Il2CppObject * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::HasSpecialWeight(System.Char)
extern "C"  bool MSCompatUnicodeTable_HasSpecialWeight_m4030611518 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsHalfWidthKana(System.Char)
extern "C"  bool MSCompatUnicodeTable_IsHalfWidthKana_m576273477 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsHiragana(System.Char)
extern "C"  bool MSCompatUnicodeTable_IsHiragana_m3490024298 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsJapaneseSmallLetter(System.Char)
extern "C"  bool MSCompatUnicodeTable_IsJapaneseSmallLetter_m2541532635 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::get_IsReady()
extern "C"  bool MSCompatUnicodeTable_get_IsReady_m562849792 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Globalization.Unicode.MSCompatUnicodeTable::GetResource(System.String)
extern "C"  IntPtr_t MSCompatUnicodeTable_GetResource_m3816716847 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Globalization.Unicode.MSCompatUnicodeTable::UInt32FromBytePtr(System.Byte*,System.UInt32)
extern "C"  uint32_t MSCompatUnicodeTable_UInt32FromBytePtr_m340276309 (Il2CppObject * __this /* static, unused */, uint8_t* ___raw, uint32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJK(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C"  void MSCompatUnicodeTable_FillCJK_m3035171370 (Il2CppObject * __this /* static, unused */, String_t* ___culture, CodePointIndexer_t901202821 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t901202821 ** ___lv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJKCore(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C"  void MSCompatUnicodeTable_FillCJKCore_m1100372933 (Il2CppObject * __this /* static, unused */, String_t* ___culture, CodePointIndexer_t901202821 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t901202821 ** ___cjkLv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
