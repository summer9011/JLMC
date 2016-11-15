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

// System.IO.StringReader
struct StringReader_t2813898599;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1685951112;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.IO.StringReader::.ctor(System.String)
extern "C"  void StringReader__ctor_m643998729 (StringReader_t2813898599 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::Dispose(System.Boolean)
extern "C"  void StringReader_Dispose_m785726171 (StringReader_t2813898599 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Peek()
extern "C"  int32_t StringReader_Peek_m2542825306 (StringReader_t2813898599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Read()
extern "C"  int32_t StringReader_Read_m513112775 (StringReader_t2813898599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t StringReader_Read_m194901108 (StringReader_t2813898599 * __this, CharU5BU5D_t1685951112* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringReader::ReadLine()
extern "C"  String_t* StringReader_ReadLine_m2841496578 (StringReader_t2813898599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringReader::ReadToEnd()
extern "C"  String_t* StringReader_ReadToEnd_m2731322812 (StringReader_t2813898599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::CheckObjectDisposedException()
extern "C"  void StringReader_CheckObjectDisposedException_m3099453260 (StringReader_t2813898599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
