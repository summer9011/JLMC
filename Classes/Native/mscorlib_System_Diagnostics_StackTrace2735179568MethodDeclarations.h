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

// System.Diagnostics.StackTrace
struct StackTrace_t2735179568;
// System.Exception
struct Exception_t1145979430;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t413237541;
// System.Diagnostics.StackFrame
struct StackFrame_t121709228;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception1145979430.h"

// System.Void System.Diagnostics.StackTrace::.ctor()
extern "C"  void StackTrace__ctor_m2404985356 (StackTrace_t2735179568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
extern "C"  void StackTrace__ctor_m1811467992 (StackTrace_t2735179568 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
extern "C"  void StackTrace__ctor_m772333217 (StackTrace_t2735179568 * __this, Exception_t1145979430 * ___e, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
extern "C"  void StackTrace__ctor_m3056802492 (StackTrace_t2735179568 * __this, Exception_t1145979430 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean,System.Boolean)
extern "C"  void StackTrace__ctor_m2335548767 (StackTrace_t2735179568 * __this, Exception_t1145979430 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, bool ___returnNativeFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
extern "C"  void StackTrace_init_frames_m3304642995 (StackTrace_t2735179568 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
extern "C"  StackFrameU5BU5D_t413237541* StackTrace_get_trace_m1709902627 (Il2CppObject * __this /* static, unused */, Exception_t1145979430 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
extern "C"  int32_t StackTrace_get_FrameCount_m1447315207 (StackTrace_t2735179568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
extern "C"  StackFrame_t121709228 * StackTrace_GetFrame_m722859709 (StackTrace_t2735179568 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackTrace::ToString()
extern "C"  String_t* StackTrace_ToString_m1480148941 (StackTrace_t2735179568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
