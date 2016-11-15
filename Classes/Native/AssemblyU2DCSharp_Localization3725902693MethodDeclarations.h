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

// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t2281945449;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t4025741140;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// BetterList`1<System.String>
struct BetterList_1_t2188119978;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t4260152181;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t484745624;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_TextAsset4025741140.h"

// System.Void Localization::.cctor()
extern "C"  void Localization__cctor_m3948752887 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]> Localization::get_dictionary()
extern "C"  Dictionary_2_t2281945449 * Localization_get_dictionary_m669170931 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::set_dictionary(System.Collections.Generic.Dictionary`2<System.String,System.String[]>)
extern "C"  void Localization_set_dictionary_m1593282302 (Il2CppObject * __this /* static, unused */, Dictionary_2_t2281945449 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Localization::get_knownLanguages()
extern "C"  StringU5BU5D_t3764931161* Localization_get_knownLanguages_m4016135912 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::get_language()
extern "C"  String_t* Localization_get_language_m3627480640 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::set_language(System.String)
extern "C"  void Localization_set_language_m2466243221 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadDictionary(System.String)
extern "C"  bool Localization_LoadDictionary_m970465570 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadAndSelect(System.String)
extern "C"  bool Localization_LoadAndSelect_m600335823 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Load(UnityEngine.TextAsset)
extern "C"  void Localization_Load_m1254693088 (Il2CppObject * __this /* static, unused */, TextAsset_t4025741140 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Set(System.String,System.Byte[])
extern "C"  void Localization_Set_m1783758047 (Il2CppObject * __this /* static, unused */, String_t* ___languageName, ByteU5BU5D_t3835026402* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadCSV(UnityEngine.TextAsset,System.Boolean)
extern "C"  bool Localization_LoadCSV_m419108425 (Il2CppObject * __this /* static, unused */, TextAsset_t4025741140 * ___asset, bool ___merge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadCSV(System.Byte[],System.Boolean)
extern "C"  bool Localization_LoadCSV_m865348308 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___bytes, bool ___merge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::HasLanguage(System.String)
extern "C"  bool Localization_HasLanguage_m1319581438 (Il2CppObject * __this /* static, unused */, String_t* ___languageName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadCSV(System.Byte[],UnityEngine.TextAsset,System.Boolean)
extern "C"  bool Localization_LoadCSV_m66413800 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___bytes, TextAsset_t4025741140 * ___asset, bool ___merge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::AddCSV(BetterList`1<System.String>,System.String[],System.Collections.Generic.Dictionary`2<System.String,System.Int32>)
extern "C"  void Localization_AddCSV_m2735959452 (Il2CppObject * __this /* static, unused */, BetterList_1_t2188119978 * ___newValues, StringU5BU5D_t3764931161* ___newLanguages, Dictionary_2_t4260152181 * ___languageIndices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Localization::ExtractStrings(BetterList`1<System.String>,System.String[],System.Collections.Generic.Dictionary`2<System.String,System.Int32>)
extern "C"  StringU5BU5D_t3764931161* Localization_ExtractStrings_m690628323 (Il2CppObject * __this /* static, unused */, BetterList_1_t2188119978 * ___added, StringU5BU5D_t3764931161* ___newLanguages, Dictionary_2_t4260152181 * ___languageIndices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::SelectLanguage(System.String)
extern "C"  bool Localization_SelectLanguage_m1876203060 (Il2CppObject * __this /* static, unused */, String_t* ___language, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Set(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void Localization_Set_m3244698987 (Il2CppObject * __this /* static, unused */, String_t* ___languageName, Dictionary_2_t484745624 * ___dictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Set(System.String,System.String)
extern "C"  void Localization_Set_m1353922382 (Il2CppObject * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Get(System.String)
extern "C"  String_t* Localization_Get_m685709977 (Il2CppObject * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Format(System.String,System.Object[])
extern "C"  String_t* Localization_Format_m590107380 (Il2CppObject * __this /* static, unused */, String_t* ___key, ObjectU5BU5D_t3632007997* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::get_isActive()
extern "C"  bool Localization_get_isActive_m797147515 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Localize(System.String)
extern "C"  String_t* Localization_Localize_m2724461702 (Il2CppObject * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::Exists(System.String)
extern "C"  bool Localization_Exists_m4079318430 (Il2CppObject * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
