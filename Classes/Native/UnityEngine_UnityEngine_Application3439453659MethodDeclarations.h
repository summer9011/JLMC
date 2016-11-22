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

// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t471317734;
struct AsyncOperation_t471317734_marshaled_pinvoke;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RuntimePlatform891581990.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_LogType3079013523.h"
#include "UnityEngine_UnityEngine_UserAuthorization3879940717.h"

// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C"  bool Application_get_isPlaying_m4091950718 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C"  bool Application_get_isEditor_m2474583393 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m3989224144 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
extern "C"  bool Application_get_isMobilePlatform_m1067527467 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_streamingAssetsPath()
extern "C"  String_t* Application_get_streamingAssetsPath_m8890645 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C"  String_t* Application_get_persistentDataPath_m3129298355 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::OpenURL(System.String)
extern "C"  void Application_OpenURL_m3882634228 (Il2CppObject * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern "C"  void Application_CallLogCallback_m3408386792 (Il2CppObject * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::RequestUserAuthorization(UnityEngine.UserAuthorization)
extern "C"  AsyncOperation_t471317734 * Application_RequestUserAuthorization_m2712302050 (Il2CppObject * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::HasUserAuthorization(UnityEngine.UserAuthorization)
extern "C"  bool Application_HasUserAuthorization_m3858687304 (Il2CppObject * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C"  void Application_LoadLevel_m393995325 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
