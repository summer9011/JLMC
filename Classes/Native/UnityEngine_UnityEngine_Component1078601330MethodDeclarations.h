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

// UnityEngine.Component
struct Component_t1078601330;
// UnityEngine.Transform
struct Transform_t224878301;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// System.Type
struct Type_t;
// System.String
struct String_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t4011263879;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t189972673;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_SendMessageOptions1278148394.h"

// System.Void UnityEngine.Component::.ctor()
extern "C"  void Component__ctor_m205306948 (Component_t1078601330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t224878301 * Component_get_transform_m2697483695 (Component_t1078601330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1366199518 * Component_get_gameObject_m3105766835 (Component_t1078601330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C"  Component_t1078601330 * Component_GetComponent_m4225719715 (Component_t1078601330 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C"  void Component_GetComponentFastPath_m2700814707 (Component_t1078601330 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.String)
extern "C"  Component_t1078601330 * Component_GetComponent_m2473832642 (Component_t1078601330 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t1078601330 * Component_GetComponentInChildren_m3925629424 (Component_t1078601330 * __this, Type_t * ___t, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C"  Component_t1078601330 * Component_GetComponentInChildren_m3985003615 (Component_t1078601330 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInChildren(System.Type)
extern "C"  ComponentU5BU5D_t4011263879* Component_GetComponentsInChildren_m843288020 (Component_t1078601330 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInChildren(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t4011263879* Component_GetComponentsInChildren_m908027537 (Component_t1078601330 * __this, Type_t * ___t, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C"  Component_t1078601330 * Component_GetComponentInParent_m2799402500 (Component_t1078601330 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInParent(System.Type)
extern "C"  ComponentU5BU5D_t4011263879* Component_GetComponentsInParent_m4192184629 (Component_t1078601330 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInParent(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t4011263879* Component_GetComponentsInParent_m1920178904 (Component_t1078601330 * __this, Type_t * ___t, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponents(System.Type)
extern "C"  ComponentU5BU5D_t4011263879* Component_GetComponents_m637589504 (Component_t1078601330 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C"  void Component_GetComponentsForListInternal_m4241828391 (Component_t1078601330 * __this, Type_t * ___searchType, Il2CppObject * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  void Component_GetComponents_m3712441745 (Component_t1078601330 * __this, Type_t * ___type, List_1_t189972673 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m357168014 (Component_t1078601330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::set_tag(System.String)
extern "C"  void Component_set_tag_m4292293503 (Component_t1078601330 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
extern "C"  bool Component_CompareTag_m3443292365 (Component_t1078601330 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessageUpwards_m2584088787 (Component_t1078601330 * __this, String_t* ___methodName, Il2CppObject * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String,System.Object)
extern "C"  void Component_SendMessageUpwards_m325086847 (Component_t1078601330 * __this, String_t* ___methodName, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String)
extern "C"  void Component_SendMessageUpwards_m2041012277 (Component_t1078601330 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessageUpwards_m19741277 (Component_t1078601330 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessage_m2241432133 (Component_t1078601330 * __this, String_t* ___methodName, Il2CppObject * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object)
extern "C"  void Component_SendMessage_m913946877 (Component_t1078601330 * __this, String_t* ___methodName, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String)
extern "C"  void Component_SendMessage_m3615678587 (Component_t1078601330 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessage_m4199581575 (Component_t1078601330 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void Component_BroadcastMessage_m2230184532 (Component_t1078601330 * __this, String_t* ___methodName, Il2CppObject * ___parameter, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object)
extern "C"  void Component_BroadcastMessage_m1308086896 (Component_t1078601330 * __this, String_t* ___methodName, Il2CppObject * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String)
extern "C"  void Component_BroadcastMessage_m1706240890 (Component_t1078601330 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_BroadcastMessage_m444672650 (Component_t1078601330 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
