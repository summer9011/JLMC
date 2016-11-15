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

// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1530900092;
// System.Object
struct Il2CppObject;
// System.Delegate
struct Delegate_t49333446;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Delegate49333446.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
extern "C"  void AddEventAdapter__ctor_m4122716273 (AddEventAdapter_t1530900092 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
extern "C"  void AddEventAdapter_Invoke_m3970567975 (AddEventAdapter_t1530900092 * __this, Il2CppObject * ____this, Delegate_t49333446 * ___dele, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AddEventAdapter_t1530900092(Il2CppObject* delegate, Il2CppObject * ____this, Delegate_t49333446 * ___dele);
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AddEventAdapter_BeginInvoke_m3628937824 (AddEventAdapter_t1530900092 * __this, Il2CppObject * ____this, Delegate_t49333446 * ___dele, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
extern "C"  void AddEventAdapter_EndInvoke_m1884114191 (AddEventAdapter_t1530900092 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
