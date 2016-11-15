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

// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t1331885401;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2387210216;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl2387210216.h"

// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor()
extern "C"  void DSASignatureFormatter__ctor_m489580585 (DSASignatureFormatter_t1331885401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[])
extern "C"  ByteU5BU5D_t3835026402* DSASignatureFormatter_CreateSignature_m3420263762 (DSASignatureFormatter_t1331885401 * __this, ByteU5BU5D_t3835026402* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String)
extern "C"  void DSASignatureFormatter_SetHashAlgorithm_m1251145238 (DSASignatureFormatter_t1331885401 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void DSASignatureFormatter_SetKey_m3396422838 (DSASignatureFormatter_t1331885401 * __this, AsymmetricAlgorithm_t2387210216 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
