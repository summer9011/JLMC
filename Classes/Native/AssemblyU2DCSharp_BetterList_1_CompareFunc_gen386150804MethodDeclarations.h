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

// BetterList`1/CompareFunc<UnityEngine.Vector4>
struct CompareFunc_t386150804;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m4263239534_gshared (CompareFunc_t386150804 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m4263239534(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t386150804 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m4263239534_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector4>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m904967272_gshared (CompareFunc_t386150804 * __this, Vector4_t465617796  ___left, Vector4_t465617796  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m904967272(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t386150804 *, Vector4_t465617796 , Vector4_t465617796 , const MethodInfo*))CompareFunc_Invoke_m904967272_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m1760348665_gshared (CompareFunc_t386150804 * __this, Vector4_t465617796  ___left, Vector4_t465617796  ___right, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m1760348665(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t386150804 *, Vector4_t465617796 , Vector4_t465617796 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m1760348665_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m3763930058_gshared (CompareFunc_t386150804 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m3763930058(__this, ___result, method) ((  int32_t (*) (CompareFunc_t386150804 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m3763930058_gshared)(__this, ___result, method)
