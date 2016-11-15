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
struct EncryptedData_t704411809;
// Mono.Security.ASN1
struct ASN1_t2605720235;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t837233982;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN12605720234.h"

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C"  void EncryptedData__ctor_m3834592644 (EncryptedData_t704411809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C"  void EncryptedData__ctor_m3866918584 (EncryptedData_t704411809 * __this, ASN1_t2605720235 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C"  ContentInfo_t837233982 * EncryptedData_get_EncryptionAlgorithm_m3585820551 (EncryptedData_t704411809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C"  ByteU5BU5D_t3835026402* EncryptedData_get_EncryptedContent_m3832882582 (EncryptedData_t704411809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
