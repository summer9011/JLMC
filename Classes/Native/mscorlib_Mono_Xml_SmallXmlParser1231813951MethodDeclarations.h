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

// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1231813951;
// System.Exception
struct Exception_t1145979430;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t657369457;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t986874664;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t3280603515;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_IO_TextReader657369457.h"
#include "mscorlib_Mono_Xml_SmallXmlParser_AttrListImpl3280603515.h"

// System.Void Mono.Xml.SmallXmlParser::.ctor()
extern "C"  void SmallXmlParser__ctor_m1034349227 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::Error(System.String)
extern "C"  Exception_t1145979430 * SmallXmlParser_Error_m1832158746 (SmallXmlParser_t1231813951 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::UnexpectedEndError()
extern "C"  Exception_t1145979430 * SmallXmlParser_UnexpectedEndError_m3367726590 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsNameChar(System.Char,System.Boolean)
extern "C"  bool SmallXmlParser_IsNameChar_m1561000202 (SmallXmlParser_t1231813951 * __this, uint16_t ___c, bool ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsWhitespace(System.Int32)
extern "C"  bool SmallXmlParser_IsWhitespace_m2887754975 (SmallXmlParser_t1231813951 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces()
extern "C"  void SmallXmlParser_SkipWhitespaces_m2923234398 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleWhitespaces()
extern "C"  void SmallXmlParser_HandleWhitespaces_m2502762625 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
extern "C"  void SmallXmlParser_SkipWhitespaces_m511753 (SmallXmlParser_t1231813951 * __this, bool ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Peek()
extern "C"  int32_t SmallXmlParser_Peek_m2814840810 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Read()
extern "C"  int32_t SmallXmlParser_Read_m2412330867 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Expect(System.Int32)
extern "C"  void SmallXmlParser_Expect_m3488282881 (SmallXmlParser_t1231813951 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadUntil(System.Char,System.Boolean)
extern "C"  String_t* SmallXmlParser_ReadUntil_m1879223332 (SmallXmlParser_t1231813951 * __this, uint16_t ___until, bool ___handleReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadName()
extern "C"  String_t* SmallXmlParser_ReadName_m80205839 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Parse(System.IO.TextReader,Mono.Xml.SmallXmlParser/IContentHandler)
extern "C"  void SmallXmlParser_Parse_m1986939549 (SmallXmlParser_t1231813951 * __this, TextReader_t657369457 * ___input, Il2CppObject * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Cleanup()
extern "C"  void SmallXmlParser_Cleanup_m3545113023 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadContent()
extern "C"  void SmallXmlParser_ReadContent_m4038164984 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleBufferedContent()
extern "C"  void SmallXmlParser_HandleBufferedContent_m3397096753 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCharacters()
extern "C"  void SmallXmlParser_ReadCharacters_m1966365555 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadReference()
extern "C"  void SmallXmlParser_ReadReference_m4174977204 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::ReadCharacterReference()
extern "C"  int32_t SmallXmlParser_ReadCharacterReference_m3501064561 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadAttribute(Mono.Xml.SmallXmlParser/AttrListImpl)
extern "C"  void SmallXmlParser_ReadAttribute_m2755012144 (SmallXmlParser_t1231813951 * __this, AttrListImpl_t3280603515 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCDATASection()
extern "C"  void SmallXmlParser_ReadCDATASection_m2558307107 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadComment()
extern "C"  void SmallXmlParser_ReadComment_m1117342068 (SmallXmlParser_t1231813951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
