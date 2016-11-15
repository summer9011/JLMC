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

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray4121084637.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Ray__ctor_m3379034047 (Ray_t4121084637 * __this, Vector3_t465617797  ___origin, Vector3_t465617797  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C"  Vector3_t465617797  Ray_get_origin_m3339262500 (Ray_t4121084637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C"  Vector3_t465617797  Ray_get_direction_m4059191533 (Ray_t4121084637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
extern "C"  Vector3_t465617797  Ray_GetPoint_m1353702366 (Ray_t4121084637 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Ray::ToString()
extern "C"  String_t* Ray_ToString_m2019179238 (Ray_t4121084637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Ray_t4121084637;
struct Ray_t4121084637_marshaled_pinvoke;

extern "C" void Ray_t4121084637_marshal_pinvoke(const Ray_t4121084637& unmarshaled, Ray_t4121084637_marshaled_pinvoke& marshaled);
extern "C" void Ray_t4121084637_marshal_pinvoke_back(const Ray_t4121084637_marshaled_pinvoke& marshaled, Ray_t4121084637& unmarshaled);
extern "C" void Ray_t4121084637_marshal_pinvoke_cleanup(Ray_t4121084637_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Ray_t4121084637;
struct Ray_t4121084637_marshaled_com;

extern "C" void Ray_t4121084637_marshal_com(const Ray_t4121084637& unmarshaled, Ray_t4121084637_marshaled_com& marshaled);
extern "C" void Ray_t4121084637_marshal_com_back(const Ray_t4121084637_marshaled_com& marshaled, Ray_t4121084637& unmarshaled);
extern "C" void Ray_t4121084637_marshal_com_cleanup(Ray_t4121084637_marshaled_com& marshaled);
