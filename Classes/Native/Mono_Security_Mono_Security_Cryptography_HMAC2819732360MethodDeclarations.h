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

// Mono.Security.Cryptography.HMAC
struct HMAC_t2819732360;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Security.Cryptography.HMAC::.ctor(System.String,System.Byte[])
extern "C"  void HMAC__ctor_m2605930831 (HMAC_t2819732360 * __this, String_t* ___hashName, ByteU5BU5D_t3835026402* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::get_Key()
extern "C"  ByteU5BU5D_t3835026402* HMAC_get_Key_m2528863640 (HMAC_t2819732360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::set_Key(System.Byte[])
extern "C"  void HMAC_set_Key_m3745565827 (HMAC_t2819732360 * __this, ByteU5BU5D_t3835026402* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::Initialize()
extern "C"  void HMAC_Initialize_m3052649104 (HMAC_t2819732360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::HashFinal()
extern "C"  ByteU5BU5D_t3835026402* HMAC_HashFinal_m1045191164 (HMAC_t2819732360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void HMAC_HashCore_m3394319142 (HMAC_t2819732360 * __this, ByteU5BU5D_t3835026402* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::initializePad()
extern "C"  void HMAC_initializePad_m3828610671 (HMAC_t2819732360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
