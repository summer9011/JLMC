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

// System.Collections.ArrayList/ArrayListWrapper
struct ArrayListWrapper_t3558537360;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Object
struct Il2CppObject;
// System.Collections.ICollection
struct ICollection_t2033110931;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Collections.IComparer
struct IComparer_t2315410562;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.Collections.ArrayList/ArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C"  void ArrayListWrapper__ctor_m3783588291 (ArrayListWrapper_t3558537360 * __this, ArrayList_t1468494371 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_Item(System.Int32)
extern "C"  Il2CppObject * ArrayListWrapper_get_Item_m3239758564 (ArrayListWrapper_t3558537360 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C"  void ArrayListWrapper_set_Item_m4288374891 (ArrayListWrapper_t3558537360 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Count()
extern "C"  int32_t ArrayListWrapper_get_Count_m2207944952 (ArrayListWrapper_t3558537360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Capacity()
extern "C"  int32_t ArrayListWrapper_get_Capacity_m1663188815 (ArrayListWrapper_t3558537360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Capacity(System.Int32)
extern "C"  void ArrayListWrapper_set_Capacity_m2792463350 (ArrayListWrapper_t3558537360 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsReadOnly()
extern "C"  bool ArrayListWrapper_get_IsReadOnly_m1327238069 (ArrayListWrapper_t3558537360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsSynchronized()
extern "C"  bool ArrayListWrapper_get_IsSynchronized_m574832369 (ArrayListWrapper_t3558537360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_SyncRoot()
extern "C"  Il2CppObject * ArrayListWrapper_get_SyncRoot_m2617104509 (ArrayListWrapper_t3558537360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::Add(System.Object)
extern "C"  int32_t ArrayListWrapper_Add_m3506024217 (ArrayListWrapper_t3558537360 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Clear()
extern "C"  void ArrayListWrapper_Clear_m321161741 (ArrayListWrapper_t3558537360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::Contains(System.Object)
extern "C"  bool ArrayListWrapper_Contains_m1158465965 (ArrayListWrapper_t3558537360 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object)
extern "C"  int32_t ArrayListWrapper_IndexOf_m1413838195 (ArrayListWrapper_t3558537360 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32)
extern "C"  int32_t ArrayListWrapper_IndexOf_m956690066 (ArrayListWrapper_t3558537360 * __this, Il2CppObject * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
extern "C"  int32_t ArrayListWrapper_IndexOf_m3574835167 (ArrayListWrapper_t3558537360 * __this, Il2CppObject * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Insert(System.Int32,System.Object)
extern "C"  void ArrayListWrapper_Insert_m3096839048 (ArrayListWrapper_t3558537360 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C"  void ArrayListWrapper_InsertRange_m3661011618 (ArrayListWrapper_t3558537360 * __this, int32_t ___index, Il2CppObject * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Remove(System.Object)
extern "C"  void ArrayListWrapper_Remove_m1105489978 (ArrayListWrapper_t3558537360 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::RemoveAt(System.Int32)
extern "C"  void ArrayListWrapper_RemoveAt_m2300625242 (ArrayListWrapper_t3558537360 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array)
extern "C"  void ArrayListWrapper_CopyTo_m3344427948 (ArrayListWrapper_t3558537360 * __this, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array,System.Int32)
extern "C"  void ArrayListWrapper_CopyTo_m793444109 (ArrayListWrapper_t3558537360 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void ArrayListWrapper_CopyTo_m735618473 (ArrayListWrapper_t3558537360 * __this, int32_t ___index, Il2CppArray * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/ArrayListWrapper::GetEnumerator()
extern "C"  Il2CppObject * ArrayListWrapper_GetEnumerator_m14747752 (ArrayListWrapper_t3558537360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C"  void ArrayListWrapper_AddRange_m4007726545 (ArrayListWrapper_t3558537360 * __this, Il2CppObject * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::Clone()
extern "C"  Il2CppObject * ArrayListWrapper_Clone_m1506311066 (ArrayListWrapper_t3558537360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort()
extern "C"  void ArrayListWrapper_Sort_m2154205930 (ArrayListWrapper_t3558537360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort(System.Collections.IComparer)
extern "C"  void ArrayListWrapper_Sort_m2056456654 (ArrayListWrapper_t3558537360 * __this, Il2CppObject * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/ArrayListWrapper::ToArray()
extern "C"  ObjectU5BU5D_t3632007997* ArrayListWrapper_ToArray_m3619275769 (ArrayListWrapper_t3558537360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/ArrayListWrapper::ToArray(System.Type)
extern "C"  Il2CppArray * ArrayListWrapper_ToArray_m235921330 (ArrayListWrapper_t3558537360 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
