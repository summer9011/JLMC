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

// System.Collections.ArrayList/ReadOnlyArrayListWrapper
struct ReadOnlyArrayListWrapper_t3477044134;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.IComparer
struct IComparer_t2315410562;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C"  void ReadOnlyArrayListWrapper__ctor_m4102755225 (ReadOnlyArrayListWrapper_t3477044134 * __this, ArrayList_t1468494371 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_ErrorMessage()
extern "C"  String_t* ReadOnlyArrayListWrapper_get_ErrorMessage_m3688605645 (ReadOnlyArrayListWrapper_t3477044134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_IsReadOnly()
extern "C"  bool ReadOnlyArrayListWrapper_get_IsReadOnly_m1840081327 (ReadOnlyArrayListWrapper_t3477044134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_Item(System.Int32)
extern "C"  Il2CppObject * ReadOnlyArrayListWrapper_get_Item_m4138413634 (ReadOnlyArrayListWrapper_t3477044134 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C"  void ReadOnlyArrayListWrapper_set_Item_m2199017141 (ReadOnlyArrayListWrapper_t3477044134 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort()
extern "C"  void ReadOnlyArrayListWrapper_Sort_m2056228524 (ReadOnlyArrayListWrapper_t3477044134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort(System.Collections.IComparer)
extern "C"  void ReadOnlyArrayListWrapper_Sort_m3055503216 (ReadOnlyArrayListWrapper_t3477044134 * __this, Il2CppObject * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
