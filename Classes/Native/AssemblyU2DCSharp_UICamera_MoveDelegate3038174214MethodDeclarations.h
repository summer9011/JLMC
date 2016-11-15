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

// UICamera/MoveDelegate
struct MoveDelegate_t3038174214;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Vector2465617798MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UICamera/MoveDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void MoveDelegate__ctor_m2880971271 (MoveDelegate_t3038174214 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/MoveDelegate::Invoke(UnityEngine.Vector2)
extern "C"  void MoveDelegate_Invoke_m3409939807 (MoveDelegate_t3038174214 * __this, Vector2_t465617798  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MoveDelegate_t3038174214(Il2CppObject* delegate, Vector2_t465617798  ___delta);
// System.IAsyncResult UICamera/MoveDelegate::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MoveDelegate_BeginInvoke_m532720940 (MoveDelegate_t3038174214 * __this, Vector2_t465617798  ___delta, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/MoveDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void MoveDelegate_EndInvoke_m995286053 (MoveDelegate_t3038174214 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
