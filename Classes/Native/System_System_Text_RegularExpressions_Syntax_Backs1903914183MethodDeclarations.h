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

// System.Text.RegularExpressions.Syntax.BackslashNumber
struct BackslashNumber_t1903914183;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1312997718;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t813874237;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Collections_Hashtable1312997718.h"

// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::.ctor(System.Boolean,System.Boolean)
extern "C"  void BackslashNumber__ctor_m855727065 (BackslashNumber_t1903914183 * __this, bool ___ignore, bool ___ecma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ResolveReference(System.String,System.Collections.Hashtable)
extern "C"  bool BackslashNumber_ResolveReference_m2703650096 (BackslashNumber_t1903914183 * __this, String_t* ___num_str, Hashtable_t1312997718 * ___groups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void BackslashNumber_Compile_m930299304 (BackslashNumber_t1903914183 * __this, Il2CppObject * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
