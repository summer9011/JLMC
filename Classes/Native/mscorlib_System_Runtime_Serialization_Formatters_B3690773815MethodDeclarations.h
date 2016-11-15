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

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct ObjectReader_t3690773815;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t326215956;
// System.IO.BinaryReader
struct BinaryReader_t2305207519;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2118454908;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct TypeMetadata_t3521572035;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// System.Array
struct Il2CppArray;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Bi326215956.h"
#include "mscorlib_System_IO_BinaryReader2305207519.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B3097540186.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B3521572035.h"
#include "mscorlib_System_Reflection_MemberInfo1952312350.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B3714971315.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::.ctor(System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  void ObjectReader__ctor_m1523640331 (ObjectReader_t3690773815 * __this, BinaryFormatter_t326215956 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
extern "C"  void ObjectReader_ReadObjectGraph_m1994105549 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, bool ___readHeaders, Il2CppObject ** ___result, HeaderU5BU5D_t2118454908** ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
extern "C"  void ObjectReader_ReadObjectGraph_m4290798209 (ObjectReader_t3690773815 * __this, uint8_t ___elem, BinaryReader_t2305207519 * ___reader, bool ___readHeaders, Il2CppObject ** ___result, HeaderU5BU5D_t2118454908** ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader)
extern "C"  bool ObjectReader_ReadNextObject_m557383702 (ObjectReader_t3690773815 * __this, uint8_t ___element, BinaryReader_t2305207519 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.IO.BinaryReader)
extern "C"  bool ObjectReader_ReadNextObject_m4289310022 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::get_CurrentObject()
extern "C"  Il2CppObject * ObjectReader_get_CurrentObject_m1756329993 (ObjectReader_t3690773815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C"  void ObjectReader_ReadObject_m397855326 (ObjectReader_t3690773815 * __this, uint8_t ___element, BinaryReader_t2305207519 * ___reader, int64_t* ___objectId, Il2CppObject ** ___value, SerializationInfo_t1029367511 ** ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadAssembly(System.IO.BinaryReader)
extern "C"  void ObjectReader_ReadAssembly_m869834280 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectInstance(System.IO.BinaryReader,System.Boolean,System.Boolean,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C"  void ObjectReader_ReadObjectInstance_m571922473 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, int64_t* ___objectId, Il2CppObject ** ___value, SerializationInfo_t1029367511 ** ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadRefTypeObjectInstance(System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C"  void ObjectReader_ReadRefTypeObjectInstance_m93072950 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, int64_t* ___objectId, Il2CppObject ** ___value, SerializationInfo_t1029367511 ** ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectContent(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata,System.Int64,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C"  void ObjectReader_ReadObjectContent_m3949770110 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, TypeMetadata_t3521572035 * ___metadata, int64_t ___objectId, Il2CppObject ** ___objectInstance, SerializationInfo_t1029367511 ** ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RegisterObject(System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern "C"  void ObjectReader_RegisterObject_m3488493505 (ObjectReader_t3690773815 * __this, int64_t ___objectId, Il2CppObject * ___objectInstance, SerializationInfo_t1029367511 * ___info, int64_t ___parentObjectId, MemberInfo_t * ___parentObjectMemeber, Int32U5BU5D_t3315407976* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadStringIntance(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadStringIntance_m1612331365 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, int64_t* ___objectId, Il2CppObject ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadGenericArray(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadGenericArray_m788836286 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, int64_t* ___objectId, Il2CppObject ** ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadBoxedPrimitiveTypeValue(System.IO.BinaryReader)
extern "C"  Il2CppObject * ObjectReader_ReadBoxedPrimitiveTypeValue_m3547708985 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfPrimitiveType(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadArrayOfPrimitiveType_m1935116283 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, int64_t* ___objectId, Il2CppObject ** ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::BlockRead(System.IO.BinaryReader,System.Array,System.Int32)
extern "C"  void ObjectReader_BlockRead_m2374879830 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, Il2CppArray * ___array, int32_t ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfObject(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadArrayOfObject_m1364473895 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, int64_t* ___objectId, Il2CppObject ** ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfString(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadArrayOfString_m3752210963 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, int64_t* ___objectId, Il2CppObject ** ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadSimpleArray(System.IO.BinaryReader,System.Type,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadSimpleArray_m2638638620 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, Type_t * ___elementType, int64_t* ___objectId, Il2CppObject ** ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadTypeMetadata(System.IO.BinaryReader,System.Boolean,System.Boolean)
extern "C"  TypeMetadata_t3521572035 * ObjectReader_ReadTypeMetadata_m2043102507 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadValue(System.IO.BinaryReader,System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Type,System.String,System.Reflection.MemberInfo,System.Int32[])
extern "C"  void ObjectReader_ReadValue_m2069333484 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, Il2CppObject * ___parentObject, int64_t ___parentObjectId, SerializationInfo_t1029367511 * ___info, Type_t * ___valueType, String_t* ___fieldName, MemberInfo_t * ___memberInfo, Int32U5BU5D_t3315407976* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::SetObjectValue(System.Object,System.String,System.Reflection.MemberInfo,System.Runtime.Serialization.SerializationInfo,System.Object,System.Type,System.Int32[])
extern "C"  void ObjectReader_SetObjectValue_m3292926810 (ObjectReader_t3690773815 * __this, Il2CppObject * ___parentObject, String_t* ___fieldName, MemberInfo_t * ___memberInfo, SerializationInfo_t1029367511 * ___info, Il2CppObject * ___value, Type_t * ___valueType, Int32U5BU5D_t3315407976* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RecordFixup(System.Int64,System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.String,System.Reflection.MemberInfo,System.Int32[])
extern "C"  void ObjectReader_RecordFixup_m1893348030 (ObjectReader_t3690773815 * __this, int64_t ___parentObjectId, int64_t ___childObjectId, Il2CppObject * ___parentObject, SerializationInfo_t1029367511 * ___info, String_t* ___fieldName, MemberInfo_t * ___memberInfo, Int32U5BU5D_t3315407976* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::GetDeserializationType(System.Int64,System.String)
extern "C"  Type_t * ObjectReader_GetDeserializationType_m1383413950 (ObjectReader_t3690773815 * __this, int64_t ___assemblyId, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadType(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.TypeTag)
extern "C"  Type_t * ObjectReader_ReadType_m997247161 (ObjectReader_t3690773815 * __this, BinaryReader_t2305207519 * ___reader, uint8_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadPrimitiveTypeValue(System.IO.BinaryReader,System.Type)
extern "C"  Il2CppObject * ObjectReader_ReadPrimitiveTypeValue_m3808038676 (Il2CppObject * __this /* static, unused */, BinaryReader_t2305207519 * ___reader, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
