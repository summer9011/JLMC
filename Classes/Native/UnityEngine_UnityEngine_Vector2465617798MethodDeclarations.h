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
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3067419446 (Vector2_t465617798 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t465617798  Vector2_Lerp_m1511850087 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___a, Vector2_t465617798  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t465617798  Vector2_Scale_m3228063809 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___a, Vector2_t465617798  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector2::ToString()
extern "C"  String_t* Vector2_ToString_m775491729 (Vector2_t465617798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C"  int32_t Vector2_GetHashCode_m2353429373 (Vector2_t465617798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C"  bool Vector2_Equals_m1405920279 (Vector2_t465617798 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float Vector2_Dot_m778921987 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___lhs, Vector2_t465617798  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C"  float Vector2_get_magnitude_m33802565 (Vector2_t465617798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C"  float Vector2_get_sqrMagnitude_m1226294581 (Vector2_t465617798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C"  float Vector2_SqrMagnitude_m1793890068 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t465617798  Vector2_get_zero_m3966848876 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern "C"  Vector2_t465617798  Vector2_get_one_m3174311904 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t465617798  Vector2_op_Addition_m1389598521 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___a, Vector2_t465617798  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t465617798  Vector2_op_Subtraction_m1984215297 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___a, Vector2_t465617798  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
extern "C"  Vector2_t465617798  Vector2_op_UnaryNegation_m2194368113 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t465617798  Vector2_op_Multiply_m4236139442 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
extern "C"  Vector2_t465617798  Vector2_op_Multiply_m3393065202 (Il2CppObject * __this /* static, unused */, float ___d, Vector2_t465617798  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool Vector2_op_Equality_m4168854394 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___lhs, Vector2_t465617798  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool Vector2_op_Inequality_m4283136193 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___lhs, Vector2_t465617798  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t465617798  Vector2_op_Implicit_m1064335535 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t465617797  Vector2_op_Implicit_m176791411 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Vector2_t465617798;
struct Vector2_t465617798_marshaled_pinvoke;

extern "C" void Vector2_t465617798_marshal_pinvoke(const Vector2_t465617798& unmarshaled, Vector2_t465617798_marshaled_pinvoke& marshaled);
extern "C" void Vector2_t465617798_marshal_pinvoke_back(const Vector2_t465617798_marshaled_pinvoke& marshaled, Vector2_t465617798& unmarshaled);
extern "C" void Vector2_t465617798_marshal_pinvoke_cleanup(Vector2_t465617798_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Vector2_t465617798;
struct Vector2_t465617798_marshaled_com;

extern "C" void Vector2_t465617798_marshal_com(const Vector2_t465617798& unmarshaled, Vector2_t465617798_marshaled_com& marshaled);
extern "C" void Vector2_t465617798_marshal_com_back(const Vector2_t465617798_marshaled_com& marshaled, Vector2_t465617798& unmarshaled);
extern "C" void Vector2_t465617798_marshal_com_cleanup(Vector2_t465617798_marshaled_com& marshaled);
