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

// Microsoft.Win32.UnixRegistryApi
struct UnixRegistryApi_t3995547332;
// System.String
struct String_t;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t1120630941;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_Microsoft_Win32_RegistryKey1120630941.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_Microsoft_Win32_RegistryValueOptions3281829153.h"

// System.Void Microsoft.Win32.UnixRegistryApi::.ctor()
extern "C"  void UnixRegistryApi__ctor_m2412577866 (UnixRegistryApi_t3995547332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.UnixRegistryApi::ToUnix(System.String)
extern "C"  String_t* UnixRegistryApi_ToUnix_m793803246 (Il2CppObject * __this /* static, unused */, String_t* ___keyname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.UnixRegistryApi::IsWellKnownKey(System.String,System.String)
extern "C"  bool UnixRegistryApi_IsWellKnownKey_m3624391548 (Il2CppObject * __this /* static, unused */, String_t* ___parentKeyName, String_t* ___keyname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.UnixRegistryApi::OpenSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C"  RegistryKey_t1120630941 * UnixRegistryApi_OpenSubKey_m809579111 (UnixRegistryApi_t3995547332 * __this, RegistryKey_t1120630941 * ___rkey, String_t* ___keyname, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::Flush(Microsoft.Win32.RegistryKey)
extern "C"  void UnixRegistryApi_Flush_m1359389401 (UnixRegistryApi_t3995547332 * __this, RegistryKey_t1120630941 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::Close(Microsoft.Win32.RegistryKey)
extern "C"  void UnixRegistryApi_Close_m2642554823 (UnixRegistryApi_t3995547332 * __this, RegistryKey_t1120630941 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Microsoft.Win32.UnixRegistryApi::GetValue(Microsoft.Win32.RegistryKey,System.String,System.Object,Microsoft.Win32.RegistryValueOptions)
extern "C"  Il2CppObject * UnixRegistryApi_GetValue_m705352058 (UnixRegistryApi_t3995547332 * __this, RegistryKey_t1120630941 * ___rkey, String_t* ___name, Il2CppObject * ___default_value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::SetValue(Microsoft.Win32.RegistryKey,System.String,System.Object)
extern "C"  void UnixRegistryApi_SetValue_m4147516032 (UnixRegistryApi_t3995547332 * __this, RegistryKey_t1120630941 * ___rkey, String_t* ___name, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::DeleteValue(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C"  void UnixRegistryApi_DeleteValue_m3220075138 (UnixRegistryApi_t3995547332 * __this, RegistryKey_t1120630941 * ___rkey, String_t* ___name, bool ___throw_if_missing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.UnixRegistryApi::ToString(Microsoft.Win32.RegistryKey)
extern "C"  String_t* UnixRegistryApi_ToString_m3521687076 (UnixRegistryApi_t3995547332 * __this, RegistryKey_t1120630941 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.UnixRegistryApi::CreateSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C"  RegistryKey_t1120630941 * UnixRegistryApi_CreateSubKey_m2981101095 (UnixRegistryApi_t3995547332 * __this, RegistryKey_t1120630941 * ___rkey, String_t* ___keyname, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
