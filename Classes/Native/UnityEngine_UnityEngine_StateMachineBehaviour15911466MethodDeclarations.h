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

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t15911466;
// UnityEngine.Animator
struct Animator_t2442207934;
// UnityEngine.Experimental.Director.AnimatorControllerPlayable
struct AnimatorControllerPlayable_t1053511764;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animator2442207934.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo3342076411.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Anim1053511764.h"

// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C"  void StateMachineBehaviour__ctor_m153194 (StateMachineBehaviour_t15911466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateEnter_m1095276890 (StateMachineBehaviour_t15911466 * __this, Animator_t2442207934 * ___animator, AnimatorStateInfo_t3342076411  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateUpdate_m2021794605 (StateMachineBehaviour_t15911466 * __this, Animator_t2442207934 * ___animator, AnimatorStateInfo_t3342076411  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateExit_m1490844990 (StateMachineBehaviour_t15911466 * __this, Animator_t2442207934 * ___animator, AnimatorStateInfo_t3342076411  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateMove_m3403753809 (StateMachineBehaviour_t15911466 * __this, Animator_t2442207934 * ___animator, AnimatorStateInfo_t3342076411  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateIK_m3200380538 (StateMachineBehaviour_t15911466 * __this, Animator_t2442207934 * ___animator, AnimatorStateInfo_t3342076411  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateMachineEnter_m1007088766 (StateMachineBehaviour_t15911466 * __this, Animator_t2442207934 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateMachineExit_m526258580 (StateMachineBehaviour_t15911466 * __this, Animator_t2442207934 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  void StateMachineBehaviour_OnStateEnter_m2847783286 (StateMachineBehaviour_t15911466 * __this, Animator_t2442207934 * ___animator, AnimatorStateInfo_t3342076411  ___stateInfo, int32_t ___layerIndex, AnimatorControllerPlayable_t1053511764 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  void StateMachineBehaviour_OnStateUpdate_m811412975 (StateMachineBehaviour_t15911466 * __this, Animator_t2442207934 * ___animator, AnimatorStateInfo_t3342076411  ___stateInfo, int32_t ___layerIndex, AnimatorControllerPlayable_t1053511764 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  void StateMachineBehaviour_OnStateExit_m4064436078 (StateMachineBehaviour_t15911466 * __this, Animator_t2442207934 * ___animator, AnimatorStateInfo_t3342076411  ___stateInfo, int32_t ___layerIndex, AnimatorControllerPlayable_t1053511764 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  void StateMachineBehaviour_OnStateMove_m1941561287 (StateMachineBehaviour_t15911466 * __this, Animator_t2442207934 * ___animator, AnimatorStateInfo_t3342076411  ___stateInfo, int32_t ___layerIndex, AnimatorControllerPlayable_t1053511764 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  void StateMachineBehaviour_OnStateIK_m726770682 (StateMachineBehaviour_t15911466 * __this, Animator_t2442207934 * ___animator, AnimatorStateInfo_t3342076411  ___stateInfo, int32_t ___layerIndex, AnimatorControllerPlayable_t1053511764 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32,UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  void StateMachineBehaviour_OnStateMachineEnter_m1524239226 (StateMachineBehaviour_t15911466 * __this, Animator_t2442207934 * ___animator, int32_t ___stateMachinePathHash, AnimatorControllerPlayable_t1053511764 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32,UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  void StateMachineBehaviour_OnStateMachineExit_m2213014568 (StateMachineBehaviour_t15911466 * __this, Animator_t2442207934 * ___animator, int32_t ___stateMachinePathHash, AnimatorControllerPlayable_t1053511764 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
