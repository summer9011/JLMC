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

// System.IO.TextReader
struct TextReader_t657369457;
// System.Char[]
struct CharU5BU5D_t1685951112;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader657369457.h"

// System.Void System.IO.TextReader::.ctor()
extern "C"  void TextReader__ctor_m3276128267 (TextReader_t657369457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::.cctor()
extern "C"  void TextReader__cctor_m3499744150 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose()
extern "C"  void TextReader_Dispose_m4077464570 (TextReader_t657369457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose(System.Boolean)
extern "C"  void TextReader_Dispose_m464100839 (TextReader_t657369457 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Peek()
extern "C"  int32_t TextReader_Peek_m3516467664 (TextReader_t657369457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read()
extern "C"  int32_t TextReader_Read_m975794707 (TextReader_t657369457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t TextReader_Read_m293035998 (TextReader_t657369457 * __this, CharU5BU5D_t1685951112* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadLine()
extern "C"  String_t* TextReader_ReadLine_m4195715352 (TextReader_t657369457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadToEnd()
extern "C"  String_t* TextReader_ReadToEnd_m1826456398 (TextReader_t657369457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.IO.TextReader::Synchronized(System.IO.TextReader)
extern "C"  TextReader_t657369457 * TextReader_Synchronized_m3301249644 (Il2CppObject * __this /* static, unused */, TextReader_t657369457 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
