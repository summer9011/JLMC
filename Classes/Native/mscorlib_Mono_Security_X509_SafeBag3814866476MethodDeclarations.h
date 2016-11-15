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

// Mono.Security.X509.SafeBag
struct SafeBag_t3814866476;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t2605720234;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_Mono_Security_ASN12605720234.h"

// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
extern "C"  void SafeBag__ctor_m3333469582 (SafeBag_t3814866476 * __this, String_t* ___bagOID, ASN1_t2605720234 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.SafeBag::get_BagOID()
extern "C"  String_t* SafeBag_get_BagOID_m2583687334 (SafeBag_t3814866476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
extern "C"  ASN1_t2605720234 * SafeBag_get_ASN1_m3703295313 (SafeBag_t3814866476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
