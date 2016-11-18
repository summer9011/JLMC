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

// System.Threading.Timer
struct Timer_t2838741986;
// System.Threading.TimerCallback
struct TimerCallback_t4214441299;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_TimerCallback4214441299.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_TimeSpan1834055012.h"

// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.Int32,System.Int32)
extern "C"  void Timer__ctor_m3728192463 (Timer_t2838741986 * __this, TimerCallback_t4214441299 * ___callback, Il2CppObject * ___state, int32_t ___dueTime, int32_t ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::.cctor()
extern "C"  void Timer__cctor_m3277205579 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Init(System.Threading.TimerCallback,System.Object,System.Int64,System.Int64)
extern "C"  void Timer_Init_m158808653 (Timer_t2838741986 * __this, TimerCallback_t4214441299 * ___callback, Il2CppObject * ___state, int64_t ___dueTime, int64_t ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
extern "C"  bool Timer_Change_m1102301880 (Timer_t2838741986 * __this, TimeSpan_t1834055012  ___dueTime, TimeSpan_t1834055012  ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Dispose()
extern "C"  void Timer_Dispose_m337583491 (Timer_t2838741986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
extern "C"  bool Timer_Change_m3382066473 (Timer_t2838741986 * __this, int64_t ___dueTime, int64_t ___period, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
