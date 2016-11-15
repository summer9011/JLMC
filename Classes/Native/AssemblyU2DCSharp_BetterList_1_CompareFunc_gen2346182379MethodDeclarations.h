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

// BetterList`1/CompareFunc<UICamera/DepthEntry>
struct CompareFunc_t2346182379;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry2425649371.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void BetterList`1/CompareFunc<UICamera/DepthEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m2172260807_gshared (CompareFunc_t2346182379 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m2172260807(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t2346182379 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m2172260807_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UICamera/DepthEntry>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m3590977841_gshared (CompareFunc_t2346182379 * __this, DepthEntry_t2425649371  ___left, DepthEntry_t2425649371  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m3590977841(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t2346182379 *, DepthEntry_t2425649371 , DepthEntry_t2425649371 , const MethodInfo*))CompareFunc_Invoke_m3590977841_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UICamera/DepthEntry>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m2920794230_gshared (CompareFunc_t2346182379 * __this, DepthEntry_t2425649371  ___left, DepthEntry_t2425649371  ___right, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m2920794230(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t2346182379 *, DepthEntry_t2425649371 , DepthEntry_t2425649371 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m2920794230_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UICamera/DepthEntry>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m2172644799_gshared (CompareFunc_t2346182379 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m2172644799(__this, ___result, method) ((  int32_t (*) (CompareFunc_t2346182379 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m2172644799_gshared)(__this, ___result, method)
