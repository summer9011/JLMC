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
#include "UnityEngine_UnityEngine_Bounds968365060.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "mscorlib_System_Object707969140.h"

// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Bounds__ctor_m1202659404 (Bounds_t968365060 * __this, Vector3_t465617797  ___center, Vector3_t465617797  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Bounds::GetHashCode()
extern "C"  int32_t Bounds_GetHashCode_m4284443179 (Bounds_t968365060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
extern "C"  bool Bounds_Equals_m839506137 (Bounds_t968365060 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C"  Vector3_t465617797  Bounds_get_center_m129401026 (Bounds_t968365060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C"  void Bounds_set_center_m2069004927 (Bounds_t968365060 * __this, Vector3_t465617797  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C"  Vector3_t465617797  Bounds_get_size_m1728027642 (Bounds_t968365060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C"  Vector3_t465617797  Bounds_get_extents_m4077324178 (Bounds_t968365060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C"  void Bounds_set_extents_m2829577033 (Bounds_t968365060 * __this, Vector3_t465617797  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C"  Vector3_t465617797  Bounds_get_min_m2405290441 (Bounds_t968365060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
extern "C"  void Bounds_set_min_m1635405814 (Bounds_t968365060 * __this, Vector3_t465617797  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C"  Vector3_t465617797  Bounds_get_max_m4247050707 (Bounds_t968365060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
extern "C"  void Bounds_set_max_m1194119384 (Bounds_t968365060 * __this, Vector3_t465617797  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Bounds_SetMinMax_m1523110422 (Bounds_t968365060 * __this, Vector3_t465617797  ___min, Vector3_t465617797  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C"  void Bounds_Encapsulate_m3688171368 (Bounds_t968365060 * __this, Vector3_t465617797  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
extern "C"  void Bounds_Encapsulate_m2552492417 (Bounds_t968365060 * __this, Bounds_t968365060  ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString()
extern "C"  String_t* Bounds_ToString_m1966597703 (Bounds_t968365060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Bounds_t968365060;
struct Bounds_t968365060_marshaled_pinvoke;

extern "C" void Bounds_t968365060_marshal_pinvoke(const Bounds_t968365060& unmarshaled, Bounds_t968365060_marshaled_pinvoke& marshaled);
extern "C" void Bounds_t968365060_marshal_pinvoke_back(const Bounds_t968365060_marshaled_pinvoke& marshaled, Bounds_t968365060& unmarshaled);
extern "C" void Bounds_t968365060_marshal_pinvoke_cleanup(Bounds_t968365060_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Bounds_t968365060;
struct Bounds_t968365060_marshaled_com;

extern "C" void Bounds_t968365060_marshal_com(const Bounds_t968365060& unmarshaled, Bounds_t968365060_marshaled_com& marshaled);
extern "C" void Bounds_t968365060_marshal_com_back(const Bounds_t968365060_marshaled_com& marshaled, Bounds_t968365060& unmarshaled);
extern "C" void Bounds_t968365060_marshal_com_cleanup(Bounds_t968365060_marshaled_com& marshaled);
