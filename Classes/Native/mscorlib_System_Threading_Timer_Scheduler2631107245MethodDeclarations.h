﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Threading.Timer/Scheduler
struct Scheduler_t2631107245;
// System.Threading.Timer
struct Timer_t2838741986;
// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_Timer2838741986.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"

// System.Void System.Threading.Timer/Scheduler::.ctor()
extern "C"  void Scheduler__ctor_m3716265742 (Scheduler_t2631107245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::.cctor()
extern "C"  void Scheduler__cctor_m4247251807 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::get_Instance()
extern "C"  Scheduler_t2631107245 * Scheduler_get_Instance_m1989471839 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Remove(System.Threading.Timer)
extern "C"  void Scheduler_Remove_m1930366072 (Scheduler_t2631107245 * __this, Timer_t2838741986 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Change(System.Threading.Timer,System.Int64)
extern "C"  void Scheduler_Change_m4063588742 (Scheduler_t2631107245 * __this, Timer_t2838741986 * ___timer, int64_t ___new_next_run, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
extern "C"  void Scheduler_Add_m376749205 (Scheduler_t2631107245 * __this, Timer_t2838741986 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
extern "C"  int32_t Scheduler_InternalRemove_m3311205655 (Scheduler_t2631107245 * __this, Timer_t2838741986 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::SchedulerThread()
extern "C"  void Scheduler_SchedulerThread_m2209572785 (Scheduler_t2631107245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.ArrayList,System.Int32)
extern "C"  void Scheduler_ShrinkIfNeeded_m2186823111 (Scheduler_t2631107245 * __this, ArrayList_t1468494371 * ___list, int32_t ___initial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
