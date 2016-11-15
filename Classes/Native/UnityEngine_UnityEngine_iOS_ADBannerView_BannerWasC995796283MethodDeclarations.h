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

// UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate
struct BannerWasClickedDelegate_t995796283;
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

// System.Void UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void BannerWasClickedDelegate__ctor_m1638198272 (BannerWasClickedDelegate_t995796283 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate::Invoke()
extern "C"  void BannerWasClickedDelegate_Invoke_m961926290 (BannerWasClickedDelegate_t995796283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BannerWasClickedDelegate_t995796283(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BannerWasClickedDelegate_BeginInvoke_m4203687307 (BannerWasClickedDelegate_t995796283 * __this, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void BannerWasClickedDelegate_EndInvoke_m965364542 (BannerWasClickedDelegate_t995796283 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
