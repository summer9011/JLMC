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

// LitJson.JSONArray
struct JSONArray_t3951369664;
// LitJson.JSONNode
struct JSONNode_t1109731523;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<LitJson.JSONNode>
struct IEnumerable_1_t478121919;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.IO.BinaryWriter
struct BinaryWriter_t3096160207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_JSONNode1109731523.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_IO_BinaryWriter3096160207.h"

// System.Void LitJson.JSONArray::.ctor()
extern "C"  void JSONArray__ctor_m2055530137 (JSONArray_t3951369664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONArray::get_Item(System.Int32)
extern "C"  JSONNode_t1109731523 * JSONArray_get_Item_m1716220254 (JSONArray_t3951369664 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONArray::set_Item(System.Int32,LitJson.JSONNode)
extern "C"  void JSONArray_set_Item_m2523236991 (JSONArray_t3951369664 * __this, int32_t ___aIndex, JSONNode_t1109731523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONArray::get_Item(System.String)
extern "C"  JSONNode_t1109731523 * JSONArray_get_Item_m17902723 (JSONArray_t3951369664 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONArray::set_Item(System.String,LitJson.JSONNode)
extern "C"  void JSONArray_set_Item_m3089872608 (JSONArray_t3951369664 * __this, String_t* ___aKey, JSONNode_t1109731523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JSONArray::get_Count()
extern "C"  int32_t JSONArray_get_Count_m3468612425 (JSONArray_t3951369664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONArray::Add(System.String,LitJson.JSONNode)
extern "C"  void JSONArray_Add_m1091701333 (JSONArray_t3951369664 * __this, String_t* ___aKey, JSONNode_t1109731523 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONArray::Remove(System.Int32)
extern "C"  JSONNode_t1109731523 * JSONArray_Remove_m2575781920 (JSONArray_t3951369664 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONArray::Remove(LitJson.JSONNode)
extern "C"  JSONNode_t1109731523 * JSONArray_Remove_m1924475794 (JSONArray_t3951369664 * __this, JSONNode_t1109731523 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<LitJson.JSONNode> LitJson.JSONArray::get_Childs()
extern "C"  Il2CppObject* JSONArray_get_Childs_m1329198430 (JSONArray_t3951369664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LitJson.JSONArray::GetEnumerator()
extern "C"  Il2CppObject * JSONArray_GetEnumerator_m1688162689 (JSONArray_t3951369664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONArray::ToString()
extern "C"  String_t* JSONArray_ToString_m3743404074 (JSONArray_t3951369664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONArray::ToString(System.String)
extern "C"  String_t* JSONArray_ToString_m3377806804 (JSONArray_t3951369664 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONArray::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONArray_Serialize_m1935290006 (JSONArray_t3951369664 * __this, BinaryWriter_t3096160207 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
