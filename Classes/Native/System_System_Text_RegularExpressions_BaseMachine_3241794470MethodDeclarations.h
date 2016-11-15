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

// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t3241794470;
// System.Object
struct Il2CppObject;
// System.Text.RegularExpressions.Match
struct Match_t2000248932;
// System.Text.StringBuilder
struct StringBuilder_t2393427626;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_System_Text_RegularExpressions_Match2000248932.h"
#include "mscorlib_System_Text_StringBuilder2393427626.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::.ctor(System.Object,System.IntPtr)
extern "C"  void MatchAppendEvaluator__ctor_m3486625178 (MatchAppendEvaluator_t3241794470 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::Invoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C"  void MatchAppendEvaluator_Invoke_m3703737128 (MatchAppendEvaluator_t3241794470 * __this, Match_t2000248932 * ___match, StringBuilder_t2393427626 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MatchAppendEvaluator_t3241794470(Il2CppObject* delegate, Match_t2000248932 * ___match, StringBuilder_t2393427626 * ___sb);
// System.IAsyncResult System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MatchAppendEvaluator_BeginInvoke_m3482977851 (MatchAppendEvaluator_t3241794470 * __this, Match_t2000248932 * ___match, StringBuilder_t2393427626 * ___sb, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::EndInvoke(System.IAsyncResult)
extern "C"  void MatchAppendEvaluator_EndInvoke_m269118460 (MatchAppendEvaluator_t3241794470 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
