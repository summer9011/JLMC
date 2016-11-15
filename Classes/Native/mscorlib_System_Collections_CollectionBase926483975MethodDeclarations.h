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

// System.Collections.CollectionBase
struct CollectionBase_t926483975;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Collections.IList
struct IList_t2346154967;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Collections.CollectionBase::.ctor()
extern "C"  void CollectionBase__ctor_m2525885291 (CollectionBase_t926483975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void CollectionBase_System_Collections_ICollection_CopyTo_m92374031 (CollectionBase_t926483975 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * CollectionBase_System_Collections_ICollection_get_SyncRoot_m3858827859 (CollectionBase_t926483975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.Add(System.Object)
extern "C"  int32_t CollectionBase_System_Collections_IList_Add_m2327469271 (CollectionBase_t926483975 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.Contains(System.Object)
extern "C"  bool CollectionBase_System_Collections_IList_Contains_m1719143127 (CollectionBase_t926483975 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t CollectionBase_System_Collections_IList_IndexOf_m641329609 (CollectionBase_t926483975 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void CollectionBase_System_Collections_IList_Insert_m2461606092 (CollectionBase_t926483975 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Remove(System.Object)
extern "C"  void CollectionBase_System_Collections_IList_Remove_m2931078938 (CollectionBase_t926483975 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * CollectionBase_System_Collections_IList_get_Item_m2370387510 (CollectionBase_t926483975 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void CollectionBase_System_Collections_IList_set_Item_m1798990861 (CollectionBase_t926483975 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C"  int32_t CollectionBase_get_Count_m740218359 (CollectionBase_t926483975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator()
extern "C"  Il2CppObject * CollectionBase_GetEnumerator_m1161625307 (CollectionBase_t926483975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::Clear()
extern "C"  void CollectionBase_Clear_m4223862684 (CollectionBase_t926483975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::RemoveAt(System.Int32)
extern "C"  void CollectionBase_RemoveAt_m421234629 (CollectionBase_t926483975 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C"  ArrayList_t1468494371 * CollectionBase_get_InnerList_m44314156 (CollectionBase_t926483975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Collections.CollectionBase::get_List()
extern "C"  Il2CppObject * CollectionBase_get_List_m303528484 (CollectionBase_t926483975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClear()
extern "C"  void CollectionBase_OnClear_m522194371 (CollectionBase_t926483975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClearComplete()
extern "C"  void CollectionBase_OnClearComplete_m892802372 (CollectionBase_t926483975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsert(System.Int32,System.Object)
extern "C"  void CollectionBase_OnInsert_m2527428082 (CollectionBase_t926483975 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsertComplete(System.Int32,System.Object)
extern "C"  void CollectionBase_OnInsertComplete_m659231903 (CollectionBase_t926483975 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemove(System.Int32,System.Object)
extern "C"  void CollectionBase_OnRemove_m1947193027 (CollectionBase_t926483975 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemoveComplete(System.Int32,System.Object)
extern "C"  void CollectionBase_OnRemoveComplete_m2564738768 (CollectionBase_t926483975 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSet(System.Int32,System.Object,System.Object)
extern "C"  void CollectionBase_OnSet_m3770260869 (CollectionBase_t926483975 * __this, int32_t ___index, Il2CppObject * ___oldValue, Il2CppObject * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSetComplete(System.Int32,System.Object,System.Object)
extern "C"  void CollectionBase_OnSetComplete_m562909496 (CollectionBase_t926483975 * __this, int32_t ___index, Il2CppObject * ___oldValue, Il2CppObject * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnValidate(System.Object)
extern "C"  void CollectionBase_OnValidate_m1837009054 (CollectionBase_t926483975 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
