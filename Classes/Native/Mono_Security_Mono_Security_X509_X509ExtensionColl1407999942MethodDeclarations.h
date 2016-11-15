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

// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1407999943;
// Mono.Security.ASN1
struct ASN1_t2605720235;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.String
struct String_t;
// Mono.Security.X509.X509Extension
struct X509Extension_t1746250421;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN12605720234.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C"  void X509ExtensionCollection__ctor_m1119345384 (X509ExtensionCollection_t1407999943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern "C"  void X509ExtensionCollection__ctor_m2672322588 (X509ExtensionCollection_t1407999943 * __this, ASN1_t2605720235 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m2600902401 (X509ExtensionCollection_t1407999943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
extern "C"  int32_t X509ExtensionCollection_IndexOf_m3972100651 (X509ExtensionCollection_t1407999943 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
extern "C"  X509Extension_t1746250421 * X509ExtensionCollection_get_Item_m1497604741 (X509ExtensionCollection_t1407999943 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
