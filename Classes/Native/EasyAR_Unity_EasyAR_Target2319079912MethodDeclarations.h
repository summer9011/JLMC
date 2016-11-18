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

// EasyAR.Target
struct Target_t2319079912;
// System.Action`1<EasyAR.Target>
struct Action_1_t1565442639;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_String1967731336.h"

// System.Void EasyAR.Target::.ctor()
extern "C"  void Target__ctor_m3078829961 (Target_t2319079912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::.ctor(System.IntPtr)
extern "C"  void Target__ctor_m2678633195 (Target_t2319079912 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::add_TargetSelfLoad(System.Action`1<EasyAR.Target>)
extern "C"  void Target_add_TargetSelfLoad_m975775296 (Target_t2319079912 * __this, Action_1_t1565442639 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::remove_TargetSelfLoad(System.Action`1<EasyAR.Target>)
extern "C"  void Target_remove_TargetSelfLoad_m1045174187 (Target_t2319079912 * __this, Action_1_t1565442639 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.Target::get_Id()
extern "C"  int32_t Target_get_Id_m819194587 (Target_t2319079912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::set_Id(System.Int32)
extern "C"  void Target_set_Id_m1697604696 (Target_t2319079912 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EasyAR.Target::get_Name()
extern "C"  String_t* Target_get_Name_m1955320360 (Target_t2319079912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::set_Name(System.String)
extern "C"  void Target_set_Name_m1408583337 (Target_t2319079912 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::set_Uid(System.String)
extern "C"  void Target_set_Uid_m990680086 (Target_t2319079912 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::set_MetaData(System.String)
extern "C"  void Target_set_MetaData_m4278420803 (Target_t2319079912 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::InitProperties()
extern "C"  void Target_InitProperties_m1749520134 (Target_t2319079912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Target::Dispose(System.Boolean)
extern "C"  void Target_Dispose_m2158074877 (Target_t2319079912 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.Target::Load(System.String,System.Int32,System.String)
extern "C"  bool Target_Load_m3706900298 (Target_t2319079912 * __this, String_t* ___path, int32_t ___storageType, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
