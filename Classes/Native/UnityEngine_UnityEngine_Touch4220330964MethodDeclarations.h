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
#include "UnityEngine_UnityEngine_Touch4220330964.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_TouchPhase3373375299.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C"  int32_t Touch_get_fingerId_m4109475843 (Touch_t4220330964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C"  Vector2_t465617798  Touch_get_position_m2079703643 (Touch_t4220330964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Touch::get_tapCount()
extern "C"  int32_t Touch_get_tapCount_m4090741061 (Touch_t4220330964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C"  int32_t Touch_get_phase_m196706494 (Touch_t4220330964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Touch_t4220330964;
struct Touch_t4220330964_marshaled_pinvoke;

extern "C" void Touch_t4220330964_marshal_pinvoke(const Touch_t4220330964& unmarshaled, Touch_t4220330964_marshaled_pinvoke& marshaled);
extern "C" void Touch_t4220330964_marshal_pinvoke_back(const Touch_t4220330964_marshaled_pinvoke& marshaled, Touch_t4220330964& unmarshaled);
extern "C" void Touch_t4220330964_marshal_pinvoke_cleanup(Touch_t4220330964_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Touch_t4220330964;
struct Touch_t4220330964_marshaled_com;

extern "C" void Touch_t4220330964_marshal_com(const Touch_t4220330964& unmarshaled, Touch_t4220330964_marshaled_com& marshaled);
extern "C" void Touch_t4220330964_marshal_com_back(const Touch_t4220330964_marshaled_com& marshaled, Touch_t4220330964& unmarshaled);
extern "C" void Touch_t4220330964_marshal_com_cleanup(Touch_t4220330964_marshaled_com& marshaled);
