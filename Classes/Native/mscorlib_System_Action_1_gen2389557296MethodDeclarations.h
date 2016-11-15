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

// System.Action`1<System.Boolean>
struct Action_1_t2389557296;
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

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m3072925129_gshared (Action_1_t2389557296 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m3072925129(__this, ___object, ___method, method) ((  void (*) (Action_1_t2389557296 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m3072925129_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
extern "C"  void Action_1_Invoke_m3662000152_gshared (Action_1_t2389557296 * __this, bool ___obj, const MethodInfo* method);
#define Action_1_Invoke_m3662000152(__this, ___obj, method) ((  void (*) (Action_1_t2389557296 *, bool, const MethodInfo*))Action_1_Invoke_m3662000152_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m226849422_gshared (Action_1_t2389557296 * __this, bool ___obj, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m226849422(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_1_t2389557296 *, bool, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m226849422_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m2990292511_gshared (Action_1_t2389557296 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m2990292511(__this, ___result, method) ((  void (*) (Action_1_t2389557296 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m2990292511_gshared)(__this, ___result, method)
