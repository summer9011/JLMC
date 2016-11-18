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
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM1598875467.h"

// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SceneManager_LoadScene_m1386820036 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
extern "C"  AsyncOperation_t471317734 * SceneManager_LoadSceneAsync_m4130852156 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  AsyncOperation_t471317734 * SceneManager_LoadSceneAsync_m2648120039 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsyncNameIndexInternal(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  AsyncOperation_t471317734 * SceneManager_LoadSceneAsyncNameIndexInternal_m3279056043 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName, int32_t ___sceneBuildIndex, bool ___isAdditive, bool ___mustCompleteNextFrame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
