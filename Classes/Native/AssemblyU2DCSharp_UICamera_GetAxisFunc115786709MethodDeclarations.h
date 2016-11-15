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

// UICamera/GetAxisFunc
struct GetAxisFunc_t115786709;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UICamera/GetAxisFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void GetAxisFunc__ctor_m3905488856 (GetAxisFunc_t115786709 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UICamera/GetAxisFunc::Invoke(System.String)
extern "C"  float GetAxisFunc_Invoke_m2549223234 (GetAxisFunc_t115786709 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float pinvoke_delegate_wrapper_GetAxisFunc_t115786709(Il2CppObject* delegate, String_t* ___name);
// System.IAsyncResult UICamera/GetAxisFunc::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetAxisFunc_BeginInvoke_m2279621307 (GetAxisFunc_t115786709 * __this, String_t* ___name, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UICamera/GetAxisFunc::EndInvoke(System.IAsyncResult)
extern "C"  float GetAxisFunc_EndInvoke_m1245859004 (GetAxisFunc_t115786709 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
