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

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t2280982932;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t1616501802;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_t3874649210;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3653580638;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array4136897760.h"
#include "System_System_Security_Cryptography_X509Certificat3653580638.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
extern "C"  void X509ChainElementCollection__ctor_m2389346408 (X509ChainElementCollection_t2280982932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void X509ChainElementCollection_System_Collections_ICollection_CopyTo_m1467895312 (X509ChainElementCollection_t2280982932 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m2559704689 (X509ChainElementCollection_t2280982932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
extern "C"  int32_t X509ChainElementCollection_get_Count_m905965108 (X509ChainElementCollection_t2280982932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Item(System.Int32)
extern "C"  X509ChainElement_t1616501802 * X509ChainElementCollection_get_Item_m1494130666 (X509ChainElementCollection_t2280982932 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_SyncRoot()
extern "C"  Il2CppObject * X509ChainElementCollection_get_SyncRoot_m579710009 (X509ChainElementCollection_t2280982932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::GetEnumerator()
extern "C"  X509ChainElementEnumerator_t3874649210 * X509ChainElementCollection_GetEnumerator_m3367250365 (X509ChainElementCollection_t2280982932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  void X509ChainElementCollection_Add_m1511936349 (X509ChainElementCollection_t2280982932 * __this, X509Certificate2_t3653580638 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Clear()
extern "C"  void X509ChainElementCollection_Clear_m414681645 (X509ChainElementCollection_t2280982932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509ChainElementCollection_Contains_m3599995067 (X509ChainElementCollection_t2280982932 * __this, X509Certificate2_t3653580638 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
