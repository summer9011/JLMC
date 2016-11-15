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

// UIGrid
struct UIGrid_t2420180906;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t3631216940;
// UnityEngine.Transform
struct Transform_t224878301;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"

// System.Void UIGrid::.ctor()
extern "C"  void UIGrid__ctor_m2802562027 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::set_repositionNow(System.Boolean)
extern "C"  void UIGrid_set_repositionNow_m283086129 (UIGrid_t2420180906 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> UIGrid::GetChildList()
extern "C"  List_1_t3631216940 * UIGrid_GetChildList_m1903002755 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIGrid::GetChild(System.Int32)
extern "C"  Transform_t224878301 * UIGrid_GetChild_m2110704164 (UIGrid_t2420180906 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::GetIndex(UnityEngine.Transform)
extern "C"  int32_t UIGrid_GetIndex_m3717683656 (UIGrid_t2420180906 * __this, Transform_t224878301 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::AddChild(UnityEngine.Transform)
extern "C"  void UIGrid_AddChild_m2431842139 (UIGrid_t2420180906 * __this, Transform_t224878301 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::AddChild(UnityEngine.Transform,System.Boolean)
extern "C"  void UIGrid_AddChild_m2432384894 (UIGrid_t2420180906 * __this, Transform_t224878301 * ___trans, bool ___sort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGrid::RemoveChild(UnityEngine.Transform)
extern "C"  bool UIGrid_RemoveChild_m2671274706 (UIGrid_t2420180906 * __this, Transform_t224878301 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Init()
extern "C"  void UIGrid_Init_m4113844497 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Start()
extern "C"  void UIGrid_Start_m1752024759 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Update()
extern "C"  void UIGrid_Update_m1841310228 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnValidate()
extern "C"  void UIGrid_OnValidate_m2214212974 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortByName(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t UIGrid_SortByName_m2117232175 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___a, Transform_t224878301 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortHorizontal(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t UIGrid_SortHorizontal_m4102275981 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___a, Transform_t224878301 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortVertical(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t UIGrid_SortVertical_m3913489617 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___a, Transform_t224878301 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Sort(System.Collections.Generic.List`1<UnityEngine.Transform>)
extern "C"  void UIGrid_Sort_m1537977044 (UIGrid_t2420180906 * __this, List_1_t3631216940 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Reposition()
extern "C"  void UIGrid_Reposition_m1337808537 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::ConstrainWithinPanel()
extern "C"  void UIGrid_ConstrainWithinPanel_m3032288325 (UIGrid_t2420180906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::ResetPosition(System.Collections.Generic.List`1<UnityEngine.Transform>)
extern "C"  void UIGrid_ResetPosition_m2259679356 (UIGrid_t2420180906 * __this, List_1_t3631216940 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
