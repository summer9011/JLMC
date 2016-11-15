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

// System.UriParser
struct UriParser_t2439614508;
// System.Uri
struct Uri_t3338506287;
// System.UriFormatException
struct UriFormatException_t2901548619;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1312997718;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri3338506287.h"
#include "System_System_UriFormatException2901548619.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Collections_Hashtable1312997718.h"
#include "System_System_UriParser2439614508.h"

// System.Void System.UriParser::.ctor()
extern "C"  void UriParser__ctor_m1282308392 (UriParser_t2439614508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::.cctor()
extern "C"  void UriParser__cctor_m1839415991 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern "C"  void UriParser_InitializeAndValidate_m251943319 (UriParser_t2439614508 * __this, Uri_t3338506287 * ___uri, UriFormatException_t2901548619 ** ___parsingError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C"  void UriParser_OnRegister_m4010407891 (UriParser_t2439614508 * __this, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C"  void UriParser_set_SchemeName_m3624672465 (UriParser_t2439614508 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriParser::get_DefaultPort()
extern "C"  int32_t UriParser_get_DefaultPort_m1377931533 (UriParser_t2439614508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C"  void UriParser_set_DefaultPort_m1159216960 (UriParser_t2439614508 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::CreateDefaults()
extern "C"  void UriParser_CreateDefaults_m295980432 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern "C"  void UriParser_InternalRegister_m416643159 (Il2CppObject * __this /* static, unused */, Hashtable_t1312997718 * ___table, UriParser_t2439614508 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.UriParser::GetParser(System.String)
extern "C"  UriParser_t2439614508 * UriParser_GetParser_m1453767844 (Il2CppObject * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
