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

// Util
struct Util_t4006552276;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t224878301;
// System.String[]
struct StringU5BU5D_t3764931161;
// UnityEngine.Component
struct Component_t1078601330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"

// System.Void Util::.ctor()
extern "C"  void Util__ctor_m4057728895 (Util_t4006552276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Util::Int(System.Object)
extern "C"  int32_t Util_Int_m1940878508 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Util::Float(System.Object)
extern "C"  float Util_Float_m384058171 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Util::Long(System.Object)
extern "C"  int64_t Util_Long_m3043782926 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Util::Random(System.Int32,System.Int32)
extern "C"  int32_t Util_Random_m795277406 (Il2CppObject * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Util::Random(System.Single,System.Single)
extern "C"  float Util_Random_m3528967036 (Il2CppObject * __this /* static, unused */, float ___min, float ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Util::GetTime()
extern "C"  int64_t Util_GetTime_m340464637 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Util::Child(UnityEngine.GameObject,System.String)
extern "C"  GameObject_t1366199518 * Util_Child_m2407020348 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, String_t* ___subnode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Util::Child(UnityEngine.Transform,System.String)
extern "C"  GameObject_t1366199518 * Util_Child_m2643664811 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___go, String_t* ___subnode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Util::Peer(UnityEngine.GameObject,System.String)
extern "C"  GameObject_t1366199518 * Util_Peer_m4208645612 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, String_t* ___subnode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Util::Peer(UnityEngine.Transform,System.String)
extern "C"  GameObject_t1366199518 * Util_Peer_m4094088039 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___go, String_t* ___subnode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Util::md5(System.String)
extern "C"  String_t* Util_md5_m1926908646 (Il2CppObject * __this /* static, unused */, String_t* ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Util::md5file(System.String)
extern "C"  String_t* Util_md5file_m2373070344 (Il2CppObject * __this /* static, unused */, String_t* ___file, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Util::ClearChild(UnityEngine.Transform)
extern "C"  void Util_ClearChild_m3680164619 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Util::ClearMemory()
extern "C"  void Util_ClearMemory_m711361399 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Util::get_DataPath()
extern "C"  String_t* Util_get_DataPath_m1063176272 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Util::getPath(System.String,System.String[])
extern "C"  String_t* Util_getPath_m768332143 (Il2CppObject * __this /* static, unused */, String_t* ___path1, StringU5BU5D_t3764931161* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Util::AppContentPath()
extern "C"  String_t* Util_AppContentPath_m1235347183 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component Util::AddComponent(UnityEngine.GameObject,System.String,System.String)
extern "C"  Component_t1078601330 * Util_AddComponent_m1646763000 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, String_t* ___assembly, String_t* ___classname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Util::LoadPrefab(System.String)
extern "C"  GameObject_t1366199518 * Util_LoadPrefab_m4153806222 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
