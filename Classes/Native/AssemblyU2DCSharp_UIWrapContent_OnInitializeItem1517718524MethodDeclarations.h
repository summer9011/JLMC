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

// UIWrapContent/OnInitializeItem
struct OnInitializeItem_t1517718524;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UIWrapContent/OnInitializeItem::.ctor(System.Object,System.IntPtr)
extern "C"  void OnInitializeItem__ctor_m2088558765 (OnInitializeItem_t1517718524 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWrapContent/OnInitializeItem::Invoke(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C"  void OnInitializeItem_Invoke_m286694789 (OnInitializeItem_t1517718524 * __this, GameObject_t1366199518 * ___go, int32_t ___wrapIndex, int32_t ___realIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnInitializeItem_t1517718524(Il2CppObject* delegate, GameObject_t1366199518 * ___go, int32_t ___wrapIndex, int32_t ___realIndex);
// System.IAsyncResult UIWrapContent/OnInitializeItem::BeginInvoke(UnityEngine.GameObject,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnInitializeItem_BeginInvoke_m3324777424 (OnInitializeItem_t1517718524 * __this, GameObject_t1366199518 * ___go, int32_t ___wrapIndex, int32_t ___realIndex, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWrapContent/OnInitializeItem::EndInvoke(System.IAsyncResult)
extern "C"  void OnInitializeItem_EndInvoke_m1518335515 (OnInitializeItem_t1517718524 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
