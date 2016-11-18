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

// System.Action`4<System.Object,System.Object,System.Object,System.Boolean>
struct Action_4_t3174571037;
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

// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_4__ctor_m22269249_gshared (Action_4_t3174571037 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_4__ctor_m22269249(__this, ___object, ___method, method) ((  void (*) (Action_4_t3174571037 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_4__ctor_m22269249_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Boolean>::Invoke(T1,T2,T3,T4)
extern "C"  void Action_4_Invoke_m3318773681_gshared (Action_4_t3174571037 * __this, Il2CppObject * ___arg1, Il2CppObject * ___arg2, Il2CppObject * ___arg3, bool ___arg4, const MethodInfo* method);
#define Action_4_Invoke_m3318773681(__this, ___arg1, ___arg2, ___arg3, ___arg4, method) ((  void (*) (Action_4_t3174571037 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, bool, const MethodInfo*))Action_4_Invoke_m3318773681_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, method)
// System.IAsyncResult System.Action`4<System.Object,System.Object,System.Object,System.Boolean>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_4_BeginInvoke_m2534137050_gshared (Action_4_t3174571037 * __this, Il2CppObject * ___arg1, Il2CppObject * ___arg2, Il2CppObject * ___arg3, bool ___arg4, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_4_BeginInvoke_m2534137050(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_4_t3174571037 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, bool, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Action_4_BeginInvoke_m2534137050_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method)
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_4_EndInvoke_m4018511667_gshared (Action_4_t3174571037 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_4_EndInvoke_m4018511667(__this, ___result, method) ((  void (*) (Action_4_t3174571037 *, Il2CppObject *, const MethodInfo*))Action_4_EndInvoke_m4018511667_gshared)(__this, ___result, method)
