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

// UIGeometry
struct UIGeometry_t1005900006;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t686006439;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t686006440;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t2983401365;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t686006438;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41261955742.h"

// System.Void UIGeometry::.ctor()
extern "C"  void UIGeometry__ctor_m4281277957 (UIGeometry_t1005900006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGeometry::get_hasVertices()
extern "C"  bool UIGeometry_get_hasVertices_m2650326039 (UIGeometry_t1005900006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGeometry::get_hasTransformed()
extern "C"  bool UIGeometry_get_hasTransformed_m67111151 (UIGeometry_t1005900006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::Clear()
extern "C"  void UIGeometry_Clear_m3476537084 (UIGeometry_t1005900006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::ApplyTransform(UnityEngine.Matrix4x4)
extern "C"  void UIGeometry_ApplyTransform_m2778936765 (UIGeometry_t1005900006 * __this, Matrix4x4_t1261955742  ___widgetToPanel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::WriteToBuffers(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>)
extern "C"  void UIGeometry_WriteToBuffers_m4147440500 (UIGeometry_t1005900006 * __this, BetterList_1_t686006439 * ___v, BetterList_1_t686006440 * ___u, BetterList_1_t2983401365 * ___c, BetterList_1_t686006439 * ___n, BetterList_1_t686006438 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
