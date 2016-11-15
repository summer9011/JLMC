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

// System.Text.RegularExpressions.Syntax.Reference
struct Reference_t2032220949;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t3102830828;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t813874237;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Captu3102830828.h"

// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
extern "C"  void Reference__ctor_m4110013284 (Reference_t2032220949 * __this, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
extern "C"  CapturingGroup_t3102830828 * Reference_get_CapturingGroup_m130933683 (Reference_t2032220949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C"  void Reference_set_CapturingGroup_m1629687522 (Reference_t2032220949 * __this, CapturingGroup_t3102830828 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
extern "C"  bool Reference_get_IgnoreCase_m2810892634 (Reference_t2032220949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void Reference_Compile_m4238074688 (Reference_t2032220949 * __this, Il2CppObject * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
extern "C"  void Reference_GetWidth_m1073041651 (Reference_t2032220949 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
extern "C"  bool Reference_IsComplex_m3827291813 (Reference_t2032220949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
