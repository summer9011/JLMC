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
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_LayerMask3774646878.h"

// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
extern "C"  int32_t LayerMask_NameToLayer_m1506372053 (Il2CppObject * __this /* static, unused */, String_t* ___layerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C"  int32_t LayerMask_op_Implicit_m2135076047 (Il2CppObject * __this /* static, unused */, LayerMask_t3774646878  ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C"  LayerMask_t3774646878  LayerMask_op_Implicit_m3804506591 (Il2CppObject * __this /* static, unused */, int32_t ___intVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct LayerMask_t3774646878;
struct LayerMask_t3774646878_marshaled_pinvoke;

extern "C" void LayerMask_t3774646878_marshal_pinvoke(const LayerMask_t3774646878& unmarshaled, LayerMask_t3774646878_marshaled_pinvoke& marshaled);
extern "C" void LayerMask_t3774646878_marshal_pinvoke_back(const LayerMask_t3774646878_marshaled_pinvoke& marshaled, LayerMask_t3774646878& unmarshaled);
extern "C" void LayerMask_t3774646878_marshal_pinvoke_cleanup(LayerMask_t3774646878_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct LayerMask_t3774646878;
struct LayerMask_t3774646878_marshaled_com;

extern "C" void LayerMask_t3774646878_marshal_com(const LayerMask_t3774646878& unmarshaled, LayerMask_t3774646878_marshaled_com& marshaled);
extern "C" void LayerMask_t3774646878_marshal_com_back(const LayerMask_t3774646878_marshaled_com& marshaled, LayerMask_t3774646878& unmarshaled);
extern "C" void LayerMask_t3774646878_marshal_com_cleanup(LayerMask_t3774646878_marshaled_com& marshaled);
