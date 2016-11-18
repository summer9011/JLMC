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

// LitJson.JSONNode
struct JSONNode_t1109731523;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<LitJson.JSONNode>
struct IEnumerable_1_t478121919;
// LitJson.JSONArray
struct JSONArray_t3951369664;
// LitJson.JSONClass
struct JSONClass_t3507943507;
// System.Object
struct Il2CppObject;
// System.IO.BinaryWriter
struct BinaryWriter_t3096160207;
// System.IO.Stream
struct Stream_t2768948945;
// System.IO.BinaryReader
struct BinaryReader_t2305207519;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "AssemblyU2DCSharp_LitJson_JSONNode1109731523.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IO_BinaryWriter3096160207.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "mscorlib_System_IO_BinaryReader2305207519.h"

// System.Void LitJson.JSONNode::.ctor()
extern "C"  void JSONNode__ctor_m3166298968 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONNode::Add(System.String,LitJson.JSONNode)
extern "C"  void JSONNode_Add_m877804532 (JSONNode_t1109731523 * __this, String_t* ___aKey, JSONNode_t1109731523 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONNode::get_Item(System.Int32)
extern "C"  JSONNode_t1109731523 * JSONNode_get_Item_m1822512157 (JSONNode_t1109731523 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONNode::set_Item(System.Int32,LitJson.JSONNode)
extern "C"  void JSONNode_set_Item_m1466321662 (JSONNode_t1109731523 * __this, int32_t ___aIndex, JSONNode_t1109731523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONNode::get_Item(System.String)
extern "C"  JSONNode_t1109731523 * JSONNode_get_Item_m2305044062 (JSONNode_t1109731523 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONNode::set_Item(System.String,LitJson.JSONNode)
extern "C"  void JSONNode_set_Item_m2112954357 (JSONNode_t1109731523 * __this, String_t* ___aKey, JSONNode_t1109731523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONNode::get_Value()
extern "C"  String_t* JSONNode_get_Value_m4268570087 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONNode::set_Value(System.String)
extern "C"  void JSONNode_set_Value_m405678868 (JSONNode_t1109731523 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JSONNode::get_Count()
extern "C"  int32_t JSONNode_get_Count_m970593746 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONNode::Add(LitJson.JSONNode)
extern "C"  void JSONNode_Add_m2721751808 (JSONNode_t1109731523 * __this, JSONNode_t1109731523 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONNode::Remove(System.String)
extern "C"  JSONNode_t1109731523 * JSONNode_Remove_m3944741648 (JSONNode_t1109731523 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONNode::Remove(System.Int32)
extern "C"  JSONNode_t1109731523 * JSONNode_Remove_m3802794823 (JSONNode_t1109731523 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONNode::Remove(LitJson.JSONNode)
extern "C"  JSONNode_t1109731523 * JSONNode_Remove_m473481481 (JSONNode_t1109731523 * __this, JSONNode_t1109731523 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<LitJson.JSONNode> LitJson.JSONNode::get_Childs()
extern "C"  Il2CppObject* JSONNode_get_Childs_m2225291483 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<LitJson.JSONNode> LitJson.JSONNode::get_DeepChilds()
extern "C"  Il2CppObject* JSONNode_get_DeepChilds_m1744532611 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONNode::ToString()
extern "C"  String_t* JSONNode_ToString_m4066791315 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONNode::ToString(System.String)
extern "C"  String_t* JSONNode_ToString_m1787092173 (JSONNode_t1109731523 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JSONNode::get_AsInt()
extern "C"  int32_t JSONNode_get_AsInt_m1445178064 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONNode::set_AsInt(System.Int32)
extern "C"  void JSONNode_set_AsInt_m863106705 (JSONNode_t1109731523 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LitJson.JSONNode::get_AsFloat()
extern "C"  float JSONNode_get_AsFloat_m3687675709 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONNode::set_AsFloat(System.Single)
extern "C"  void JSONNode_set_AsFloat_m975661794 (JSONNode_t1109731523 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JSONNode::get_AsDouble()
extern "C"  double JSONNode_get_AsDouble_m4259820915 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONNode::set_AsDouble(System.Double)
extern "C"  void JSONNode_set_AsDouble_m138586332 (JSONNode_t1109731523 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JSONNode::get_AsBool()
extern "C"  bool JSONNode_get_AsBool_m2028116245 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONNode::set_AsBool(System.Boolean)
extern "C"  void JSONNode_set_AsBool_m3419323826 (JSONNode_t1109731523 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONArray LitJson.JSONNode::get_AsArray()
extern "C"  JSONArray_t3951369664 * JSONNode_get_AsArray_m3822585355 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONClass LitJson.JSONNode::get_AsObject()
extern "C"  JSONClass_t3507943507 * JSONNode_get_AsObject_m204626108 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JSONNode::Equals(System.Object)
extern "C"  bool JSONNode_Equals_m2090838129 (JSONNode_t1109731523 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JSONNode::GetHashCode()
extern "C"  int32_t JSONNode_GetHashCode_m997968875 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONNode::Escape(System.String)
extern "C"  String_t* JSONNode_Escape_m1061347450 (Il2CppObject * __this /* static, unused */, String_t* ___aText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONNode::Parse(System.String)
extern "C"  JSONNode_t1109731523 * JSONNode_Parse_m3062827811 (Il2CppObject * __this /* static, unused */, String_t* ___aJSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONNode::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONNode_Serialize_m2554145825 (JSONNode_t1109731523 * __this, BinaryWriter_t3096160207 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONNode::SaveToStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToStream_m2309239489 (JSONNode_t1109731523 * __this, Stream_t2768948945 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONNode::SaveToCompressedStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToCompressedStream_m2757989152 (JSONNode_t1109731523 * __this, Stream_t2768948945 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONNode::SaveToCompressedFile(System.String)
extern "C"  void JSONNode_SaveToCompressedFile_m3764947937 (JSONNode_t1109731523 * __this, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONNode::SaveToCompressedBase64()
extern "C"  String_t* JSONNode_SaveToCompressedBase64_m3429370467 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONNode::SaveToFile(System.String)
extern "C"  void JSONNode_SaveToFile_m1349135494 (JSONNode_t1109731523 * __this, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONNode::SaveToBase64()
extern "C"  String_t* JSONNode_SaveToBase64_m90644228 (JSONNode_t1109731523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONNode::Deserialize(System.IO.BinaryReader)
extern "C"  JSONNode_t1109731523 * JSONNode_Deserialize_m538373114 (Il2CppObject * __this /* static, unused */, BinaryReader_t2305207519 * ___aReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONNode::LoadFromCompressedFile(System.String)
extern "C"  JSONNode_t1109731523 * JSONNode_LoadFromCompressedFile_m3972185983 (Il2CppObject * __this /* static, unused */, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONNode::LoadFromCompressedStream(System.IO.Stream)
extern "C"  JSONNode_t1109731523 * JSONNode_LoadFromCompressedStream_m911134240 (Il2CppObject * __this /* static, unused */, Stream_t2768948945 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONNode::LoadFromCompressedBase64(System.String)
extern "C"  JSONNode_t1109731523 * JSONNode_LoadFromCompressedBase64_m4163934642 (Il2CppObject * __this /* static, unused */, String_t* ___aBase64, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONNode::LoadFromStream(System.IO.Stream)
extern "C"  JSONNode_t1109731523 * JSONNode_LoadFromStream_m3094235431 (Il2CppObject * __this /* static, unused */, Stream_t2768948945 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONNode::LoadFromFile(System.String)
extern "C"  JSONNode_t1109731523 * JSONNode_LoadFromFile_m1657510378 (Il2CppObject * __this /* static, unused */, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONNode::LoadFromBase64(System.String)
extern "C"  JSONNode_t1109731523 * JSONNode_LoadFromBase64_m847466965 (Il2CppObject * __this /* static, unused */, String_t* ___aBase64, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONNode::op_Implicit(System.String)
extern "C"  JSONNode_t1109731523 * JSONNode_op_Implicit_m3873055849 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONNode::op_Implicit(LitJson.JSONNode)
extern "C"  String_t* JSONNode_op_Implicit_m1626457581 (Il2CppObject * __this /* static, unused */, JSONNode_t1109731523 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JSONNode::op_Equality(LitJson.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Equality_m2293470393 (Il2CppObject * __this /* static, unused */, JSONNode_t1109731523 * ___a, Il2CppObject * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JSONNode::op_Inequality(LitJson.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Inequality_m394651268 (Il2CppObject * __this /* static, unused */, JSONNode_t1109731523 * ___a, Il2CppObject * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
