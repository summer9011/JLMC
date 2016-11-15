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

// System.Reflection.Binder
struct Binder_t1934246024;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t3027888260;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t591550820;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1643888781;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Binder1934246024.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C"  void Binder__ctor_m1361613966 (Binder_t1934246024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C"  void Binder__cctor_m3736115807 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C"  Binder_t1934246024 * Binder_get_DefaultBinder_m965620943 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C"  bool Binder_ConvertArgs_m2999223281 (Il2CppObject * __this /* static, unused */, Binder_t1934246024 * ___binder, ObjectU5BU5D_t3632007997* ___args, ParameterInfoU5BU5D_t3027888260* ___pinfo, CultureInfo_t634113868 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C"  int32_t Binder_GetDerivedLevel_m1809808744 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C"  MethodBase_t591550820 * Binder_FindMostDerivedMatch_m2621831847 (Il2CppObject * __this /* static, unused */, MethodBaseU5BU5D_t1643888781* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
