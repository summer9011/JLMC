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
// System.Object
struct Il2CppObject;
// System.Diagnostics.StackTrace
struct StackTrace_t2735179568;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Diagnostics_StackTrace2735179568.h"

// System.Void UnityEngine.StackTraceUtility::.cctor()
extern "C"  void StackTraceUtility__cctor_m1132099289 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern "C"  void StackTraceUtility_SetProjectFolder_m2154926761 (Il2CppObject * __this /* static, unused */, String_t* ___folder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern "C"  String_t* StackTraceUtility_ExtractStackTrace_m1593581205 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern "C"  bool StackTraceUtility_IsSystemStacktraceType_m506502194 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern "C"  void StackTraceUtility_ExtractStringFromExceptionInternal_m2568950546 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern "C"  String_t* StackTraceUtility_PostprocessStacktrace_m2866903298 (Il2CppObject * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern "C"  String_t* StackTraceUtility_ExtractFormattedStackTrace_m2242276521 (Il2CppObject * __this /* static, unused */, StackTrace_t2735179568 * ___stackTrace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
