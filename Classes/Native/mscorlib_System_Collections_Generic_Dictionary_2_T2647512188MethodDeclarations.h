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

// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>
struct Transform_1_t2647512188;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2284483831_gshared (Transform_1_t2647512188 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2284483831(__this, ___object, ___method, method) ((  void (*) (Transform_1_t2647512188 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2284483831_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>::Invoke(TKey,TValue)
extern "C"  IntPtr_t Transform_1_Invoke_m524403747_gshared (Transform_1_t2647512188 * __this, IntPtr_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m524403747(__this, ___key, ___value, method) ((  IntPtr_t (*) (Transform_1_t2647512188 *, IntPtr_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m524403747_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2914101698_gshared (Transform_1_t2647512188 * __this, IntPtr_t ___key, Il2CppObject * ___value, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2914101698(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t2647512188 *, IntPtr_t, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2914101698_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>::EndInvoke(System.IAsyncResult)
extern "C"  IntPtr_t Transform_1_EndInvoke_m1944338913_gshared (Transform_1_t2647512188 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1944338913(__this, ___result, method) ((  IntPtr_t (*) (Transform_1_t2647512188 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1944338913_gshared)(__this, ___result, method)
