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

// AssetLoad/AssetHandle
struct AssetHandle_t296746218;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void AssetLoad/AssetHandle::.ctor(System.Object,System.IntPtr)
extern "C"  void AssetHandle__ctor_m1395921724 (AssetHandle_t296746218 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetLoad/AssetHandle::Invoke(UnityEngine.GameObject)
extern "C"  void AssetHandle_Invoke_m533199168 (AssetHandle_t296746218 * __this, GameObject_t1366199518 * ___mG, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AssetHandle_t296746218(Il2CppObject* delegate, GameObject_t1366199518 * ___mG);
// System.IAsyncResult AssetLoad/AssetHandle::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AssetHandle_BeginInvoke_m1284049671 (AssetHandle_t296746218 * __this, GameObject_t1366199518 * ___mG, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetLoad/AssetHandle::EndInvoke(System.IAsyncResult)
extern "C"  void AssetHandle_EndInvoke_m1522859890 (AssetHandle_t296746218 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
