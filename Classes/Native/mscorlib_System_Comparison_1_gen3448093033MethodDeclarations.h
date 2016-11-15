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

// System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>
struct Comparison_1_t3448093033;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArg3611510553.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m3745606970_gshared (Comparison_1_t3448093033 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m3745606970(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t3448093033 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3745606970_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m64450954_gshared (Comparison_1_t3448093033 * __this, CustomAttributeNamedArgument_t3611510553  ___x, CustomAttributeNamedArgument_t3611510553  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m64450954(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t3448093033 *, CustomAttributeNamedArgument_t3611510553 , CustomAttributeNamedArgument_t3611510553 , const MethodInfo*))Comparison_1_Invoke_m64450954_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m2863910783_gshared (Comparison_1_t3448093033 * __this, CustomAttributeNamedArgument_t3611510553  ___x, CustomAttributeNamedArgument_t3611510553  ___y, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m2863910783(__this, ___x, ___y, ___callback, ___object, method) ((  Il2CppObject * (*) (Comparison_1_t3448093033 *, CustomAttributeNamedArgument_t3611510553 , CustomAttributeNamedArgument_t3611510553 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m2863910783_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m596328912_gshared (Comparison_1_t3448093033 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m596328912(__this, ___result, method) ((  int32_t (*) (Comparison_1_t3448093033 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m596328912_gshared)(__this, ___result, method)
