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

// System.IO.SynchronizedReader
struct SynchronizedReader_t369203898;
// System.IO.TextReader
struct TextReader_t657369457;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1685951112;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader657369457.h"

// System.Void System.IO.SynchronizedReader::.ctor(System.IO.TextReader)
extern "C"  void SynchronizedReader__ctor_m1408327515 (SynchronizedReader_t369203898 * __this, TextReader_t657369457 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Peek()
extern "C"  int32_t SynchronizedReader_Peek_m282642073 (SynchronizedReader_t369203898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadLine()
extern "C"  String_t* SynchronizedReader_ReadLine_m723354621 (SynchronizedReader_t369203898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadToEnd()
extern "C"  String_t* SynchronizedReader_ReadToEnd_m3152232183 (SynchronizedReader_t369203898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read()
extern "C"  int32_t SynchronizedReader_Read_m222289562 (SynchronizedReader_t369203898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t SynchronizedReader_Read_m1399666181 (SynchronizedReader_t369203898 * __this, CharU5BU5D_t1685951112* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
