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

// UICamera/GetTouchCountCallback
struct GetTouchCountCallback_t39553031;
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

// System.Void UICamera/GetTouchCountCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GetTouchCountCallback__ctor_m3955278542 (GetTouchCountCallback_t39553031 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera/GetTouchCountCallback::Invoke()
extern "C"  int32_t GetTouchCountCallback_Invoke_m2268871846 (GetTouchCountCallback_t39553031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_GetTouchCountCallback_t39553031(Il2CppObject* delegate);
// System.IAsyncResult UICamera/GetTouchCountCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetTouchCountCallback_BeginInvoke_m1837856463 (GetTouchCountCallback_t39553031 * __this, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera/GetTouchCountCallback::EndInvoke(System.IAsyncResult)
extern "C"  int32_t GetTouchCountCallback_EndInvoke_m1782701322 (GetTouchCountCallback_t39553031 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
