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

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t3063881479;
// Mono.Security.ASN1
struct ASN1_t2605720235;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1407999943;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN12605720234.h"
#include "mscorlib_System_DateTime2933746480.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C"  void X509CrlEntry__ctor_m3156488776 (X509CrlEntry_t3063881479 * __this, ASN1_t2605720235 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C"  ByteU5BU5D_t3835026402* X509CrlEntry_get_SerialNumber_m3603416806 (X509CrlEntry_t3063881479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C"  DateTime_t2933746480  X509CrlEntry_get_RevocationDate_m828452960 (X509CrlEntry_t3063881479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C"  X509ExtensionCollection_t1407999943 * X509CrlEntry_get_Extensions_m1330698752 (X509CrlEntry_t3063881479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
