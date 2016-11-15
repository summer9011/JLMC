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

// System.Text.Encoding
struct Encoding_t2125916575;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t702655132;
// System.Text.EncoderFallback
struct EncoderFallback_t329914952;
// System.Object
struct Il2CppObject;
// System.Char[]
struct CharU5BU5D_t1685951112;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Text.Decoder
struct Decoder_t3566053706;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Text_DecoderFallback702655132.h"
#include "mscorlib_System_Text_EncoderFallback329914952.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Text.Encoding::.ctor()
extern "C"  void Encoding__ctor_m3575142715 (Encoding_t2125916575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.ctor(System.Int32)
extern "C"  void Encoding__ctor_m3985582722 (Encoding_t2125916575 * __this, int32_t ___codePage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.cctor()
extern "C"  void Encoding__cctor_m3452072550 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::_(System.String)
extern "C"  String_t* Encoding___m3303938679 (Il2CppObject * __this /* static, unused */, String_t* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::get_IsReadOnly()
extern "C"  bool Encoding_get_IsReadOnly_m3729101432 (Encoding_t2125916575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallback System.Text.Encoding::get_DecoderFallback()
extern "C"  DecoderFallback_t702655132 * Encoding_get_DecoderFallback_m167120457 (Encoding_t2125916575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::set_DecoderFallback(System.Text.DecoderFallback)
extern "C"  void Encoding_set_DecoderFallback_m2255528738 (Encoding_t2125916575 * __this, DecoderFallback_t702655132 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallback System.Text.Encoding::get_EncoderFallback()
extern "C"  EncoderFallback_t329914952 * Encoding_get_EncoderFallback_m2188137289 (Encoding_t2125916575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::SetFallbackInternal(System.Text.EncoderFallback,System.Text.DecoderFallback)
extern "C"  void Encoding_SetFallbackInternal_m1682842442 (Encoding_t2125916575 * __this, EncoderFallback_t329914952 * ___e, DecoderFallback_t702655132 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::Equals(System.Object)
extern "C"  bool Encoding_Equals_m3339077822 (Encoding_t2125916575 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.String)
extern "C"  int32_t Encoding_GetByteCount_m3009152260 (Encoding_t2125916575 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[])
extern "C"  int32_t Encoding_GetByteCount_m4230195047 (Encoding_t2125916575 * __this, CharU5BU5D_t1685951112* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Encoding_GetBytes_m439563900 (Encoding_t2125916575 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t3835026402* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.String)
extern "C"  ByteU5BU5D_t3835026402* Encoding_GetBytes_m882649950 (Encoding_t2125916575 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3835026402* Encoding_GetBytes_m49743925 (Encoding_t2125916575 * __this, CharU5BU5D_t1685951112* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[])
extern "C"  ByteU5BU5D_t3835026402* Encoding_GetBytes_m3807376257 (Encoding_t2125916575 * __this, CharU5BU5D_t1685951112* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32)
extern "C"  CharU5BU5D_t1685951112* Encoding_GetChars_m3456310195 (Encoding_t2125916575 * __this, ByteU5BU5D_t3835026402* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.Encoding::GetDecoder()
extern "C"  Decoder_t3566053706 * Encoding_GetDecoder_m147694150 (Encoding_t2125916575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::InvokeI18N(System.String,System.Object[])
extern "C"  Il2CppObject * Encoding_InvokeI18N_m4199316552 (Il2CppObject * __this /* static, unused */, String_t* ___name, ObjectU5BU5D_t3632007997* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.Int32)
extern "C"  Encoding_t2125916575 * Encoding_GetEncoding_m3069572543 (Il2CppObject * __this /* static, unused */, int32_t ___codepage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::Clone()
extern "C"  Il2CppObject * Encoding_Clone_m2663608141 (Encoding_t2125916575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
extern "C"  Encoding_t2125916575 * Encoding_GetEncoding_m2475966878 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetHashCode()
extern "C"  int32_t Encoding_GetHashCode_m2716285346 (Encoding_t2125916575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetPreamble()
extern "C"  ByteU5BU5D_t3835026402* Encoding_GetPreamble_m487247297 (Encoding_t2125916575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* Encoding_GetString_m1894033578 (Encoding_t2125916575 * __this, ByteU5BU5D_t3835026402* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[])
extern "C"  String_t* Encoding_GetString_m3109080184 (Encoding_t2125916575 * __this, ByteU5BU5D_t3835026402* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::get_HeaderName()
extern "C"  String_t* Encoding_get_HeaderName_m3876347551 (Encoding_t2125916575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::get_WebName()
extern "C"  String_t* Encoding_get_WebName_m3816029902 (Encoding_t2125916575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
extern "C"  Encoding_t2125916575 * Encoding_get_ASCII_m2727409419 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUnicode()
extern "C"  Encoding_t2125916575 * Encoding_get_BigEndianUnicode_m1461269772 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::InternalCodePage(System.Int32&)
extern "C"  String_t* Encoding_InternalCodePage_m4220689148 (Il2CppObject * __this /* static, unused */, int32_t* ___code_page, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Default()
extern "C"  Encoding_t2125916575 * Encoding_get_Default_m908538569 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ISOLatin1()
extern "C"  Encoding_t2125916575 * Encoding_get_ISOLatin1_m151504502 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF7()
extern "C"  Encoding_t2125916575 * Encoding_get_UTF7_m3507153546 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t2125916575 * Encoding_get_UTF8_m1752852937 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8Unmarked()
extern "C"  Encoding_t2125916575 * Encoding_get_UTF8Unmarked_m628720656 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8UnmarkedUnsafe()
extern "C"  Encoding_t2125916575 * Encoding_get_UTF8UnmarkedUnsafe_m4035823170 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
extern "C"  Encoding_t2125916575 * Encoding_get_Unicode_m1382741113 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF32()
extern "C"  Encoding_t2125916575 * Encoding_get_UTF32_m2165075342 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUTF32()
extern "C"  Encoding_t2125916575 * Encoding_get_BigEndianUTF32_m1609065717 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t Encoding_GetByteCount_m4104502544 (Encoding_t2125916575 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t Encoding_GetBytes_m3820493744 (Encoding_t2125916575 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
