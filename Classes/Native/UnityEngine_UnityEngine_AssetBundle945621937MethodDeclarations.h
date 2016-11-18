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

// UnityEngine.AssetBundle
struct AssetBundle_t945621937;
// UnityEngine.Object
struct Object_t1181371020;
struct Object_t1181371020_marshaled_pinvoke;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Type77837473.h"

// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern "C"  Object_t1181371020 * AssetBundle_LoadAsset_m866056071 (AssetBundle_t945621937 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C"  Object_t1181371020 * AssetBundle_LoadAsset_Internal_m2781704095 (AssetBundle_t945621937 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
extern "C"  void AssetBundle_Unload_m167529087 (AssetBundle_t945621937 * __this, bool ___unloadAllLoadedObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
