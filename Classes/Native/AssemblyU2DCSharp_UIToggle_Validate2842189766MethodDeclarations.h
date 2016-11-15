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

// UIToggle/Validate
struct Validate_t2842189766;
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

// System.Void UIToggle/Validate::.ctor(System.Object,System.IntPtr)
extern "C"  void Validate__ctor_m6777052 (Validate_t2842189766 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIToggle/Validate::Invoke(System.Boolean)
extern "C"  bool Validate_Invoke_m1123158407 (Validate_t2842189766 * __this, bool ___choice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_Validate_t2842189766(Il2CppObject* delegate, bool ___choice);
// System.IAsyncResult UIToggle/Validate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Validate_BeginInvoke_m3589654438 (Validate_t2842189766 * __this, bool ___choice, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIToggle/Validate::EndInvoke(System.IAsyncResult)
extern "C"  bool Validate_EndInvoke_m1266457796 (Validate_t2842189766 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
