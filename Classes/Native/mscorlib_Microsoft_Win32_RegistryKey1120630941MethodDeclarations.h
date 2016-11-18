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

// Microsoft.Win32.RegistryKey
struct RegistryKey_t1120630941;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.IO.IOException
struct IOException_t4080263048;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Microsoft_Win32_RegistryHive3671441100.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive)
extern "C"  void RegistryKey__ctor_m1278683853 (RegistryKey_t1120630941 * __this, int32_t ___hiveId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive,System.IntPtr,System.Boolean)
extern "C"  void RegistryKey__ctor_m3835626924 (RegistryKey_t1120630941 * __this, int32_t ___hiveId, IntPtr_t ___keyHandle, bool ___remoteRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(System.Object,System.String,System.Boolean)
extern "C"  void RegistryKey__ctor_m605536598 (RegistryKey_t1120630941 * __this, Il2CppObject * ___data, String_t* ___keyName, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.cctor()
extern "C"  void RegistryKey__cctor_m3666002344 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::System.IDisposable.Dispose()
extern "C"  void RegistryKey_System_IDisposable_Dispose_m1903160980 (RegistryKey_t1120630941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Finalize()
extern "C"  void RegistryKey_Finalize_m3436419561 (RegistryKey_t1120630941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::get_Name()
extern "C"  String_t* RegistryKey_get_Name_m2830177076 (RegistryKey_t1120630941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Flush()
extern "C"  void RegistryKey_Flush_m1879115555 (RegistryKey_t1120630941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Close()
extern "C"  void RegistryKey_Close_m1878951281 (RegistryKey_t1120630941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::SetValue(System.String,System.Object)
extern "C"  void RegistryKey_SetValue_m2470362740 (RegistryKey_t1120630941 * __this, String_t* ___name, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.RegistryKey::OpenSubKey(System.String)
extern "C"  RegistryKey_t1120630941 * RegistryKey_OpenSubKey_m3508106888 (RegistryKey_t1120630941 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.RegistryKey::OpenSubKey(System.String,System.Boolean)
extern "C"  RegistryKey_t1120630941 * RegistryKey_OpenSubKey_m1393163461 (RegistryKey_t1120630941 * __this, String_t* ___name, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Microsoft.Win32.RegistryKey::GetValue(System.String)
extern "C"  Il2CppObject * RegistryKey_GetValue_m2967641165 (RegistryKey_t1120630941 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Microsoft.Win32.RegistryKey::GetValue(System.String,System.Object)
extern "C"  Il2CppObject * RegistryKey_GetValue_m517299071 (RegistryKey_t1120630941 * __this, String_t* ___name, Il2CppObject * ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::DeleteValue(System.String,System.Boolean)
extern "C"  void RegistryKey_DeleteValue_m2218702608 (RegistryKey_t1120630941 * __this, String_t* ___name, bool ___throwOnMissingValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::ToString()
extern "C"  String_t* RegistryKey_ToString_m63681718 (RegistryKey_t1120630941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsRoot()
extern "C"  bool RegistryKey_get_IsRoot_m2989913404 (RegistryKey_t1120630941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsWritable()
extern "C"  bool RegistryKey_get_IsWritable_m1243924408 (RegistryKey_t1120630941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryHive Microsoft.Win32.RegistryKey::get_Hive()
extern "C"  int32_t RegistryKey_get_Hive_m1395918589 (RegistryKey_t1120630941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Microsoft.Win32.RegistryKey::get_Handle()
extern "C"  Il2CppObject * RegistryKey_get_Handle_m2075076141 (RegistryKey_t1120630941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyStillValid()
extern "C"  void RegistryKey_AssertKeyStillValid_m642111092 (RegistryKey_t1120630941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyNameLength(System.String)
extern "C"  void RegistryKey_AssertKeyNameLength_m3140888475 (RegistryKey_t1120630941 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::DecodeString(System.Byte[])
extern "C"  String_t* RegistryKey_DecodeString_m4148438068 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.IOException Microsoft.Win32.RegistryKey::CreateMarkedForDeletionException()
extern "C"  IOException_t4080263048 * RegistryKey_CreateMarkedForDeletionException_m2959634582 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::GetHiveName(Microsoft.Win32.RegistryHive)
extern "C"  String_t* RegistryKey_GetHiveName_m1241181587 (Il2CppObject * __this /* static, unused */, int32_t ___hive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
