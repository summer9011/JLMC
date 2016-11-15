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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Plane2472683311.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_Ray4121084637.h"

// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Plane__ctor_m3187718367 (Plane_t2472683311 * __this, Vector3_t465617797  ___inNormal, Vector3_t465617797  ___inPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,System.Single)
extern "C"  void Plane__ctor_m3209791291 (Plane_t2472683311 * __this, Vector3_t465617797  ___inNormal, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Plane__ctor_m2301310280 (Plane_t2472683311 * __this, Vector3_t465617797  ___a, Vector3_t465617797  ___b, Vector3_t465617797  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C"  Vector3_t465617797  Plane_get_normal_m1872443823 (Plane_t2472683311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Plane::get_distance()
extern "C"  float Plane_get_distance_m1834776091 (Plane_t2472683311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern "C"  bool Plane_Raycast_m2870142810 (Plane_t2472683311 * __this, Ray_t4121084637  ___ray, float* ___enter, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Plane_t2472683311;
struct Plane_t2472683311_marshaled_pinvoke;

extern "C" void Plane_t2472683311_marshal_pinvoke(const Plane_t2472683311& unmarshaled, Plane_t2472683311_marshaled_pinvoke& marshaled);
extern "C" void Plane_t2472683311_marshal_pinvoke_back(const Plane_t2472683311_marshaled_pinvoke& marshaled, Plane_t2472683311& unmarshaled);
extern "C" void Plane_t2472683311_marshal_pinvoke_cleanup(Plane_t2472683311_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Plane_t2472683311;
struct Plane_t2472683311_marshaled_com;

extern "C" void Plane_t2472683311_marshal_com(const Plane_t2472683311& unmarshaled, Plane_t2472683311_marshaled_com& marshaled);
extern "C" void Plane_t2472683311_marshal_com_back(const Plane_t2472683311_marshaled_com& marshaled, Plane_t2472683311& unmarshaled);
extern "C" void Plane_t2472683311_marshal_com_cleanup(Plane_t2472683311_marshaled_com& marshaled);
