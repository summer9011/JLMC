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

// EasyAR.ImageTracker/TargetLoadCallbackC
struct TargetLoadCallbackC_t2114246551;
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

// System.Void EasyAR.ImageTracker/TargetLoadCallbackC::.ctor(System.Object,System.IntPtr)
extern "C"  void TargetLoadCallbackC__ctor_m3652961213 (TargetLoadCallbackC_t2114246551 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker/TargetLoadCallbackC::Invoke(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void TargetLoadCallbackC_Invoke_m47286054 (TargetLoadCallbackC_t2114246551 * __this, IntPtr_t ___obj, IntPtr_t ___target, bool ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_TargetLoadCallbackC_t2114246551(Il2CppObject* delegate, IntPtr_t ___obj, IntPtr_t ___target, bool ___status);
// System.IAsyncResult EasyAR.ImageTracker/TargetLoadCallbackC::BeginInvoke(System.IntPtr,System.IntPtr,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TargetLoadCallbackC_BeginInvoke_m3343181669 (TargetLoadCallbackC_t2114246551 * __this, IntPtr_t ___obj, IntPtr_t ___target, bool ___status, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTracker/TargetLoadCallbackC::EndInvoke(System.IAsyncResult)
extern "C"  void TargetLoadCallbackC_EndInvoke_m3808945611 (TargetLoadCallbackC_t2114246551 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
