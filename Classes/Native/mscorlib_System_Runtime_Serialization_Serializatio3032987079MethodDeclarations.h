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

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio3032987079.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Runtime.Serialization.SerializationEntry::.ctor(System.String,System.Type,System.Object)
extern "C"  void SerializationEntry__ctor_m1619256036 (SerializationEntry_t3032987079 * __this, String_t* ___name, Type_t * ___type, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationEntry::get_Name()
extern "C"  String_t* SerializationEntry_get_Name_m3087969704 (SerializationEntry_t3032987079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationEntry::get_Value()
extern "C"  Il2CppObject * SerializationEntry_get_Value_m1628109884 (SerializationEntry_t3032987079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
