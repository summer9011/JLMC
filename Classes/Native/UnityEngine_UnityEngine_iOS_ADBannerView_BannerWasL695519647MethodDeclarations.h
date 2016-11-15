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

// UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate
struct BannerWasLoadedDelegate_t695519647;
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

// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void BannerWasLoadedDelegate__ctor_m4240804114 (BannerWasLoadedDelegate_t695519647 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::Invoke()
extern "C"  void BannerWasLoadedDelegate_Invoke_m329500768 (BannerWasLoadedDelegate_t695519647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BannerWasLoadedDelegate_t695519647(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BannerWasLoadedDelegate_BeginInvoke_m1777744059 (BannerWasLoadedDelegate_t695519647 * __this, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void BannerWasLoadedDelegate_EndInvoke_m1631348540 (BannerWasLoadedDelegate_t695519647 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
