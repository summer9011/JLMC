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
#include "UnityEngine_UnityEngine_Keyframe3291899437.h"

// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
extern "C"  void Keyframe__ctor_m2042404667 (Keyframe_t3291899437 * __this, float ___time, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Keyframe__ctor_m140082843 (Keyframe_t3291899437 * __this, float ___time, float ___value, float ___inTangent, float ___outTangent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Keyframe::get_time()
extern "C"  float Keyframe_get_time_m2226372497 (Keyframe_t3291899437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::set_time(System.Single)
extern "C"  void Keyframe_set_time_m848496062 (Keyframe_t3291899437 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Keyframe::get_value()
extern "C"  float Keyframe_get_value_m979894315 (Keyframe_t3291899437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::set_value(System.Single)
extern "C"  void Keyframe_set_value_m2184486356 (Keyframe_t3291899437 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Keyframe::get_inTangent()
extern "C"  float Keyframe_get_inTangent_m3256944616 (Keyframe_t3291899437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::set_inTangent(System.Single)
extern "C"  void Keyframe_set_inTangent_m4280114775 (Keyframe_t3291899437 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Keyframe::get_outTangent()
extern "C"  float Keyframe_get_outTangent_m1894374085 (Keyframe_t3291899437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::set_outTangent(System.Single)
extern "C"  void Keyframe_set_outTangent_m1054927214 (Keyframe_t3291899437 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Keyframe::get_tangentMode()
extern "C"  int32_t Keyframe_get_tangentMode_m1869200796 (Keyframe_t3291899437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::set_tangentMode(System.Int32)
extern "C"  void Keyframe_set_tangentMode_m1073266123 (Keyframe_t3291899437 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Keyframe_t3291899437;
struct Keyframe_t3291899437_marshaled_pinvoke;

extern "C" void Keyframe_t3291899437_marshal_pinvoke(const Keyframe_t3291899437& unmarshaled, Keyframe_t3291899437_marshaled_pinvoke& marshaled);
extern "C" void Keyframe_t3291899437_marshal_pinvoke_back(const Keyframe_t3291899437_marshaled_pinvoke& marshaled, Keyframe_t3291899437& unmarshaled);
extern "C" void Keyframe_t3291899437_marshal_pinvoke_cleanup(Keyframe_t3291899437_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Keyframe_t3291899437;
struct Keyframe_t3291899437_marshaled_com;

extern "C" void Keyframe_t3291899437_marshal_com(const Keyframe_t3291899437& unmarshaled, Keyframe_t3291899437_marshaled_com& marshaled);
extern "C" void Keyframe_t3291899437_marshal_com_back(const Keyframe_t3291899437_marshaled_com& marshaled, Keyframe_t3291899437& unmarshaled);
extern "C" void Keyframe_t3291899437_marshal_com_cleanup(Keyframe_t3291899437_marshaled_com& marshaled);
