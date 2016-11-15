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

// UISprite
struct UISprite_t603616735;
// UnityEngine.Material
struct Material_t2197338622;
// UIAtlas
struct UIAtlas_t1304615221;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t2862501359;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t686006439;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t686006440;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t2983401365;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIAtlas1304615221.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"
#include "AssemblyU2DCSharp_UISpriteData2862501359.h"

// System.Void UISprite::.ctor()
extern "C"  void UISprite__ctor_m938237794 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UISprite::get_material()
extern "C"  Material_t2197338622 * UISprite_get_material_m9698551 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UISprite::get_atlas()
extern "C"  UIAtlas_t1304615221 * UISprite_get_atlas_m890067996 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_atlas(UIAtlas)
extern "C"  void UISprite_set_atlas_m2870060671 (UISprite_t603616735 * __this, UIAtlas_t1304615221 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UISprite::get_spriteName()
extern "C"  String_t* UISprite_get_spriteName_m3653609306 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_spriteName(System.String)
extern "C"  void UISprite_set_spriteName_m3423882207 (UISprite_t603616735 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_isValid()
extern "C"  bool UISprite_get_isValid_m842135215 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_fillCenter()
extern "C"  bool UISprite_get_fillCenter_m1394291695 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillCenter(System.Boolean)
extern "C"  void UISprite_set_fillCenter_m3335026688 (UISprite_t603616735 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UISprite::get_border()
extern "C"  Vector4_t465617796  UISprite_get_border_m549308326 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UISprite::get_pixelSize()
extern "C"  float UISprite_get_pixelSize_m3211725138 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UISprite::get_minWidth()
extern "C"  int32_t UISprite_get_minWidth_m2002942869 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UISprite::get_minHeight()
extern "C"  int32_t UISprite_get_minHeight_m976003656 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UISprite::get_drawingDimensions()
extern "C"  Vector4_t465617796  UISprite_get_drawingDimensions_m1685696981 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_premultipliedAlpha()
extern "C"  bool UISprite_get_premultipliedAlpha_m4151096165 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UISprite::GetAtlasSprite()
extern "C"  UISpriteData_t2862501359 * UISprite_GetAtlasSprite_m158326904 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SetAtlasSprite(UISpriteData)
extern "C"  void UISprite_SetAtlasSprite_m1218638491 (UISprite_t603616735 * __this, UISpriteData_t2862501359 * ___sp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::MakePixelPerfect()
extern "C"  void UISprite_MakePixelPerfect_m3714401031 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnInit()
extern "C"  void UISprite_OnInit_m642088849 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnUpdate()
extern "C"  void UISprite_OnUpdate_m1865526516 (UISprite_t603616735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void UISprite_OnFill_m4101057731 (UISprite_t603616735 * __this, BetterList_1_t686006439 * ___verts, BetterList_1_t686006440 * ___uvs, BetterList_1_t2983401365 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
