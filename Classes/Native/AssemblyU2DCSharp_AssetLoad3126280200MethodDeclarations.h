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

// AssetLoad
struct AssetLoad_t3126280200;
// AssetLoad/AssetHandleKey
struct AssetHandleKey_t2677463335;
// AssetLoad/AssetHandle
struct AssetHandle_t296746218;
// System.String
struct String_t;
// UnityEngine.Coroutine
struct Coroutine_t3261918659;
struct Coroutine_t3261918659_marshaled_pinvoke;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AssetLoad_AssetHandleKey2677463335.h"
#include "AssemblyU2DCSharp_AssetLoad_AssetHandle296746218.h"
#include "mscorlib_System_String1967731336.h"

// System.Void AssetLoad::.ctor()
extern "C"  void AssetLoad__ctor_m3320956641 (AssetLoad_t3126280200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetLoad::add_AssetHandleEventKey(AssetLoad/AssetHandleKey)
extern "C"  void AssetLoad_add_AssetHandleEventKey_m2835403566 (AssetLoad_t3126280200 * __this, AssetHandleKey_t2677463335 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetLoad::remove_AssetHandleEventKey(AssetLoad/AssetHandleKey)
extern "C"  void AssetLoad_remove_AssetHandleEventKey_m3253926185 (AssetLoad_t3126280200 * __this, AssetHandleKey_t2677463335 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetLoad::add_AssetHandleEvent(AssetLoad/AssetHandle)
extern "C"  void AssetLoad_add_AssetHandleEvent_m4144466750 (AssetLoad_t3126280200 * __this, AssetHandle_t296746218 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetLoad::remove_AssetHandleEvent(AssetLoad/AssetHandle)
extern "C"  void AssetLoad_remove_AssetHandleEvent_m2843883265 (AssetLoad_t3126280200 * __this, AssetHandle_t296746218 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AssetLoad::getAssetBundleLoadGameObjectKey(System.String,System.String)
extern "C"  String_t* AssetLoad_getAssetBundleLoadGameObjectKey_m1705268248 (AssetLoad_t3126280200 * __this, String_t* ___path, String_t* ___assetName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine AssetLoad::LoadMoxingAsset(System.String,System.String,System.String,System.String)
extern "C"  Coroutine_t3261918659 * AssetLoad_LoadMoxingAsset_m2601707603 (AssetLoad_t3126280200 * __this, String_t* ___path, String_t* ___url, String_t* ___assetName, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AssetLoad::LoadAssetBundle(System.String,System.String,System.String,System.String)
extern "C"  Il2CppObject * AssetLoad_LoadAssetBundle_m2921754953 (AssetLoad_t3126280200 * __this, String_t* ___path, String_t* ___url, String_t* ___assetName, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AssetLoad::DownLoadAsset()
extern "C"  Il2CppObject * AssetLoad_DownLoadAsset_m2383581719 (AssetLoad_t3126280200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
