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

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t676570721;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t272817006;
// System.Text.RegularExpressions.Match
struct Match_t2000248932;
// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t3241794470;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t3072044669;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Regex272817006.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Text_RegularExpressions_BaseMachine_3241794470.h"
#include "System_System_Text_RegularExpressions_MatchEvaluat3072044669.h"

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
extern "C"  void BaseMachine__ctor_m2327544039 (BaseMachine_t676570721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::Replace(System.Text.RegularExpressions.Regex,System.String,System.String,System.Int32,System.Int32)
extern "C"  String_t* BaseMachine_Replace_m2446015132 (BaseMachine_t676570721 * __this, Regex_t272817006 * ___regex, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C"  Match_t2000248932 * BaseMachine_Scan_m122450399 (BaseMachine_t676570721 * __this, Regex_t272817006 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32,System.Boolean)
extern "C"  String_t* BaseMachine_LTRReplace_m1094774497 (BaseMachine_t676570721 * __this, Regex_t272817006 * ___regex, String_t* ___input, MatchAppendEvaluator_t3241794470 * ___evaluator, int32_t ___count, int32_t ___startat, bool ___needs_groups_or_captures, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::RTLReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
extern "C"  String_t* BaseMachine_RTLReplace_m25431723 (BaseMachine_t676570721 * __this, Regex_t272817006 * ___regex, String_t* ___input, MatchEvaluator_t3072044669 * ___evaluator, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
