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

// System.IO.StreamWriter
struct StreamWriter_t3790454126;
// System.IO.Stream
struct Stream_t2768948945;
// System.Text.Encoding
struct Encoding_t2125916575;
// System.Char[]
struct CharU5BU5D_t1685951112;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "mscorlib_System_Text_Encoding2125916575.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void StreamWriter__ctor_m3823607994 (StreamWriter_t3790454126 * __this, Stream_t2768948945 * ___stream, Encoding_t2125916575 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
extern "C"  void StreamWriter__ctor_m4232641237 (StreamWriter_t3790454126 * __this, Stream_t2768948945 * ___stream, Encoding_t2125916575 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.cctor()
extern "C"  void StreamWriter__cctor_m1332667003 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
extern "C"  void StreamWriter_Initialize_m1707678624 (StreamWriter_t3790454126 * __this, Encoding_t2125916575 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
extern "C"  void StreamWriter_set_AutoFlush_m4249414005 (StreamWriter_t3790454126 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
extern "C"  void StreamWriter_Dispose_m734922310 (StreamWriter_t3790454126 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Flush()
extern "C"  void StreamWriter_Flush_m3426120024 (StreamWriter_t3790454126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::FlushBytes()
extern "C"  void StreamWriter_FlushBytes_m2173277565 (StreamWriter_t3790454126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Decode()
extern "C"  void StreamWriter_Decode_m2554612662 (StreamWriter_t3790454126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void StreamWriter_Write_m1786721636 (StreamWriter_t3790454126 * __this, CharU5BU5D_t1685951112* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
extern "C"  void StreamWriter_LowLevelWrite_m4205372900 (StreamWriter_t3790454126 * __this, CharU5BU5D_t1685951112* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
extern "C"  void StreamWriter_LowLevelWrite_m2362779341 (StreamWriter_t3790454126 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char)
extern "C"  void StreamWriter_Write_m838393842 (StreamWriter_t3790454126 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[])
extern "C"  void StreamWriter_Write_m48781402 (StreamWriter_t3790454126 * __this, CharU5BU5D_t1685951112* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.String)
extern "C"  void StreamWriter_Write_m1015855743 (StreamWriter_t3790454126 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Close()
extern "C"  void StreamWriter_Close_m2252440242 (StreamWriter_t3790454126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Finalize()
extern "C"  void StreamWriter_Finalize_m2123577702 (StreamWriter_t3790454126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
