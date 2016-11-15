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

// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t3206534394;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "mscorlib_System_Decimal173022926.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Globalization_UnicodeCategory2914296859.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"

// System.Void System.Char::.cctor()
extern "C"  void Char__cctor_m1761604920 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Char::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Il2CppObject * Char_System_IConvertible_ToType_m3106771703 (uint16_t* __this, Type_t * ___targetType, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool Char_System_IConvertible_ToBoolean_m1492656201 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Char::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t Char_System_IConvertible_ToByte_m3292269413 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  uint16_t Char_System_IConvertible_ToChar_m1489061093 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Char::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t2933746480  Char_System_IConvertible_ToDateTime_m4119710117 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Char::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t173022926  Char_System_IConvertible_ToDecimal_m636588657 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Char::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double Char_System_IConvertible_ToDouble_m2303782053 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Char::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t Char_System_IConvertible_ToInt16_m2741348777 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t Char_System_IConvertible_ToInt32_m1648438349 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Char::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t Char_System_IConvertible_ToInt64_m1805894533 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Char::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t Char_System_IConvertible_ToSByte_m2054294501 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Char::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float Char_System_IConvertible_ToSingle_m2547558725 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Char::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t Char_System_IConvertible_ToUInt16_m615593957 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Char::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t Char_System_IConvertible_ToUInt32_m1557991717 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Char::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t Char_System_IConvertible_ToUInt64_m1857416965 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Char::GetDataTablePointers(System.Byte*&,System.Byte*&,System.Double*&,System.UInt16*&,System.UInt16*&,System.UInt16*&,System.UInt16*&)
extern "C"  void Char_GetDataTablePointers_m3052092189 (Il2CppObject * __this /* static, unused */, uint8_t** ___category_data, uint8_t** ___numeric_data, double** ___numeric_data_values, uint16_t** ___to_lower_data_low, uint16_t** ___to_lower_data_high, uint16_t** ___to_upper_data_low, uint16_t** ___to_upper_data_high, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::CompareTo(System.Object)
extern "C"  int32_t Char_CompareTo_m3044885427 (uint16_t* __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::Equals(System.Object)
extern "C"  bool Char_Equals_m1374454116 (uint16_t* __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::CompareTo(System.Char)
extern "C"  int32_t Char_CompareTo_m3169412556 (uint16_t* __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::Equals(System.Char)
extern "C"  bool Char_Equals_m1098469063 (uint16_t* __this, uint16_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::GetHashCode()
extern "C"  int32_t Char_GetHashCode_m2343577184 (uint16_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.UnicodeCategory System.Char::GetUnicodeCategory(System.Char)
extern "C"  int32_t Char_GetUnicodeCategory_m4273361321 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsDigit(System.Char)
extern "C"  bool Char_IsDigit_m751559221 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLetter(System.Char)
extern "C"  bool Char_IsLetter_m562021054 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLetterOrDigit(System.Char)
extern "C"  bool Char_IsLetterOrDigit_m2164758816 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLower(System.Char)
extern "C"  bool Char_IsLower_m569373973 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsSurrogate(System.Char)
extern "C"  bool Char_IsSurrogate_m2088974128 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C"  bool Char_IsWhiteSpace_m1507160293 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.String,System.Int32)
extern "C"  bool Char_IsWhiteSpace_m1797813613 (Il2CppObject * __this /* static, unused */, String_t* ___s, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Char::CheckParameter(System.String,System.Int32)
extern "C"  void Char_CheckParameter_m740446331 (Il2CppObject * __this /* static, unused */, String_t* ___s, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::Parse(System.String)
extern "C"  uint16_t Char_Parse_m2121403806 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLower(System.Char)
extern "C"  uint16_t Char_ToLower_m2719897546 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLowerInvariant(System.Char)
extern "C"  uint16_t Char_ToLowerInvariant_m2418373518 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLower(System.Char,System.Globalization.CultureInfo)
extern "C"  uint16_t Char_ToLower_m3456131102 (Il2CppObject * __this /* static, unused */, uint16_t ___c, CultureInfo_t634113868 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToUpper(System.Char)
extern "C"  uint16_t Char_ToUpper_m109978609 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToUpperInvariant(System.Char)
extern "C"  uint16_t Char_ToUpperInvariant_m3983736813 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString()
extern "C"  String_t* Char_ToString_m1976753030 (uint16_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString(System.IFormatProvider)
extern "C"  String_t* Char_ToString_m1401375624 (uint16_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
