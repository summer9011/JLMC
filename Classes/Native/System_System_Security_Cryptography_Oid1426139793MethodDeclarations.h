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

// System.Security.Cryptography.Oid
struct Oid_t1426139793;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Security_Cryptography_Oid1426139793.h"

// System.Void System.Security.Cryptography.Oid::.ctor()
extern "C"  void Oid__ctor_m83809371 (Oid_t1426139793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String)
extern "C"  void Oid__ctor_m1936781897 (Oid_t1426139793 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
extern "C"  void Oid__ctor_m954395291 (Oid_t1426139793 * __this, String_t* ___value, String_t* ___friendlyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
extern "C"  void Oid__ctor_m3386806634 (Oid_t1426139793 * __this, Oid_t1426139793 * ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::get_FriendlyName()
extern "C"  String_t* Oid_get_FriendlyName_m3094550571 (Oid_t1426139793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::get_Value()
extern "C"  String_t* Oid_get_Value_m2271181078 (Oid_t1426139793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::GetName(System.String)
extern "C"  String_t* Oid_GetName_m40695489 (Oid_t1426139793 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
