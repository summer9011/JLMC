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

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t2771249306;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t2003179150;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t813874237;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Expre2003179150.h"

// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
extern "C"  void ExpressionAssertion__ctor_m2408911632 (ExpressionAssertion_t2771249306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
extern "C"  void ExpressionAssertion_set_Reverse_m624216012 (ExpressionAssertion_t2771249306 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
extern "C"  void ExpressionAssertion_set_Negate_m1818062688 (ExpressionAssertion_t2771249306 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
extern "C"  Expression_t2003179150 * ExpressionAssertion_get_TestExpression_m1534563934 (ExpressionAssertion_t2771249306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C"  void ExpressionAssertion_set_TestExpression_m3541311597 (ExpressionAssertion_t2771249306 * __this, Expression_t2003179150 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void ExpressionAssertion_Compile_m3041130417 (ExpressionAssertion_t2771249306 * __this, Il2CppObject * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
extern "C"  bool ExpressionAssertion_IsComplex_m783019628 (ExpressionAssertion_t2771249306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
