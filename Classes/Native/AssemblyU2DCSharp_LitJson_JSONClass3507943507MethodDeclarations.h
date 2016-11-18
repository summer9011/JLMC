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

// LitJson.JSONClass
struct JSONClass_t3507943507;
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
#include "mscorlib_System_String1967731336.h"
#include "AssemblyU2DCSharp_LitJson_JSONNode1109731523.h"
#include "mscorlib_System_IO_BinaryWriter3096160207.h"

// System.Void LitJson.JSONClass::.ctor()
extern "C"  void JSONClass__ctor_m3719998694 (JSONClass_t3507943507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONClass::get_Item(System.String)
extern "C"  JSONNode_t1109731523 * JSONClass_get_Item_m404722800 (JSONClass_t3507943507 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONClass::set_Item(System.String,LitJson.JSONNode)
extern "C"  void JSONClass_set_Item_m1962860503 (JSONClass_t3507943507 * __this, String_t* ___aKey, JSONNode_t1109731523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONClass::get_Item(System.Int32)
extern "C"  JSONNode_t1109731523 * JSONClass_get_Item_m3816603071 (JSONClass_t3507943507 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONClass::set_Item(System.Int32,LitJson.JSONNode)
extern "C"  void JSONClass_set_Item_m3741366804 (JSONClass_t3507943507 * __this, int32_t ___aIndex, JSONNode_t1109731523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JSONClass::get_Count()
extern "C"  int32_t JSONClass_get_Count_m3511029644 (JSONClass_t3507943507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONClass::Add(System.String,LitJson.JSONNode)
extern "C"  void JSONClass_Add_m2875342486 (JSONClass_t3507943507 * __this, String_t* ___aKey, JSONNode_t1109731523 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONClass::Remove(System.String)
extern "C"  JSONNode_t1109731523 * JSONClass_Remove_m95942466 (JSONClass_t3507943507 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONClass::Remove(System.Int32)
extern "C"  JSONNode_t1109731523 * JSONClass_Remove_m1264005145 (JSONClass_t3507943507 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JSONNode LitJson.JSONClass::Remove(LitJson.JSONNode)
extern "C"  JSONNode_t1109731523 * JSONClass_Remove_m2861858923 (JSONClass_t3507943507 * __this, JSONNode_t1109731523 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<LitJson.JSONNode> LitJson.JSONClass::get_Childs()
extern "C"  Il2CppObject* JSONClass_get_Childs_m1292262681 (JSONClass_t3507943507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LitJson.JSONClass::GetEnumerator()
extern "C"  Il2CppObject * JSONClass_GetEnumerator_m3310636512 (JSONClass_t3507943507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONClass::ToString()
extern "C"  String_t* JSONClass_ToString_m3201577129 (JSONClass_t3507943507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONClass::ToString(System.String)
extern "C"  String_t* JSONClass_ToString_m1224664875 (JSONClass_t3507943507 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONClass::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONClass_Serialize_m791146507 (JSONClass_t3507943507 * __this, BinaryWriter_t3096160207 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
