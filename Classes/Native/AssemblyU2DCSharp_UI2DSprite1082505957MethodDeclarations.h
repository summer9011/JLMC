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

// UI2DSprite
struct UI2DSprite_t1082505957;
// UnityEngine.Sprite
struct Sprite_t1118776648;
// UnityEngine.Material
struct Material_t2197338622;
// UnityEngine.Shader
struct Shader_t2331662484;
// UnityEngine.Texture
struct Texture_t465682066;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t686006439;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t686006440;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t2983401365;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Sprite1118776648.h"
#include "UnityEngine_UnityEngine_Material2197338622.h"
#include "UnityEngine_UnityEngine_Shader2331662484.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"

// System.Void UI2DSprite::.ctor()
extern "C"  void UI2DSprite__ctor_m2740384932 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UI2DSprite::get_sprite2D()
extern "C"  Sprite_t1118776648 * UI2DSprite_get_sprite2D_m2817313295 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_sprite2D(UnityEngine.Sprite)
extern "C"  void UI2DSprite_set_sprite2D_m1284703770 (UI2DSprite_t1082505957 * __this, Sprite_t1118776648 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UI2DSprite::get_material()
extern "C"  Material_t2197338622 * UI2DSprite_get_material_m483886433 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_material(UnityEngine.Material)
extern "C"  void UI2DSprite_set_material_m4089755336 (UI2DSprite_t1082505957 * __this, Material_t2197338622 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UI2DSprite::get_shader()
extern "C"  Shader_t2331662484 * UI2DSprite_get_shader_m376668525 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_shader(UnityEngine.Shader)
extern "C"  void UI2DSprite_set_shader_m2890615712 (UI2DSprite_t1082505957 * __this, Shader_t2331662484 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UI2DSprite::get_mainTexture()
extern "C"  Texture_t465682066 * UI2DSprite_get_mainTexture_m589730474 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UI2DSprite::get_premultipliedAlpha()
extern "C"  bool UI2DSprite_get_premultipliedAlpha_m867705927 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UI2DSprite::get_pixelSize()
extern "C"  float UI2DSprite_get_pixelSize_m3245012944 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UI2DSprite::get_drawingDimensions()
extern "C"  Vector4_t465617796  UI2DSprite_get_drawingDimensions_m1749435483 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UI2DSprite::get_border()
extern "C"  Vector4_t465617796  UI2DSprite_get_border_m2576506956 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_border(UnityEngine.Vector4)
extern "C"  void UI2DSprite_set_border_m1469165611 (UI2DSprite_t1082505957 * __this, Vector4_t465617796  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::OnUpdate()
extern "C"  void UI2DSprite_OnUpdate_m252237586 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::MakePixelPerfect()
extern "C"  void UI2DSprite_MakePixelPerfect_m2262079141 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void UI2DSprite_OnFill_m4227993993 (UI2DSprite_t1082505957 * __this, BetterList_1_t686006439 * ___verts, BetterList_1_t686006440 * ___uvs, BetterList_1_t2983401365 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
