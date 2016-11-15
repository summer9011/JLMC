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
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t181406793;
// System.Boolean[]
struct BooleanU5BU5D_t2235910900;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Char[]
struct CharU5BU5D_t1685951112;
// System.Int16[]
struct Int16U5BU5D_t1488321186;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// System.Int64[]
struct Int64U5BU5D_t1300640033;
// System.Single[]
struct SingleU5BU5D_t662464656;
// System.Double[]
struct DoubleU5BU5D_t2839599125;
// System.IntPtr[]
struct IntPtrU5BU5D_t3868964149;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_String1967731336.h"

// System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
extern "C"  IntPtr_t AndroidJNI_FindClass_m2428140163 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_FromReflectedMethod_m2626434215 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedField(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_FromReflectedField_m1474576612 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
extern "C"  IntPtr_t AndroidJNI_ExceptionOccurred_m2435707430 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::ExceptionClear()
extern "C"  void AndroidJNI_ExceptionClear_m531918105 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_NewGlobalRef_m1427864962 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)
extern "C"  void AndroidJNI_DeleteGlobalRef_m817961148 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
extern "C"  void AndroidJNI_DeleteLocalRef_m2567844534 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_GetObjectClass_m1135692933 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetMethodID_m2377106222 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___name, String_t* ___sig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetFieldID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetFieldID_m3512649953 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___name, String_t* ___sig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetStaticMethodID_m1993743500 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___name, String_t* ___sig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticFieldID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetStaticFieldID_m3820138545 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___name, String_t* ___sig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewStringUTF(System.String)
extern "C"  IntPtr_t AndroidJNI_NewStringUTF_m523166192 (Il2CppObject * __this /* static, unused */, String_t* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::GetStringUTFChars(System.IntPtr)
extern "C"  String_t* AndroidJNI_GetStringUTFChars_m2257291075 (Il2CppObject * __this /* static, unused */, IntPtr_t ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  String_t* AndroidJNI_CallStringMethod_m1072256578 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNI_CallObjectMethod_m2800924552 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int32_t AndroidJNI_CallIntMethod_m3843787691 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  bool AndroidJNI_CallBooleanMethod_m3106305426 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int16_t AndroidJNI_CallShortMethod_m927793578 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::CallByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint8_t AndroidJNI_CallByteMethod_m1689833208 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint16_t AndroidJNI_CallCharMethod_m910196688 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  float AndroidJNI_CallFloatMethod_m2655808370 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  double AndroidJNI_CallDoubleMethod_m401104194 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int64_t AndroidJNI_CallLongMethod_m3631373833 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  void AndroidJNI_CallVoidMethod_m1345390760 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  String_t* AndroidJNI_CallStaticStringMethod_m1354697768 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNI_CallStaticObjectMethod_m998729826 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int32_t AndroidJNI_CallStaticIntMethod_m971393887 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  bool AndroidJNI_CallStaticBooleanMethod_m2711632856 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int16_t AndroidJNI_CallStaticShortMethod_m2890326648 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::CallStaticByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint8_t AndroidJNI_CallStaticByteMethod_m197863794 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint16_t AndroidJNI_CallStaticCharMethod_m1124664058 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  float AndroidJNI_CallStaticFloatMethod_m3885388984 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  double AndroidJNI_CallStaticDoubleMethod_m38542440 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int64_t AndroidJNI_CallStaticLongMethod_m881240849 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t181406793* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::GetStaticStringField(System.IntPtr,System.IntPtr)
extern "C"  String_t* AndroidJNI_GetStaticStringField_m4191856435 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticObjectField(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_GetStaticObjectField_m2123670935 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::GetStaticBooleanField(System.IntPtr,System.IntPtr)
extern "C"  bool AndroidJNI_GetStaticBooleanField_m3813914791 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::GetStaticByteField(System.IntPtr,System.IntPtr)
extern "C"  uint8_t AndroidJNI_GetStaticByteField_m706077459 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::GetStaticCharField(System.IntPtr,System.IntPtr)
extern "C"  uint16_t AndroidJNI_GetStaticCharField_m649933907 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::GetStaticShortField(System.IntPtr,System.IntPtr)
extern "C"  int16_t AndroidJNI_GetStaticShortField_m922426589 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::GetStaticIntField(System.IntPtr,System.IntPtr)
extern "C"  int32_t AndroidJNI_GetStaticIntField_m2786411036 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::GetStaticLongField(System.IntPtr,System.IntPtr)
extern "C"  int64_t AndroidJNI_GetStaticLongField_m1743478504 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::GetStaticFloatField(System.IntPtr,System.IntPtr)
extern "C"  float AndroidJNI_GetStaticFloatField_m1526011597 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::GetStaticDoubleField(System.IntPtr,System.IntPtr)
extern "C"  double AndroidJNI_GetStaticDoubleField_m520518899 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])
extern "C"  IntPtr_t AndroidJNI_ToBooleanArray_m60930445 (Il2CppObject * __this /* static, unused */, BooleanU5BU5D_t2235910900* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToByteArray(System.Byte[])
extern "C"  IntPtr_t AndroidJNI_ToByteArray_m4000632781 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToCharArray(System.Char[])
extern "C"  IntPtr_t AndroidJNI_ToCharArray_m440734561 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1685951112* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToShortArray(System.Int16[])
extern "C"  IntPtr_t AndroidJNI_ToShortArray_m3386306387 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t1488321186* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToIntArray(System.Int32[])
extern "C"  IntPtr_t AndroidJNI_ToIntArray_m769330108 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3315407976* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToLongArray(System.Int64[])
extern "C"  IntPtr_t AndroidJNI_ToLongArray_m3648376436 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t1300640033* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToFloatArray(System.Single[])
extern "C"  IntPtr_t AndroidJNI_ToFloatArray_m484610271 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t662464656* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])
extern "C"  IntPtr_t AndroidJNI_ToDoubleArray_m3960066029 (Il2CppObject * __this /* static, unused */, DoubleU5BU5D_t2839599125* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_ToObjectArray_m630607815 (Il2CppObject * __this /* static, unused */, IntPtrU5BU5D_t3868964149* ___array, IntPtr_t ___arrayClass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)
extern "C"  BooleanU5BU5D_t2235910900* AndroidJNI_FromBooleanArray_m404759016 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)
extern "C"  ByteU5BU5D_t3835026402* AndroidJNI_FromByteArray_m1228802202 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)
extern "C"  CharU5BU5D_t1685951112* AndroidJNI_FromCharArray_m995621742 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16[] UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)
extern "C"  Int16U5BU5D_t1488321186* AndroidJNI_FromShortArray_m3031115604 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)
extern "C"  Int32U5BU5D_t3315407976* AndroidJNI_FromIntArray_m3492579093 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64[] UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)
extern "C"  Int64U5BU5D_t1300640033* AndroidJNI_FromLongArray_m416568223 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)
extern "C"  SingleU5BU5D_t662464656* AndroidJNI_FromFloatArray_m99673808 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)
extern "C"  DoubleU5BU5D_t2839599125* AndroidJNI_FromDoubleArray_m2858147712 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)
extern "C"  int32_t AndroidJNI_GetArrayLength_m916064724 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_NewObjectArray_m2425614375 (Il2CppObject * __this /* static, unused */, int32_t ___size, IntPtr_t ___clazz, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
extern "C"  IntPtr_t AndroidJNI_GetObjectArrayElement_m528873821 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void AndroidJNI_SetObjectArrayElement_m3906365370 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array, int32_t ___index, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
