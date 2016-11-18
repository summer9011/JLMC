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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2499617345;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1527285693;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t1445035529;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Object
struct Il2CppObject;
// System.Boolean[]
struct BooleanU5BU5D_t2235910900;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_V3119581714.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void ValueCollection__ctor_m1825701219_gshared (ValueCollection_t2499617345 * __this, Dictionary_2_t1527285693 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m1825701219(__this, ___dictionary, method) ((  void (*) (ValueCollection_t2499617345 *, Dictionary_2_t1527285693 *, const MethodInfo*))ValueCollection__ctor_m1825701219_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1367462045_gshared (ValueCollection_t2499617345 * __this, bool ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1367462045(__this, ___item, method) ((  void (*) (ValueCollection_t2499617345 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1367462045_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m276534782_gshared (ValueCollection_t2499617345 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m276534782(__this, method) ((  void (*) (ValueCollection_t2499617345 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m276534782_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m3742779759_gshared (ValueCollection_t2499617345 * __this, bool ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m3742779759(__this, ___item, method) ((  bool (*) (ValueCollection_t2499617345 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m3742779759_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m270427956_gshared (ValueCollection_t2499617345 * __this, bool ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m270427956(__this, ___item, method) ((  bool (*) (ValueCollection_t2499617345 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m270427956_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C"  Il2CppObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m971481852_gshared (ValueCollection_t2499617345 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m971481852(__this, method) ((  Il2CppObject* (*) (ValueCollection_t2499617345 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m971481852_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ValueCollection_System_Collections_ICollection_CopyTo_m3262726594_gshared (ValueCollection_t2499617345 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m3262726594(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t2499617345 *, Il2CppArray *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m3262726594_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1058162477_gshared (ValueCollection_t2499617345 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1058162477(__this, method) ((  Il2CppObject * (*) (ValueCollection_t2499617345 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1058162477_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m3005456072_gshared (ValueCollection_t2499617345 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m3005456072(__this, method) ((  bool (*) (ValueCollection_t2499617345 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m3005456072_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * ValueCollection_System_Collections_ICollection_get_SyncRoot_m568936428_gshared (ValueCollection_t2499617345 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m568936428(__this, method) ((  Il2CppObject * (*) (ValueCollection_t2499617345 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m568936428_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::CopyTo(TValue[],System.Int32)
extern "C"  void ValueCollection_CopyTo_m2890257710_gshared (ValueCollection_t2499617345 * __this, BooleanU5BU5D_t2235910900* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m2890257710(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t2499617345 *, BooleanU5BU5D_t2235910900*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m2890257710_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::GetEnumerator()
extern "C"  Enumerator_t3119581716  ValueCollection_GetEnumerator_m1860544291_gshared (ValueCollection_t2499617345 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m1860544291(__this, method) ((  Enumerator_t3119581716  (*) (ValueCollection_t2499617345 *, const MethodInfo*))ValueCollection_GetEnumerator_m1860544291_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::get_Count()
extern "C"  int32_t ValueCollection_get_Count_m494337310_gshared (ValueCollection_t2499617345 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m494337310(__this, method) ((  int32_t (*) (ValueCollection_t2499617345 *, const MethodInfo*))ValueCollection_get_Count_m494337310_gshared)(__this, method)
