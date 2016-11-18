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

// System.Action`2<System.Object,EasyAR.VideoPlayer/PlayerStatus>
struct Action_2_t1692335579;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer_PlayerStatus2767287061.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Action`2<System.Object,EasyAR.VideoPlayer/PlayerStatus>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m3213653565_gshared (Action_2_t1692335579 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_2__ctor_m3213653565(__this, ___object, ___method, method) ((  void (*) (Action_2_t1692335579 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m3213653565_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Object,EasyAR.VideoPlayer/PlayerStatus>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m1542860408_gshared (Action_2_t1692335579 * __this, Il2CppObject * ___arg1, int32_t ___arg2, const MethodInfo* method);
#define Action_2_Invoke_m1542860408(__this, ___arg1, ___arg2, method) ((  void (*) (Action_2_t1692335579 *, Il2CppObject *, int32_t, const MethodInfo*))Action_2_Invoke_m1542860408_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Object,EasyAR.VideoPlayer/PlayerStatus>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m1332038721_gshared (Action_2_t1692335579 * __this, Il2CppObject * ___arg1, int32_t ___arg2, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_2_BeginInvoke_m1332038721(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_2_t1692335579 *, Il2CppObject *, int32_t, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m1332038721_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Object,EasyAR.VideoPlayer/PlayerStatus>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m682078483_gshared (Action_2_t1692335579 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_2_EndInvoke_m682078483(__this, ___result, method) ((  void (*) (Action_2_t1692335579 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m682078483_gshared)(__this, ___result, method)
