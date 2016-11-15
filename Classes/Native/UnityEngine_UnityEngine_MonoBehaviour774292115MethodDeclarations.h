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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t774292115;
// System.String
struct String_t;
// UnityEngine.Coroutine
struct Coroutine_t3261918659;
struct Coroutine_t3261918659_marshaled_pinvoke;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Coroutine3261918659.h"

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t774292115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll()
extern "C"  void MonoBehaviour_Internal_CancelInvokeAll_m3154116776 (MonoBehaviour_t774292115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::Internal_IsInvokingAll()
extern "C"  bool MonoBehaviour_Internal_IsInvokingAll_m3504849565 (MonoBehaviour_t774292115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C"  void MonoBehaviour_Invoke_m666563676 (MonoBehaviour_t774292115 * __this, String_t* ___methodName, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C"  void MonoBehaviour_InvokeRepeating_m3468262484 (MonoBehaviour_t774292115 * __this, String_t* ___methodName, float ___time, float ___repeatRate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
extern "C"  void MonoBehaviour_CancelInvoke_m744713777 (MonoBehaviour_t774292115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C"  void MonoBehaviour_CancelInvoke_m2508161963 (MonoBehaviour_t774292115 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::IsInvoking(System.String)
extern "C"  bool MonoBehaviour_IsInvoking_m1469271462 (MonoBehaviour_t774292115 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::IsInvoking()
extern "C"  bool MonoBehaviour_IsInvoking_m345622956 (MonoBehaviour_t774292115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3261918659 * MonoBehaviour_StartCoroutine_m2470621050 (MonoBehaviour_t774292115 * __this, Il2CppObject * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C"  Coroutine_t3261918659 * MonoBehaviour_StartCoroutine_Auto_m1744905232 (MonoBehaviour_t774292115 * __this, Il2CppObject * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern "C"  Coroutine_t3261918659 * MonoBehaviour_StartCoroutine_m296997955 (MonoBehaviour_t774292115 * __this, String_t* ___methodName, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern "C"  Coroutine_t3261918659 * MonoBehaviour_StartCoroutine_m1399371129 (MonoBehaviour_t774292115 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
extern "C"  void MonoBehaviour_StopCoroutine_m987450539 (MonoBehaviour_t774292115 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C"  void MonoBehaviour_StopCoroutine_m1170478282 (MonoBehaviour_t774292115 * __this, Il2CppObject * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C"  void MonoBehaviour_StopCoroutine_m1668572632 (MonoBehaviour_t774292115 * __this, Coroutine_t3261918659 * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C"  void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m4046945826 (MonoBehaviour_t774292115 * __this, Il2CppObject * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C"  void MonoBehaviour_StopCoroutine_Auto_m1923670638 (MonoBehaviour_t774292115 * __this, Coroutine_t3261918659 * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
extern "C"  void MonoBehaviour_StopAllCoroutines_m1675795839 (MonoBehaviour_t774292115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m3437620292 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::get_useGUILayout()
extern "C"  bool MonoBehaviour_get_useGUILayout_m524237270 (MonoBehaviour_t774292115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::set_useGUILayout(System.Boolean)
extern "C"  void MonoBehaviour_set_useGUILayout_m2666356651 (MonoBehaviour_t774292115 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
