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

// AssetLoad/AssetHandleKey
struct AssetHandleKey_t2677463335;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void AssetLoad/AssetHandleKey::.ctor(System.Object,System.IntPtr)
extern "C"  void AssetHandleKey__ctor_m93813731 (AssetHandleKey_t2677463335 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetLoad/AssetHandleKey::Invoke(UnityEngine.GameObject,System.String)
extern "C"  void AssetHandleKey_Invoke_m1162507285 (AssetHandleKey_t2677463335 * __this, GameObject_t1366199518 * ___mG, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AssetHandleKey_t2677463335(Il2CppObject* delegate, GameObject_t1366199518 * ___mG, String_t* ___key);
// System.IAsyncResult AssetLoad/AssetHandleKey::BeginInvoke(UnityEngine.GameObject,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AssetHandleKey_BeginInvoke_m2563710590 (AssetHandleKey_t2677463335 * __this, GameObject_t1366199518 * ___mG, String_t* ___key, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetLoad/AssetHandleKey::EndInvoke(System.IAsyncResult)
extern "C"  void AssetHandleKey_EndInvoke_m45043657 (AssetHandleKey_t2677463335 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
