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

// EasyAR.VideoPlayer/CallBack
struct CallBack_t1186946879;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void EasyAR.VideoPlayer/CallBack::.ctor(System.Object,System.IntPtr)
extern "C"  void CallBack__ctor_m3309547730 (CallBack_t1186946879 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer/CallBack::Invoke(System.IntPtr,System.Int32)
extern "C"  void CallBack_Invoke_m3280090487 (CallBack_t1186946879 * __this, IntPtr_t ___obj, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CallBack_t1186946879(Il2CppObject* delegate, IntPtr_t ___obj, int32_t ___status);
// System.IAsyncResult EasyAR.VideoPlayer/CallBack::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CallBack_BeginInvoke_m1046262948 (CallBack_t1186946879 * __this, IntPtr_t ___obj, int32_t ___status, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer/CallBack::EndInvoke(System.IAsyncResult)
extern "C"  void CallBack_EndInvoke_m720253680 (CallBack_t1186946879 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
