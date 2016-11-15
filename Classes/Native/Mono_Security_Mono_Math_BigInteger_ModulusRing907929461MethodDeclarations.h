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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t907929462;
// Mono.Math.BigInteger
struct BigInteger_t3893714978;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Math_BigInteger3893714977.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C"  void ModulusRing__ctor_m630117946 (ModulusRing_t907929462 * __this, BigInteger_t3893714978 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C"  void ModulusRing_BarrettReduction_m2802101099 (ModulusRing_t907929462 * __this, BigInteger_t3893714978 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3893714978 * ModulusRing_Multiply_m3113924743 (ModulusRing_t907929462 * __this, BigInteger_t3893714978 * ___a, BigInteger_t3893714978 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3893714978 * ModulusRing_Difference_m662924064 (ModulusRing_t907929462 * __this, BigInteger_t3893714978 * ___a, BigInteger_t3893714978 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3893714978 * ModulusRing_Pow_m2489265435 (ModulusRing_t907929462 * __this, BigInteger_t3893714978 * ___a, BigInteger_t3893714978 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C"  BigInteger_t3893714978 * ModulusRing_Pow_m661630322 (ModulusRing_t907929462 * __this, uint32_t ___b, BigInteger_t3893714978 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
