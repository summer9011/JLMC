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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceIn933024228.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Resources.ResourceReader/ResourceInfo::.ctor(System.String,System.Int64,System.Int32)
extern "C"  void ResourceInfo__ctor_m2401359321 (ResourceInfo_t933024228 * __this, String_t* ___resourceName, int64_t ___valuePosition, int32_t ___type_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ResourceInfo_t933024228;
struct ResourceInfo_t933024228_marshaled_pinvoke;

extern "C" void ResourceInfo_t933024228_marshal_pinvoke(const ResourceInfo_t933024228& unmarshaled, ResourceInfo_t933024228_marshaled_pinvoke& marshaled);
extern "C" void ResourceInfo_t933024228_marshal_pinvoke_back(const ResourceInfo_t933024228_marshaled_pinvoke& marshaled, ResourceInfo_t933024228& unmarshaled);
extern "C" void ResourceInfo_t933024228_marshal_pinvoke_cleanup(ResourceInfo_t933024228_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ResourceInfo_t933024228;
struct ResourceInfo_t933024228_marshaled_com;

extern "C" void ResourceInfo_t933024228_marshal_com(const ResourceInfo_t933024228& unmarshaled, ResourceInfo_t933024228_marshaled_com& marshaled);
extern "C" void ResourceInfo_t933024228_marshal_com_back(const ResourceInfo_t933024228_marshaled_com& marshaled, ResourceInfo_t933024228& unmarshaled);
extern "C" void ResourceInfo_t933024228_marshal_com_cleanup(ResourceInfo_t933024228_marshaled_com& marshaled);
