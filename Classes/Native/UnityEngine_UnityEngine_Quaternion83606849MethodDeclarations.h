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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion83606849.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "mscorlib_System_Object707969140.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m3196903881 (Quaternion_t83606849 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t83606849  Quaternion_get_identity_m1561886418 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C"  Quaternion_t83606849  Quaternion_AngleAxis_m2806222563 (Il2CppObject * __this /* static, unused */, float ___angle, Vector3_t465617797  ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_AngleAxis_m3310327005 (Il2CppObject * __this /* static, unused */, float ___angle, Vector3_t465617797 * ___axis, Quaternion_t83606849 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C"  Quaternion_t83606849  Quaternion_LookRotation_m633695927 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___forward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_LookRotation_m3606560944 (Il2CppObject * __this /* static, unused */, Vector3_t465617797 * ___forward, Vector3_t465617797 * ___upwards, Quaternion_t83606849 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t83606849  Quaternion_Slerp_m1992855400 (Il2CppObject * __this /* static, unused */, Quaternion_t83606849  ___a, Quaternion_t83606849  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Slerp_m1926970492 (Il2CppObject * __this /* static, unused */, Quaternion_t83606849 * ___a, Quaternion_t83606849 * ___b, float ___t, Quaternion_t83606849 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C"  Quaternion_t83606849  Quaternion_Inverse_m3931399088 (Il2CppObject * __this /* static, unused */, Quaternion_t83606849  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Inverse_m1043108654 (Il2CppObject * __this /* static, unused */, Quaternion_t83606849 * ___rotation, Quaternion_t83606849 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C"  String_t* Quaternion_ToString_m2638853272 (Quaternion_t83606849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C"  Vector3_t465617797  Quaternion_get_eulerAngles_m3302573991 (Quaternion_t83606849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t83606849  Quaternion_Euler_m2887458175 (Il2CppObject * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C"  Quaternion_t83606849  Quaternion_Euler_m3586339259 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C"  Vector3_t465617797  Quaternion_Internal_ToEulerRad_m2807508879 (Il2CppObject * __this /* static, unused */, Quaternion_t83606849  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m1077217777 (Il2CppObject * __this /* static, unused */, Quaternion_t83606849 * ___rotation, Vector3_t465617797 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C"  Quaternion_t83606849  Quaternion_Internal_FromEulerRad_m1121344272 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m1113788132 (Il2CppObject * __this /* static, unused */, Vector3_t465617797 * ___euler, Quaternion_t83606849 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C"  int32_t Quaternion_GetHashCode_m2270520528 (Quaternion_t83606849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C"  bool Quaternion_Equals_m3730391696 (Quaternion_t83606849 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t83606849  Quaternion_op_Multiply_m2426727589 (Il2CppObject * __this /* static, unused */, Quaternion_t83606849  ___lhs, Quaternion_t83606849  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t465617797  Quaternion_op_Multiply_m1483423721 (Il2CppObject * __this /* static, unused */, Quaternion_t83606849  ___rotation, Vector3_t465617797  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Quaternion_t83606849;
struct Quaternion_t83606849_marshaled_pinvoke;

extern "C" void Quaternion_t83606849_marshal_pinvoke(const Quaternion_t83606849& unmarshaled, Quaternion_t83606849_marshaled_pinvoke& marshaled);
extern "C" void Quaternion_t83606849_marshal_pinvoke_back(const Quaternion_t83606849_marshaled_pinvoke& marshaled, Quaternion_t83606849& unmarshaled);
extern "C" void Quaternion_t83606849_marshal_pinvoke_cleanup(Quaternion_t83606849_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Quaternion_t83606849;
struct Quaternion_t83606849_marshaled_com;

extern "C" void Quaternion_t83606849_marshal_com(const Quaternion_t83606849& unmarshaled, Quaternion_t83606849_marshaled_com& marshaled);
extern "C" void Quaternion_t83606849_marshal_com_back(const Quaternion_t83606849_marshaled_com& marshaled, Quaternion_t83606849& unmarshaled);
extern "C" void Quaternion_t83606849_marshal_com_cleanup(Quaternion_t83606849_marshaled_com& marshaled);
