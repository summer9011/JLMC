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

// System.Version
struct Version_t2956351477;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Version2956351477.h"

// System.Void System.Version::.ctor()
extern "C"  void Version__ctor_m1627908957 (Version_t2956351477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
extern "C"  void Version__ctor_m2972638031 (Version_t2956351477 * __this, String_t* ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C"  void Version__ctor_m2035466001 (Version_t2956351477 * __this, int32_t ___major, int32_t ___minor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m1025848830 (Version_t2956351477 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m85867749 (Version_t2956351477 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version_CheckedSet_m76493673 (Version_t2956351477 * __this, int32_t ___defined, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Build()
extern "C"  int32_t Version_get_Build_m4207539494 (Version_t2956351477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Major()
extern "C"  int32_t Version_get_Major_m3385239713 (Version_t2956351477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Minor()
extern "C"  int32_t Version_get_Minor_m3449134197 (Version_t2956351477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Revision()
extern "C"  int32_t Version_get_Revision_m654005649 (Version_t2956351477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Version::Clone()
extern "C"  Il2CppObject * Version_Clone_m3011851203 (Version_t2956351477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Object)
extern "C"  int32_t Version_CompareTo_m3455426781 (Version_t2956351477 * __this, Il2CppObject * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Object)
extern "C"  bool Version_Equals_m637934620 (Version_t2956351477 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
extern "C"  int32_t Version_CompareTo_m596235198 (Version_t2956351477 * __this, Version_t2956351477 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
extern "C"  bool Version_Equals_m2419266375 (Version_t2956351477 * __this, Version_t2956351477 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::GetHashCode()
extern "C"  int32_t Version_GetHashCode_m880841176 (Version_t2956351477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Version::ToString()
extern "C"  String_t* Version_ToString_m18049552 (Version_t2956351477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Version::CreateFromString(System.String)
extern "C"  Version_t2956351477 * Version_CreateFromString_m3879424010 (Il2CppObject * __this /* static, unused */, String_t* ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C"  bool Version_op_Equality_m24249905 (Il2CppObject * __this /* static, unused */, Version_t2956351477 * ___v1, Version_t2956351477 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C"  bool Version_op_Inequality_m828629926 (Il2CppObject * __this /* static, unused */, Version_t2956351477 * ___v1, Version_t2956351477 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
