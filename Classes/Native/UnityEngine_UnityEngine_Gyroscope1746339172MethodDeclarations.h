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

// UnityEngine.Gyroscope
struct Gyroscope_t1746339172;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion83606849.h"

// System.Void UnityEngine.Gyroscope::.ctor(System.Int32)
extern "C"  void Gyroscope__ctor_m1250646805 (Gyroscope_t1746339172 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Gyroscope::attitude_Internal(System.Int32)
extern "C"  Quaternion_t83606849  Gyroscope_attitude_Internal_m1839122405 (Il2CppObject * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gyroscope::INTERNAL_CALL_attitude_Internal(System.Int32,UnityEngine.Quaternion&)
extern "C"  void Gyroscope_INTERNAL_CALL_attitude_Internal_m2763981553 (Il2CppObject * __this /* static, unused */, int32_t ___idx, Quaternion_t83606849 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gyroscope::setEnabled_Internal(System.Int32,System.Boolean)
extern "C"  void Gyroscope_setEnabled_Internal_m881641045 (Il2CppObject * __this /* static, unused */, int32_t ___idx, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Gyroscope::get_attitude()
extern "C"  Quaternion_t83606849  Gyroscope_get_attitude_m3665233473 (Gyroscope_t1746339172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gyroscope::set_enabled(System.Boolean)
extern "C"  void Gyroscope_set_enabled_m487023127 (Gyroscope_t1746339172 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
