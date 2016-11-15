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

// NetworkControl/_postData
struct _postData_t645335225;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t3146501818;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_WWW3146501818.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void NetworkControl/_postData::.ctor(System.Object,System.IntPtr)
extern "C"  void _postData__ctor_m1151987098 (_postData_t645335225 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkControl/_postData::Invoke(System.String,UnityEngine.WWW)
extern "C"  void _postData_Invoke_m2357696480 (_postData_t645335225 * __this, String_t* ___key, WWW_t3146501818 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper__postData_t645335225(Il2CppObject* delegate, String_t* ___key, WWW_t3146501818 * ___www);
// System.IAsyncResult NetworkControl/_postData::BeginInvoke(System.String,UnityEngine.WWW,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * _postData_BeginInvoke_m1499160007 (_postData_t645335225 * __this, String_t* ___key, WWW_t3146501818 * ___www, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkControl/_postData::EndInvoke(System.IAsyncResult)
extern "C"  void _postData_EndInvoke_m4286772600 (_postData_t645335225 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
