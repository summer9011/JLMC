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

// UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate
struct InterstitialWasLoadedDelegate_t1387600605;
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

// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void InterstitialWasLoadedDelegate__ctor_m1471025930 (InterstitialWasLoadedDelegate_t1387600605 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate::Invoke()
extern "C"  void InterstitialWasLoadedDelegate_Invoke_m2299517640 (InterstitialWasLoadedDelegate_t1387600605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_InterstitialWasLoadedDelegate_t1387600605(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InterstitialWasLoadedDelegate_BeginInvoke_m1227053843 (InterstitialWasLoadedDelegate_t1387600605 * __this, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void InterstitialWasLoadedDelegate_EndInvoke_m1936942292 (InterstitialWasLoadedDelegate_t1387600605 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
