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

// System.Security.SecurityException
struct SecurityException_t3360177232;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Object
struct Il2CppObject;
// System.Security.IPermission
struct IPermission_t2506060457;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Security.SecurityException::.ctor()
extern "C"  void SecurityException__ctor_m3135486104 (SecurityException_t3360177232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.String)
extern "C"  void SecurityException__ctor_m1484114982 (SecurityException_t3360177232 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SecurityException__ctor_m230238597 (SecurityException_t3360177232 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.SecurityException::get_Demanded()
extern "C"  Il2CppObject * SecurityException_get_Demanded_m3914466388 (SecurityException_t3360177232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityException::get_FirstPermissionThatFailed()
extern "C"  Il2CppObject * SecurityException_get_FirstPermissionThatFailed_m3311583176 (SecurityException_t3360177232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_PermissionState()
extern "C"  String_t* SecurityException_get_PermissionState_m824616682 (SecurityException_t3360177232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Security.SecurityException::get_PermissionType()
extern "C"  Type_t * SecurityException_get_PermissionType_m3543350822 (SecurityException_t3360177232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_GrantedSet()
extern "C"  String_t* SecurityException_get_GrantedSet_m1238160247 (SecurityException_t3360177232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_RefusedSet()
extern "C"  String_t* SecurityException_get_RefusedSet_m1580594168 (SecurityException_t3360177232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SecurityException_GetObjectData_m487588480 (SecurityException_t3360177232 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::ToString()
extern "C"  String_t* SecurityException_ToString_m937659401 (SecurityException_t3360177232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
