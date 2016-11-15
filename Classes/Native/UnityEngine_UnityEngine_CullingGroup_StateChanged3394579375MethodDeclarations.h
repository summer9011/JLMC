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

// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t3394579375;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_CullingGroupEvent2706259532.h"
#include "UnityEngine_UnityEngine_CullingGroupEvent2706259532MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UnityEngine.CullingGroup/StateChanged::.ctor(System.Object,System.IntPtr)
extern "C"  void StateChanged__ctor_m2322131884 (StateChanged_t3394579375 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CullingGroup/StateChanged::Invoke(UnityEngine.CullingGroupEvent)
extern "C"  void StateChanged_Invoke_m2308261448 (StateChanged_t3394579375 * __this, CullingGroupEvent_t2706259532  ___sphere, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_StateChanged_t3394579375(Il2CppObject* delegate, CullingGroupEvent_t2706259532  ___sphere);
// System.IAsyncResult UnityEngine.CullingGroup/StateChanged::BeginInvoke(UnityEngine.CullingGroupEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StateChanged_BeginInvoke_m1716538087 (StateChanged_t3394579375 * __this, CullingGroupEvent_t2706259532  ___sphere, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CullingGroup/StateChanged::EndInvoke(System.IAsyncResult)
extern "C"  void StateChanged_EndInvoke_m2186648314 (StateChanged_t3394579375 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
