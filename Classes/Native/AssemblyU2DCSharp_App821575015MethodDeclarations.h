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

// App
struct App_t821575015;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void App::.ctor()
extern "C"  void App__ctor_m2732637238 (App_t821575015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void App::.cctor()
extern "C"  void App__cctor_m3548506933 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// App App::getInstance()
extern "C"  App_t821575015 * App_getInstance_m830484687 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void App::LoadScene(System.String,System.Boolean)
extern "C"  void App_LoadScene_m3739469983 (App_t821575015 * __this, String_t* ___sceneName, bool ___isAsyn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator App::LoadSceneAsyn(System.String)
extern "C"  Il2CppObject * App_LoadSceneAsyn_m1172168807 (App_t821575015 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void App::BackScene(System.Boolean)
extern "C"  void App_BackScene_m2994813738 (App_t821575015 * __this, bool ___isAsyn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
