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

// System.Func`2<System.Object,System.Object>
struct Func_2_t3113313142;
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

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1684831714_gshared (Func_2_t3113313142 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1684831714(__this, ___object, ___method, method) ((  void (*) (Func_2_t3113313142 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1684831714_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C"  Il2CppObject * Func_2_Invoke_m3288232740_gshared (Func_2_t3113313142 * __this, Il2CppObject * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m3288232740(__this, ___arg1, method) ((  Il2CppObject * (*) (Func_2_t3113313142 *, Il2CppObject *, const MethodInfo*))Func_2_Invoke_m3288232740_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m4034295761_gshared (Func_2_t3113313142 * __this, Il2CppObject * ___arg1, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m4034295761(__this, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_2_t3113313142 *, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m4034295761_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_2_EndInvoke_m1674435418_gshared (Func_2_t3113313142 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m1674435418(__this, ___result, method) ((  Il2CppObject * (*) (Func_2_t3113313142 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m1674435418_gshared)(__this, ___result, method)
