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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1105428227;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Collections_DictionaryEntry1445113794.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2152205186_gshared (Transform_1_t1105428227 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2152205186(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1105428227 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2152205186_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t1445113794  Transform_1_Invoke_m4020530914_gshared (Transform_1_t1105428227 * __this, int32_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m4020530914(__this, ___key, ___value, method) ((  DictionaryEntry_t1445113794  (*) (Transform_1_t1105428227 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m4020530914_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2179239469_gshared (Transform_1_t1105428227 * __this, int32_t ___key, Il2CppObject * ___value, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2179239469(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1105428227 *, int32_t, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2179239469_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t1445113794  Transform_1_EndInvoke_m620026520_gshared (Transform_1_t1105428227 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m620026520(__this, ___result, method) ((  DictionaryEntry_t1445113794  (*) (Transform_1_t1105428227 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m620026520_gshared)(__this, ___result, method)
