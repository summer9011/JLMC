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

// BetterList`1/CompareFunc<UnityEngine.Color>
struct CompareFunc_t2171482172;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m2728017996_gshared (CompareFunc_t2171482172 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m2728017996(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t2171482172 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m2728017996_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m3751921714_gshared (CompareFunc_t2171482172 * __this, Color_t2250949164  ___left, Color_t2250949164  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m3751921714(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t2171482172 *, Color_t2250949164 , Color_t2250949164 , const MethodInfo*))CompareFunc_Invoke_m3751921714_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Color>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m2750495601_gshared (CompareFunc_t2171482172 * __this, Color_t2250949164  ___left, Color_t2250949164  ___right, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m2750495601(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t2171482172 *, Color_t2250949164 , Color_t2250949164 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m2750495601_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m972239944_gshared (CompareFunc_t2171482172 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m972239944(__this, ___result, method) ((  int32_t (*) (CompareFunc_t2171482172 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m972239944_gshared)(__this, ___result, method)
