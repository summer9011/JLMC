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
// System.IO.TextWriter
struct TextWriter_t1448322145;
// System.IO.Stream
struct Stream_t2768948945;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_Encoding2125916575.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_IO_FileAccess3159480569.h"

// System.Void System.Console::.cctor()
extern "C"  void Console__cctor_m4246683879 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::SetEncodings(System.Text.Encoding,System.Text.Encoding)
extern "C"  void Console_SetEncodings_m342145566 (Il2CppObject * __this /* static, unused */, Encoding_t2125916575 * ___inputEncoding, Encoding_t2125916575 * ___outputEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
extern "C"  TextWriter_t1448322145 * Console_get_Error_m2313154535 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::Open(System.IntPtr,System.IO.FileAccess,System.Int32)
extern "C"  Stream_t2768948945 * Console_Open_m2656719008 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, int32_t ___access, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardError(System.Int32)
extern "C"  Stream_t2768948945 * Console_OpenStandardError_m3676373108 (Il2CppObject * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardInput(System.Int32)
extern "C"  Stream_t2768948945 * Console_OpenStandardInput_m3779296306 (Il2CppObject * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardOutput(System.Int32)
extern "C"  Stream_t2768948945 * Console_OpenStandardOutput_m271745789 (Il2CppObject * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
