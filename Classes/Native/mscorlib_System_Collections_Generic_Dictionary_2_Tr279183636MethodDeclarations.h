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

// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Object>
struct Transform_1_t279183636;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3731381235_gshared (Transform_1_t279183636 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3731381235(__this, ___object, ___method, method) ((  void (*) (Transform_1_t279183636 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3731381235_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m1111426439_gshared (Transform_1_t279183636 * __this, IntPtr_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1111426439(__this, ___key, ___value, method) ((  Il2CppObject * (*) (Transform_1_t279183636 *, IntPtr_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1111426439_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3901963208_gshared (Transform_1_t279183636 * __this, IntPtr_t ___key, Il2CppObject * ___value, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3901963208(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t279183636 *, IntPtr_t, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3901963208_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m275018665_gshared (Transform_1_t279183636 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m275018665(__this, ___result, method) ((  Il2CppObject * (*) (Transform_1_t279183636 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m275018665_gshared)(__this, ___result, method)
