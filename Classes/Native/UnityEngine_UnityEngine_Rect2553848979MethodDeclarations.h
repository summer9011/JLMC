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
#include "UnityEngine_UnityEngine_Rect2553848979.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "mscorlib_System_Object707969140.h"

// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m1220545469 (Rect_t2553848979 * __this, float ___x, float ___y, float ___width, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_x()
extern "C"  float Rect_get_x_m1393582490 (Rect_t2553848979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C"  void Rect_set_x_m3783700513 (Rect_t2553848979 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_y()
extern "C"  float Rect_get_y_m1393582395 (Rect_t2553848979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C"  void Rect_set_y_m4294916608 (Rect_t2553848979 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C"  float Rect_get_width_m1138015702 (Rect_t2553848979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C"  void Rect_set_width_m1921257731 (Rect_t2553848979 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C"  float Rect_get_height_m3128694305 (Rect_t2553848979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C"  void Rect_set_height_m2019122814 (Rect_t2553848979 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMin()
extern "C"  float Rect_get_xMin_m1161102488 (Rect_t2553848979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_xMin(System.Single)
extern "C"  void Rect_set_xMin_m4214255623 (Rect_t2553848979 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMin()
extern "C"  float Rect_get_yMin_m1161103577 (Rect_t2553848979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_yMin(System.Single)
extern "C"  void Rect_set_yMin_m734445288 (Rect_t2553848979 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMax()
extern "C"  float Rect_get_xMax_m2915145014 (Rect_t2553848979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_xMax(System.Single)
extern "C"  void Rect_set_xMax_m3501625033 (Rect_t2553848979 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMax()
extern "C"  float Rect_get_yMax_m2915146103 (Rect_t2553848979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_yMax(System.Single)
extern "C"  void Rect_set_yMax_m21814698 (Rect_t2553848979 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Rect::ToString()
extern "C"  String_t* Rect_ToString_m2728794442 (Rect_t2553848979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
extern "C"  bool Rect_Contains_m1334685290 (Rect_t2553848979 * __this, Vector2_t465617798  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
extern "C"  bool Rect_Contains_m1334685291 (Rect_t2553848979 * __this, Vector3_t465617797  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Rect::GetHashCode()
extern "C"  int32_t Rect_GetHashCode_m559954498 (Rect_t2553848979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Equals(System.Object)
extern "C"  bool Rect_Equals_m3806390726 (Rect_t2553848979 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
extern "C"  bool Rect_op_Inequality_m3595915756 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___lhs, Rect_t2553848979  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Rect_t2553848979;
struct Rect_t2553848979_marshaled_pinvoke;

extern "C" void Rect_t2553848979_marshal_pinvoke(const Rect_t2553848979& unmarshaled, Rect_t2553848979_marshaled_pinvoke& marshaled);
extern "C" void Rect_t2553848979_marshal_pinvoke_back(const Rect_t2553848979_marshaled_pinvoke& marshaled, Rect_t2553848979& unmarshaled);
extern "C" void Rect_t2553848979_marshal_pinvoke_cleanup(Rect_t2553848979_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Rect_t2553848979;
struct Rect_t2553848979_marshaled_com;

extern "C" void Rect_t2553848979_marshal_com(const Rect_t2553848979& unmarshaled, Rect_t2553848979_marshaled_com& marshaled);
extern "C" void Rect_t2553848979_marshal_com_back(const Rect_t2553848979_marshaled_com& marshaled, Rect_t2553848979& unmarshaled);
extern "C" void Rect_t2553848979_marshal_com_cleanup(Rect_t2553848979_marshaled_com& marshaled);
