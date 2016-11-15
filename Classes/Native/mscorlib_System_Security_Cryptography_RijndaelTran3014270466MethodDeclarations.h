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

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t3014270466;
// System.Security.Cryptography.Rijndael
struct Rijndael_t2458293998;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.UInt32[]
struct UInt32U5BU5D_t3352404215;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_Rijndael2458293998.h"

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void RijndaelTransform__ctor_m3897933339 (RijndaelTransform_t3014270466 * __this, Rijndael_t2458293998 * ___algo, bool ___encryption, ByteU5BU5D_t3835026402* ___key, ByteU5BU5D_t3835026402* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C"  void RijndaelTransform__cctor_m1393306207 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C"  void RijndaelTransform_Clear_m1652144089 (RijndaelTransform_t3014270466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C"  void RijndaelTransform_ECB_m2353366574 (RijndaelTransform_t3014270466 * __this, ByteU5BU5D_t3835026402* ___input, ByteU5BU5D_t3835026402* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C"  uint32_t RijndaelTransform_SubByte_m1477473905 (RijndaelTransform_t3014270466 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Encrypt128_m1079797044 (RijndaelTransform_t3014270466 * __this, ByteU5BU5D_t3835026402* ___indata, ByteU5BU5D_t3835026402* ___outdata, UInt32U5BU5D_t3352404215* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Encrypt192_m1477779479 (RijndaelTransform_t3014270466 * __this, ByteU5BU5D_t3835026402* ___indata, ByteU5BU5D_t3835026402* ___outdata, UInt32U5BU5D_t3352404215* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Encrypt256_m2967164016 (RijndaelTransform_t3014270466 * __this, ByteU5BU5D_t3835026402* ___indata, ByteU5BU5D_t3835026402* ___outdata, UInt32U5BU5D_t3352404215* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Decrypt128_m1282993908 (RijndaelTransform_t3014270466 * __this, ByteU5BU5D_t3835026402* ___indata, ByteU5BU5D_t3835026402* ___outdata, UInt32U5BU5D_t3352404215* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Decrypt192_m3490314709 (RijndaelTransform_t3014270466 * __this, ByteU5BU5D_t3835026402* ___indata, ByteU5BU5D_t3835026402* ___outdata, UInt32U5BU5D_t3352404215* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Decrypt256_m896345836 (RijndaelTransform_t3014270466 * __this, ByteU5BU5D_t3835026402* ___indata, ByteU5BU5D_t3835026402* ___outdata, UInt32U5BU5D_t3352404215* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
