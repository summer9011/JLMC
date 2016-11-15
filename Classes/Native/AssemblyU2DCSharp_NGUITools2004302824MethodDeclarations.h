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

// UnityEngine.AudioSource
struct AudioSource_t585923902;
// UnityEngine.AudioClip
struct AudioClip_t3927647597;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// UnityEngine.Camera
struct Camera_t2805735124;
// UnityEngine.BoxCollider
struct BoxCollider_t2858828818;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t2914288752;
// UnityEngine.Object
struct Object_t1181371020;
struct Object_t1181371020_marshaled_pinvoke;
// UIWidget[]
struct UIWidgetU5BU5D_t1747340619;
// UIPanel
struct UIPanel_t1795085332;
// UnityEngine.Transform
struct Transform_t224878301;
// UISprite
struct UISprite_t603616735;
// UIAtlas
struct UIAtlas_t1304615221;
// System.Object
struct Il2CppObject;
// UnityEngine.Behaviour
struct Behaviour_t1547659088;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t897805512;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip3927647597.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"
#include "UnityEngine_UnityEngine_BoxCollider2858828818.h"
#include "UnityEngine_UnityEngine_BoxCollider2D2914288752.h"
#include "UnityEngine_UnityEngine_Object1181371020.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"
#include "AssemblyU2DCSharp_UIAtlas1304615221.h"
#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Behaviour1547659088.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "UnityEngine_UnityEngine_Camera2805735124.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

