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

// System.IO.Stream
struct Stream_t2768948945;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.IO.Stream::.ctor()
extern "C"  void Stream__ctor_m1531324023 (Stream_t2768948945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::.cctor()
extern "C"  void Stream__cctor_m2933380982 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose()
extern "C"  void Stream_Dispose_m2417657914 (Stream_t2768948945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose(System.Boolean)
extern "C"  void Stream_Dispose_m440254723 (Stream_t2768948945 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Close()
extern "C"  void Stream_Close_m1499612649 (Stream_t2768948945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::ReadByte()
extern "C"  int32_t Stream_ReadByte_m1820799709 (Stream_t2768948945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::WriteByte(System.Byte)
extern "C"  void Stream_WriteByte_m1789051881 (Stream_t2768948945 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Stream_BeginRead_m1985960185 (Stream_t2768948945 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Stream_BeginWrite_m2718688710 (Stream_t2768948945 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::EndRead(System.IAsyncResult)
extern "C"  int32_t Stream_EndRead_m2148943753 (Stream_t2768948945 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::EndWrite(System.IAsyncResult)
extern "C"  void Stream_EndWrite_m263497992 (Stream_t2768948945 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
