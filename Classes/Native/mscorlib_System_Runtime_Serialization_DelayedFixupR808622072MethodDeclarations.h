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

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t808622072;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t935315245;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2385310185;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord935315245.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2385310185.h"

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern "C"  void DelayedFixupRecord__ctor_m638928292 (DelayedFixupRecord_t808622072 * __this, ObjectRecord_t935315245 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t935315245 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void DelayedFixupRecord_FixupImpl_m4249966635 (DelayedFixupRecord_t808622072 * __this, ObjectManager_t2385310185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
