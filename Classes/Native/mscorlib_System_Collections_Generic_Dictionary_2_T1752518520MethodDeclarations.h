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

// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>
struct Transform_1_t1752518520;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22181304024.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4075225366_gshared (Transform_1_t1752518520 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m4075225366(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1752518520 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4075225366_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2181304024  Transform_1_Invoke_m1023901590_gshared (Transform_1_t1752518520 * __this, IntPtr_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1023901590(__this, ___key, ___value, method) ((  KeyValuePair_2_t2181304024  (*) (Transform_1_t1752518520 *, IntPtr_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1023901590_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m345445247_gshared (Transform_1_t1752518520 * __this, IntPtr_t ___key, Il2CppObject * ___value, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m345445247(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1752518520 *, IntPtr_t, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m345445247_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2181304024  Transform_1_EndInvoke_m3664875948_gshared (Transform_1_t1752518520 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3664875948(__this, ___result, method) ((  KeyValuePair_2_t2181304024  (*) (Transform_1_t1752518520 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3664875948_gshared)(__this, ___result, method)
