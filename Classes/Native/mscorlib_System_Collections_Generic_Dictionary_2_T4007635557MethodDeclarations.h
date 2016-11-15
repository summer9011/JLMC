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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t4007635557;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m353209818_gshared (Transform_1_t4007635557 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m353209818(__this, ___object, ___method, method) ((  void (*) (Transform_1_t4007635557 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m353209818_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t1445113794  Transform_1_Invoke_m719893226_gshared (Transform_1_t4007635557 * __this, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m719893226(__this, ___key, ___value, method) ((  DictionaryEntry_t1445113794  (*) (Transform_1_t4007635557 *, Il2CppObject *, int32_t, const MethodInfo*))Transform_1_Invoke_m719893226_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m786657825_gshared (Transform_1_t4007635557 * __this, Il2CppObject * ___key, int32_t ___value, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m786657825(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t4007635557 *, Il2CppObject *, int32_t, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m786657825_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t1445113794  Transform_1_EndInvoke_m664119620_gshared (Transform_1_t4007635557 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m664119620(__this, ___result, method) ((  DictionaryEntry_t1445113794  (*) (Transform_1_t4007635557 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m664119620_gshared)(__this, ___result, method)
