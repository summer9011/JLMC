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

// EasyAR.EngineNative/LogFunc
struct LogFunc_t2891211276;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void EasyAR.EngineNative/LogFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void LogFunc__ctor_m3788688828 (LogFunc_t2891211276 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative/LogFunc::Invoke(System.String)
extern "C"  void LogFunc_Invoke_m732262916 (LogFunc_t2891211276 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_LogFunc_t2891211276(Il2CppObject* delegate, String_t* ___str);
// System.IAsyncResult EasyAR.EngineNative/LogFunc::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LogFunc_BeginInvoke_m2304763727 (LogFunc_t2891211276 * __this, String_t* ___str, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.EngineNative/LogFunc::EndInvoke(System.IAsyncResult)
extern "C"  void LogFunc_EndInvoke_m3934977058 (LogFunc_t2891211276 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
