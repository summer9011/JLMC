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

// System.Action`1<System.Object>
struct Action_1_t4249299163;
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

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m584977596_gshared (Action_1_t4249299163 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m584977596(__this, ___object, ___method, method) ((  void (*) (Action_1_t4249299163 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m584977596_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C"  void Action_1_Invoke_m1684652980_gshared (Action_1_t4249299163 * __this, Il2CppObject * ___obj, const MethodInfo* method);
#define Action_1_Invoke_m1684652980(__this, ___obj, method) ((  void (*) (Action_1_t4249299163 *, Il2CppObject *, const MethodInfo*))Action_1_Invoke_m1684652980_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m1305519803_gshared (Action_1_t4249299163 * __this, Il2CppObject * ___obj, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m1305519803(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_1_t4249299163 *, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m1305519803_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m2057605070_gshared (Action_1_t4249299163 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m2057605070(__this, ___result, method) ((  void (*) (Action_1_t4249299163 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m2057605070_gshared)(__this, ___result, method)
