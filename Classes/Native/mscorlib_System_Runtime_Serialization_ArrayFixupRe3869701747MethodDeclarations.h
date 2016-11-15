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

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t3869701747;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t935315245;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2385310185;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord935315245.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2385310185.h"

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C"  void ArrayFixupRecord__ctor_m3659990982 (ArrayFixupRecord_t3869701747 * __this, ObjectRecord_t935315245 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t935315245 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void ArrayFixupRecord_FixupImpl_m2377725358 (ArrayFixupRecord_t3869701747 * __this, ObjectManager_t2385310185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
