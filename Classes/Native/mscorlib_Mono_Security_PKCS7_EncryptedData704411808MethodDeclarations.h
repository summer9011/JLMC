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

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t704411808;
// Mono.Security.ASN1
struct ASN1_t2605720234;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t837233981;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_ASN12605720234.h"

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C"  void EncryptedData__ctor_m3128538466 (EncryptedData_t704411808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C"  void EncryptedData__ctor_m3860500558 (EncryptedData_t704411808 * __this, ASN1_t2605720234 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C"  ContentInfo_t837233981 * EncryptedData_get_EncryptionAlgorithm_m1301274243 (EncryptedData_t704411808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C"  ByteU5BU5D_t3835026402* EncryptedData_get_EncryptedContent_m2732115576 (EncryptedData_t704411808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
