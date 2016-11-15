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

// System.Threading.WaitCallback
struct WaitCallback_t3161073199;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_WaitCallback3161073199.h"
#include "mscorlib_System_Object707969140.h"

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C"  bool ThreadPool_QueueUserWorkItem_m2209660682 (Il2CppObject * __this /* static, unused */, WaitCallback_t3161073199 * ___callBack, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
