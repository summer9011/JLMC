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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t3070427539;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t870236354;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t4011651434;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t4224556107;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1087952561;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t634635599;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t4042759191;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21627747851.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En367756264.h"
#include "mscorlib_System_Collections_DictionaryEntry1445113794.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m1868603968_gshared (Dictionary_2_t3070427539 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1868603968(__this, method) ((  void (*) (Dictionary_2_t3070427539 *, const MethodInfo*))Dictionary_2__ctor_m1868603968_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2284756127_gshared (Dictionary_2_t3070427539 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m2284756127(__this, ___comparer, method) ((  void (*) (Dictionary_2_t3070427539 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2284756127_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m3111963761_gshared (Dictionary_2_t3070427539 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m3111963761(__this, ___capacity, method) ((  void (*) (Dictionary_2_t3070427539 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m3111963761_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m965168575_gshared (Dictionary_2_t3070427539 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m965168575(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3070427539 *, SerializationInfo_t1029367511 *, StreamingContext_t3848318932 , const MethodInfo*))Dictionary_2__ctor_m965168575_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2945412702_gshared (Dictionary_2_t3070427539 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2945412702(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t3070427539 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2945412702_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m941667911_gshared (Dictionary_2_t3070427539 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m941667911(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3070427539 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m941667911_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3189569330_gshared (Dictionary_2_t3070427539 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3189569330(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3070427539 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3189569330_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m3937948050_gshared (Dictionary_2_t3070427539 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m3937948050(__this, ___key, method) ((  bool (*) (Dictionary_2_t3070427539 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m3937948050_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3199539467_gshared (Dictionary_2_t3070427539 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3199539467(__this, ___key, method) ((  void (*) (Dictionary_2_t3070427539 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3199539467_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2487129350_gshared (Dictionary_2_t3070427539 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2487129350(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3070427539 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2487129350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1111602362_gshared (Dictionary_2_t3070427539 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1111602362(__this, method) ((  bool (*) (Dictionary_2_t3070427539 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1111602362_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1043757703_gshared (Dictionary_2_t3070427539 * __this, KeyValuePair_2_t1627747851  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1043757703(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t3070427539 *, KeyValuePair_2_t1627747851 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1043757703_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1927335261_gshared (Dictionary_2_t3070427539 * __this, KeyValuePair_2_t1627747851  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1927335261(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3070427539 *, KeyValuePair_2_t1627747851 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1927335261_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3678641635_gshared (Dictionary_2_t3070427539 * __this, KeyValuePair_2U5BU5D_t4011651434* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3678641635(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3070427539 *, KeyValuePair_2U5BU5D_t4011651434*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3678641635_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m181279132_gshared (Dictionary_2_t3070427539 * __this, KeyValuePair_2_t1627747851  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m181279132(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3070427539 *, KeyValuePair_2_t1627747851 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m181279132_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1985034736_gshared (Dictionary_2_t3070427539 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1985034736(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3070427539 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1985034736_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3830548821_gshared (Dictionary_2_t3070427539 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3830548821(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3070427539 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3830548821_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m631947640_gshared (Dictionary_2_t3070427539 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m631947640(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3070427539 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m631947640_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1284065099_gshared (Dictionary_2_t3070427539 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1284065099(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3070427539 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1284065099_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m2168147420_gshared (Dictionary_2_t3070427539 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m2168147420(__this, method) ((  int32_t (*) (Dictionary_2_t3070427539 *, const MethodInfo*))Dictionary_2_get_Count_m2168147420_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m4277290203_gshared (Dictionary_2_t3070427539 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m4277290203(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t3070427539 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m4277290203_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m81001562_gshared (Dictionary_2_t3070427539 * __this, int32_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m81001562(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3070427539 *, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m81001562_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3666073812_gshared (Dictionary_2_t3070427539 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m3666073812(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t3070427539 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3666073812_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m3810830177_gshared (Dictionary_2_t3070427539 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m3810830177(__this, ___size, method) ((  void (*) (Dictionary_2_t3070427539 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m3810830177_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m1541945891_gshared (Dictionary_2_t3070427539 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1541945891(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3070427539 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1541945891_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1627747851  Dictionary_2_make_pair_m90480045_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m90480045(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t1627747851  (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m90480045_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_key_m761174441_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m761174441(__this /* static, unused */, ___key, ___value, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m761174441_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m353965321_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m353965321(__this /* static, unused */, ___key, ___value, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m353965321_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m1956977846_gshared (Dictionary_2_t3070427539 * __this, KeyValuePair_2U5BU5D_t4011651434* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1956977846(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3070427539 *, KeyValuePair_2U5BU5D_t4011651434*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1956977846_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m2532139610_gshared (Dictionary_2_t3070427539 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m2532139610(__this, method) ((  void (*) (Dictionary_2_t3070427539 *, const MethodInfo*))Dictionary_2_Resize_m2532139610_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m2839642701_gshared (Dictionary_2_t3070427539 * __this, int32_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m2839642701(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3070427539 *, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m2839642701_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m899854001_gshared (Dictionary_2_t3070427539 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m899854001(__this, method) ((  void (*) (Dictionary_2_t3070427539 *, const MethodInfo*))Dictionary_2_Clear_m899854001_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m255952723_gshared (Dictionary_2_t3070427539 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m255952723(__this, ___key, method) ((  bool (*) (Dictionary_2_t3070427539 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m255952723_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m392092147_gshared (Dictionary_2_t3070427539 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m392092147(__this, ___value, method) ((  bool (*) (Dictionary_2_t3070427539 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m392092147_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m233109612_gshared (Dictionary_2_t3070427539 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m233109612(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3070427539 *, SerializationInfo_t1029367511 *, StreamingContext_t3848318932 , const MethodInfo*))Dictionary_2_GetObjectData_m233109612_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2092139626_gshared (Dictionary_2_t3070427539 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2092139626(__this, ___sender, method) ((  void (*) (Dictionary_2_t3070427539 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2092139626_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m602713029_gshared (Dictionary_2_t3070427539 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m602713029(__this, ___key, method) ((  bool (*) (Dictionary_2_t3070427539 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m602713029_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3108198470_gshared (Dictionary_2_t3070427539 * __this, int32_t ___key, Il2CppObject ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3108198470(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t3070427539 *, int32_t, Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m3108198470_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C"  KeyCollection_t634635599 * Dictionary_2_get_Keys_m1900997095_gshared (Dictionary_2_t3070427539 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1900997095(__this, method) ((  KeyCollection_t634635599 * (*) (Dictionary_2_t3070427539 *, const MethodInfo*))Dictionary_2_get_Keys_m1900997095_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C"  ValueCollection_t4042759191 * Dictionary_2_get_Values_m372946023_gshared (Dictionary_2_t3070427539 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m372946023(__this, method) ((  ValueCollection_t4042759191 * (*) (Dictionary_2_t3070427539 *, const MethodInfo*))Dictionary_2_get_Values_m372946023_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C"  int32_t Dictionary_2_ToTKey_m2900575080_gshared (Dictionary_2_t3070427539 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m2900575080(__this, ___key, method) ((  int32_t (*) (Dictionary_2_t3070427539 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m2900575080_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m14471464_gshared (Dictionary_2_t3070427539 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14471464(__this, ___value, method) ((  Il2CppObject * (*) (Dictionary_2_t3070427539 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m14471464_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m790970878_gshared (Dictionary_2_t3070427539 * __this, KeyValuePair_2_t1627747851  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m790970878(__this, ___pair, method) ((  bool (*) (Dictionary_2_t3070427539 *, KeyValuePair_2_t1627747851 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m790970878_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C"  Enumerator_t367756265  Dictionary_2_GetEnumerator_m706253773_gshared (Dictionary_2_t3070427539 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m706253773(__this, method) ((  Enumerator_t367756265  (*) (Dictionary_2_t3070427539 *, const MethodInfo*))Dictionary_2_GetEnumerator_m706253773_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t1445113794  Dictionary_2_U3CCopyToU3Em__0_m741309042_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m741309042(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t1445113794  (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m741309042_gshared)(__this /* static, unused */, ___key, ___value, method)
