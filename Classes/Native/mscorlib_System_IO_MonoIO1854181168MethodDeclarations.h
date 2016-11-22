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

// System.Exception
struct Exception_t1145979430;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_MonoIOError3394702956.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_IO_FileAttributes1304440100.h"
#include "mscorlib_System_IO_MonoFileType3491966752.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_IO_MonoIOStat720308222.h"
#include "mscorlib_System_IO_FileMode638157444.h"
#include "mscorlib_System_IO_FileAccess3159480569.h"
#include "mscorlib_System_IO_FileShare2318822726.h"
#include "mscorlib_System_IO_FileOptions979479373.h"
#include "mscorlib_System_IO_SeekOrigin951763547.h"

// System.Void System.IO.MonoIO::.cctor()
extern "C"  void MonoIO__cctor_m2398680849 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.MonoIO::GetException(System.IO.MonoIOError)
extern "C"  Exception_t1145979430 * MonoIO_GetException_m2577367044 (Il2CppObject * __this /* static, unused */, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.MonoIO::GetException(System.String,System.IO.MonoIOError)
extern "C"  Exception_t1145979430 * MonoIO_GetException_m957022672 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_CreateDirectory_m379525469 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::RemoveDirectory(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_RemoveDirectory_m3495601603 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C"  StringU5BU5D_t3764931161* MonoIO_GetFileSystemEntries_m3422848968 (Il2CppObject * __this /* static, unused */, String_t* ___path, String_t* ___path_with_pattern, int32_t ___attrs, int32_t ___mask, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)
extern "C"  String_t* MonoIO_GetCurrentDirectory_m1509324201 (Il2CppObject * __this /* static, unused */, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::CopyFile(System.String,System.String,System.Boolean,System.IO.MonoIOError&)
extern "C"  bool MonoIO_CopyFile_m2961462354 (Il2CppObject * __this /* static, unused */, String_t* ___path, String_t* ___dest, bool ___overwrite, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_DeleteFile_m3273821223 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileAttributes System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)
extern "C"  int32_t MonoIO_GetFileAttributes_m2061483138 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MonoFileType System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)
extern "C"  int32_t MonoIO_GetFileType_m3310262429 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::Exists(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_Exists_m3221338122 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::ExistsFile(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_ExistsFile_m1421941572 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::ExistsDirectory(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_ExistsDirectory_m3152546909 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::ExistsSymlink(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_ExistsSymlink_m2976617763 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)
extern "C"  bool MonoIO_GetFileStat_m3146995842 (Il2CppObject * __this /* static, unused */, String_t* ___path, MonoIOStat_t720308222 * ___stat, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)
extern "C"  IntPtr_t MonoIO_Open_m435295363 (Il2CppObject * __this /* static, unused */, String_t* ___filename, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___options, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)
extern "C"  bool MonoIO_Close_m3214088140 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C"  int32_t MonoIO_Read_m3756797647 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t3835026402* ___dest, int32_t ___dest_offset, int32_t ___count, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C"  int32_t MonoIO_Write_m3531233258 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t3835026402* ___src, int32_t ___src_offset, int32_t ___count, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
extern "C"  int64_t MonoIO_Seek_m3461199288 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, int64_t ___offset, int32_t ___origin, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)
extern "C"  int64_t MonoIO_GetLength_m2812344043 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)
extern "C"  bool MonoIO_SetLength_m1019790894 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, int64_t ___length, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleOutput()
extern "C"  IntPtr_t MonoIO_get_ConsoleOutput_m3658567930 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleInput()
extern "C"  IntPtr_t MonoIO_get_ConsoleInput_m2976499023 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleError()
extern "C"  IntPtr_t MonoIO_get_ConsoleError_m592181393 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_VolumeSeparatorChar()
extern "C"  uint16_t MonoIO_get_VolumeSeparatorChar_m1105210138 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_DirectorySeparatorChar()
extern "C"  uint16_t MonoIO_get_DirectorySeparatorChar_m924021979 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_AltDirectorySeparatorChar()
extern "C"  uint16_t MonoIO_get_AltDirectorySeparatorChar_m2795103938 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_PathSeparator()
extern "C"  uint16_t MonoIO_get_PathSeparator_m2635828107 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