// System.Void NGUITools::.cctor()
extern "C"  void NGUITools__cctor_m2652356090 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUITools::get_soundVolume()
extern "C"  float NGUITools_get_soundVolume_m854852221 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::set_soundVolume(System.Single)
extern "C"  void NGUITools_set_soundVolume_m4217630234 (Il2CppObject * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::get_fileAccess()
extern "C"  bool NGUITools_get_fileAccess_m4195795452 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip)
extern "C"  AudioSource_t585923902 * NGUITools_PlaySound_m1987132526 (Il2CppObject * __this /* static, unused */, AudioClip_t3927647597 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip,System.Single)
extern "C"  AudioSource_t585923902 * NGUITools_PlaySound_m3550550691 (Il2CppObject * __this /* static, unused */, AudioClip_t3927647597 * ___clip, float ___volume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip,System.Single,System.Single)
extern "C"  AudioSource_t585923902 * NGUITools_PlaySound_m257523534 (Il2CppObject * __this /* static, unused */, AudioClip_t3927647597 * ___clip, float ___volume, float ___pitch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::RandomRange(System.Int32,System.Int32)
extern "C"  int32_t NGUITools_RandomRange_m1650339419 (Il2CppObject * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::GetHierarchy(UnityEngine.GameObject)
extern "C"  String_t* NGUITools_GetHierarchy_m743996189 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera NGUITools::FindCameraForLayer(System.Int32)
extern "C"  Camera_t2805735124 * NGUITools_FindCameraForLayer_m1207452737 (Il2CppObject * __this /* static, unused */, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::AddWidgetCollider(UnityEngine.GameObject)
extern "C"  void NGUITools_AddWidgetCollider_m3640388234 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::AddWidgetCollider(UnityEngine.GameObject,System.Boolean)
extern "C"  void NGUITools_AddWidgetCollider_m1610804569 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.GameObject)
extern "C"  void NGUITools_UpdateWidgetCollider_m3681670752 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.GameObject,System.Boolean)
extern "C"  void NGUITools_UpdateWidgetCollider_m98388961 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.BoxCollider,System.Boolean)
extern "C"  void NGUITools_UpdateWidgetCollider_m3199436245 (Il2CppObject * __this /* static, unused */, BoxCollider_t2858828818 * ___box, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.BoxCollider2D,System.Boolean)
extern "C"  void NGUITools_UpdateWidgetCollider_m22057887 (Il2CppObject * __this /* static, unused */, BoxCollider2D_t2914288752 * ___box, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::GetTypeName(UnityEngine.Object)
extern "C"  String_t* NGUITools_GetTypeName_m1890032827 (Il2CppObject * __this /* static, unused */, Object_t1181371020 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::RegisterUndo(UnityEngine.Object,System.String)
extern "C"  void NGUITools_RegisterUndo_m2605035884 (Il2CppObject * __this /* static, unused */, Object_t1181371020 * ___obj, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetDirty(UnityEngine.Object)
extern "C"  void NGUITools_SetDirty_m180821387 (Il2CppObject * __this /* static, unused */, Object_t1181371020 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject)
extern "C"  GameObject_t1366199518 * NGUITools_AddChild_m3914341557 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject,System.Boolean)
extern "C"  GameObject_t1366199518 * NGUITools_AddChild_m3119301680 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___parent, bool ___undo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  GameObject_t1366199518 * NGUITools_AddChild_m4064235185 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___parent, GameObject_t1366199518 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateRaycastDepth(UnityEngine.GameObject)
extern "C"  int32_t NGUITools_CalculateRaycastDepth_m4090187065 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateNextDepth(UnityEngine.GameObject)
extern "C"  int32_t NGUITools_CalculateNextDepth_m3123726241 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateNextDepth(UnityEngine.GameObject,System.Boolean)
extern "C"  int32_t NGUITools_CalculateNextDepth_m1662515568 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, bool ___ignoreChildrenWithColliders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::AdjustDepth(UnityEngine.GameObject,System.Int32)
extern "C"  int32_t NGUITools_AdjustDepth_m1171178138 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, int32_t ___adjustment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::BringForward(UnityEngine.GameObject)
extern "C"  void NGUITools_BringForward_m3413925872 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::PushBack(UnityEngine.GameObject)
extern "C"  void NGUITools_PushBack_m1312536242 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeDepths()
extern "C"  void NGUITools_NormalizeDepths_m3213418350 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeWidgetDepths()
extern "C"  void NGUITools_NormalizeWidgetDepths_m2900647618 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeWidgetDepths(UnityEngine.GameObject)
extern "C"  void NGUITools_NormalizeWidgetDepths_m1145530636 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeWidgetDepths(UIWidget[])
extern "C"  void NGUITools_NormalizeWidgetDepths_m3638822156 (Il2CppObject * __this /* static, unused */, UIWidgetU5BU5D_t1747340619* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizePanelDepths()
extern "C"  void NGUITools_NormalizePanelDepths_m3898933614 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel NGUITools::CreateUI(System.Boolean)
extern "C"  UIPanel_t1795085332 * NGUITools_CreateUI_m2048884635 (Il2CppObject * __this /* static, unused */, bool ___advanced3D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel NGUITools::CreateUI(System.Boolean,System.Int32)
extern "C"  UIPanel_t1795085332 * NGUITools_CreateUI_m28104618 (Il2CppObject * __this /* static, unused */, bool ___advanced3D, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel NGUITools::CreateUI(UnityEngine.Transform,System.Boolean,System.Int32)
extern "C"  UIPanel_t1795085332 * NGUITools_CreateUI_m858016277 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___trans, bool ___advanced3D, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetChildLayer(UnityEngine.Transform,System.Int32)
extern "C"  void NGUITools_SetChildLayer_m3799024920 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___t, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite NGUITools::AddSprite(UnityEngine.GameObject,UIAtlas,System.String)
extern "C"  UISprite_t603616735 * NGUITools_AddSprite_m3283806362 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, UIAtlas_t1304615221 * ___atlas, String_t* ___spriteName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::GetRoot(UnityEngine.GameObject)
extern "C"  GameObject_t1366199518 * NGUITools_GetRoot_m1493620624 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Destroy(UnityEngine.Object)
extern "C"  void NGUITools_Destroy_m2114446197 (Il2CppObject * __this /* static, unused */, Object_t1181371020 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::DestroyImmediate(UnityEngine.Object)
extern "C"  void NGUITools_DestroyImmediate_m1754233776 (Il2CppObject * __this /* static, unused */, Object_t1181371020 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Broadcast(System.String)
extern "C"  void NGUITools_Broadcast_m3118493538 (Il2CppObject * __this /* static, unused */, String_t* ___funcName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Broadcast(System.String,System.Object)
extern "C"  void NGUITools_Broadcast_m836077172 (Il2CppObject * __this /* static, unused */, String_t* ___funcName, Il2CppObject * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::IsChild(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  bool NGUITools_IsChild_m1199942693 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___parent, Transform_t224878301 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Activate(UnityEngine.Transform)
extern "C"  void NGUITools_Activate_m3817191135 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Activate(UnityEngine.Transform,System.Boolean)
extern "C"  void NGUITools_Activate_m2999187802 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___t, bool ___compatibilityMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Deactivate(UnityEngine.Transform)
extern "C"  void NGUITools_Deactivate_m3324301582 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActive(UnityEngine.GameObject,System.Boolean)
extern "C"  void NGUITools_SetActive_m1246261882 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActive(UnityEngine.GameObject,System.Boolean,System.Boolean)
extern "C"  void NGUITools_SetActive_m3545134331 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, bool ___state, bool ___compatibilityMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::CallCreatePanel(UnityEngine.Transform)
extern "C"  void NGUITools_CallCreatePanel_m3335157726 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActiveChildren(UnityEngine.GameObject,System.Boolean)
extern "C"  void NGUITools_SetActiveChildren_m1081295643 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::IsActive(UnityEngine.Behaviour)
extern "C"  bool NGUITools_IsActive_m2858984481 (Il2CppObject * __this /* static, unused */, Behaviour_t1547659088 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::GetActive(UnityEngine.Behaviour)
extern "C"  bool NGUITools_GetActive_m2411194121 (Il2CppObject * __this /* static, unused */, Behaviour_t1547659088 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::GetActive(UnityEngine.GameObject)
extern "C"  bool NGUITools_GetActive_m96773627 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActiveSelf(UnityEngine.GameObject,System.Boolean)
extern "C"  void NGUITools_SetActiveSelf_m3742340108 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetLayer(UnityEngine.GameObject,System.Int32)
extern "C"  void NGUITools_SetLayer_m59734125 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUITools::Round(UnityEngine.Vector3)
extern "C"  Vector3_t465617797  NGUITools_Round_m3867305102 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::MakePixelPerfect(UnityEngine.Transform)
extern "C"  void NGUITools_MakePixelPerfect_m645200019 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::Save(System.String,System.Byte[])
extern "C"  bool NGUITools_Save_m1350119697 (Il2CppObject * __this /* static, unused */, String_t* ___fileName, ByteU5BU5D_t3835026402* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] NGUITools::Load(System.String)
extern "C"  ByteU5BU5D_t3835026402* NGUITools_Load_m2446262417 (Il2CppObject * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUITools::ApplyPMA(UnityEngine.Color)
extern "C"  Color_t2250949164  NGUITools_ApplyPMA_m2169366640 (Il2CppObject * __this /* static, unused */, Color_t2250949164  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::MarkParentAsChanged(UnityEngine.GameObject)
extern "C"  void NGUITools_MarkParentAsChanged_m2361970558 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::get_clipboard()
extern "C"  String_t* NGUITools_get_clipboard_m1224171497 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::set_clipboard(System.String)
extern "C"  void NGUITools_set_clipboard_m1817767080 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::EncodeColor(UnityEngine.Color)
extern "C"  String_t* NGUITools_EncodeColor_m2793768169 (Il2CppObject * __this /* static, unused */, Color_t2250949164  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUITools::ParseColor(System.String,System.Int32)
extern "C"  Color_t2250949164  NGUITools_ParseColor_m399906211 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::StripSymbols(System.String)
extern "C"  String_t* NGUITools_StripSymbols_m1006851411 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera)
extern "C"  Vector3U5BU5D_t897805512* NGUITools_GetSides_m842945741 (Il2CppObject * __this /* static, unused */, Camera_t2805735124 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera,System.Single)
extern "C"  Vector3U5BU5D_t897805512* NGUITools_GetSides_m1097218906 (Il2CppObject * __this /* static, unused */, Camera_t2805735124 * ___cam, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera,UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t897805512* NGUITools_GetSides_m1661148190 (Il2CppObject * __this /* static, unused */, Camera_t2805735124 * ___cam, Transform_t224878301 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera,System.Single,UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t897805512* NGUITools_GetSides_m1760731187 (Il2CppObject * __this /* static, unused */, Camera_t2805735124 * ___cam, float ___depth, Transform_t224878301 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera)
extern "C"  Vector3U5BU5D_t897805512* NGUITools_GetWorldCorners_m2454272959 (Il2CppObject * __this /* static, unused */, Camera_t2805735124 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera,System.Single)
extern "C"  Vector3U5BU5D_t897805512* NGUITools_GetWorldCorners_m656334840 (Il2CppObject * __this /* static, unused */, Camera_t2805735124 * ___cam, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera,UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t897805512* NGUITools_GetWorldCorners_m451114420 (Il2CppObject * __this /* static, unused */, Camera_t2805735124 * ___cam, Transform_t224878301 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera,System.Single,UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t897805512* NGUITools_GetWorldCorners_m3939008357 (Il2CppObject * __this /* static, unused */, Camera_t2805735124 * ___cam, float ___depth, Transform_t224878301 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::GetFuncName(System.Object,System.String)
extern "C"  String_t* NGUITools_GetFuncName_m3093906703 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::ImmediatelyCreateDrawCalls(UnityEngine.GameObject)
extern "C"  void NGUITools_ImmediatelyCreateDrawCalls_m3367770568 (Il2CppObject * __this /* static, unused */, GameObject_t1366199518 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUITools::get_screenSize()
extern "C"  Vector2_t465617798  NGUITools_get_screenSize_m226615406 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
