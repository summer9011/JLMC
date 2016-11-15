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

// System.Resources.ResourceSet
struct ResourceSet_t2509516750;
// System.IO.Stream
struct Stream_t2768948945;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t1964584666;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1087952561;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "mscorlib_System_IO_UnmanagedMemoryStream1964584666.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Resources.ResourceSet::.ctor()
extern "C"  void ResourceSet__ctor_m2566914412 (ResourceSet_t2509516750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.Stream)
extern "C"  void ResourceSet__ctor_m993837251 (ResourceSet_t2509516750 * __this, Stream_t2768948945 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.UnmanagedMemoryStream)
extern "C"  void ResourceSet__ctor_m129522286 (ResourceSet_t2509516750 * __this, UnmanagedMemoryStream_t1964584666 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.String)
extern "C"  void ResourceSet__ctor_m1222864106 (ResourceSet_t2509516750 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Resources.ResourceSet::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ResourceSet_System_Collections_IEnumerable_GetEnumerator_m1568302465 (ResourceSet_t2509516750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose()
extern "C"  void ResourceSet_Dispose_m2968479859 (ResourceSet_t2509516750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose(System.Boolean)
extern "C"  void ResourceSet_Dispose_m2615980752 (ResourceSet_t2509516750 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Resources.ResourceSet::GetEnumerator()
extern "C"  Il2CppObject * ResourceSet_GetEnumerator_m1363893992 (ResourceSet_t2509516750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObjectInternal(System.String,System.Boolean)
extern "C"  Il2CppObject * ResourceSet_GetObjectInternal_m3556256510 (ResourceSet_t2509516750 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String)
extern "C"  Il2CppObject * ResourceSet_GetObject_m1232449476 (ResourceSet_t2509516750 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String,System.Boolean)
extern "C"  Il2CppObject * ResourceSet_GetObject_m730549927 (ResourceSet_t2509516750 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::ReadResources()
extern "C"  void ResourceSet_ReadResources_m1669023823 (ResourceSet_t2509516750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
