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

// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"

// System.Int32 System.GC::get_MaxGeneration()
extern "C"  int32_t GC_get_MaxGeneration_m1986243316 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::InternalCollect(System.Int32)
extern "C"  void GC_InternalCollect_m479047119 (Il2CppObject * __this /* static, unused */, int32_t ___generation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::Collect()
extern "C"  void GC_Collect_m2249328497 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C"  void GC_SuppressFinalize_m953228702 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
