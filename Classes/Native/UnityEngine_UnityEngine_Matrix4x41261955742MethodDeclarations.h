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
#include "UnityEngine_UnityEngine_Matrix4x41261955742.h"
#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C"  float Matrix4x4_get_Item_m312280350 (Matrix4x4_t1261955742 * __this, int32_t ___row, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C"  float Matrix4x4_get_Item_m3317262185 (Matrix4x4_t1261955742 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C"  int32_t Matrix4x4_GetHashCode_m3649708037 (Matrix4x4_t1261955742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern "C"  bool Matrix4x4_Equals_m1321236479 (Matrix4x4_t1261955742 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C"  Vector4_t465617796  Matrix4x4_GetColumn_m1367096730 (Matrix4x4_t1261955742 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C"  Vector3_t465617797  Matrix4x4_MultiplyPoint3x4_m1007952212 (Matrix4x4_t1261955742 * __this, Vector3_t465617797  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern "C"  Vector3_t465617797  Matrix4x4_MultiplyVector_m3396751884 (Matrix4x4_t1261955742 * __this, Vector3_t465617797  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C"  Matrix4x4_t1261955742  Matrix4x4_get_identity_m3039560904 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
extern "C"  String_t* Matrix4x4_ToString_m1982554457 (Matrix4x4_t1261955742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  Matrix4x4_t1261955742  Matrix4x4_op_Multiply_m2352863493 (Il2CppObject * __this /* static, unused */, Matrix4x4_t1261955742  ___lhs, Matrix4x4_t1261955742  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Matrix4x4_t1261955742;
struct Matrix4x4_t1261955742_marshaled_pinvoke;

extern "C" void Matrix4x4_t1261955742_marshal_pinvoke(const Matrix4x4_t1261955742& unmarshaled, Matrix4x4_t1261955742_marshaled_pinvoke& marshaled);
extern "C" void Matrix4x4_t1261955742_marshal_pinvoke_back(const Matrix4x4_t1261955742_marshaled_pinvoke& marshaled, Matrix4x4_t1261955742& unmarshaled);
extern "C" void Matrix4x4_t1261955742_marshal_pinvoke_cleanup(Matrix4x4_t1261955742_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Matrix4x4_t1261955742;
struct Matrix4x4_t1261955742_marshaled_com;

extern "C" void Matrix4x4_t1261955742_marshal_com(const Matrix4x4_t1261955742& unmarshaled, Matrix4x4_t1261955742_marshaled_com& marshaled);
extern "C" void Matrix4x4_t1261955742_marshal_com_back(const Matrix4x4_t1261955742_marshaled_com& marshaled, Matrix4x4_t1261955742& unmarshaled);
extern "C" void Matrix4x4_t1261955742_marshal_com_cleanup(Matrix4x4_t1261955742_marshaled_com& marshaled);
