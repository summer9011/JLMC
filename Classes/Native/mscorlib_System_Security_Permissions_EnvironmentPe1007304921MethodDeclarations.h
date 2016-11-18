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

// System.Security.Permissions.EnvironmentPermission
struct EnvironmentPermission_t1007304921;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t2506060457;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;
// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta4033523447.h"
#include "mscorlib_System_Security_Permissions_EnvironmentPe1495257167.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"

// System.Void System.Security.Permissions.EnvironmentPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void EnvironmentPermission__ctor_m3449728632 (EnvironmentPermission_t1007304921 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.EnvironmentPermission::GetPathList(System.Security.Permissions.EnvironmentPermissionAccess)
extern "C"  String_t* EnvironmentPermission_GetPathList_m2029053622 (EnvironmentPermission_t1007304921 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool EnvironmentPermission_IsSubsetOf_m1252378883 (EnvironmentPermission_t1007304921 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsUnrestricted()
extern "C"  bool EnvironmentPermission_IsUnrestricted_m2227445447 (EnvironmentPermission_t1007304921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.EnvironmentPermission::ToXml()
extern "C"  SecurityElement_t2623103667 * EnvironmentPermission_ToXml_m1910121157 (EnvironmentPermission_t1007304921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.EnvironmentPermission System.Security.Permissions.EnvironmentPermission::Cast(System.Security.IPermission)
extern "C"  EnvironmentPermission_t1007304921 * EnvironmentPermission_Cast_m2466807887 (EnvironmentPermission_t1007304921 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::ThrowInvalidFlag(System.Security.Permissions.EnvironmentPermissionAccess,System.Boolean)
extern "C"  void EnvironmentPermission_ThrowInvalidFlag_m3490991618 (EnvironmentPermission_t1007304921 * __this, int32_t ___flag, bool ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.EnvironmentPermission::GetPathList(System.Collections.ArrayList)
extern "C"  String_t* EnvironmentPermission_GetPathList_m127917712 (EnvironmentPermission_t1007304921 * __this, ArrayList_t1468494371 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
