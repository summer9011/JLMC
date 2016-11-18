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

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t1780930352;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21944347872.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m258655046_gshared (Comparison_1_t1780930352 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m258655046(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t1780930352 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m258655046_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m2407609722_gshared (Comparison_1_t1780930352 * __this, KeyValuePair_2_t1944347872  ___x, KeyValuePair_2_t1944347872  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m2407609722(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t1780930352 *, KeyValuePair_2_t1944347872 , KeyValuePair_2_t1944347872 , const MethodInfo*))Comparison_1_Invoke_m2407609722_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m1988197935_gshared (Comparison_1_t1780930352 * __this, KeyValuePair_2_t1944347872  ___x, KeyValuePair_2_t1944347872  ___y, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1988197935(__this, ___x, ___y, ___callback, ___object, method) ((  Il2CppObject * (*) (Comparison_1_t1780930352 *, KeyValuePair_2_t1944347872 , KeyValuePair_2_t1944347872 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m1988197935_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m2681344252_gshared (Comparison_1_t1780930352 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m2681344252(__this, ___result, method) ((  int32_t (*) (Comparison_1_t1780930352 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m2681344252_gshared)(__this, ___result, method)
