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

// InvDatabase
struct InvDatabase_t2993806330;
// InvDatabase[]
struct InvDatabaseU5BU5D_t3737084639;
// InvBaseItem
struct InvBaseItem_t3744336511;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "AssemblyU2DCSharp_InvBaseItem3744336511.h"

// System.Void InvDatabase::.ctor()
extern "C"  void InvDatabase__ctor_m937689975 (InvDatabase_t2993806330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::.cctor()
extern "C"  void InvDatabase__cctor_m3591116280 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvDatabase[] InvDatabase::get_list()
extern "C"  InvDatabaseU5BU5D_t3737084639* InvDatabase_get_list_m1311052101 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::OnEnable()
extern "C"  void InvDatabase_OnEnable_m975722443 (InvDatabase_t2993806330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::OnDisable()
extern "C"  void InvDatabase_OnDisable_m1482570466 (InvDatabase_t2993806330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::GetItem(System.Int32)
extern "C"  InvBaseItem_t3744336511 * InvDatabase_GetItem_m1127392087 (InvDatabase_t2993806330 * __this, int32_t ___id16, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvDatabase InvDatabase::GetDatabase(System.Int32)
extern "C"  InvDatabase_t2993806330 * InvDatabase_GetDatabase_m1206218878 (Il2CppObject * __this /* static, unused */, int32_t ___dbID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::FindByID(System.Int32)
extern "C"  InvBaseItem_t3744336511 * InvDatabase_FindByID_m2650681923 (Il2CppObject * __this /* static, unused */, int32_t ___id32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::FindByName(System.String)
extern "C"  InvBaseItem_t3744336511 * InvDatabase_FindByName_m751600500 (Il2CppObject * __this /* static, unused */, String_t* ___exact, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InvDatabase::FindItemID(InvBaseItem)
extern "C"  int32_t InvDatabase_FindItemID_m1930620829 (Il2CppObject * __this /* static, unused */, InvBaseItem_t3744336511 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
