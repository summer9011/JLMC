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

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t4179763568;
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

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Converter_2__ctor_m2798627395_gshared (Converter_2_t4179763568 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m2798627395(__this, ___object, ___method, method) ((  void (*) (Converter_2_t4179763568 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m2798627395_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C"  Il2CppObject * Converter_2_Invoke_m77799585_gshared (Converter_2_t4179763568 * __this, Il2CppObject * ___input, const MethodInfo* method);
#define Converter_2_Invoke_m77799585(__this, ___input, method) ((  Il2CppObject * (*) (Converter_2_t4179763568 *, Il2CppObject *, const MethodInfo*))Converter_2_Invoke_m77799585_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Converter_2_BeginInvoke_m898151494_gshared (Converter_2_t4179763568 * __this, Il2CppObject * ___input, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m898151494(__this, ___input, ___callback, ___object, method) ((  Il2CppObject * (*) (Converter_2_t4179763568 *, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Converter_2_BeginInvoke_m898151494_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Converter_2_EndInvoke_m1606718561_gshared (Converter_2_t4179763568 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m1606718561(__this, ___result, method) ((  Il2CppObject * (*) (Converter_2_t4179763568 *, Il2CppObject *, const MethodInfo*))Converter_2_EndInvoke_m1606718561_gshared)(__this, ___result, method)
