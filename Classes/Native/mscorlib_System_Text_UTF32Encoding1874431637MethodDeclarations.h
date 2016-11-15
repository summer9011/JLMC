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

// System.Text.UTF32Encoding
struct UTF32Encoding_t1874431637;
// System.Char[]
struct CharU5BU5D_t1685951112;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Text.Decoder
struct Decoder_t3566053706;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Text.UTF32Encoding::.ctor()
extern "C"  void UTF32Encoding__ctor_m422266633 (UTF32Encoding_t1874431637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean)
extern "C"  void UTF32Encoding__ctor_m2711820969 (UTF32Encoding_t1874431637 * __this, bool ___bigEndian, bool ___byteOrderMark, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
extern "C"  void UTF32Encoding__ctor_m3199945978 (UTF32Encoding_t1874431637 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidCharacters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t UTF32Encoding_GetByteCount_m3183615393 (UTF32Encoding_t1874431637 * __this, CharU5BU5D_t1685951112* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UTF32Encoding_GetBytes_m2290150495 (UTF32Encoding_t1874431637 * __this, CharU5BU5D_t1685951112* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t3835026402* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UTF32Encoding_GetCharCount_m3319809517 (UTF32Encoding_t1874431637 * __this, ByteU5BU5D_t3835026402* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t UTF32Encoding_GetChars_m2511673789 (UTF32Encoding_t1874431637 * __this, ByteU5BU5D_t3835026402* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t1685951112* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t UTF32Encoding_GetMaxByteCount_m3742308917 (UTF32Encoding_t1874431637 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t UTF32Encoding_GetMaxCharCount_m677194067 (UTF32Encoding_t1874431637 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF32Encoding::GetDecoder()
extern "C"  Decoder_t3566053706 * UTF32Encoding_GetDecoder_m2714144074 (UTF32Encoding_t1874431637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF32Encoding::GetPreamble()
extern "C"  ByteU5BU5D_t3835026402* UTF32Encoding_GetPreamble_m767706727 (UTF32Encoding_t1874431637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF32Encoding::Equals(System.Object)
extern "C"  bool UTF32Encoding_Equals_m2227431860 (UTF32Encoding_t1874431637 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetHashCode()
extern "C"  int32_t UTF32Encoding_GetHashCode_m4205784236 (UTF32Encoding_t1874431637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t UTF32Encoding_GetByteCount_m77034086 (UTF32Encoding_t1874431637 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.String)
extern "C"  int32_t UTF32Encoding_GetByteCount_m3218538734 (UTF32Encoding_t1874431637 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t UTF32Encoding_GetBytes_m2093416998 (UTF32Encoding_t1874431637 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UTF32Encoding_GetBytes_m2073800022 (UTF32Encoding_t1874431637 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t3835026402* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF32Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* UTF32Encoding_GetString_m1168793734 (UTF32Encoding_t1874431637 * __this, ByteU5BU5D_t3835026402* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
