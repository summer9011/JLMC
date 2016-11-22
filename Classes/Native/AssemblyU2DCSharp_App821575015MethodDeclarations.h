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
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_String1967731336.h"

// System.Void App::.ctor()
extern "C"  void App__ctor_m2732637238 (App_t821575015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void App::.cctor()
extern "C"  void App__cctor_m3548506933 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// App App::getInstance()
extern "C"  App_t821575015 * App_getInstance_m830484687 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void App::print(System.Object)
extern "C"  void App_print_m929367453 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___oj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator App::LoadSceneAsyn1(System.String,System.String)
extern "C"  Il2CppObject * App_LoadSceneAsyn1_m3759058960 (App_t821575015 * __this, String_t* ___context, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator App::BackSceneAsyn(System.String)
extern "C"  Il2CppObject * App_BackSceneAsyn_m1177134798 (App_t821575015 * __this, String_t* ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
