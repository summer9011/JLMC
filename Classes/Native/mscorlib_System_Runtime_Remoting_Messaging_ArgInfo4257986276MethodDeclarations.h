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

// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t4257986276;
// System.Reflection.MethodBase
struct MethodBase_t591550820;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodBase591550820.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfo2322548628.h"

// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern "C"  void ArgInfo__ctor_m3787931268 (ArgInfo_t4257986276 * __this, MethodBase_t591550820 * ___method, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern "C"  ObjectU5BU5D_t3632007997* ArgInfo_GetInOutArgs_m3184132151 (ArgInfo_t4257986276 * __this, ObjectU5BU5D_t3632007997* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
