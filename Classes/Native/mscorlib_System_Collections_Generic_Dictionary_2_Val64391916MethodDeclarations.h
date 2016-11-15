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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t64391916;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3387027560;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t3304777396;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Va684356285.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void ValueCollection__ctor_m1801851342_gshared (ValueCollection_t64391916 * __this, Dictionary_2_t3387027560 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m1801851342(__this, ___dictionary, method) ((  void (*) (ValueCollection_t64391916 *, Dictionary_2_t3387027560 *, const MethodInfo*))ValueCollection__ctor_m1801851342_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1477647540_gshared (ValueCollection_t64391916 * __this, Il2CppObject * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1477647540(__this, ___item, method) ((  void (*) (ValueCollection_t64391916 *, Il2CppObject *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1477647540_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m573646175_gshared (ValueCollection_t64391916 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m573646175(__this, method) ((  void (*) (ValueCollection_t64391916 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m573646175_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1598273024_gshared (ValueCollection_t64391916 * __this, Il2CppObject * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1598273024(__this, ___item, method) ((  bool (*) (ValueCollection_t64391916 *, Il2CppObject *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1598273024_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m3764375695_gshared (ValueCollection_t64391916 * __this, Il2CppObject * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m3764375695(__this, ___item, method) ((  bool (*) (ValueCollection_t64391916 *, Il2CppObject *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m3764375695_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C"  Il2CppObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m3036711881_gshared (ValueCollection_t64391916 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m3036711881(__this, method) ((  Il2CppObject* (*) (ValueCollection_t64391916 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m3036711881_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ValueCollection_System_Collections_ICollection_CopyTo_m3792551117_gshared (ValueCollection_t64391916 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m3792551117(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t64391916 *, Il2CppArray *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m3792551117_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1773104428_gshared (ValueCollection_t64391916 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1773104428(__this, method) ((  Il2CppObject * (*) (ValueCollection_t64391916 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1773104428_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1530798787_gshared (ValueCollection_t64391916 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1530798787(__this, method) ((  bool (*) (ValueCollection_t64391916 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1530798787_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * ValueCollection_System_Collections_ICollection_get_SyncRoot_m919209341_gshared (ValueCollection_t64391916 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m919209341(__this, method) ((  Il2CppObject * (*) (ValueCollection_t64391916 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m919209341_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C"  void ValueCollection_CopyTo_m927881183_gshared (ValueCollection_t64391916 * __this, ObjectU5BU5D_t3632007997* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m927881183(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t64391916 *, ObjectU5BU5D_t3632007997*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m927881183_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t684356285  ValueCollection_GetEnumerator_m401908452_gshared (ValueCollection_t64391916 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m401908452(__this, method) ((  Enumerator_t684356285  (*) (ValueCollection_t64391916 *, const MethodInfo*))ValueCollection_GetEnumerator_m401908452_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern "C"  int32_t ValueCollection_get_Count_m3718352161_gshared (ValueCollection_t64391916 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m3718352161(__this, method) ((  int32_t (*) (ValueCollection_t64391916 *, const MethodInfo*))ValueCollection_get_Count_m3718352161_gshared)(__this, method)
