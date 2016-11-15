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

// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t3497515617;
// System.Object
struct Il2CppObject;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t258855938;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_AssemblyLoadEventArgs258855938.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AssemblyLoadEventHandler__ctor_m2819610451 (AssemblyLoadEventHandler_t3497515617 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern "C"  void AssemblyLoadEventHandler_Invoke_m108373765 (AssemblyLoadEventHandler_t3497515617 * __this, Il2CppObject * ___sender, AssemblyLoadEventArgs_t258855938 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t3497515617(Il2CppObject* delegate, Il2CppObject * ___sender, AssemblyLoadEventArgs_t258855938 * ___args);
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AssemblyLoadEventHandler_BeginInvoke_m1930267734 (AssemblyLoadEventHandler_t3497515617 * __this, Il2CppObject * ___sender, AssemblyLoadEventArgs_t258855938 * ___args, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AssemblyLoadEventHandler_EndInvoke_m707253317 (AssemblyLoadEventHandler_t3497515617 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
