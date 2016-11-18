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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t557054767;
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

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m809665740_gshared (Func_2_t557054767 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m809665740(__this, ___object, ___method, method) ((  void (*) (Func_2_t557054767 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m809665740_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Invoke(T)
extern "C"  bool Func_2_Invoke_m174842950_gshared (Func_2_t557054767 * __this, KeyValuePair_2_t1944347872  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m174842950(__this, ___arg1, method) ((  bool (*) (Func_2_t557054767 *, KeyValuePair_2_t1944347872 , const MethodInfo*))Func_2_Invoke_m174842950_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m2337603003_gshared (Func_2_t557054767 * __this, KeyValuePair_2_t1944347872  ___arg1, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m2337603003(__this, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_2_t557054767 *, KeyValuePair_2_t1944347872 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m2337603003_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_2_EndInvoke_m4101312048_gshared (Func_2_t557054767 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m4101312048(__this, ___result, method) ((  bool (*) (Func_2_t557054767 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m4101312048_gshared)(__this, ___result, method)
