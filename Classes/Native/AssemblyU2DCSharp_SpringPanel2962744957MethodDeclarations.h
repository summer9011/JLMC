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

// SpringPanel
struct SpringPanel_t2962744957;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

// System.Void SpringPanel::.ctor()
extern "C"  void SpringPanel__ctor_m1274026412 (SpringPanel_t2962744957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel::Start()
extern "C"  void SpringPanel_Start_m1191048324 (SpringPanel_t2962744957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel::Update()
extern "C"  void SpringPanel_Update_m1388284609 (SpringPanel_t2962744957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel::AdvanceTowardsPosition()
extern "C"  void SpringPanel_AdvanceTowardsPosition_m264411843 (SpringPanel_t2962744957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpringPanel SpringPanel::Begin(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  SpringPanel_t2962744957 * SpringPanel_Begin_m500962967 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, Vector3_t465617797  ___pos, float ___strength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
