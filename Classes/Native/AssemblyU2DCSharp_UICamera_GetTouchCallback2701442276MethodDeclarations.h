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

// UICamera/GetTouchCallback
struct GetTouchCallback_t2701442276;
// System.Object
struct Il2CppObject;
// UICamera/Touch
struct Touch_t67198787;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UICamera/GetTouchCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GetTouchCallback__ctor_m832037175 (GetTouchCallback_t2701442276 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/Touch UICamera/GetTouchCallback::Invoke(System.Int32)
extern "C"  Touch_t67198787 * GetTouchCallback_Invoke_m72737544 (GetTouchCallback_t2701442276 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Touch_t67198787 * pinvoke_delegate_wrapper_GetTouchCallback_t2701442276(Il2CppObject* delegate, int32_t ___index);
// System.IAsyncResult UICamera/GetTouchCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetTouchCallback_BeginInvoke_m3819460805 (GetTouchCallback_t2701442276 * __this, int32_t ___index, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/Touch UICamera/GetTouchCallback::EndInvoke(System.IAsyncResult)
extern "C"  Touch_t67198787 * GetTouchCallback_EndInvoke_m393098297 (GetTouchCallback_t2701442276 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
