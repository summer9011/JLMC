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

// LitJson.JSONLazyCreator
struct JSONLazyCreator_t3650877441;
// LitJson.JSONNode
struct JSONNode_t1109731523;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// LitJson.JSONArray
struct JSONArray_t3951369664;
// LitJson.JSONClass
struct JSONClass_t3507943507;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_JSONNode1109731523.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "AssemblyU2DCSharp_LitJson_JSONLazyCreator3650877441.h"

// System.Void LitJson.JSONLazyCreator::.ctor(LitJson.JSONNode)
extern "C"  void JSONLazyCreator__ctor_m2355942249 (JSONLazyCreator_t3650877441 * __this, JSONNode_t1109731523 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONLazyCreator::.ctor(LitJson.JSONNode,System.String)
extern "C"  void JSONLazyCreator__ctor_m2318093951 (JSONLazyCreator_t3650877441 * __this, JSONNode_t1109731523 * ___aNode, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONLazyCreator::Set(LitJson.JSONNode)
extern "C"  void JSONLazyCreator_Set_m1694570163 (JSONLazyCreator_t3650877441 * __this, JSONNode_t1109731523 * ___aVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONLazyCreator::get_Item(System.Int32)
extern "C"  JSONNode_t1109731523 * JSONLazyCreator_get_Item_m1454939631 (JSONLazyCreator_t3650877441 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONLazyCreator::set_Item(System.Int32,LitJson.JSONNode)
extern "C"  void JSONLazyCreator_set_Item_m1496474178 (JSONLazyCreator_t3650877441 * __this, int32_t ___aIndex, JSONNode_t1109731523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONLazyCreator::get_Item(System.String)
extern "C"  JSONNode_t1109731523 * JSONLazyCreator_get_Item_m2876958734 (JSONLazyCreator_t3650877441 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONLazyCreator::set_Item(System.String,LitJson.JSONNode)
extern "C"  void JSONLazyCreator_set_Item_m2486000207 (JSONLazyCreator_t3650877441 * __this, String_t* ___aKey, JSONNode_t1109731523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONLazyCreator::Add(LitJson.JSONNode)
extern "C"  void JSONLazyCreator_Add_m3375241288 (JSONLazyCreator_t3650877441 * __this, JSONNode_t1109731523 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONLazyCreator::Add(System.String,LitJson.JSONNode)
extern "C"  void JSONLazyCreator_Add_m3108218272 (JSONLazyCreator_t3650877441 * __this, String_t* ___aKey, JSONNode_t1109731523 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JSONLazyCreator::Equals(System.Object)
extern "C"  bool JSONLazyCreator_Equals_m376685235 (JSONLazyCreator_t3650877441 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JSONLazyCreator::GetHashCode()
extern "C"  int32_t JSONLazyCreator_GetHashCode_m2955819701 (JSONLazyCreator_t3650877441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONLazyCreator::ToString()
extern "C"  String_t* JSONLazyCreator_ToString_m4230201093 (JSONLazyCreator_t3650877441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONLazyCreator::ToString(System.String)
extern "C"  String_t* JSONLazyCreator_ToString_m605865467 (JSONLazyCreator_t3650877441 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JSONLazyCreator::get_AsInt()
extern "C"  int32_t JSONLazyCreator_get_AsInt_m1979278176 (JSONLazyCreator_t3650877441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONLazyCreator::set_AsInt(System.Int32)
extern "C"  void JSONLazyCreator_set_AsInt_m1234054955 (JSONLazyCreator_t3650877441 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LitJson.JSONLazyCreator::get_AsFloat()
extern "C"  float JSONLazyCreator_get_AsFloat_m2524722771 (JSONLazyCreator_t3650877441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONLazyCreator::set_AsFloat(System.Single)
extern "C"  void JSONLazyCreator_set_AsFloat_m88789494 (JSONLazyCreator_t3650877441 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JSONLazyCreator::get_AsDouble()
extern "C"  double JSONLazyCreator_get_AsDouble_m3411133481 (JSONLazyCreator_t3650877441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONLazyCreator::set_AsDouble(System.Double)
extern "C"  void JSONLazyCreator_set_AsDouble_m808035592 (JSONLazyCreator_t3650877441 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JSONLazyCreator::get_AsBool()
extern "C"  bool JSONLazyCreator_get_AsBool_m1444963335 (JSONLazyCreator_t3650877441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONLazyCreator::set_AsBool(System.Boolean)
extern "C"  void JSONLazyCreator_set_AsBool_m4051137514 (JSONLazyCreator_t3650877441 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONArray LitJson.JSONLazyCreator::get_AsArray()
extern "C"  JSONArray_t3951369664 * JSONLazyCreator_get_AsArray_m3908637365 (JSONLazyCreator_t3650877441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONClass LitJson.JSONLazyCreator::get_AsObject()
extern "C"  JSONClass_t3507943507 * JSONLazyCreator_get_AsObject_m1830998612 (JSONLazyCreator_t3650877441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JSONLazyCreator::op_Equality(LitJson.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Equality_m3201993453 (Il2CppObject * __this /* static, unused */, JSONLazyCreator_t3650877441 * ___a, Il2CppObject * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JSONLazyCreator::op_Inequality(LitJson.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Inequality_m222486860 (Il2CppObject * __this /* static, unused */, JSONLazyCreator_t3650877441 * ___a, Il2CppObject * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
