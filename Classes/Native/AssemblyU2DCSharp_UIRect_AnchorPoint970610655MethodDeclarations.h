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

// UIRect/AnchorPoint
struct AnchorPoint_t970610655;
// UnityEngine.Transform
struct Transform_t224878301;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t897805512;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"

// System.Void UIRect/AnchorPoint::.ctor()
extern "C"  void AnchorPoint__ctor_m900805405 (AnchorPoint_t970610655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::.ctor(System.Single)
extern "C"  void AnchorPoint__ctor_m2264735902 (AnchorPoint_t970610655 * __this, float ___relative, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::Set(System.Single,System.Single)
extern "C"  void AnchorPoint_Set_m589392719 (AnchorPoint_t970610655 * __this, float ___relative, float ___absolute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::Set(UnityEngine.Transform,System.Single,System.Single)
extern "C"  void AnchorPoint_Set_m72636650 (AnchorPoint_t970610655 * __this, Transform_t224878301 * ___target, float ___relative, float ___absolute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetToNearest(System.Single,System.Single,System.Single)
extern "C"  void AnchorPoint_SetToNearest_m2851296319 (AnchorPoint_t970610655 * __this, float ___abs0, float ___abs1, float ___abs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetToNearest(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void AnchorPoint_SetToNearest_m2699789130 (AnchorPoint_t970610655 * __this, float ___rel0, float ___rel1, float ___rel2, float ___abs0, float ___abs1, float ___abs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetHorizontal(UnityEngine.Transform,System.Single)
extern "C"  void AnchorPoint_SetHorizontal_m3575214515 (AnchorPoint_t970610655 * __this, Transform_t224878301 * ___parent, float ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetVertical(UnityEngine.Transform,System.Single)
extern "C"  void AnchorPoint_SetVertical_m3286489459 (AnchorPoint_t970610655 * __this, Transform_t224878301 * ___parent, float ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIRect/AnchorPoint::GetSides(UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t897805512* AnchorPoint_GetSides_m2242848644 (AnchorPoint_t970610655 * __this, Transform_t224878301 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
