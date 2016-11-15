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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceCa504508649.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Resources.ResourceReader/ResourceCacheItem::.ctor(System.String,System.Object)
extern "C"  void ResourceCacheItem__ctor_m3209157611 (ResourceCacheItem_t504508649 * __this, String_t* ___name, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ResourceCacheItem_t504508649;
struct ResourceCacheItem_t504508649_marshaled_com;

extern "C" void ResourceCacheItem_t504508649_marshal_com(const ResourceCacheItem_t504508649& unmarshaled, ResourceCacheItem_t504508649_marshaled_com& marshaled);
extern "C" void ResourceCacheItem_t504508649_marshal_com_back(const ResourceCacheItem_t504508649_marshaled_com& marshaled, ResourceCacheItem_t504508649& unmarshaled);
extern "C" void ResourceCacheItem_t504508649_marshal_com_cleanup(ResourceCacheItem_t504508649_marshaled_com& marshaled);
