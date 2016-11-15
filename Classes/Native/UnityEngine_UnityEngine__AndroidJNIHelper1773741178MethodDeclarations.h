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

// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_t703923683;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t181406793;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Array
struct Il2CppArray;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_AndroidJavaRunnable703923683.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"

// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
extern "C"  IntPtr_t _AndroidJNIHelper_CreateJavaRunnable_m135129443 (Il2CppObject * __this /* static, unused */, AndroidJavaRunnable_t703923683 * ___jrunnable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.jvalue[] UnityEngine._AndroidJNIHelper::CreateJNIArgArray(System.Object[])
extern "C"  jvalueU5BU5D_t181406793* _AndroidJNIHelper_CreateJNIArgArray_m774201621 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3632007997* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine._AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
extern "C"  void _AndroidJNIHelper_DeleteJNIArgArray_m962617579 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3632007997* ___args, jvalueU5BU5D_t181406793* ___jniArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::ConvertToJNIArray(System.Array)
extern "C"  IntPtr_t _AndroidJNIHelper_ConvertToJNIArray_m2807999869 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.Object[],System.Boolean)
extern "C"  IntPtr_t _AndroidJNIHelper_GetMethodID_m656615818 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass, String_t* ___methodName, ObjectU5BU5D_t3632007997* ___args, bool ___isStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t _AndroidJNIHelper_GetMethodID_m2996221536 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass, String_t* ___methodName, String_t* ___signature, bool ___isStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t _AndroidJNIHelper_GetFieldID_m3006255247 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass, String_t* ___fieldName, String_t* ___signature, bool ___isStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
extern "C"  String_t* _AndroidJNIHelper_GetSignature_m3764655171 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object[])
extern "C"  String_t* _AndroidJNIHelper_GetSignature_m3048041161 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3632007997* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
