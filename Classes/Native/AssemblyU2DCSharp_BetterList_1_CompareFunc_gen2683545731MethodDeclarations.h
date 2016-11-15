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

// BetterList`1/CompareFunc<UnityEngine.Color32>
struct CompareFunc_t2683545731;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_Color322763012723.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m3956460259_gshared (CompareFunc_t2683545731 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m3956460259(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t2683545731 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m3956460259_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color32>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m3314654393_gshared (CompareFunc_t2683545731 * __this, Color32_t2763012723  ___left, Color32_t2763012723  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m3314654393(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t2683545731 *, Color32_t2763012723 , Color32_t2763012723 , const MethodInfo*))CompareFunc_Invoke_m3314654393_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m2585964612_gshared (CompareFunc_t2683545731 * __this, Color32_t2763012723  ___left, Color32_t2763012723  ___right, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m2585964612(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t2683545731 *, Color32_t2763012723 , Color32_t2763012723 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m2585964612_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m183424443_gshared (CompareFunc_t2683545731 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m183424443(__this, ___result, method) ((  int32_t (*) (CompareFunc_t2683545731 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m183424443_gshared)(__this, ___result, method)
