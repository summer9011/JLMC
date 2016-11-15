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

// System.Text.RegularExpressions.Syntax.Alternation
struct Alternation_t2838458207;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t3428960834;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t2003179150;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t813874237;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Expre2003179150.h"

// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
extern "C"  void Alternation__ctor_m3881095545 (Alternation_t2838458207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
extern "C"  ExpressionCollection_t3428960834 * Alternation_get_Alternatives_m1445219249 (Alternation_t2838458207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
extern "C"  void Alternation_AddAlternative_m623421443 (Alternation_t2838458207 * __this, Expression_t2003179150 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void Alternation_Compile_m1760447490 (Alternation_t2838458207 * __this, Il2CppObject * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
extern "C"  void Alternation_GetWidth_m4218808325 (Alternation_t2838458207 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
