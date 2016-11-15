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

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t1619931528;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t935315245;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2385310185;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord935315245.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2385310185.h"

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C"  void MultiArrayFixupRecord__ctor_m3486976229 (MultiArrayFixupRecord_t1619931528 * __this, ObjectRecord_t935315245 * ___objectToBeFixed, Int32U5BU5D_t3315407976* ___indices, ObjectRecord_t935315245 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void MultiArrayFixupRecord_FixupImpl_m3100166835 (MultiArrayFixupRecord_t1619931528 * __this, ObjectManager_t2385310185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
