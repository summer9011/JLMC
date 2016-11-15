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

// System.Runtime.Serialization.SerializationCallbacks
struct SerializationCallbacks_t609274495;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Runtime.Serialization.SerializationCallbacks::.ctor(System.Type)
extern "C"  void SerializationCallbacks__ctor_m722356782 (SerializationCallbacks_t609274495 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::.cctor()
extern "C"  void SerializationCallbacks__cctor_m838947604 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasDeserializedCallbacks()
extern "C"  bool SerializationCallbacks_get_HasDeserializedCallbacks_m2219415823 (SerializationCallbacks_t609274495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::GetMethodsByAttribute(System.Type,System.Type)
extern "C"  ArrayList_t1468494371 * SerializationCallbacks_GetMethodsByAttribute_m772855716 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::Invoke(System.Collections.ArrayList,System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallbacks_Invoke_m1309910094 (Il2CppObject * __this /* static, unused */, ArrayList_t1468494371 * ___list, Il2CppObject * ___target, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallbacks_RaiseOnDeserializing_m515474780 (SerializationCallbacks_t609274495 * __this, Il2CppObject * ___target, StreamingContext_t3848318932  ___contex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallbacks_RaiseOnDeserialized_m3943016579 (SerializationCallbacks_t609274495 * __this, Il2CppObject * ___target, StreamingContext_t3848318932  ___contex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationCallbacks::GetSerializationCallbacks(System.Type)
extern "C"  SerializationCallbacks_t609274495 * SerializationCallbacks_GetSerializationCallbacks_m1495197648 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
