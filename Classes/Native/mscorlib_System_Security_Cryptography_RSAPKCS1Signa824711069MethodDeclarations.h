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

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct RSAPKCS1SignatureFormatter_t824711069;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2387210216;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl2387210216.h"

// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::.ctor()
extern "C"  void RSAPKCS1SignatureFormatter__ctor_m1305956637 (RSAPKCS1SignatureFormatter_t824711069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1SignatureFormatter::CreateSignature(System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* RSAPKCS1SignatureFormatter_CreateSignature_m1278386766 (RSAPKCS1SignatureFormatter_t824711069 * __this, ByteU5BU5D_t3835026402* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetHashAlgorithm(System.String)
extern "C"  void RSAPKCS1SignatureFormatter_SetHashAlgorithm_m1854952382 (RSAPKCS1SignatureFormatter_t824711069 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1SignatureFormatter_SetKey_m2365816458 (RSAPKCS1SignatureFormatter_t824711069 * __this, AsymmetricAlgorithm_t2387210216 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
