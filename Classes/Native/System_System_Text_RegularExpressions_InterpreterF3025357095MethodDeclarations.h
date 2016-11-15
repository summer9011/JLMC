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

// System.Text.RegularExpressions.InterpreterFactory
struct InterpreterFactory_t3025357095;
// System.UInt16[]
struct UInt16U5BU5D_t1076071497;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1421636219;
// System.Collections.IDictionary
struct IDictionary_t2734775517;
// System.String[]
struct StringU5BU5D_t3764931161;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.InterpreterFactory::.ctor(System.UInt16[])
extern "C"  void InterpreterFactory__ctor_m3331468903 (InterpreterFactory_t3025357095 * __this, UInt16U5BU5D_t1076071497* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.InterpreterFactory::NewInstance()
extern "C"  Il2CppObject * InterpreterFactory_NewInstance_m1241029724 (InterpreterFactory_t3025357095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_GroupCount()
extern "C"  int32_t InterpreterFactory_get_GroupCount_m1785101782 (InterpreterFactory_t3025357095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_Gap()
extern "C"  int32_t InterpreterFactory_get_Gap_m2782142718 (InterpreterFactory_t3025357095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Gap(System.Int32)
extern "C"  void InterpreterFactory_set_Gap_m2761943153 (InterpreterFactory_t3025357095 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::get_Mapping()
extern "C"  Il2CppObject * InterpreterFactory_get_Mapping_m402941400 (InterpreterFactory_t3025357095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Mapping(System.Collections.IDictionary)
extern "C"  void InterpreterFactory_set_Mapping_m244343039 (InterpreterFactory_t3025357095 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.InterpreterFactory::get_NamesMapping()
extern "C"  StringU5BU5D_t3764931161* InterpreterFactory_get_NamesMapping_m3186583301 (InterpreterFactory_t3025357095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_NamesMapping(System.String[])
extern "C"  void InterpreterFactory_set_NamesMapping_m3753353488 (InterpreterFactory_t3025357095 * __this, StringU5BU5D_t3764931161* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
