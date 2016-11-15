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

// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t892758458;
// System.Array
struct Il2CppArray;
// System.Reflection.Assembly
struct Assembly_t141003736;
// System.AppDomain
struct AppDomain_t2896726240;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityFrame1476037522.h"
#include "mscorlib_System_Security_RuntimeSecurityFrame892758458.h"

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
extern "C"  void SecurityFrame__ctor_m3738328608 (SecurityFrame_t1476037522 * __this, RuntimeSecurityFrame_t892758458 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
extern "C"  Il2CppArray * SecurityFrame__GetSecurityStack_m2546928721 (Il2CppObject * __this /* static, unused */, int32_t ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
extern "C"  void SecurityFrame_InitFromRuntimeFrame_m45195821 (SecurityFrame_t1476037522 * __this, RuntimeSecurityFrame_t892758458 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
extern "C"  Assembly_t141003736 * SecurityFrame_get_Assembly_m2816566490 (SecurityFrame_t1476037522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
extern "C"  AppDomain_t2896726240 * SecurityFrame_get_Domain_m3219347572 (SecurityFrame_t1476037522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
extern "C"  String_t* SecurityFrame_ToString_m1282306399 (SecurityFrame_t1476037522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
extern "C"  ArrayList_t1468494371 * SecurityFrame_GetStack_m300982985 (Il2CppObject * __this /* static, unused */, int32_t ___skipFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
