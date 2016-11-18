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

// EasyAR.ImageTarget
struct ImageTarget_t483921573;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "mscorlib_System_String1967731336.h"
#include "EasyAR_Unity_EasyAR_StorageType622972528.h"

// System.Void EasyAR.ImageTarget::.ctor()
extern "C"  void ImageTarget__ctor_m798372668 (ImageTarget_t483921573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTarget::.ctor(System.IntPtr)
extern "C"  void ImageTarget__ctor_m233920338 (ImageTarget_t483921573 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 EasyAR.ImageTarget::get_Size()
extern "C"  Vector2_t465617798  ImageTarget_get_Size_m1737889337 (ImageTarget_t483921573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTarget::set_Size(UnityEngine.Vector2)
extern "C"  void ImageTarget_set_Size_m3878145950 (ImageTarget_t483921573 * __this, Vector2_t465617798  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTarget::Load(System.String,System.Int32,System.String)
extern "C"  bool ImageTarget_Load_m3849712409 (ImageTarget_t483921573 * __this, String_t* ___path, int32_t ___storageType, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTarget::Dispose(System.Boolean)
extern "C"  void ImageTarget_Dispose_m3458444728 (ImageTarget_t483921573 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTarget::LoadJsonFile(System.String,EasyAR.StorageType,System.String)
extern "C"  bool ImageTarget_LoadJsonFile_m3540807774 (ImageTarget_t483921573 * __this, String_t* ___path, int32_t ___storageType, String_t* ___targetname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTarget::LoadJsonString(System.String,EasyAR.StorageType,System.String)
extern "C"  bool ImageTarget_LoadJsonString_m2057970447 (ImageTarget_t483921573 * __this, String_t* ___json, int32_t ___storageType, String_t* ___targetname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EasyAR.ImageTarget::Json(System.String,EasyAR.StorageType,System.String,UnityEngine.Vector2)
extern "C"  String_t* ImageTarget_Json_m2027236825 (ImageTarget_t483921573 * __this, String_t* ___path, int32_t ___storageType, String_t* ___targetname, Vector2_t465617798  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTarget::LoadImage(System.String,EasyAR.StorageType,System.String,UnityEngine.Vector2)
extern "C"  bool ImageTarget_LoadImage_m3371534269 (ImageTarget_t483921573 * __this, String_t* ___path, int32_t ___storageType, String_t* ___targetname, Vector2_t465617798  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
