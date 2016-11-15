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

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t362583288;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.Threading.WaitHandle
struct WaitHandle_t313797096;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void FileStreamAsyncResult__ctor_m1096228032 (FileStreamAsyncResult_t362583288 * __this, AsyncCallback_t889871978 * ___cb, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
extern "C"  void FileStreamAsyncResult_CBWrapper_m9324025 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * FileStreamAsyncResult_get_AsyncState_m3935700735 (FileStreamAsyncResult_t362583288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t313797096 * FileStreamAsyncResult_get_AsyncWaitHandle_m3731668273 (FileStreamAsyncResult_t362583288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
extern "C"  bool FileStreamAsyncResult_get_IsCompleted_m2411699696 (FileStreamAsyncResult_t362583288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
