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

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t391659747;
// Mono.Math.BigInteger
struct BigInteger_t3893714977;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_Mono_Math_BigInteger3893714977.h"

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C"  void SequentialSearchPrimeGeneratorBase__ctor_m1628348781 (SequentialSearchPrimeGeneratorBase_t391659747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C"  BigInteger_t3893714977 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m909657064 (SequentialSearchPrimeGeneratorBase_t391659747 * __this, int32_t ___bits, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C"  BigInteger_t3893714977 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m545729286 (SequentialSearchPrimeGeneratorBase_t391659747 * __this, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C"  BigInteger_t3893714977 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m2351639568 (SequentialSearchPrimeGeneratorBase_t391659747 * __this, int32_t ___bits, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C"  bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m4074701961 (SequentialSearchPrimeGeneratorBase_t391659747 * __this, BigInteger_t3893714977 * ___bi, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
