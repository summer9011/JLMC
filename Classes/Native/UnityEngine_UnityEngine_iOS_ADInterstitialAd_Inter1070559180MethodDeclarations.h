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

// UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate
struct InterstitialWasViewedDelegate_t1070559180;
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

// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void InterstitialWasViewedDelegate__ctor_m4082879631 (InterstitialWasViewedDelegate_t1070559180 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate::Invoke()
extern "C"  void InterstitialWasViewedDelegate_Invoke_m1997823299 (InterstitialWasViewedDelegate_t1070559180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_InterstitialWasViewedDelegate_t1070559180(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InterstitialWasViewedDelegate_BeginInvoke_m3516461556 (InterstitialWasViewedDelegate_t1070559180 * __this, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void InterstitialWasViewedDelegate_EndInvoke_m180667637 (InterstitialWasViewedDelegate_t1070559180 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
