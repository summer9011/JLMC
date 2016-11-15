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

// BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>
struct CompareFunc_t935648378;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "AssemblyU2DCSharp_TypewriterEffect_FadeEntry1015115370.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m782245917_gshared (CompareFunc_t935648378 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m782245917(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t935648378 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m782245917_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m2297287975_gshared (CompareFunc_t935648378 * __this, FadeEntry_t1015115370  ___left, FadeEntry_t1015115370  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m2297287975(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t935648378 *, FadeEntry_t1015115370 , FadeEntry_t1015115370 , const MethodInfo*))CompareFunc_Invoke_m2297287975_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m1434671802_gshared (CompareFunc_t935648378 * __this, FadeEntry_t1015115370  ___left, FadeEntry_t1015115370  ___right, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m1434671802(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t935648378 *, FadeEntry_t1015115370 , FadeEntry_t1015115370 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m1434671802_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m1098372861_gshared (CompareFunc_t935648378 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m1098372861(__this, ___result, method) ((  int32_t (*) (CompareFunc_t935648378 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m1098372861_gshared)(__this, ___result, method)
