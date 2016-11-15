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

// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t2125916575;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Text_Encoding2125916575.h"

// System.Void UnityEngine.WWWTranscoder::.cctor()
extern "C"  void WWWTranscoder__cctor_m916878076 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* WWWTranscoder_Byte2Hex_m1676183558 (Il2CppObject * __this /* static, unused */, uint8_t ___b, ByteU5BU5D_t3835026402* ___hexChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* WWWTranscoder_URLEncode_m82461225 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___toEncode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern "C"  String_t* WWWTranscoder_QPEncode_m629571574 (Il2CppObject * __this /* static, unused */, String_t* ___toEncode, Encoding_t2125916575 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern "C"  ByteU5BU5D_t3835026402* WWWTranscoder_Encode_m4207510302 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___input, uint8_t ___escapeChar, uint8_t ___space, ByteU5BU5D_t3835026402* ___forbidden, bool ___uppercase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C"  bool WWWTranscoder_ByteArrayContains_m1587254237 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___array, uint8_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern "C"  bool WWWTranscoder_SevenBitClean_m556517891 (Il2CppObject * __this /* static, unused */, String_t* ___s, Encoding_t2125916575 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C"  bool WWWTranscoder_SevenBitClean_m1700940017 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
