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

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t3335947356;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t935315245;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2385310185;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord935315245.h"
#include "mscorlib_System_Reflection_MemberInfo1952312350.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2385310185.h"

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C"  void FixupRecord__ctor_m991048410 (FixupRecord_t3335947356 * __this, ObjectRecord_t935315245 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t935315245 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void FixupRecord_FixupImpl_m2837267335 (FixupRecord_t3335947356 * __this, ObjectManager_t2385310185 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
