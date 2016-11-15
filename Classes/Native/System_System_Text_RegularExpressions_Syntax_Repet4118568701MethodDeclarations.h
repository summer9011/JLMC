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

// System.Text.RegularExpressions.Syntax.Repetition
struct Repetition_t4118568701;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t2003179150;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t813874237;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t3101482773;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Expre2003179150.h"

// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C"  void Repetition__ctor_m3249835358 (Repetition_t4118568701 * __this, int32_t ___min, int32_t ___max, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
extern "C"  Expression_t2003179150 * Repetition_get_Expression_m3751668675 (Repetition_t4118568701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
extern "C"  void Repetition_set_Expression_m1152577918 (Repetition_t4118568701 * __this, Expression_t2003179150 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
extern "C"  int32_t Repetition_get_Minimum_m1523545878 (Repetition_t4118568701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void Repetition_Compile_m3665012016 (Repetition_t4118568701 * __this, Il2CppObject * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
extern "C"  void Repetition_GetWidth_m3673029367 (Repetition_t4118568701 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
extern "C"  AnchorInfo_t3101482773 * Repetition_GetAnchorInfo_m657715019 (Repetition_t4118568701 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
