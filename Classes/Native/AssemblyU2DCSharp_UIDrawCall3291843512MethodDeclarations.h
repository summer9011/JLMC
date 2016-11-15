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

// UIDrawCall
struct UIDrawCall_t3291843512;
// BetterList`1<UIDrawCall>
struct BetterList_1_t3512232154;
// UnityEngine.Transform
struct Transform_t224878301;
// UnityEngine.Material
struct Material_t2197338622;
// UnityEngine.Texture
struct Texture_t465682066;
// UnityEngine.Shader
struct Shader_t2331662484;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// UIPanel
struct UIPanel_t1795085332;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material2197338622.h"
#include "UnityEngine_UnityEngine_Texture465682066.h"
#include "UnityEngine_UnityEngine_Shader2331662484.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "AssemblyU2DCSharp_UIPanel1795085332.h"
#include "mscorlib_System_String1967731336.h"
#include "AssemblyU2DCSharp_UIDrawCall3291843512.h"

// System.Void UIDrawCall::.ctor()
extern "C"  void UIDrawCall__ctor_m2681451025 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::.cctor()
extern "C"  void UIDrawCall__cctor_m1043664882 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_list()
extern "C"  BetterList_1_t3512232154 * UIDrawCall_get_list_m281580932 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_activeList()
extern "C"  BetterList_1_t3512232154 * UIDrawCall_get_activeList_m442662138 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_inactiveList()
extern "C"  BetterList_1_t3512232154 * UIDrawCall_get_inactiveList_m2331731169 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_renderQueue()
extern "C"  int32_t UIDrawCall_get_renderQueue_m2697288129 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_renderQueue(System.Int32)
extern "C"  void UIDrawCall_set_renderQueue_m1401490722 (UIDrawCall_t3291843512 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_sortingOrder()
extern "C"  int32_t UIDrawCall_get_sortingOrder_m2177827644 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_sortingOrder(System.Int32)
extern "C"  void UIDrawCall_set_sortingOrder_m2261644529 (UIDrawCall_t3291843512 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_finalRenderQueue()
extern "C"  int32_t UIDrawCall_get_finalRenderQueue_m3999468577 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIDrawCall::get_cachedTransform()
extern "C"  Transform_t224878301 * UIDrawCall_get_cachedTransform_m3072307484 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_baseMaterial()
extern "C"  Material_t2197338622 * UIDrawCall_get_baseMaterial_m1163998273 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_baseMaterial(UnityEngine.Material)
extern "C"  void UIDrawCall_set_baseMaterial_m3075112536 (UIDrawCall_t3291843512 * __this, Material_t2197338622 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_dynamicMaterial()
extern "C"  Material_t2197338622 * UIDrawCall_get_dynamicMaterial_m76011065 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIDrawCall::get_mainTexture()
extern "C"  Texture_t465682066 * UIDrawCall_get_mainTexture_m1930380135 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_mainTexture(UnityEngine.Texture)
extern "C"  void UIDrawCall_set_mainTexture_m729525252 (UIDrawCall_t3291843512 * __this, Texture_t465682066 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UIDrawCall::get_shader()
extern "C"  Shader_t2331662484 * UIDrawCall_get_shader_m3395586662 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_shader(UnityEngine.Shader)
extern "C"  void UIDrawCall_set_shader_m962412499 (UIDrawCall_t3291843512 * __this, Shader_t2331662484 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_triangles()
extern "C"  int32_t UIDrawCall_get_triangles_m2367011471 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDrawCall::get_isClipped()
extern "C"  bool UIDrawCall_get_isClipped_m1934861829 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::CreateMaterial()
extern "C"  void UIDrawCall_CreateMaterial_m3460284722 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::RebuildMaterial()
extern "C"  Material_t2197338622 * UIDrawCall_RebuildMaterial_m3742491826 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateMaterials()
extern "C"  void UIDrawCall_UpdateMaterials_m437069610 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateGeometry(System.Int32)
extern "C"  void UIDrawCall_UpdateGeometry_m45724743 (UIDrawCall_t3291843512 * __this, int32_t ___widgetCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UIDrawCall::GenerateCachedIndexBuffer(System.Int32,System.Int32)
extern "C"  Int32U5BU5D_t3315407976* UIDrawCall_GenerateCachedIndexBuffer_m3243077292 (UIDrawCall_t3291843512 * __this, int32_t ___vertexCount, int32_t ___indexCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnWillRenderObject()
extern "C"  void UIDrawCall_OnWillRenderObject_m1693728361 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::SetClipping(System.Int32,UnityEngine.Vector4,UnityEngine.Vector2,System.Single)
extern "C"  void UIDrawCall_SetClipping_m952108795 (UIDrawCall_t3291843512 * __this, int32_t ___index, Vector4_t465617796  ___cr, Vector2_t465617798  ___soft, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Awake()
extern "C"  void UIDrawCall_Awake_m793313476 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnEnable()
extern "C"  void UIDrawCall_OnEnable_m1963970617 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDisable()
extern "C"  void UIDrawCall_OnDisable_m562679316 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDestroy()
extern "C"  void UIDrawCall_OnDestroy_m4164280926 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(UIPanel,UnityEngine.Material,UnityEngine.Texture,UnityEngine.Shader)
extern "C"  UIDrawCall_t3291843512 * UIDrawCall_Create_m68224828 (Il2CppObject * __this /* static, unused */, UIPanel_t1795085332 * ___panel, Material_t2197338622 * ___mat, Texture_t465682066 * ___tex, Shader_t2331662484 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(System.String,UIPanel,UnityEngine.Material,UnityEngine.Texture,UnityEngine.Shader)
extern "C"  UIDrawCall_t3291843512 * UIDrawCall_Create_m2207866268 (Il2CppObject * __this /* static, unused */, String_t* ___name, UIPanel_t1795085332 * ___pan, Material_t2197338622 * ___mat, Texture_t465682066 * ___tex, Shader_t2331662484 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(System.String)
extern "C"  UIDrawCall_t3291843512 * UIDrawCall_Create_m9969686 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ClearAll()
extern "C"  void UIDrawCall_ClearAll_m62230569 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ReleaseAll()
extern "C"  void UIDrawCall_ReleaseAll_m1453355429 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ReleaseInactive()
extern "C"  void UIDrawCall_ReleaseInactive_m784056131 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::Count(UIPanel)
extern "C"  int32_t UIDrawCall_Count_m1750139584 (Il2CppObject * __this /* static, unused */, UIPanel_t1795085332 * ___panel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Destroy(UIDrawCall)
extern "C"  void UIDrawCall_Destroy_m660608057 (Il2CppObject * __this /* static, unused */, UIDrawCall_t3291843512 * ___dc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
