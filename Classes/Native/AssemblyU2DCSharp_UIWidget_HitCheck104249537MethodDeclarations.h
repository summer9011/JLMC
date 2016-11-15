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

// UIWidget/HitCheck
struct HitCheck_t104249537;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_Vector3465617797MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UIWidget/HitCheck::.ctor(System.Object,System.IntPtr)
extern "C"  void HitCheck__ctor_m3643541551 (HitCheck_t104249537 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget/HitCheck::Invoke(UnityEngine.Vector3)
extern "C"  bool HitCheck_Invoke_m2489327010 (HitCheck_t104249537 * __this, Vector3_t465617797  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_HitCheck_t104249537(Il2CppObject* delegate, Vector3_t465617797  ___worldPos);
// System.IAsyncResult UIWidget/HitCheck::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HitCheck_BeginInvoke_m2348926761 (HitCheck_t104249537 * __this, Vector3_t465617797  ___worldPos, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget/HitCheck::EndInvoke(System.IAsyncResult)
extern "C"  bool HitCheck_EndInvoke_m738858617 (HitCheck_t104249537 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
