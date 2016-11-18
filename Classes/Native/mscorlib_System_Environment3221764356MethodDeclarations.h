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

// System.String
struct String_t;
// System.OperatingSystem
struct OperatingSystem_t2497992059;
// System.Collections.Hashtable
struct Hashtable_t1312997718;
// System.String[]
struct StringU5BU5D_t3764931161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_PlatformID1033796947.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Environment_SpecialFolder2034789713.h"
#include "mscorlib_System_EnvironmentVariableTarget2460185149.h"

// System.String System.Environment::get_CurrentDirectory()
extern "C"  String_t* Environment_get_CurrentDirectory_m2386669816 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Environment::get_SocketSecurityEnabled()
extern "C"  bool Environment_get_SocketSecurityEnabled_m1758378561 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_NewLine()
extern "C"  String_t* Environment_get_NewLine_m266316410 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.Environment::get_Platform()
extern "C"  int32_t Environment_get_Platform_m2874211026 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetOSVersionString()
extern "C"  String_t* Environment_GetOSVersionString_m3848984846 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.OperatingSystem System.Environment::get_OSVersion()
extern "C"  OperatingSystem_t2497992059 * Environment_get_OSVersion_m1247315981 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::ExpandEnvironmentVariables(System.String)
extern "C"  String_t* Environment_ExpandEnvironmentVariables_m2662085035 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetEnvironmentVariable(System.String)
extern "C"  String_t* Environment_internalGetEnvironmentVariable_m793691779 (Il2CppObject * __this /* static, unused */, String_t* ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetEnvironmentVariable(System.String)
extern "C"  String_t* Environment_GetEnvironmentVariable_m4292917946 (Il2CppObject * __this /* static, unused */, String_t* ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Environment::GetEnvironmentVariablesNoCase()
extern "C"  Hashtable_t1312997718 * Environment_GetEnvironmentVariablesNoCase_m3430345336 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetWindowsFolderPath(System.Int32)
extern "C"  String_t* Environment_GetWindowsFolderPath_m1236279486 (Il2CppObject * __this /* static, unused */, int32_t ___folder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
extern "C"  String_t* Environment_GetFolderPath_m1849163024 (Il2CppObject * __this /* static, unused */, int32_t ___folder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::ReadXdgUserDir(System.String,System.String,System.String,System.String)
extern "C"  String_t* Environment_ReadXdgUserDir_m3426336950 (Il2CppObject * __this /* static, unused */, String_t* ___config_dir, String_t* ___home_dir, String_t* ___key, String_t* ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::InternalGetFolderPath(System.Environment/SpecialFolder)
extern "C"  String_t* Environment_InternalGetFolderPath_m2949665159 (Il2CppObject * __this /* static, unused */, int32_t ___folder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Environment::internalBroadcastSettingChange()
extern "C"  void Environment_internalBroadcastSettingChange_m237419896 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetEnvironmentVariable(System.String,System.EnvironmentVariableTarget)
extern "C"  String_t* Environment_GetEnvironmentVariable_m361866689 (Il2CppObject * __this /* static, unused */, String_t* ___variable, int32_t ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Environment::SetEnvironmentVariable(System.String,System.String,System.EnvironmentVariableTarget)
extern "C"  void Environment_SetEnvironmentVariable_m2407168504 (Il2CppObject * __this /* static, unused */, String_t* ___variable, String_t* ___value, int32_t ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Environment::InternalSetEnvironmentVariable(System.String,System.String)
extern "C"  void Environment_InternalSetEnvironmentVariable_m2518083354 (Il2CppObject * __this /* static, unused */, String_t* ___variable, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Environment::get_IsRunningOnWindows()
extern "C"  bool Environment_get_IsRunningOnWindows_m2990729574 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Environment::GetEnvironmentVariableNames()
extern "C"  StringU5BU5D_t3764931161* Environment_GetEnvironmentVariableNames_m1969855306 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetMachineConfigPath()
extern "C"  String_t* Environment_GetMachineConfigPath_m1118347127 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetHome()
extern "C"  String_t* Environment_internalGetHome_m264525465 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
