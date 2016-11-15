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

// System.IO.StreamReader
struct StreamReader_t3810211700;
// System.IO.Stream
struct Stream_t2768948945;
// System.Text.Encoding
struct Encoding_t2125916575;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1685951112;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "mscorlib_System_Text_Encoding2125916575.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.IO.StreamReader::.ctor()
extern "C"  void StreamReader__ctor_m4193167698 (StreamReader_t3810211700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void StreamReader__ctor_m1475856354 (StreamReader_t3810211700 * __this, Stream_t2768948945 * ___stream, Encoding_t2125916575 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C"  void StreamReader__ctor_m2654332332 (StreamReader_t3810211700 * __this, Stream_t2768948945 * ___stream, Encoding_t2125916575 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String)
extern "C"  void StreamReader__ctor_m3454466728 (StreamReader_t3810211700 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
extern "C"  void StreamReader__ctor_m871771009 (StreamReader_t3810211700 * __this, String_t* ___path, Encoding_t2125916575 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.cctor()
extern "C"  void StreamReader__cctor_m1829179037 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C"  void StreamReader_Initialize_m1533993200 (StreamReader_t3810211700 * __this, Stream_t2768948945 * ___stream, Encoding_t2125916575 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
extern "C"  void StreamReader_Dispose_m161417302 (StreamReader_t3810211700 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
extern "C"  int32_t StreamReader_DoChecks_m1801866147 (StreamReader_t3810211700 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::ReadBuffer()
extern "C"  int32_t StreamReader_ReadBuffer_m325353130 (StreamReader_t3810211700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Peek()
extern "C"  int32_t StreamReader_Peek_m1671351235 (StreamReader_t3810211700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read()
extern "C"  int32_t StreamReader_Read_m3371942928 (StreamReader_t3810211700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t StreamReader_Read_m248733379 (StreamReader_t3810211700 * __this, CharU5BU5D_t1685951112* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::FindNextEOL()
extern "C"  int32_t StreamReader_FindNextEOL_m3591898772 (StreamReader_t3810211700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadLine()
extern "C"  String_t* StreamReader_ReadLine_m3205471311 (StreamReader_t3810211700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadToEnd()
extern "C"  String_t* StreamReader_ReadToEnd_m3871366821 (StreamReader_t3810211700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
