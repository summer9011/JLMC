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

// BetterList`1/CompareFunc<System.Single>
struct CompareFunc_t1712053101;
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

// System.Void BetterList`1/CompareFunc<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m3144913425_gshared (CompareFunc_t1712053101 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m3144913425(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t1712053101 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m3144913425_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<System.Single>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m2613755967_gshared (CompareFunc_t1712053101 * __this, float ___left, float ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m2613755967(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t1712053101 *, float, float, const MethodInfo*))CompareFunc_Invoke_m2613755967_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<System.Single>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m180221190_gshared (CompareFunc_t1712053101 * __this, float ___left, float ___right, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m180221190(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t1712053101 *, float, float, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m180221190_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m1465793509_gshared (CompareFunc_t1712053101 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m1465793509(__this, ___result, method) ((  int32_t (*) (CompareFunc_t1712053101 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m1465793509_gshared)(__this, ___result, method)
