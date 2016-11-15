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

// UICamera/GetKeyStateFunc
struct GetKeyStateFunc_t318868414;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_KeyCode1667950811.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UICamera/GetKeyStateFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void GetKeyStateFunc__ctor_m1858103281 (GetKeyStateFunc_t318868414 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera/GetKeyStateFunc::Invoke(UnityEngine.KeyCode)
extern "C"  bool GetKeyStateFunc_Invoke_m3808364256 (GetKeyStateFunc_t318868414 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_GetKeyStateFunc_t318868414(Il2CppObject* delegate, int32_t ___key);
// System.IAsyncResult UICamera/GetKeyStateFunc::BeginInvoke(UnityEngine.KeyCode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetKeyStateFunc_BeginInvoke_m3075688667 (GetKeyStateFunc_t318868414 * __this, int32_t ___key, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera/GetKeyStateFunc::EndInvoke(System.IAsyncResult)
extern "C"  bool GetKeyStateFunc_EndInvoke_m3010295507 (GetKeyStateFunc_t318868414 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
