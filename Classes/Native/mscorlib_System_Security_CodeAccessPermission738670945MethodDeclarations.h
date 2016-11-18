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

// System.Security.CodeAccessPermission
struct CodeAccessPermission_t738670945;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;
// System.Security.IPermission
struct IPermission_t2506060457;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Security_Permissions_PermissionSta4033523447.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.Security.CodeAccessPermission::.ctor()
extern "C"  void CodeAccessPermission__ctor_m2285259037 (CodeAccessPermission_t738670945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.CodeAccessPermission::Demand()
extern "C"  void CodeAccessPermission_Demand_m3612194874 (CodeAccessPermission_t738670945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::Equals(System.Object)
extern "C"  bool CodeAccessPermission_Equals_m1762790716 (CodeAccessPermission_t738670945 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.CodeAccessPermission::GetHashCode()
extern "C"  int32_t CodeAccessPermission_GetHashCode_m3295132136 (CodeAccessPermission_t738670945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.CodeAccessPermission::ToString()
extern "C"  String_t* CodeAccessPermission_ToString_m3345031296 (CodeAccessPermission_t738670945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.CodeAccessPermission::Element(System.Int32)
extern "C"  SecurityElement_t2623103667 * CodeAccessPermission_Element_m806857876 (CodeAccessPermission_t738670945 * __this, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.PermissionState System.Security.CodeAccessPermission::CheckPermissionState(System.Security.Permissions.PermissionState,System.Boolean)
extern "C"  int32_t CodeAccessPermission_CheckPermissionState_m3468607831 (Il2CppObject * __this /* static, unused */, int32_t ___state, bool ___allowUnrestricted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.CodeAccessPermission::ThrowInvalidPermission(System.Security.IPermission,System.Type)
extern "C"  void CodeAccessPermission_ThrowInvalidPermission_m76542563 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target, Type_t * ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
