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
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_t703923683;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t3481133454;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t181406793;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_AndroidJavaRunnable703923683.h"
#include "UnityEngine_UnityEngine_AndroidJavaProxy3481133454.h"

// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t AndroidJNIHelper_GetMethodID_m2906806689 (Il2CppObject * __this /* static, unused */, IntPtr_t ___javaClass, String_t* ___methodName, String_t* ___signature, bool ___isStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t AndroidJNIHelper_GetFieldID_m604884558 (Il2CppObject * __this /* static, unused */, IntPtr_t ___javaClass, String_t* ___fieldName, String_t* ___signature, bool ___isStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
extern "C"  IntPtr_t AndroidJNIHelper_CreateJavaRunnable_m3714552486 (Il2CppObject * __this /* static, unused */, AndroidJavaRunnable_t703923683 * ___jrunnable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaProxy(UnityEngine.AndroidJavaProxy)
extern "C"  IntPtr_t AndroidJNIHelper_CreateJavaProxy_m2012937254 (Il2CppObject * __this /* static, unused */, AndroidJavaProxy_t3481133454 * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
extern "C"  jvalueU5BU5D_t181406793* AndroidJNIHelper_CreateJNIArgArray_m3703862686 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3632007997* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
extern "C"  void AndroidJNIHelper_DeleteJNIArgArray_m759003066 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3632007997* ___args, jvalueU5BU5D_t181406793* ___jniArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.Object[],System.Boolean)
extern "C"  IntPtr_t AndroidJNIHelper_GetMethodID_m2221772143 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass, String_t* ___methodName, ObjectU5BU5D_t3632007997* ___args, bool ___isStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
