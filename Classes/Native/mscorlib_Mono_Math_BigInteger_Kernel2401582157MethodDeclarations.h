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

// Mono.Math.BigInteger
struct BigInteger_t3893714977;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t2371362364;
// System.UInt32[]
struct UInt32U5BU5D_t3352404215;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Math_BigInteger3893714977.h"
#include "mscorlib_Mono_Math_BigInteger_Sign356788869.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3893714977 * Kernel_AddSameSign_m2332657679 (Il2CppObject * __this /* static, unused */, BigInteger_t3893714977 * ___bi1, BigInteger_t3893714977 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3893714977 * Kernel_Subtract_m8942239 (Il2CppObject * __this /* static, unused */, BigInteger_t3893714977 * ___big, BigInteger_t3893714977 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  void Kernel_MinusEq_m701500549 (Il2CppObject * __this /* static, unused */, BigInteger_t3893714977 * ___big, BigInteger_t3893714977 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  void Kernel_PlusEq_m3677743255 (Il2CppObject * __this /* static, unused */, BigInteger_t3893714977 * ___bi1, BigInteger_t3893714977 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  int32_t Kernel_Compare_m25797552 (Il2CppObject * __this /* static, unused */, BigInteger_t3893714977 * ___bi1, BigInteger_t3893714977 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t Kernel_SingleByteDivideInPlace_m1760318278 (Il2CppObject * __this /* static, unused */, BigInteger_t3893714977 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t Kernel_DwordMod_m3592761111 (Il2CppObject * __this /* static, unused */, BigInteger_t3893714977 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C"  BigIntegerU5BU5D_t2371362364* Kernel_DwordDivMod_m4066997639 (Il2CppObject * __this /* static, unused */, BigInteger_t3893714977 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigIntegerU5BU5D_t2371362364* Kernel_multiByteDivide_m735279869 (Il2CppObject * __this /* static, unused */, BigInteger_t3893714977 * ___bi1, BigInteger_t3893714977 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t3893714977 * Kernel_LeftShift_m1507484288 (Il2CppObject * __this /* static, unused */, BigInteger_t3893714977 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t3893714977 * Kernel_RightShift_m1748207947 (Il2CppObject * __this /* static, unused */, BigInteger_t3893714977 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
extern "C"  BigInteger_t3893714977 * Kernel_MultiplyByDword_m155008287 (Il2CppObject * __this /* static, unused */, BigInteger_t3893714977 * ___n, uint32_t ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C"  void Kernel_Multiply_m3585610531 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t3352404215* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t3352404215* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t3352404215* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C"  void Kernel_MultiplyMod2p32pmod_m4094851508 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t3352404215* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t3352404215* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t3352404215* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t Kernel_modInverse_m39351021 (Il2CppObject * __this /* static, unused */, BigInteger_t3893714977 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3893714977 * Kernel_modInverse_m2619695041 (Il2CppObject * __this /* static, unused */, BigInteger_t3893714977 * ___bi, BigInteger_t3893714977 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
