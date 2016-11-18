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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
struct Transform_1_t3270490903;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2375232750_gshared (Transform_1_t3270490903 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2375232750(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3270490903 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2375232750_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m2777900342_gshared (Transform_1_t3270490903 * __this, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2777900342(__this, ___key, ___value, method) ((  Il2CppObject * (*) (Transform_1_t3270490903 *, Il2CppObject *, int32_t, const MethodInfo*))Transform_1_Invoke_m2777900342_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1856627011_gshared (Transform_1_t3270490903 * __this, Il2CppObject * ___key, int32_t ___value, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1856627011(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t3270490903 *, Il2CppObject *, int32_t, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1856627011_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m2379644184_gshared (Transform_1_t3270490903 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2379644184(__this, ___result, method) ((  Il2CppObject * (*) (Transform_1_t3270490903 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2379644184_gshared)(__this, ___result, method)
