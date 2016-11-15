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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3387027560;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t130034897;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2935491489;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t246188832;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1087952561;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t64391916;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21944347872.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En684356285.h"
#include "mscorlib_System_Collections_DictionaryEntry1445113794.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m584589095_gshared (Dictionary_2_t3387027560 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m584589095(__this, method) ((  void (*) (Dictionary_2_t3387027560 *, const MethodInfo*))Dictionary_2__ctor_m584589095_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m406310120_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m406310120(__this, ___comparer, method) ((  void (*) (Dictionary_2_t3387027560 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m406310120_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m206582704_gshared (Dictionary_2_t3387027560 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m206582704(__this, ___capacity, method) ((  void (*) (Dictionary_2_t3387027560 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m206582704_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1206668798_gshared (Dictionary_2_t3387027560 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1206668798(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3387027560 *, SerializationInfo_t1029367511 *, StreamingContext_t3848318932 , const MethodInfo*))Dictionary_2__ctor_m1206668798_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m237963271_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m237963271(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t3387027560 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m237963271_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m3775521570_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m3775521570(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3387027560 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m3775521570_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m984276885_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m984276885(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3387027560 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m984276885_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m2868006769_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m2868006769(__this, ___key, method) ((  bool (*) (Dictionary_2_t3387027560 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m2868006769_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m2017099222_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m2017099222(__this, ___key, method) ((  void (*) (Dictionary_2_t3387027560 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m2017099222_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1900166091_gshared (Dictionary_2_t3387027560 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1900166091(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3387027560 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1900166091_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4094240197_gshared (Dictionary_2_t3387027560 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4094240197(__this, method) ((  bool (*) (Dictionary_2_t3387027560 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4094240197_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m990341268_gshared (Dictionary_2_t3387027560 * __this, KeyValuePair_2_t1944347872  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m990341268(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t3387027560 *, KeyValuePair_2_t1944347872 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m990341268_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1058501024_gshared (Dictionary_2_t3387027560 * __this, KeyValuePair_2_t1944347872  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1058501024(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3387027560 *, KeyValuePair_2_t1944347872 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1058501024_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m976354816_gshared (Dictionary_2_t3387027560 * __this, KeyValuePair_2U5BU5D_t2935491489* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m976354816(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3387027560 *, KeyValuePair_2U5BU5D_t2935491489*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m976354816_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1705959559_gshared (Dictionary_2_t3387027560 * __this, KeyValuePair_2_t1944347872  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1705959559(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3387027560 *, KeyValuePair_2_t1944347872 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1705959559_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m3578539931_gshared (Dictionary_2_t3387027560 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m3578539931(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3387027560 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m3578539931_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3100111910_gshared (Dictionary_2_t3387027560 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3100111910(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3387027560 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3100111910_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2925090477_gshared (Dictionary_2_t3387027560 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2925090477(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3387027560 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2925090477_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2684932776_gshared (Dictionary_2_t3387027560 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2684932776(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3387027560 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2684932776_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3636113691_gshared (Dictionary_2_t3387027560 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m3636113691(__this, method) ((  int32_t (*) (Dictionary_2_t3387027560 *, const MethodInfo*))Dictionary_2_get_Count_m3636113691_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m2413909512_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m2413909512(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t3387027560 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m2413909512_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m458653679_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m458653679(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3387027560 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m458653679_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m1045257495_gshared (Dictionary_2_t3387027560 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1045257495(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t3387027560 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m1045257495_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2270022740_gshared (Dictionary_2_t3387027560 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2270022740(__this, ___size, method) ((  void (*) (Dictionary_2_t3387027560 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2270022740_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2147716750_gshared (Dictionary_2_t3387027560 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2147716750(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3387027560 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2147716750_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1944347872  Dictionary_2_make_pair_m2631942124_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m2631942124(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t1944347872  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m2631942124_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m1872663242_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1872663242(__this /* static, unused */, ___key, ___value, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m1872663242_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m1495142643_gshared (Dictionary_2_t3387027560 * __this, KeyValuePair_2U5BU5D_t2935491489* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1495142643(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3387027560 *, KeyValuePair_2U5BU5D_t2935491489*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1495142643_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m2672264133_gshared (Dictionary_2_t3387027560 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m2672264133(__this, method) ((  void (*) (Dictionary_2_t3387027560 *, const MethodInfo*))Dictionary_2_Resize_m2672264133_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m1708621268_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1708621268(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3387027560 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m1708621268_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m2325793156_gshared (Dictionary_2_t3387027560 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2325793156(__this, method) ((  void (*) (Dictionary_2_t3387027560 *, const MethodInfo*))Dictionary_2_Clear_m2325793156_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m3553426152_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m3553426152(__this, ___key, method) ((  bool (*) (Dictionary_2_t3387027560 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m3553426152_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m2375979648_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m2375979648(__this, ___value, method) ((  bool (*) (Dictionary_2_t3387027560 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m2375979648_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2864531407_gshared (Dictionary_2_t3387027560 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2864531407(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3387027560 *, SerializationInfo_t1029367511 *, StreamingContext_t3848318932 , const MethodInfo*))Dictionary_2_GetObjectData_m2864531407_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2160537783_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2160537783(__this, ___sender, method) ((  void (*) (Dictionary_2_t3387027560 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2160537783_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1366616528_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1366616528(__this, ___key, method) ((  bool (*) (Dictionary_2_t3387027560 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m1366616528_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1120370623_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___key, Il2CppObject ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1120370623(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t3387027560 *, Il2CppObject *, Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m1120370623_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C"  ValueCollection_t64391916 * Dictionary_2_get_Values_m825860460_gshared (Dictionary_2_t3387027560 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m825860460(__this, method) ((  ValueCollection_t64391916 * (*) (Dictionary_2_t3387027560 *, const MethodInfo*))Dictionary_2_get_Values_m825860460_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m4209561517_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m4209561517(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t3387027560 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m4209561517_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m1381983709_gshared (Dictionary_2_t3387027560 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1381983709(__this, ___value, method) ((  Il2CppObject * (*) (Dictionary_2_t3387027560 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1381983709_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m663697471_gshared (Dictionary_2_t3387027560 * __this, KeyValuePair_2_t1944347872  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m663697471(__this, ___pair, method) ((  bool (*) (Dictionary_2_t3387027560 *, KeyValuePair_2_t1944347872 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m663697471_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t684356286  Dictionary_2_GetEnumerator_m1752238884_gshared (Dictionary_2_t3387027560 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1752238884(__this, method) ((  Enumerator_t684356286  (*) (Dictionary_2_t3387027560 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1752238884_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t1445113794  Dictionary_2_U3CCopyToU3Em__0_m2061238213_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m2061238213(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t1445113794  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m2061238213_gshared)(__this /* static, unused */, ___key, ___value, method)
