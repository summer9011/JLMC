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

// Microsoft.Win32.Win32RegistryApi
struct Win32RegistryApi_t1287939875;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t1120630941;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_Microsoft_Win32_RegistryValueKind2272066561.h"
#include "mscorlib_Microsoft_Win32_RegistryKey1120630941.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_Microsoft_Win32_RegistryValueOptions3281829153.h"

// System.Void Microsoft.Win32.Win32RegistryApi::.ctor()
extern "C"  void Win32RegistryApi__ctor_m380794313 (Win32RegistryApi_t1287939875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegCloseKey(System.IntPtr)
extern "C"  int32_t Win32RegistryApi_RegCloseKey_m3097426732 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegFlushKey(System.IntPtr)
extern "C"  int32_t Win32RegistryApi_RegFlushKey_m3060746502 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegOpenKeyEx(System.IntPtr,System.String,System.IntPtr,System.Int32,System.IntPtr&)
extern "C"  int32_t Win32RegistryApi_RegOpenKeyEx_m3724851794 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___keyName, IntPtr_t ___reserved, int32_t ___access, IntPtr_t* ___keyHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegDeleteValue(System.IntPtr,System.String)
extern "C"  int32_t Win32RegistryApi_RegDeleteValue_m1799594961 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyHandle, String_t* ___valueName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegSetValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind,System.String,System.Int32)
extern "C"  int32_t Win32RegistryApi_RegSetValueEx_m1054801277 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___valueName, IntPtr_t ___reserved, int32_t ___type, String_t* ___data, int32_t ___rawDataLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegSetValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind,System.Byte[],System.Int32)
extern "C"  int32_t Win32RegistryApi_RegSetValueEx_m186733746 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___valueName, IntPtr_t ___reserved, int32_t ___type, ByteU5BU5D_t3835026402* ___rawData, int32_t ___rawDataLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegSetValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind,System.Int32&,System.Int32)
extern "C"  int32_t Win32RegistryApi_RegSetValueEx_m2240986270 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___valueName, IntPtr_t ___reserved, int32_t ___type, int32_t* ___data, int32_t ___rawDataLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegQueryValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind&,System.IntPtr,System.Int32&)
extern "C"  int32_t Win32RegistryApi_RegQueryValueEx_m3213633069 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___valueName, IntPtr_t ___reserved, int32_t* ___type, IntPtr_t ___zero, int32_t* ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegQueryValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind&,System.Byte[],System.Int32&)
extern "C"  int32_t Win32RegistryApi_RegQueryValueEx_m4278124034 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___valueName, IntPtr_t ___reserved, int32_t* ___type, ByteU5BU5D_t3835026402* ___data, int32_t* ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegQueryValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind&,System.Int32&,System.Int32&)
extern "C"  int32_t Win32RegistryApi_RegQueryValueEx_m947253854 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___valueName, IntPtr_t ___reserved, int32_t* ___type, int32_t* ___data, int32_t* ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Microsoft.Win32.Win32RegistryApi::GetHandle(Microsoft.Win32.RegistryKey)
extern "C"  IntPtr_t Win32RegistryApi_GetHandle_m1362714355 (Il2CppObject * __this /* static, unused */, RegistryKey_t1120630941 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.Win32RegistryApi::IsHandleValid(Microsoft.Win32.RegistryKey)
extern "C"  bool Win32RegistryApi_IsHandleValid_m3580845620 (Il2CppObject * __this /* static, unused */, RegistryKey_t1120630941 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Microsoft.Win32.Win32RegistryApi::GetValue(Microsoft.Win32.RegistryKey,System.String,System.Object,Microsoft.Win32.RegistryValueOptions)
extern "C"  Il2CppObject * Win32RegistryApi_GetValue_m3245645685 (Win32RegistryApi_t1287939875 * __this, RegistryKey_t1120630941 * ___rkey, String_t* ___name, Il2CppObject * ___defaultValue, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::SetValue(Microsoft.Win32.RegistryKey,System.String,System.Object)
extern "C"  void Win32RegistryApi_SetValue_m1675803255 (Win32RegistryApi_t1287939875 * __this, RegistryKey_t1120630941 * ___rkey, String_t* ___name, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::GetBinaryValue(Microsoft.Win32.RegistryKey,System.String,Microsoft.Win32.RegistryValueKind,System.Byte[]&,System.Int32)
extern "C"  int32_t Win32RegistryApi_GetBinaryValue_m3374485151 (Win32RegistryApi_t1287939875 * __this, RegistryKey_t1120630941 * ___rkey, String_t* ___name, int32_t ___type, ByteU5BU5D_t3835026402** ___data, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.Win32RegistryApi::OpenSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C"  RegistryKey_t1120630941 * Win32RegistryApi_OpenSubKey_m2046895160 (Win32RegistryApi_t1287939875 * __this, RegistryKey_t1120630941 * ___rkey, String_t* ___keyName, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::Flush(Microsoft.Win32.RegistryKey)
extern "C"  void Win32RegistryApi_Flush_m1067061662 (Win32RegistryApi_t1287939875 * __this, RegistryKey_t1120630941 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::Close(Microsoft.Win32.RegistryKey)
extern "C"  void Win32RegistryApi_Close_m449068708 (Win32RegistryApi_t1287939875 * __this, RegistryKey_t1120630941 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::DeleteValue(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C"  void Win32RegistryApi_DeleteValue_m1261437233 (Win32RegistryApi_t1287939875 * __this, RegistryKey_t1120630941 * ___rkey, String_t* ___value, bool ___shouldThrowWhenKeyMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::GenerateException(System.Int32)
extern "C"  void Win32RegistryApi_GenerateException_m2130902570 (Win32RegistryApi_t1287939875 * __this, int32_t ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.Win32RegistryApi::ToString(Microsoft.Win32.RegistryKey)
extern "C"  String_t* Win32RegistryApi_ToString_m3025793105 (Win32RegistryApi_t1287939875 * __this, RegistryKey_t1120630941 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.Win32RegistryApi::CombineName(Microsoft.Win32.RegistryKey,System.String)
extern "C"  String_t* Win32RegistryApi_CombineName_m879987379 (Il2CppObject * __this /* static, unused */, RegistryKey_t1120630941 * ___rkey, String_t* ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
