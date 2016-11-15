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

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t4268899586;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3351301915;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
extern "C"  void TripleDESCryptoServiceProvider__ctor_m3834520418 (TripleDESCryptoServiceProvider_t4268899586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
extern "C"  void TripleDESCryptoServiceProvider_GenerateIV_m4160866024 (TripleDESCryptoServiceProvider_t4268899586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
extern "C"  void TripleDESCryptoServiceProvider_GenerateKey_m3619082396 (TripleDESCryptoServiceProvider_t4268899586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * TripleDESCryptoServiceProvider_CreateDecryptor_m6624452 (TripleDESCryptoServiceProvider_t4268899586 * __this, ByteU5BU5D_t3835026402* ___rgbKey, ByteU5BU5D_t3835026402* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * TripleDESCryptoServiceProvider_CreateEncryptor_m3664967596 (TripleDESCryptoServiceProvider_t4268899586 * __this, ByteU5BU5D_t3835026402* ___rgbKey, ByteU5BU5D_t3835026402* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
