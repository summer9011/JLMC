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

// System.IO.FileInfo
struct FileInfo_t2789094487;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.IO.DirectoryInfo
struct DirectoryInfo_t2045585366;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.IO.FileInfo::.ctor(System.String)
extern "C"  void FileInfo__ctor_m2605645233 (FileInfo_t2789094487 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileInfo__ctor_m2015269278 (FileInfo_t2789094487 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::InternalRefresh()
extern "C"  void FileInfo_InternalRefresh_m2353685769 (FileInfo_t2789094487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileInfo::get_Exists()
extern "C"  bool FileInfo_get_Exists_m1446268948 (FileInfo_t2789094487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_Name()
extern "C"  String_t* FileInfo_get_Name_m506260294 (FileInfo_t2789094487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_DirectoryName()
extern "C"  String_t* FileInfo_get_DirectoryName_m441515569 (FileInfo_t2789094487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.FileInfo::get_Directory()
extern "C"  DirectoryInfo_t2045585366 * FileInfo_get_Directory_m898581134 (FileInfo_t2789094487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::ToString()
extern "C"  String_t* FileInfo_ToString_m2424440748 (FileInfo_t2789094487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
