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

// UITexture
struct UITexture_t2537039969;
// UnityEngine.Texture
struct Texture_t465682066;
// UnityEngine.Material
struct Material_t2197338622;
// UnityEngine.Shader
struct Shader_t2331662484;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t686006439;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t686006440;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t2983401365;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture465682066.h"
#include "UnityEngine_UnityEngine_Material2197338622.h"
#include "UnityEngine_UnityEngine_Shader2331662484.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"

// System.Void UITexture::.ctor()
extern "C"  void UITexture__ctor_m488982864 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UITexture::get_mainTexture()
extern "C"  Texture_t465682066 * UITexture_get_mainTexture_m2427918336 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_mainTexture(UnityEngine.Texture)
extern "C"  void UITexture_set_mainTexture_m4061503025 (UITexture_t2537039969 * __this, Texture_t465682066 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UITexture::get_material()
extern "C"  Material_t2197338622 * UITexture_get_material_m4212599041 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_material(UnityEngine.Material)
extern "C"  void UITexture_set_material_m343400984 (UITexture_t2537039969 * __this, Material_t2197338622 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UITexture::get_shader()
extern "C"  Shader_t2331662484 * UITexture_get_shader_m1619297057 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_shader(UnityEngine.Shader)
extern "C"  void UITexture_set_shader_m3459312240 (UITexture_t2537039969 * __this, Shader_t2331662484 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITexture::get_premultipliedAlpha()
extern "C"  bool UITexture_get_premultipliedAlpha_m3787724459 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UITexture::get_border()
extern "C"  Vector4_t465617796  UITexture_get_border_m2764094926 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_border(UnityEngine.Vector4)
extern "C"  void UITexture_set_border_m2681915231 (UITexture_t2537039969 * __this, Vector4_t465617796  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UITexture::get_uvRect()
extern "C"  Rect_t2553848979  UITexture_get_uvRect_m4034063954 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_uvRect(UnityEngine.Rect)
extern "C"  void UITexture_set_uvRect_m56074597 (UITexture_t2537039969 * __this, Rect_t2553848979  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UITexture::get_drawingDimensions()
extern "C"  Vector4_t465617796  UITexture_get_drawingDimensions_m2720269915 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITexture::get_fixedAspect()
extern "C"  bool UITexture_get_fixedAspect_m525979187 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_fixedAspect(System.Boolean)
extern "C"  void UITexture_set_fixedAspect_m939630292 (UITexture_t2537039969 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::MakePixelPerfect()
extern "C"  void UITexture_MakePixelPerfect_m1800436093 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::OnUpdate()
extern "C"  void UITexture_OnUpdate_m1644962262 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void UITexture_OnFill_m1697394353 (UITexture_t2537039969 * __this, BetterList_1_t686006439 * ___verts, BetterList_1_t686006440 * ___uvs, BetterList_1_t2983401365 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
