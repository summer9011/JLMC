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

// FilesManager
struct FilesManager_t2291984574;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t484745624;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void FilesManager::.ctor()
extern "C"  void FilesManager__ctor_m1563510825 (FilesManager_t2291984574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FilesManager::Awake()
extern "C"  void FilesManager_Awake_m929401470 (FilesManager_t2291984574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> FilesManager::GetDirectoryName_FileDic_All()
extern "C"  Dictionary_2_t484745624 * FilesManager_GetDirectoryName_FileDic_All_m1605010202 (FilesManager_t2291984574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> FilesManager::GetAllImagesFiles(System.String)
extern "C"  Dictionary_2_t484745624 * FilesManager_GetAllImagesFiles_m94196845 (FilesManager_t2291984574 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> FilesManager::GetDirectoryName_FileDic(System.String,System.String)
extern "C"  Dictionary_2_t484745624 * FilesManager_GetDirectoryName_FileDic_m1953023208 (FilesManager_t2291984574 * __this, String_t* ___dic, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> FilesManager::getImageFile(System.String,System.String)
extern "C"  Dictionary_2_t484745624 * FilesManager_getImageFile_m854015874 (FilesManager_t2291984574 * __this, String_t* ___path, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FilesManager::isExists(System.String,System.String)
extern "C"  bool FilesManager_isExists_m1085975267 (FilesManager_t2291984574 * __this, String_t* ___path, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FilesManager::getPath(System.String)
extern "C"  String_t* FilesManager_getPath_m897015337 (FilesManager_t2291984574 * __this, String_t* ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
