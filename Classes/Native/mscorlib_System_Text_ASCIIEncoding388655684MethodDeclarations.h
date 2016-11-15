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

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t388655684;
// System.Char[]
struct CharU5BU5D_t1685951112;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1909102670;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t486096470;
// System.Text.Decoder
struct Decoder_t3566053706;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Text_EncoderFallbackBuffer1909102670.h"
#include "mscorlib_System_Text_DecoderFallbackBuffer486096470.h"

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C"  void ASCIIEncoding__ctor_m4127831672 (ASCIIEncoding_t388655684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t ASCIIEncoding_GetByteCount_m2858986914 (ASCIIEncoding_t388655684 * __this, CharU5BU5D_t1685951112* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C"  int32_t ASCIIEncoding_GetByteCount_m2696039881 (ASCIIEncoding_t388655684 * __this, String_t* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t ASCIIEncoding_GetBytes_m819071568 (ASCIIEncoding_t388655684 * __this, CharU5BU5D_t1685951112* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t3835026402* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C"  int32_t ASCIIEncoding_GetBytes_m3617160053 (ASCIIEncoding_t388655684 * __this, CharU5BU5D_t1685951112* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t3835026402* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1909102670 ** ___buffer, CharU5BU5D_t1685951112** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t ASCIIEncoding_GetBytes_m3649277167 (ASCIIEncoding_t388655684 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t3835026402* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C"  int32_t ASCIIEncoding_GetBytes_m3279802336 (ASCIIEncoding_t388655684 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t3835026402* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1909102670 ** ___buffer, CharU5BU5D_t1685951112** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ASCIIEncoding_GetCharCount_m1069599754 (ASCIIEncoding_t388655684 * __this, ByteU5BU5D_t3835026402* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t ASCIIEncoding_GetChars_m2363744710 (ASCIIEncoding_t388655684 * __this, ByteU5BU5D_t3835026402* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t1685951112* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C"  int32_t ASCIIEncoding_GetChars_m1981435446 (ASCIIEncoding_t388655684 * __this, ByteU5BU5D_t3835026402* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t1685951112* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t486096470 ** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t ASCIIEncoding_GetMaxByteCount_m1501460450 (ASCIIEncoding_t388655684 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t ASCIIEncoding_GetMaxCharCount_m357546748 (ASCIIEncoding_t388655684 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* ASCIIEncoding_GetString_m3931709239 (ASCIIEncoding_t388655684 * __this, ByteU5BU5D_t3835026402* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t ASCIIEncoding_GetBytes_m3744562901 (ASCIIEncoding_t388655684 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t ASCIIEncoding_GetByteCount_m1396020051 (ASCIIEncoding_t388655684 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C"  Decoder_t3566053706 * ASCIIEncoding_GetDecoder_m3693600923 (ASCIIEncoding_t388655684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
