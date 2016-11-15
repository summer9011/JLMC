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

// System.Net.IPv6Address
struct IPv6Address_t1257252905;
// System.UInt16[]
struct UInt16U5BU5D_t1076071497;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Net_IPv6Address1257252905.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Net.IPv6Address::.ctor(System.UInt16[])
extern "C"  void IPv6Address__ctor_m206060151 (IPv6Address_t1257252905 * __this, UInt16U5BU5D_t1076071497* ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.ctor(System.UInt16[],System.Int32)
extern "C"  void IPv6Address__ctor_m3329154094 (IPv6Address_t1257252905 * __this, UInt16U5BU5D_t1076071497* ___addr, int32_t ___prefixLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.ctor(System.UInt16[],System.Int32,System.Int32)
extern "C"  void IPv6Address__ctor_m4273527307 (IPv6Address_t1257252905 * __this, UInt16U5BU5D_t1076071497* ___addr, int32_t ___prefixLength, int32_t ___scopeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.cctor()
extern "C"  void IPv6Address__cctor_m2028583576 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPv6Address System.Net.IPv6Address::Parse(System.String)
extern "C"  IPv6Address_t1257252905 * IPv6Address_Parse_m3111902810 (Il2CppObject * __this /* static, unused */, String_t* ___ipString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::Fill(System.UInt16[],System.String)
extern "C"  int32_t IPv6Address_Fill_m1824197512 (Il2CppObject * __this /* static, unused */, UInt16U5BU5D_t1076071497* ___addr, String_t* ___ipString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::TryParse(System.String,System.Int32&)
extern "C"  bool IPv6Address_TryParse_m1453091868 (Il2CppObject * __this /* static, unused */, String_t* ___prefix, int32_t* ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::TryParse(System.String,System.Net.IPv6Address&)
extern "C"  bool IPv6Address_TryParse_m2220524278 (Il2CppObject * __this /* static, unused */, String_t* ___ipString, IPv6Address_t1257252905 ** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16[] System.Net.IPv6Address::get_Address()
extern "C"  UInt16U5BU5D_t1076071497* IPv6Address_get_Address_m3475254999 (IPv6Address_t1257252905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPv6Address::get_ScopeId()
extern "C"  int64_t IPv6Address_get_ScopeId_m2206438412 (IPv6Address_t1257252905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::set_ScopeId(System.Int64)
extern "C"  void IPv6Address_set_ScopeId_m1442934355 (IPv6Address_t1257252905 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsLoopback(System.Net.IPv6Address)
extern "C"  bool IPv6Address_IsLoopback_m3238286795 (Il2CppObject * __this /* static, unused */, IPv6Address_t1257252905 * ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Net.IPv6Address::SwapUShort(System.UInt16)
extern "C"  uint16_t IPv6Address_SwapUShort_m1481806078 (Il2CppObject * __this /* static, unused */, uint16_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::AsIPv4Int()
extern "C"  int32_t IPv6Address_AsIPv4Int_m3565745471 (IPv6Address_t1257252905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsIPv4Compatible()
extern "C"  bool IPv6Address_IsIPv4Compatible_m3718347864 (IPv6Address_t1257252905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsIPv4Mapped()
extern "C"  bool IPv6Address_IsIPv4Mapped_m3798585235 (IPv6Address_t1257252905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPv6Address::ToString()
extern "C"  String_t* IPv6Address_ToString_m1522997104 (IPv6Address_t1257252905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPv6Address::ToString(System.Boolean)
extern "C"  String_t* IPv6Address_ToString_m2464250971 (IPv6Address_t1257252905 * __this, bool ___fullLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::Equals(System.Object)
extern "C"  bool IPv6Address_Equals_m478146392 (IPv6Address_t1257252905 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::GetHashCode()
extern "C"  int32_t IPv6Address_GetHashCode_m647521840 (IPv6Address_t1257252905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t IPv6Address_Hash_m2884881363 (Il2CppObject * __this /* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
