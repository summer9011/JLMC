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

// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t2144891177;
// System.String
struct String_t;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t813874237;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t3101482773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
extern "C"  void Literal__ctor_m3295919014 (Literal_t2144891177 * __this, String_t* ___str, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
extern "C"  void Literal_CompileLiteral_m276843152 (Il2CppObject * __this /* static, unused */, String_t* ___str, Il2CppObject * ___cmp, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void Literal_Compile_m3864266818 (Literal_t2144891177 * __this, Il2CppObject * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
extern "C"  void Literal_GetWidth_m1285678191 (Literal_t2144891177 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
extern "C"  AnchorInfo_t3101482773 * Literal_GetAnchorInfo_m1274318811 (Literal_t2144891177 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
extern "C"  bool Literal_IsComplex_m1975858693 (Literal_t2144891177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
