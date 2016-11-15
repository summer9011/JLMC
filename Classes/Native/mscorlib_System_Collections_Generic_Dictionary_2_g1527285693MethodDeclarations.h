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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1527285693;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t130034897;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1539394392;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2681414261;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1087952561;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2499617345;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g84606005.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3119581714.h"
#include "mscorlib_System_Collections_DictionaryEntry1445113794.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C"  void Dictionary_2__ctor_m3420539152_gshared (Dictionary_2_t1527285693 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3420539152(__this, method) ((  void (*) (Dictionary_2_t1527285693 *, const MethodInfo*))Dictionary_2__ctor_m3420539152_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m314175613_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m314175613(__this, ___comparer, method) ((  void (*) (Dictionary_2_t1527285693 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m314175613_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m871840915_gshared (Dictionary_2_t1527285693 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m871840915(__this, ___capacity, method) ((  void (*) (Dictionary_2_t1527285693 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m871840915_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1854403065_gshared (Dictionary_2_t1527285693 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1854403065(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t1527285693 *, SerializationInfo_t1029367511 *, StreamingContext_t3848318932 , const MethodInfo*))Dictionary_2__ctor_m1854403065_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2237138810_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2237138810(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t1527285693 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2237138810_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m115188189_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m115188189(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1527285693 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m115188189_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3066998246_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3066998246(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1527285693 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3066998246_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m2698706918_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m2698706918(__this, ___key, method) ((  bool (*) (Dictionary_2_t1527285693 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m2698706918_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m189853969_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m189853969(__this, ___key, method) ((  void (*) (Dictionary_2_t1527285693 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m189853969_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2175588702_gshared (Dictionary_2_t1527285693 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2175588702(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1527285693 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2175588702_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1281685210_gshared (Dictionary_2_t1527285693 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1281685210(__this, method) ((  bool (*) (Dictionary_2_t1527285693 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1281685210_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2611662793_gshared (Dictionary_2_t1527285693 * __this, KeyValuePair_2_t84606005  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2611662793(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t1527285693 *, KeyValuePair_2_t84606005 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2611662793_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m842343255_gshared (Dictionary_2_t1527285693 * __this, KeyValuePair_2_t84606005  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m842343255(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t1527285693 *, KeyValuePair_2_t84606005 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m842343255_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1323252853_gshared (Dictionary_2_t1527285693 * __this, KeyValuePair_2U5BU5D_t1539394392* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1323252853(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1527285693 *, KeyValuePair_2U5BU5D_t1539394392*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1323252853_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2778371972_gshared (Dictionary_2_t1527285693 * __this, KeyValuePair_2_t84606005  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2778371972(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t1527285693 *, KeyValuePair_2_t84606005 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2778371972_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2784181332_gshared (Dictionary_2_t1527285693 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2784181332(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1527285693 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2784181332_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1615804423_gshared (Dictionary_2_t1527285693 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1615804423(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1527285693 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1615804423_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m573305608_gshared (Dictionary_2_t1527285693 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m573305608(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1527285693 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m573305608_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m721575733_gshared (Dictionary_2_t1527285693 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m721575733(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1527285693 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m721575733_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m802888472_gshared (Dictionary_2_t1527285693 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m802888472(__this, method) ((  int32_t (*) (Dictionary_2_t1527285693 *, const MethodInfo*))Dictionary_2_get_Count_m802888472_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C"  bool Dictionary_2_get_Item_m2455494681_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m2455494681(__this, ___key, method) ((  bool (*) (Dictionary_2_t1527285693 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m2455494681_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m3758499254_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m3758499254(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1527285693 *, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_set_Item_m3758499254_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3784457680_gshared (Dictionary_2_t1527285693 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m3784457680(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t1527285693 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3784457680_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m4237030359_gshared (Dictionary_2_t1527285693 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m4237030359(__this, ___size, method) ((  void (*) (Dictionary_2_t1527285693 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m4237030359_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m1638253305_gshared (Dictionary_2_t1527285693 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1638253305(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1527285693 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1638253305_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t84606005  Dictionary_2_make_pair_m394533803_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m394533803(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t84606005  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_make_pair_m394533803_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C"  bool Dictionary_2_pick_value_m4072431859_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m4072431859(__this /* static, unused */, ___key, ___value, method) ((  bool (*) (Il2CppObject * /* static, unused */, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_pick_value_m4072431859_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m765026490_gshared (Dictionary_2_t1527285693 * __this, KeyValuePair_2U5BU5D_t1539394392* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m765026490(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1527285693 *, KeyValuePair_2U5BU5D_t1539394392*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m765026490_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C"  void Dictionary_2_Resize_m2807616086_gshared (Dictionary_2_t1527285693 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m2807616086(__this, method) ((  void (*) (Dictionary_2_t1527285693 *, const MethodInfo*))Dictionary_2_Resize_m2807616086_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3690830839_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m3690830839(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1527285693 *, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_Add_m3690830839_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C"  void Dictionary_2_Clear_m3504688039_gshared (Dictionary_2_t1527285693 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3504688039(__this, method) ((  void (*) (Dictionary_2_t1527285693 *, const MethodInfo*))Dictionary_2_Clear_m3504688039_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1385349577_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1385349577(__this, ___key, method) ((  bool (*) (Dictionary_2_t1527285693 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m1385349577_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1839958881_gshared (Dictionary_2_t1527285693 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1839958881(__this, ___value, method) ((  bool (*) (Dictionary_2_t1527285693 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m1839958881_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m3012471448_gshared (Dictionary_2_t1527285693 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m3012471448(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t1527285693 *, SerializationInfo_t1029367511 *, StreamingContext_t3848318932 , const MethodInfo*))Dictionary_2_GetObjectData_m3012471448_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2870692686_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2870692686(__this, ___sender, method) ((  void (*) (Dictionary_2_t1527285693 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2870692686_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1947153975_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1947153975(__this, ___key, method) ((  bool (*) (Dictionary_2_t1527285693 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m1947153975_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1169378642_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1169378642(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t1527285693 *, Il2CppObject *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m1169378642_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C"  ValueCollection_t2499617345 * Dictionary_2_get_Values_m1102170553_gshared (Dictionary_2_t1527285693 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1102170553(__this, method) ((  ValueCollection_t2499617345 * (*) (Dictionary_2_t1527285693 *, const MethodInfo*))Dictionary_2_get_Values_m1102170553_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m965425080_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m965425080(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t1527285693 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m965425080_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C"  bool Dictionary_2_ToTValue_m2304368184_gshared (Dictionary_2_t1527285693 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m2304368184(__this, ___value, method) ((  bool (*) (Dictionary_2_t1527285693 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m2304368184_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1328448258_gshared (Dictionary_2_t1527285693 * __this, KeyValuePair_2_t84606005  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1328448258(__this, ___pair, method) ((  bool (*) (Dictionary_2_t1527285693 *, KeyValuePair_2_t84606005 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1328448258_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C"  Enumerator_t3119581715  Dictionary_2_GetEnumerator_m2667213667_gshared (Dictionary_2_t1527285693 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m2667213667(__this, method) ((  Enumerator_t3119581715  (*) (Dictionary_2_t1527285693 *, const MethodInfo*))Dictionary_2_GetEnumerator_m2667213667_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t1445113794  Dictionary_2_U3CCopyToU3Em__0_m2108533866_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m2108533866(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t1445113794  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m2108533866_gshared)(__this /* static, unused */, ___key, ___value, method)
