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

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t4134038527;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t935315245;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2385310185;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord935315245.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2385310185.h"

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
extern "C"  void BaseFixupRecord__ctor_m885244951 (BaseFixupRecord_t4134038527 * __this, ObjectRecord_t935315245 * ___objectToBeFixed, ObjectRecord_t935315245 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C"  bool BaseFixupRecord_DoFixup_m1821597450 (BaseFixupRecord_t4134038527 * __this, ObjectManager_t2385310185 * ___manager, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
