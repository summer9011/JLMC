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

// BetterList`1/CompareFunc<System.Int32>
struct CompareFunc_t1368703605;
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

// System.Void BetterList`1/CompareFunc<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m3336918421_gshared (CompareFunc_t1368703605 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m3336918421(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t1368703605 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m3336918421_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<System.Int32>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m275113771_gshared (CompareFunc_t1368703605 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m275113771(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t1368703605 *, int32_t, int32_t, const MethodInfo*))CompareFunc_Invoke_m275113771_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<System.Int32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m2715412798_gshared (CompareFunc_t1368703605 * __this, int32_t ___left, int32_t ___right, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m2715412798(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t1368703605 *, int32_t, int32_t, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m2715412798_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m3372594197_gshared (CompareFunc_t1368703605 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m3372594197(__this, ___result, method) ((  int32_t (*) (CompareFunc_t1368703605 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m3372594197_gshared)(__this, ___result, method)
