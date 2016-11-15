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

// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t3072044669;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t2000248932;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_System_Text_RegularExpressions_Match2000248932.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
extern "C"  void MatchEvaluator__ctor_m3633185959 (MatchEvaluator_t3072044669 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
extern "C"  String_t* MatchEvaluator_Invoke_m3037466252 (MatchEvaluator_t3072044669 * __this, Match_t2000248932 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" String_t* pinvoke_delegate_wrapper_MatchEvaluator_t3072044669(Il2CppObject* delegate, Match_t2000248932 * ___match);
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MatchEvaluator_BeginInvoke_m503772792 (MatchEvaluator_t3072044669 * __this, Match_t2000248932 * ___match, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
extern "C"  String_t* MatchEvaluator_EndInvoke_m3902136768 (MatchEvaluator_t3072044669 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
