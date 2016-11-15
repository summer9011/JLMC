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

// UICenterOnChild/OnCenterCallback
struct OnCenterCallback_t3499100769;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UICenterOnChild/OnCenterCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnCenterCallback__ctor_m1386102931 (OnCenterCallback_t3499100769 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild/OnCenterCallback::Invoke(UnityEngine.GameObject)
extern "C"  void OnCenterCallback_Invoke_m1186976991 (OnCenterCallback_t3499100769 * __this, GameObject_t1366199518 * ___centeredObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnCenterCallback_t3499100769(Il2CppObject* delegate, GameObject_t1366199518 * ___centeredObject);
// System.IAsyncResult UICenterOnChild/OnCenterCallback::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnCenterCallback_BeginInvoke_m2580837292 (OnCenterCallback_t3499100769 * __this, GameObject_t1366199518 * ___centeredObject, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild/OnCenterCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnCenterCallback_EndInvoke_m573681781 (OnCenterCallback_t3499100769 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
