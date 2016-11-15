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

// System.Reflection.TypeFilter
struct TypeFilter_t3824156278;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Reflection.TypeFilter::.ctor(System.Object,System.IntPtr)
extern "C"  void TypeFilter__ctor_m1798016172 (TypeFilter_t3824156278 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeFilter::Invoke(System.Type,System.Object)
extern "C"  bool TypeFilter_Invoke_m2156848151 (TypeFilter_t3824156278 * __this, Type_t * ___m, Il2CppObject * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_TypeFilter_t3824156278(Il2CppObject* delegate, Type_t * ___m, Il2CppObject * ___filterCriteria);
// System.IAsyncResult System.Reflection.TypeFilter::BeginInvoke(System.Type,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TypeFilter_BeginInvoke_m2395188690 (TypeFilter_t3824156278 * __this, Type_t * ___m, Il2CppObject * ___filterCriteria, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeFilter::EndInvoke(System.IAsyncResult)
extern "C"  bool TypeFilter_EndInvoke_m997625354 (TypeFilter_t3824156278 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
