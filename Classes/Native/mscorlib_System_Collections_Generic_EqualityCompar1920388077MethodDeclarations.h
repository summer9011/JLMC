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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t1920388078;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid756539922.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C"  void DefaultComparer__ctor_m71907202_gshared (DefaultComparer_t1920388078 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m71907202(__this, method) ((  void (*) (DefaultComparer_t1920388078 *, const MethodInfo*))DefaultComparer__ctor_m71907202_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m4073394827_gshared (DefaultComparer_t1920388078 * __this, Guid_t756539922  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m4073394827(__this, ___obj, method) ((  int32_t (*) (DefaultComparer_t1920388078 *, Guid_t756539922 , const MethodInfo*))DefaultComparer_GetHashCode_m4073394827_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m3573892667_gshared (DefaultComparer_t1920388078 * __this, Guid_t756539922  ___x, Guid_t756539922  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m3573892667(__this, ___x, ___y, method) ((  bool (*) (DefaultComparer_t1920388078 *, Guid_t756539922 , Guid_t756539922 , const MethodInfo*))DefaultComparer_Equals_m3573892667_gshared)(__this, ___x, ___y, method)
