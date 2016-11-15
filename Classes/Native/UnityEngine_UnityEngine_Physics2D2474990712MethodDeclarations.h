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

// UnityEngine.Collider2D
struct Collider2D_t445179443;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t3063362466;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C"  void Physics2D__cctor_m3532647019 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapPoint(UnityEngine.Vector2,System.Int32)
extern "C"  Collider2D_t445179443 * Physics2D_OverlapPoint_m845302844 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___point, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::INTERNAL_CALL_OverlapPoint(UnityEngine.Vector2&,System.Int32,System.Single,System.Single)
extern "C"  Collider2D_t445179443 * Physics2D_INTERNAL_CALL_OverlapPoint_m1899787557 (Il2CppObject * __this /* static, unused */, Vector2_t465617798 * ___point, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapPointAll(UnityEngine.Vector2,System.Int32)
extern "C"  Collider2DU5BU5D_t3063362466* Physics2D_OverlapPointAll_m2474093721 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___point, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::INTERNAL_CALL_OverlapPointAll(UnityEngine.Vector2&,System.Int32,System.Single,System.Single)
extern "C"  Collider2DU5BU5D_t3063362466* Physics2D_INTERNAL_CALL_OverlapPointAll_m398803016 (Il2CppObject * __this /* static, unused */, Vector2_t465617798 * ___point, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
