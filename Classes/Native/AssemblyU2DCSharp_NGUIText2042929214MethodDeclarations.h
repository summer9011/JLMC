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

// System.String
struct String_t;
// BMSymbol
struct BMSymbol_t1865486779;
// NGUIText/GlyphInfo
struct GlyphInfo_t3705451274;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t2471337806;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t686006439;
// BetterList`1<System.Int32>
struct BetterList_1_t1668559239;
// System.Text.StringBuilder
struct StringBuilder_t2393427626;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t686006440;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t2983401365;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "mscorlib_System_Text_StringBuilder2393427626.h"

// System.Void NGUIText::.cctor()
extern "C"  void NGUIText__cctor_m3924362552 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Update()
extern "C"  void NGUIText_Update_m3963317672 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Update(System.Boolean)
extern "C"  void NGUIText_Update_m2822123233 (Il2CppObject * __this /* static, unused */, bool ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Prepare(System.String)
extern "C"  void NGUIText_Prepare_m872412516 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol NGUIText::GetSymbol(System.String,System.Int32,System.Int32)
extern "C"  BMSymbol_t1865486779 * NGUIText_GetSymbol_m50256655 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___index, int32_t ___textLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIText::GetGlyphWidth(System.Int32,System.Int32)
extern "C"  float NGUIText_GetGlyphWidth_m3445447203 (Il2CppObject * __this /* static, unused */, int32_t ___ch, int32_t ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NGUIText/GlyphInfo NGUIText::GetGlyph(System.Int32,System.Int32)
extern "C"  GlyphInfo_t3705451274 * NGUIText_GetGlyph_m2650405327 (Il2CppObject * __this /* static, unused */, int32_t ___ch, int32_t ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIText::ParseAlpha(System.String,System.Int32)
extern "C"  float NGUIText_ParseAlpha_m3047036607 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIText::ParseColor(System.String,System.Int32)
extern "C"  Color_t2250949164  NGUIText_ParseColor_m2346096245 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIText::ParseColor24(System.String,System.Int32)
extern "C"  Color_t2250949164  NGUIText_ParseColor24_m406878571 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIText::ParseColor32(System.String,System.Int32)
extern "C"  Color_t2250949164  NGUIText_ParseColor32_m455671840 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor(UnityEngine.Color)
extern "C"  String_t* NGUIText_EncodeColor_m3944659951 (Il2CppObject * __this /* static, unused */, Color_t2250949164  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor(System.String,UnityEngine.Color)
extern "C"  String_t* NGUIText_EncodeColor_m1278833841 (Il2CppObject * __this /* static, unused */, String_t* ___text, Color_t2250949164  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeAlpha(System.Single)
extern "C"  String_t* NGUIText_EncodeAlpha_m586687501 (Il2CppObject * __this /* static, unused */, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor24(UnityEngine.Color)
extern "C"  String_t* NGUIText_EncodeColor24_m2442571689 (Il2CppObject * __this /* static, unused */, Color_t2250949164  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor32(UnityEngine.Color)
extern "C"  String_t* NGUIText_EncodeColor32_m417330306 (Il2CppObject * __this /* static, unused */, Color_t2250949164  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::ParseSymbol(System.String,System.Int32&)
extern "C"  bool NGUIText_ParseSymbol_m529556513 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::IsHex(System.Char)
extern "C"  bool NGUIText_IsHex_m4038863059 (Il2CppObject * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::ParseSymbol(System.String,System.Int32&,BetterList`1<UnityEngine.Color>,System.Boolean,System.Int32&,System.Boolean&,System.Boolean&,System.Boolean&,System.Boolean&,System.Boolean&)
extern "C"  bool NGUIText_ParseSymbol_m1927929123 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t* ___index, BetterList_1_t2471337806 * ___colors, bool ___premultiply, int32_t* ___sub, bool* ___bold, bool* ___italic, bool* ___underline, bool* ___strike, bool* ___ignoreColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::StripSymbols(System.String)
extern "C"  String_t* NGUIText_StripSymbols_m1227015469 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Align(BetterList`1<UnityEngine.Vector3>,System.Int32,System.Single)
extern "C"  void NGUIText_Align_m926950144 (Il2CppObject * __this /* static, unused */, BetterList_1_t686006439 * ___verts, int32_t ___indexOffset, float ___printedWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::GetExactCharacterIndex(BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>,UnityEngine.Vector2)
extern "C"  int32_t NGUIText_GetExactCharacterIndex_m3716450851 (Il2CppObject * __this /* static, unused */, BetterList_1_t686006439 * ___verts, BetterList_1_t1668559239 * ___indices, Vector2_t465617798  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::GetApproximateCharacterIndex(BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>,UnityEngine.Vector2)
extern "C"  int32_t NGUIText_GetApproximateCharacterIndex_m4188360570 (Il2CppObject * __this /* static, unused */, BetterList_1_t686006439 * ___verts, BetterList_1_t1668559239 * ___indices, Vector2_t465617798  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::IsSpace(System.Int32)
extern "C"  bool NGUIText_IsSpace_m3623332952 (Il2CppObject * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::EndLine(System.Text.StringBuilder&)
extern "C"  void NGUIText_EndLine_m2354123552 (Il2CppObject * __this /* static, unused */, StringBuilder_t2393427626 ** ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::ReplaceSpaceWithNewline(System.Text.StringBuilder&)
extern "C"  void NGUIText_ReplaceSpaceWithNewline_m1051766721 (Il2CppObject * __this /* static, unused */, StringBuilder_t2393427626 ** ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIText::CalculatePrintedSize(System.String)
extern "C"  Vector2_t465617798  NGUIText_CalculatePrintedSize_m2374104255 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::CalculateOffsetToFit(System.String)
extern "C"  int32_t NGUIText_CalculateOffsetToFit_m1147202752 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::GetEndOfLineThatFits(System.String)
extern "C"  String_t* NGUIText_GetEndOfLineThatFits_m1489487887 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::WrapText(System.String,System.String&)
extern "C"  bool NGUIText_WrapText_m690767618 (Il2CppObject * __this /* static, unused */, String_t* ___text, String_t** ___finalText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::WrapText(System.String,System.String&,System.Boolean)
extern "C"  bool NGUIText_WrapText_m3011753727 (Il2CppObject * __this /* static, unused */, String_t* ___text, String_t** ___finalText, bool ___keepCharCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Print(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void NGUIText_Print_m3630053003 (Il2CppObject * __this /* static, unused */, String_t* ___text, BetterList_1_t686006439 * ___verts, BetterList_1_t686006440 * ___uvs, BetterList_1_t2983401365 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::PrintApproximateCharacterPositions(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>)
extern "C"  void NGUIText_PrintApproximateCharacterPositions_m787871427 (Il2CppObject * __this /* static, unused */, String_t* ___text, BetterList_1_t686006439 * ___verts, BetterList_1_t1668559239 * ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::PrintExactCharacterPositions(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>)
extern "C"  void NGUIText_PrintExactCharacterPositions_m2912123146 (Il2CppObject * __this /* static, unused */, String_t* ___text, BetterList_1_t686006439 * ___verts, BetterList_1_t1668559239 * ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::PrintCaretAndSelection(System.String,System.Int32,System.Int32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector3>)
extern "C"  void NGUIText_PrintCaretAndSelection_m1102244390 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___start, int32_t ___end, BetterList_1_t686006439 * ___caret, BetterList_1_t686006439 * ___highlight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
