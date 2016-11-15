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

// System.IO.FileStream
struct FileStream_t4109615879;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t2768948945;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_IO_FileAccess3159480569.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_IO_FileMode638157444.h"
#include "mscorlib_System_IO_FileShare2318822726.h"
#include "mscorlib_System_IO_FileOptions979479373.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IO_SeekOrigin951763547.h"
#include "mscorlib_System_IO_Stream2768948945.h"

// System.Void System.IO.FileStream::.ctor(System.IntPtr,System.IO.FileAccess,System.Boolean,System.Int32,System.Boolean,System.Boolean)
extern "C"  void FileStream__ctor_m3026076202 (FileStream_t4109615879 * __this, IntPtr_t ___handle, int32_t ___access, bool ___ownsHandle, int32_t ___bufferSize, bool ___isAsync, bool ___noBuffering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
extern "C"  void FileStream__ctor_m572813458 (FileStream_t4109615879 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C"  void FileStream__ctor_m3699774824 (FileStream_t4109615879 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32)
extern "C"  void FileStream__ctor_m2737324509 (FileStream_t4109615879 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.Boolean)
extern "C"  void FileStream__ctor_m756268517 (FileStream_t4109615879 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, bool ___isAsync, bool ___anonymous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.IO.FileOptions)
extern "C"  void FileStream__ctor_m3815606687 (FileStream_t4109615879 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, bool ___anonymous, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanRead()
extern "C"  bool FileStream_get_CanRead_m4148920720 (FileStream_t4109615879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanWrite()
extern "C"  bool FileStream_get_CanWrite_m775322953 (FileStream_t4109615879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanSeek()
extern "C"  bool FileStream_get_CanSeek_m1833070492 (FileStream_t4109615879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::get_Length()
extern "C"  int64_t FileStream_get_Length_m2265080501 (FileStream_t4109615879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::get_Position()
extern "C"  int64_t FileStream_get_Position_m465478322 (FileStream_t4109615879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::set_Position(System.Int64)
extern "C"  void FileStream_set_Position_m1177202695 (FileStream_t4109615879 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadByte()
extern "C"  int32_t FileStream_ReadByte_m539591659 (FileStream_t4109615879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::WriteByte(System.Byte)
extern "C"  void FileStream_WriteByte_m26838815 (FileStream_t4109615879 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_Read_m3880951166 (FileStream_t4109615879 * __this, ByteU5BU5D_t3835026402* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_ReadInternal_m2426171121 (FileStream_t4109615879 * __this, ByteU5BU5D_t3835026402* ___dest, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FileStream_BeginRead_m113461779 (FileStream_t4109615879 * __this, ByteU5BU5D_t3835026402* ___array, int32_t ___offset, int32_t ___numBytes, AsyncCallback_t889871978 * ___userCallback, Il2CppObject * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::EndRead(System.IAsyncResult)
extern "C"  int32_t FileStream_EndRead_m3203064263 (FileStream_t4109615879 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void FileStream_Write_m368821387 (FileStream_t4109615879 * __this, ByteU5BU5D_t3835026402* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  void FileStream_WriteInternal_m115274124 (FileStream_t4109615879 * __this, ByteU5BU5D_t3835026402* ___src, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FileStream_BeginWrite_m3895959548 (FileStream_t4109615879 * __this, ByteU5BU5D_t3835026402* ___array, int32_t ___offset, int32_t ___numBytes, AsyncCallback_t889871978 * ___userCallback, Il2CppObject * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::EndWrite(System.IAsyncResult)
extern "C"  void FileStream_EndWrite_m2839820194 (FileStream_t4109615879 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t FileStream_Seek_m950719389 (FileStream_t4109615879 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::SetLength(System.Int64)
extern "C"  void FileStream_SetLength_m1881403001 (FileStream_t4109615879 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Flush()
extern "C"  void FileStream_Flush_m2048412453 (FileStream_t4109615879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Finalize()
extern "C"  void FileStream_Finalize_m299593251 (FileStream_t4109615879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Dispose(System.Boolean)
extern "C"  void FileStream_Dispose_m438945577 (FileStream_t4109615879 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadSegment(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_ReadSegment_m490859393 (FileStream_t4109615879 * __this, ByteU5BU5D_t3835026402* ___dest, int32_t ___dest_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::WriteSegment(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_WriteSegment_m2309113546 (FileStream_t4109615879 * __this, ByteU5BU5D_t3835026402* ___src, int32_t ___src_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBuffer(System.IO.Stream)
extern "C"  void FileStream_FlushBuffer_m2594140542 (FileStream_t4109615879 * __this, Stream_t2768948945 * ___st, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBuffer()
extern "C"  void FileStream_FlushBuffer_m4224969569 (FileStream_t4109615879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBufferIfDirty()
extern "C"  void FileStream_FlushBufferIfDirty_m1110148568 (FileStream_t4109615879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::RefillBuffer()
extern "C"  void FileStream_RefillBuffer_m4272011577 (FileStream_t4109615879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadData(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_ReadData_m3757794362 (FileStream_t4109615879 * __this, IntPtr_t ___handle, ByteU5BU5D_t3835026402* ___buf, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::InitBuffer(System.Int32,System.Boolean)
extern "C"  void FileStream_InitBuffer_m2153931481 (FileStream_t4109615879 * __this, int32_t ___size, bool ___noBuffering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::GetSecureFileName(System.String)
extern "C"  String_t* FileStream_GetSecureFileName_m508045384 (FileStream_t4109615879 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::GetSecureFileName(System.String,System.Boolean)
extern "C"  String_t* FileStream_GetSecureFileName_m2684907397 (FileStream_t4109615879 * __this, String_t* ___filename, bool ___full, const MethodInfo* method) IL2CPP_METHOD_ATTR;
