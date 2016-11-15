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

// System.Text.DecoderReplacementFallbackBuffer
struct DecoderReplacementFallbackBuffer_t3243155234;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t4207272988;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_DecoderReplacementFallback4207272988.h"

// System.Void System.Text.DecoderReplacementFallbackBuffer::.ctor(System.Text.DecoderReplacementFallback)
extern "C"  void DecoderReplacementFallbackBuffer__ctor_m1305504326 (DecoderReplacementFallbackBuffer_t3243155234 * __this, DecoderReplacementFallback_t4207272988 * ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderReplacementFallbackBuffer::get_Remaining()
extern "C"  int32_t DecoderReplacementFallbackBuffer_get_Remaining_m1631894831 (DecoderReplacementFallbackBuffer_t3243155234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderReplacementFallbackBuffer::Fallback(System.Byte[],System.Int32)
extern "C"  bool DecoderReplacementFallbackBuffer_Fallback_m1790184670 (DecoderReplacementFallbackBuffer_t3243155234 * __this, ByteU5BU5D_t3835026402* ___bytesUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderReplacementFallbackBuffer::GetNextChar()
extern "C"  uint16_t DecoderReplacementFallbackBuffer_GetNextChar_m2575703537 (DecoderReplacementFallbackBuffer_t3243155234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderReplacementFallbackBuffer::Reset()
extern "C"  void DecoderReplacementFallbackBuffer_Reset_m2576819665 (DecoderReplacementFallbackBuffer_t3243155234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
