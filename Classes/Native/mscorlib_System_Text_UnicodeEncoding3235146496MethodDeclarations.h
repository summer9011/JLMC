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

// System.Text.UnicodeEncoding
struct UnicodeEncoding_t3235146496;
// System.Char[]
struct CharU5BU5D_t1685951112;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Text.Decoder
struct Decoder_t3566053706;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Text.UnicodeEncoding::.ctor()
extern "C"  void UnicodeEncoding__ctor_m553325592 (UnicodeEncoding_t3235146496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean)
extern "C"  void UnicodeEncoding__ctor_m2590877592 (UnicodeEncoding_t3235146496 * __this, bool ___bigEndian, bool ___byteOrderMark, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
extern "C"  void UnicodeEncoding__ctor_m72484327 (UnicodeEncoding_t3235146496 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetByteCount_m3828694214 (UnicodeEncoding_t3235146496 * __this, CharU5BU5D_t1685951112* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.String)
extern "C"  int32_t UnicodeEncoding_GetByteCount_m2761661599 (UnicodeEncoding_t3235146496 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetByteCount_m662995793 (UnicodeEncoding_t3235146496 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UnicodeEncoding_GetBytes_m1337660232 (UnicodeEncoding_t3235146496 * __this, CharU5BU5D_t1685951112* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t3835026402* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UnicodeEncoding_GetBytes_m4175529985 (UnicodeEncoding_t3235146496 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t3835026402* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetBytes_m1575298215 (UnicodeEncoding_t3235146496 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytesInternal(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetBytesInternal_m3561730000 (UnicodeEncoding_t3235146496 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetCharCount_m3719064538 (UnicodeEncoding_t3235146496 * __this, ByteU5BU5D_t3835026402* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t UnicodeEncoding_GetChars_m3765282346 (UnicodeEncoding_t3235146496 * __this, ByteU5BU5D_t3835026402* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t1685951112* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UnicodeEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* UnicodeEncoding_GetString_m542738941 (UnicodeEncoding_t3235146496 * __this, ByteU5BU5D_t3835026402* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharsInternal(System.Byte*,System.Int32,System.Char*,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetCharsInternal_m3402203122 (UnicodeEncoding_t3235146496 * __this, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t UnicodeEncoding_GetMaxByteCount_m850113618 (UnicodeEncoding_t3235146496 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t UnicodeEncoding_GetMaxCharCount_m1304607124 (UnicodeEncoding_t3235146496 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UnicodeEncoding::GetDecoder()
extern "C"  Decoder_t3566053706 * UnicodeEncoding_GetDecoder_m1919599385 (UnicodeEncoding_t3235146496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UnicodeEncoding::GetPreamble()
extern "C"  ByteU5BU5D_t3835026402* UnicodeEncoding_GetPreamble_m3922448380 (UnicodeEncoding_t3235146496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UnicodeEncoding::Equals(System.Object)
extern "C"  bool UnicodeEncoding_Equals_m4105324537 (UnicodeEncoding_t3235146496 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetHashCode()
extern "C"  int32_t UnicodeEncoding_GetHashCode_m2443440683 (UnicodeEncoding_t3235146496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::CopyChars(System.Byte*,System.Byte*,System.Int32,System.Boolean)
extern "C"  void UnicodeEncoding_CopyChars_m2605581672 (Il2CppObject * __this /* static, unused */, uint8_t* ___src, uint8_t* ___dest, int32_t ___count, bool ___bigEndian, const MethodInfo* method) IL2CPP_METHOD_ATTR;
