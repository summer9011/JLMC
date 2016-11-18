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

// System.IO.DirectoryInfo
struct DirectoryInfo_t2045585366;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3764931161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_IO_FileAttributes1304440100.h"

// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C"  DirectoryInfo_t2045585366 * Directory_CreateDirectory_m3561886598 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectoriesInternal(System.String)
extern "C"  DirectoryInfo_t2045585366 * Directory_CreateDirectoriesInternal_m2817848291 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::Delete(System.String)
extern "C"  void Directory_Delete_m1547264965 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::RecursiveDelete(System.String)
extern "C"  void Directory_RecursiveDelete_m159261495 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::Delete(System.String,System.Boolean)
extern "C"  void Directory_Delete_m1706845570 (Il2CppObject * __this /* static, unused */, String_t* ___path, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Directory::Exists(System.String)
extern "C"  bool Directory_Exists_m2663601042 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Directory::GetCurrentDirectory()
extern "C"  String_t* Directory_GetCurrentDirectory_m44486537 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetDirectories(System.String)
extern "C"  StringU5BU5D_t3764931161* Directory_GetDirectories_m527106846 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetDirectories(System.String,System.String)
extern "C"  StringU5BU5D_t3764931161* Directory_GetDirectories_m2887060534 (Il2CppObject * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFiles(System.String)
extern "C"  StringU5BU5D_t3764931161* Directory_GetFiles_m3775562030 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFiles(System.String,System.String)
extern "C"  StringU5BU5D_t3764931161* Directory_GetFiles_m4036267478 (Il2CppObject * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::CheckPathExceptions(System.String)
extern "C"  void Directory_CheckPathExceptions_m1248317183 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFileSystemEntries(System.String,System.String,System.IO.FileAttributes,System.IO.FileAttributes)
extern "C"  StringU5BU5D_t3764931161* Directory_GetFileSystemEntries_m2720389648 (Il2CppObject * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, int32_t ___mask, int32_t ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
