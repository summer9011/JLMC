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

// System.Runtime.Remoting.ConfigHandler
struct ConfigHandler_t2763937976;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3764931161;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1231813951;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t50112684;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t210288481;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_Mono_Xml_SmallXmlParser1231813951.h"
#include "mscorlib_System_TimeSpan1834055012.h"

// System.Void System.Runtime.Remoting.ConfigHandler::.ctor(System.Boolean)
extern "C"  void ConfigHandler__ctor_m3798700643 (ConfigHandler_t2763937976 * __this, bool ___onlyDelayedChannels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ValidatePath(System.String,System.String[])
extern "C"  void ConfigHandler_ValidatePath_m3188987489 (ConfigHandler_t2763937976 * __this, String_t* ___element, StringU5BU5D_t3764931161* ___paths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.ConfigHandler::CheckPath(System.String)
extern "C"  bool ConfigHandler_CheckPath_m2296459741 (ConfigHandler_t2763937976 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C"  void ConfigHandler_OnStartParsing_m2298792064 (ConfigHandler_t2763937976 * __this, SmallXmlParser_t1231813951 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnProcessingInstruction(System.String,System.String)
extern "C"  void ConfigHandler_OnProcessingInstruction_m1977038436 (ConfigHandler_t2763937976 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnIgnorableWhitespace(System.String)
extern "C"  void ConfigHandler_OnIgnorableWhitespace_m1819705975 (ConfigHandler_t2763937976 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_OnStartElement_m2567023365 (ConfigHandler_t2763937976 * __this, String_t* ___name, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ParseElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ParseElement_m713051069 (ConfigHandler_t2763937976 * __this, String_t* ___name, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndElement(System.String)
extern "C"  void ConfigHandler_OnEndElement_m3200644118 (ConfigHandler_t2763937976 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadCustomProviderData(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadCustomProviderData_m784203316 (ConfigHandler_t2763937976 * __this, String_t* ___name, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadLifetine(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadLifetine_m4190202502 (ConfigHandler_t2763937976 * __this, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.ConfigHandler::ParseTime(System.String)
extern "C"  TimeSpan_t1834055012  ConfigHandler_ParseTime_m1231083163 (ConfigHandler_t2763937976 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadChannel(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C"  void ConfigHandler_ReadChannel_m90614780 (ConfigHandler_t2763937976 * __this, Il2CppObject * ___attrs, bool ___isTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ProviderData System.Runtime.Remoting.ConfigHandler::ReadProvider(System.String,Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C"  ProviderData_t210288481 * ConfigHandler_ReadProvider_m1441445958 (ConfigHandler_t2763937976 * __this, String_t* ___name, Il2CppObject * ___attrs, bool ___isTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadClientActivated_m225401690 (ConfigHandler_t2763937976 * __this, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadServiceActivated_m907987684 (ConfigHandler_t2763937976 * __this, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadClientWellKnown_m4206953534 (ConfigHandler_t2763937976 * __this, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadServiceWellKnown_m1495748104 (ConfigHandler_t2763937976 * __this, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadInteropXml(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C"  void ConfigHandler_ReadInteropXml_m539906871 (ConfigHandler_t2763937976 * __this, Il2CppObject * ___attrs, bool ___isElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadPreload(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadPreload_m455851711 (ConfigHandler_t2763937976 * __this, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ConfigHandler::GetNotNull(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern "C"  String_t* ConfigHandler_GetNotNull_m2454680251 (ConfigHandler_t2763937976 * __this, Il2CppObject * ___attrs, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ConfigHandler::ExtractAssembly(System.String&)
extern "C"  String_t* ConfigHandler_ExtractAssembly_m2993776658 (ConfigHandler_t2763937976 * __this, String_t** ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnChars(System.String)
extern "C"  void ConfigHandler_OnChars_m2004226744 (ConfigHandler_t2763937976 * __this, String_t* ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C"  void ConfigHandler_OnEndParsing_m2528686941 (ConfigHandler_t2763937976 * __this, SmallXmlParser_t1231813951 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
