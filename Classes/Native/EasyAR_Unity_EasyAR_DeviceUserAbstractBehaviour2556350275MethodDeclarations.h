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

// EasyAR.DeviceUserAbstractBehaviour
struct DeviceUserAbstractBehaviour_t2556350275;
// System.Action`2<EasyAR.DeviceUserAbstractBehaviour,EasyAR.DeviceAbstractBehaviour>
struct Action_2_t3984312819;
// System.Action`1<EasyAR.DeviceUserAbstractBehaviour>
struct Action_1_t1802713002;
// EasyAR.DeviceAbstractBehaviour
struct DeviceAbstractBehaviour_t4065891864;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_DeviceAbstractBehaviour4065891864.h"

// System.Void EasyAR.DeviceUserAbstractBehaviour::.ctor()
extern "C"  void DeviceUserAbstractBehaviour__ctor_m2308843570 (DeviceUserAbstractBehaviour_t2556350275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.DeviceUserAbstractBehaviour::add_WorkStart(System.Action`2<EasyAR.DeviceUserAbstractBehaviour,EasyAR.DeviceAbstractBehaviour>)
extern "C"  void DeviceUserAbstractBehaviour_add_WorkStart_m404027479 (DeviceUserAbstractBehaviour_t2556350275 * __this, Action_2_t3984312819 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.DeviceUserAbstractBehaviour::remove_WorkStart(System.Action`2<EasyAR.DeviceUserAbstractBehaviour,EasyAR.DeviceAbstractBehaviour>)
extern "C"  void DeviceUserAbstractBehaviour_remove_WorkStart_m2519628628 (DeviceUserAbstractBehaviour_t2556350275 * __this, Action_2_t3984312819 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.DeviceUserAbstractBehaviour::add_WorkStop(System.Action`1<EasyAR.DeviceUserAbstractBehaviour>)
extern "C"  void DeviceUserAbstractBehaviour_add_WorkStop_m519005094 (DeviceUserAbstractBehaviour_t2556350275 * __this, Action_1_t1802713002 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.DeviceUserAbstractBehaviour::remove_WorkStop(System.Action`1<EasyAR.DeviceUserAbstractBehaviour>)
extern "C"  void DeviceUserAbstractBehaviour_remove_WorkStop_m383124693 (DeviceUserAbstractBehaviour_t2556350275 * __this, Action_1_t1802713002 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.DeviceUserAbstractBehaviour::Bind(EasyAR.DeviceAbstractBehaviour)
extern "C"  void DeviceUserAbstractBehaviour_Bind_m408882147 (DeviceUserAbstractBehaviour_t2556350275 * __this, DeviceAbstractBehaviour_t4065891864 * ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.DeviceUserAbstractBehaviour::OnWorkStart()
extern "C"  void DeviceUserAbstractBehaviour_OnWorkStart_m1346882054 (DeviceUserAbstractBehaviour_t2556350275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.DeviceUserAbstractBehaviour::OnWorkStop()
extern "C"  void DeviceUserAbstractBehaviour_OnWorkStop_m2301593548 (DeviceUserAbstractBehaviour_t2556350275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
