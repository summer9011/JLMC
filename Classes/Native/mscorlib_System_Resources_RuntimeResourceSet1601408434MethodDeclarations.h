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

// System.Resources.RuntimeResourceSet
struct RuntimeResourceSet_t1601408434;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t1964584666;
// System.IO.Stream
struct Stream_t2768948945;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_UnmanagedMemoryStream1964584666.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Resources.RuntimeResourceSet::.ctor(System.IO.UnmanagedMemoryStream)
extern "C"  void RuntimeResourceSet__ctor_m1613034732 (RuntimeResourceSet_t1601408434 * __this, UnmanagedMemoryStream_t1964584666 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.RuntimeResourceSet::.ctor(System.IO.Stream)
extern "C"  void RuntimeResourceSet__ctor_m684285079 (RuntimeResourceSet_t1601408434 * __this, Stream_t2768948945 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.RuntimeResourceSet::.ctor(System.String)
extern "C"  void RuntimeResourceSet__ctor_m3991949484 (RuntimeResourceSet_t1601408434 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::GetObject(System.String)
extern "C"  Il2CppObject * RuntimeResourceSet_GetObject_m3586640176 (RuntimeResourceSet_t1601408434 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::GetObject(System.String,System.Boolean)
extern "C"  Il2CppObject * RuntimeResourceSet_GetObject_m802265983 (RuntimeResourceSet_t1601408434 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::CloneDisposableObjectIfPossible(System.Object)
extern "C"  Il2CppObject * RuntimeResourceSet_CloneDisposableObjectIfPossible_m344935759 (RuntimeResourceSet_t1601408434 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
