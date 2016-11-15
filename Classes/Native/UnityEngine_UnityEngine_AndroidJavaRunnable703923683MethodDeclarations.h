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

// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_t703923683;
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

// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
extern "C"  void AndroidJavaRunnable__ctor_m1361079927 (AndroidJavaRunnable_t703923683 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaRunnable::Invoke()
extern "C"  void AndroidJavaRunnable_Invoke_m640177851 (AndroidJavaRunnable_t703923683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AndroidJavaRunnable_t703923683(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.AndroidJavaRunnable::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AndroidJavaRunnable_BeginInvoke_m1836290498 (AndroidJavaRunnable_t703923683 * __this, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaRunnable::EndInvoke(System.IAsyncResult)
extern "C"  void AndroidJavaRunnable_EndInvoke_m1478769609 (AndroidJavaRunnable_t703923683 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
