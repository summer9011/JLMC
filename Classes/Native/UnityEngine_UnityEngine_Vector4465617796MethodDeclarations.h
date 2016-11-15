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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"
#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m1222289168 (Vector4_t465617796 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C"  int32_t Vector4_GetHashCode_m1576457715 (Vector4_t465617796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C"  bool Vector4_Equals_m3783731577 (Vector4_t465617796 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector4::ToString()
extern "C"  String_t* Vector4_ToString_m2340321043 (Vector4_t465617796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  float Vector4_Dot_m2285943745 (Il2CppObject * __this /* static, unused */, Vector4_t465617796  ___a, Vector4_t465617796  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C"  float Vector4_SqrMagnitude_m3109980116 (Il2CppObject * __this /* static, unused */, Vector4_t465617796  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C"  Vector4_t465617796  Vector4_get_zero_m3810945132 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  Vector4_t465617796  Vector4_op_Subtraction_m2837269249 (Il2CppObject * __this /* static, unused */, Vector4_t465617796  ___a, Vector4_t465617796  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
extern "C"  Vector4_t465617796  Vector4_op_Multiply_m3204903356 (Il2CppObject * __this /* static, unused */, Vector4_t465617796  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  bool Vector4_op_Equality_m1825453464 (Il2CppObject * __this /* static, unused */, Vector4_t465617796  ___lhs, Vector4_t465617796  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::op_Inequality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  bool Vector4_op_Inequality_m1143290655 (Il2CppObject * __this /* static, unused */, Vector4_t465617796  ___lhs, Vector4_t465617796  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector4_t465617796  Vector4_op_Implicit_m2625404180 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Vector4_t465617796;
struct Vector4_t465617796_marshaled_pinvoke;

extern "C" void Vector4_t465617796_marshal_pinvoke(const Vector4_t465617796& unmarshaled, Vector4_t465617796_marshaled_pinvoke& marshaled);
extern "C" void Vector4_t465617796_marshal_pinvoke_back(const Vector4_t465617796_marshaled_pinvoke& marshaled, Vector4_t465617796& unmarshaled);
extern "C" void Vector4_t465617796_marshal_pinvoke_cleanup(Vector4_t465617796_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Vector4_t465617796;
struct Vector4_t465617796_marshaled_com;

extern "C" void Vector4_t465617796_marshal_com(const Vector4_t465617796& unmarshaled, Vector4_t465617796_marshaled_com& marshaled);
extern "C" void Vector4_t465617796_marshal_com_back(const Vector4_t465617796_marshaled_com& marshaled, Vector4_t465617796& unmarshaled);
extern "C" void Vector4_t465617796_marshal_com_cleanup(Vector4_t465617796_marshaled_com& marshaled);
