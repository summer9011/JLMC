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

// System.CultureAwareComparer
struct CultureAwareComparer_t1772188340;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.CultureAwareComparer::.ctor(System.Globalization.CultureInfo,System.Boolean)
extern "C"  void CultureAwareComparer__ctor_m3785348999 (CultureAwareComparer_t1772188340 * __this, CultureInfo_t634113868 * ___ci, bool ___ignore_case, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::Compare(System.String,System.String)
extern "C"  int32_t CultureAwareComparer_Compare_m2587353351 (CultureAwareComparer_t1772188340 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CultureAwareComparer::Equals(System.String,System.String)
extern "C"  bool CultureAwareComparer_Equals_m3891174449 (CultureAwareComparer_t1772188340 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::GetHashCode(System.String)
extern "C"  int32_t CultureAwareComparer_GetHashCode_m3681260951 (CultureAwareComparer_t1772188340 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
