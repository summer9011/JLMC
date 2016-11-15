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

// UnityEngine.ScriptableObject
struct ScriptableObject_t496496229;
struct ScriptableObject_t496496229_marshaled_pinvoke;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScriptableObject496496229.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Type77837473.h"

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m2671490429 (ScriptableObject_t496496229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C"  void ScriptableObject_Internal_CreateScriptableObject_m1778903390 (Il2CppObject * __this /* static, unused */, ScriptableObject_t496496229 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C"  ScriptableObject_t496496229 * ScriptableObject_CreateInstance_m3921674852 (Il2CppObject * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C"  ScriptableObject_t496496229 * ScriptableObject_CreateInstance_m3271154163 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C"  ScriptableObject_t496496229 * ScriptableObject_CreateInstanceFromType_m4271875689 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ScriptableObject_t496496229;
struct ScriptableObject_t496496229_marshaled_pinvoke;

extern "C" void ScriptableObject_t496496229_marshal_pinvoke(const ScriptableObject_t496496229& unmarshaled, ScriptableObject_t496496229_marshaled_pinvoke& marshaled);
extern "C" void ScriptableObject_t496496229_marshal_pinvoke_back(const ScriptableObject_t496496229_marshaled_pinvoke& marshaled, ScriptableObject_t496496229& unmarshaled);
extern "C" void ScriptableObject_t496496229_marshal_pinvoke_cleanup(ScriptableObject_t496496229_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ScriptableObject_t496496229;
struct ScriptableObject_t496496229_marshaled_com;

extern "C" void ScriptableObject_t496496229_marshal_com(const ScriptableObject_t496496229& unmarshaled, ScriptableObject_t496496229_marshaled_com& marshaled);
extern "C" void ScriptableObject_t496496229_marshal_com_back(const ScriptableObject_t496496229_marshaled_com& marshaled, ScriptableObject_t496496229& unmarshaled);
extern "C" void ScriptableObject_t496496229_marshal_com_cleanup(ScriptableObject_t496496229_marshaled_com& marshaled);
