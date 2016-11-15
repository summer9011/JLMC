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

// Mono.Security.X509.X509Extension
struct X509Extension_t1746250421;
// Mono.Security.ASN1
struct ASN1_t2605720235;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Text.StringBuilder
struct StringBuilder_t2393427626;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN12605720234.h"
#include "Mono_Security_Mono_Security_X509_X509Extension1746250420.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Text_StringBuilder2393427626.h"

// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C"  void X509Extension__ctor_m2083345012 (X509Extension_t1746250421 * __this, ASN1_t2605720235 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void X509Extension__ctor_m2273534630 (X509Extension_t1746250421 * __this, X509Extension_t1746250421 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Decode()
extern "C"  void X509Extension_Decode_m972859652 (X509Extension_t1746250421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Encode()
extern "C"  void X509Extension_Encode_m1753933824 (X509Extension_t1746250421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::get_Oid()
extern "C"  String_t* X509Extension_get_Oid_m3620527052 (X509Extension_t1746250421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::get_Critical()
extern "C"  bool X509Extension_get_Critical_m1353779422 (X509Extension_t1746250421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_Value()
extern "C"  ASN1_t2605720235 * X509Extension_get_Value_m1361397841 (X509Extension_t1746250421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
extern "C"  bool X509Extension_Equals_m1304125015 (X509Extension_t1746250421 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
extern "C"  int32_t X509Extension_GetHashCode_m3265407565 (X509Extension_t1746250421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C"  void X509Extension_WriteLine_m364247613 (X509Extension_t1746250421 * __this, StringBuilder_t2393427626 * ___sb, int32_t ___n, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::ToString()
extern "C"  String_t* X509Extension_ToString_m408479757 (X509Extension_t1746250421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
