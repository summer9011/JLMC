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
#include "UnityEngine_UnityEngine_Color322763012723.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"

// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C"  void Color32__ctor_m1932627809 (Color32_t2763012723 * __this, uint8_t ___r, uint8_t ___g, uint8_t ___b, uint8_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Color32::ToString()
extern "C"  String_t* Color32_ToString_m1408142756 (Color32_t2763012723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
extern "C"  Color32_t2763012723  Color32_op_Implicit_m624191464 (Il2CppObject * __this /* static, unused */, Color_t2250949164  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
extern "C"  Color_t2250949164  Color32_op_Implicit_m889975790 (Il2CppObject * __this /* static, unused */, Color32_t2763012723  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Color32_t2763012723;
struct Color32_t2763012723_marshaled_pinvoke;

extern "C" void Color32_t2763012723_marshal_pinvoke(const Color32_t2763012723& unmarshaled, Color32_t2763012723_marshaled_pinvoke& marshaled);
extern "C" void Color32_t2763012723_marshal_pinvoke_back(const Color32_t2763012723_marshaled_pinvoke& marshaled, Color32_t2763012723& unmarshaled);
extern "C" void Color32_t2763012723_marshal_pinvoke_cleanup(Color32_t2763012723_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Color32_t2763012723;
struct Color32_t2763012723_marshaled_com;

extern "C" void Color32_t2763012723_marshal_com(const Color32_t2763012723& unmarshaled, Color32_t2763012723_marshaled_com& marshaled);
extern "C" void Color32_t2763012723_marshal_com_back(const Color32_t2763012723_marshaled_com& marshaled, Color32_t2763012723& unmarshaled);
extern "C" void Color32_t2763012723_marshal_com_cleanup(Color32_t2763012723_marshaled_com& marshaled);
