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

// System.Text.RegularExpressions.ReplacementEvaluator
struct ReplacementEvaluator_t3701633274;
// System.Text.RegularExpressions.Regex
struct Regex_t272817006;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t2000248932;
// System.Text.StringBuilder
struct StringBuilder_t2393427626;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Regex272817006.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Text_RegularExpressions_Match2000248932.h"
#include "mscorlib_System_Text_StringBuilder2393427626.h"

// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
extern "C"  void ReplacementEvaluator__ctor_m3746900384 (ReplacementEvaluator_t3701633274 * __this, Regex_t272817006 * ___regex, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
extern "C"  String_t* ReplacementEvaluator_Evaluate_m197194936 (ReplacementEvaluator_t3701633274 * __this, Match_t2000248932 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C"  void ReplacementEvaluator_EvaluateAppend_m4165611689 (ReplacementEvaluator_t3701633274 * __this, Match_t2000248932 * ___match, StringBuilder_t2393427626 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
extern "C"  bool ReplacementEvaluator_get_NeedsGroupsOrCaptures_m3532058782 (ReplacementEvaluator_t3701633274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
extern "C"  void ReplacementEvaluator_Ensure_m2025598273 (ReplacementEvaluator_t3701633274 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
extern "C"  void ReplacementEvaluator_AddFromReplacement_m3891576415 (ReplacementEvaluator_t3701633274 * __this, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
extern "C"  void ReplacementEvaluator_AddInt_m2149831105 (ReplacementEvaluator_t3701633274 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
extern "C"  void ReplacementEvaluator_Compile_m1875719451 (ReplacementEvaluator_t3701633274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
extern "C"  int32_t ReplacementEvaluator_CompileTerm_m1895109616 (ReplacementEvaluator_t3701633274 * __this, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
