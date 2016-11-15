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

// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t1022625346;
// System.Object
struct Il2CppObject;
// UnityEngine.Material
struct Material_t2197338622;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_Material2197338622.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UIDrawCall/OnRenderCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnRenderCallback__ctor_m1758414226 (OnRenderCallback_t1022625346 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall/OnRenderCallback::Invoke(UnityEngine.Material)
extern "C"  void OnRenderCallback_Invoke_m1034177226 (OnRenderCallback_t1022625346 * __this, Material_t2197338622 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnRenderCallback_t1022625346(Il2CppObject* delegate, Material_t2197338622 * ___mat);
// System.IAsyncResult UIDrawCall/OnRenderCallback::BeginInvoke(UnityEngine.Material,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnRenderCallback_BeginInvoke_m1029584755 (OnRenderCallback_t1022625346 * __this, Material_t2197338622 * ___mat, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall/OnRenderCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnRenderCallback_EndInvoke_m2447804168 (OnRenderCallback_t1022625346 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
