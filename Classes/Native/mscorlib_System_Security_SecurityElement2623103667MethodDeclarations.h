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

// System.Security.SecurityElement
struct SecurityElement_t2623103667;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Text.StringBuilder
struct StringBuilder_t2393427626;
// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t3717399794;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"
#include "mscorlib_System_Text_StringBuilder2393427626.h"

// System.Void System.Security.SecurityElement::.ctor(System.String)
extern "C"  void SecurityElement__ctor_m1988489885 (SecurityElement_t2623103667 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.ctor(System.String,System.String)
extern "C"  void SecurityElement__ctor_m3543712927 (SecurityElement_t2623103667 * __this, String_t* ___tag, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.cctor()
extern "C"  void SecurityElement__cctor_m256761998 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityElement::get_Children()
extern "C"  ArrayList_t1468494371 * SecurityElement_get_Children_m38620993 (SecurityElement_t2623103667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Tag()
extern "C"  String_t* SecurityElement_get_Tag_m3790054077 (SecurityElement_t2623103667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::set_Text(System.String)
extern "C"  void SecurityElement_set_Text_m2410443257 (SecurityElement_t2623103667 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddAttribute(System.String,System.String)
extern "C"  void SecurityElement_AddAttribute_m2324447756 (SecurityElement_t2623103667 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddChild(System.Security.SecurityElement)
extern "C"  void SecurityElement_AddChild_m4178544467 (SecurityElement_t2623103667 * __this, SecurityElement_t2623103667 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Escape(System.String)
extern "C"  String_t* SecurityElement_Escape_m677416717 (Il2CppObject * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Unescape(System.String)
extern "C"  String_t* SecurityElement_Unescape_m1089723634 (Il2CppObject * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeName(System.String)
extern "C"  bool SecurityElement_IsValidAttributeName_m2201790420 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeValue(System.String)
extern "C"  bool SecurityElement_IsValidAttributeValue_m483287146 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidTag(System.String)
extern "C"  bool SecurityElement_IsValidTag_m64902195 (Il2CppObject * __this /* static, unused */, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidText(System.String)
extern "C"  bool SecurityElement_IsValidText_m162470336 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::SearchForChildByTag(System.String)
extern "C"  SecurityElement_t2623103667 * SecurityElement_SearchForChildByTag_m1622912855 (SecurityElement_t2623103667 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::ToString()
extern "C"  String_t* SecurityElement_ToString_m2206560848 (SecurityElement_t2623103667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::ToXml(System.Text.StringBuilder&,System.Int32)
extern "C"  void SecurityElement_ToXml_m1070777098 (SecurityElement_t2623103667 * __this, StringBuilder_t2393427626 ** ___s, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement/SecurityAttribute System.Security.SecurityElement::GetAttribute(System.String)
extern "C"  SecurityAttribute_t3717399794 * SecurityElement_GetAttribute_m4288291176 (SecurityElement_t2623103667 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
