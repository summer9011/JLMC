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

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t224878301;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1383993251;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t897805512;
// UnityEngine.Camera
struct Camera_t2805735124;
// UIRect
struct UIRect_t4127168124;
// UIWidget
struct UIWidget_t1453041918;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Bounds968365060.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"
#include "UnityEngine_UnityEngine_Matrix4x41261955742.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_Quaternion83606849.h"
#include "UnityEngine_UnityEngine_Camera2805735124.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot2110476880.h"
#include "AssemblyU2DCSharp_UIRect4127168124.h"
#include "AssemblyU2DCSharp_UIWidget1453041918.h"

// System.Single NGUIMath::Lerp(System.Single,System.Single,System.Single)
extern "C"  float NGUIMath_Lerp_m4160563120 (Il2CppObject * __this /* static, unused */, float ___from, float ___to, float ___factor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ClampIndex(System.Int32,System.Int32)
extern "C"  int32_t NGUIMath_ClampIndex_m476620637 (Il2CppObject * __this /* static, unused */, int32_t ___val, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::RepeatIndex(System.Int32,System.Int32)
extern "C"  int32_t NGUIMath_RepeatIndex_m1013157621 (Il2CppObject * __this /* static, unused */, int32_t ___val, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::WrapAngle(System.Single)
extern "C"  float NGUIMath_WrapAngle_m524740300 (Il2CppObject * __this /* static, unused */, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::Wrap01(System.Single)
extern "C"  float NGUIMath_Wrap01_m193665150 (Il2CppObject * __this /* static, unused */, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::HexToDecimal(System.Char)
extern "C"  int32_t NGUIMath_HexToDecimal_m3962609198 (Il2CppObject * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char NGUIMath::DecimalToHexChar(System.Int32)
extern "C"  uint16_t NGUIMath_DecimalToHexChar_m1509922988 (Il2CppObject * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex8(System.Int32)
extern "C"  String_t* NGUIMath_DecimalToHex8_m2346770755 (Il2CppObject * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex24(System.Int32)
extern "C"  String_t* NGUIMath_DecimalToHex24_m1560548333 (Il2CppObject * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex32(System.Int32)
extern "C"  String_t* NGUIMath_DecimalToHex32_m2541002754 (Il2CppObject * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ColorToInt(UnityEngine.Color)
extern "C"  int32_t NGUIMath_ColorToInt_m2187131583 (Il2CppObject * __this /* static, unused */, Color_t2250949164  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::IntToColor(System.Int32)
extern "C"  Color_t2250949164  NGUIMath_IntToColor_m749438299 (Il2CppObject * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::IntToBinary(System.Int32,System.Int32)
extern "C"  String_t* NGUIMath_IntToBinary_m327164504 (Il2CppObject * __this /* static, unused */, int32_t ___val, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::HexToColor(System.UInt32)
extern "C"  Color_t2250949164  NGUIMath_HexToColor_m1114865386 (Il2CppObject * __this /* static, unused */, uint32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToTexCoords(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  Rect_t2553848979  NGUIMath_ConvertToTexCoords_m1525403936 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___rect, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C"  Rect_t2553848979  NGUIMath_ConvertToPixels_m601318253 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___rect, int32_t ___width, int32_t ___height, bool ___round, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect)
extern "C"  Rect_t2553848979  NGUIMath_MakePixelPerfect_m3530781236 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  Rect_t2553848979  NGUIMath_MakePixelPerfect_m3895663778 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___rect, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ConstrainRect(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t465617798  NGUIMath_ConstrainRect_m818898166 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___minRect, Vector2_t465617798  ___maxRect, Vector2_t465617798  ___minArea, Vector2_t465617798  ___maxArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateAbsoluteWidgetBounds(UnityEngine.Transform)
extern "C"  Bounds_t968365060  NGUIMath_CalculateAbsoluteWidgetBounds_m1075503082 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform)
extern "C"  Bounds_t968365060  NGUIMath_CalculateRelativeWidgetBounds_m3170611449 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,System.Boolean)
extern "C"  Bounds_t968365060  NGUIMath_CalculateRelativeWidgetBounds_m2537343960 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___trans, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  Bounds_t968365060  NGUIMath_CalculateRelativeWidgetBounds_m2986008918 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___relativeTo, Transform_t224878301 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform,System.Boolean,System.Boolean)
extern "C"  Bounds_t968365060  NGUIMath_CalculateRelativeWidgetBounds_m420336324 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___relativeTo, Transform_t224878301 * ___content, bool ___considerInactive, bool ___considerParents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,System.Boolean,System.Boolean,UnityEngine.Matrix4x4&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Boolean&,System.Boolean)
extern "C"  void NGUIMath_CalculateRelativeWidgetBounds_m4215107778 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___content, bool ___considerInactive, bool ___isRoot, Matrix4x4_t1261955742 * ___toLocal, Vector3_t465617797 * ___vMin, Vector3_t465617797 * ___vMax, bool* ___isSet, bool ___considerParents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringDampen(UnityEngine.Vector3&,System.Single,System.Single)
extern "C"  Vector3_t465617797  NGUIMath_SpringDampen_m652498637 (Il2CppObject * __this /* static, unused */, Vector3_t465617797 * ___velocity, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringDampen(UnityEngine.Vector2&,System.Single,System.Single)
extern "C"  Vector2_t465617798  NGUIMath_SpringDampen_m1684994705 (Il2CppObject * __this /* static, unused */, Vector2_t465617798 * ___velocity, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single)
extern "C"  float NGUIMath_SpringLerp_m424965228 (Il2CppObject * __this /* static, unused */, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NGUIMath_SpringLerp_m39593484 (Il2CppObject * __this /* static, unused */, float ___from, float ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringLerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
extern "C"  Vector2_t465617798  NGUIMath_SpringLerp_m58986239 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___from, Vector2_t465617798  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringLerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Vector3_t465617797  NGUIMath_SpringLerp_m949404960 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___from, Vector3_t465617797  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion NGUIMath::SpringLerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
extern "C"  Quaternion_t83606849  NGUIMath_SpringLerp_m802629114 (Il2CppObject * __this /* static, unused */, Quaternion_t83606849  ___from, Quaternion_t83606849  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::RotateTowards(System.Single,System.Single,System.Single)
extern "C"  float NGUIMath_RotateTowards_m2334146126 (Il2CppObject * __this /* static, unused */, float ___from, float ___to, float ___maxAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistancePointToLineSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float NGUIMath_DistancePointToLineSegment_m1610549093 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___point, Vector2_t465617798  ___a, Vector2_t465617798  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector2[],UnityEngine.Vector2)
extern "C"  float NGUIMath_DistanceToRectangle_m1430486867 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t1383993251* ___screenPoints, Vector2_t465617798  ___mousePos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector3[],UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  float NGUIMath_DistanceToRectangle_m4215934824 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t897805512* ___worldPoints, Vector2_t465617798  ___mousePos, Camera_t2805735124 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::GetPivotOffset(UIWidget/Pivot)
extern "C"  Vector2_t465617798  NGUIMath_GetPivotOffset_m479984401 (Il2CppObject * __this /* static, unused */, int32_t ___pv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot NGUIMath::GetPivot(UnityEngine.Vector2)
extern "C"  int32_t NGUIMath_GetPivot_m247598784 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::MoveWidget(UIRect,System.Single,System.Single)
extern "C"  void NGUIMath_MoveWidget_m390587443 (Il2CppObject * __this /* static, unused */, UIRect_t4127168124 * ___w, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::MoveRect(UIRect,System.Single,System.Single)
extern "C"  void NGUIMath_MoveRect_m461936939 (Il2CppObject * __this /* static, unused */, UIRect_t4127168124 * ___rect, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::ResizeWidget(UIWidget,UIWidget/Pivot,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  void NGUIMath_ResizeWidget_m2540503367 (Il2CppObject * __this /* static, unused */, UIWidget_t1453041918 * ___w, int32_t ___pivot, float ___x, float ___y, int32_t ___minWidth, int32_t ___minHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::ResizeWidget(UIWidget,UIWidget/Pivot,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void NGUIMath_ResizeWidget_m3807347739 (Il2CppObject * __this /* static, unused */, UIWidget_t1453041918 * ___w, int32_t ___pivot, float ___x, float ___y, int32_t ___minWidth, int32_t ___minHeight, int32_t ___maxWidth, int32_t ___maxHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single)
extern "C"  void NGUIMath_AdjustWidget_m356449699 (Il2CppObject * __this /* static, unused */, UIWidget_t1453041918 * ___w, float ___left, float ___bottom, float ___right, float ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  void NGUIMath_AdjustWidget_m206116239 (Il2CppObject * __this /* static, unused */, UIWidget_t1453041918 * ___w, float ___left, float ___bottom, float ___right, float ___top, int32_t ___minWidth, int32_t ___minHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void NGUIMath_AdjustWidget_m3568970723 (Il2CppObject * __this /* static, unused */, UIWidget_t1453041918 * ___w, float ___left, float ___bottom, float ___right, float ___top, int32_t ___minWidth, int32_t ___minHeight, int32_t ___maxWidth, int32_t ___maxHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::AdjustByDPI(System.Single)
extern "C"  int32_t NGUIMath_AdjustByDPI_m2342209442 (Il2CppObject * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ScreenToPixels(UnityEngine.Vector2,UnityEngine.Transform)
extern "C"  Vector2_t465617798  NGUIMath_ScreenToPixels_m4063520394 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___pos, Transform_t224878301 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ScreenToParentPixels(UnityEngine.Vector2,UnityEngine.Transform)
extern "C"  Vector2_t465617798  NGUIMath_ScreenToParentPixels_m3652828382 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___pos, Transform_t224878301 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::WorldToLocalPoint(UnityEngine.Vector3,UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Transform)
extern "C"  Vector3_t465617797  NGUIMath_WorldToLocalPoint_m3871198348 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___worldPos, Camera_t2805735124 * ___worldCam, Camera_t2805735124 * ___uiCam, Transform_t224878301 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::OverlayPosition(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void NGUIMath_OverlayPosition_m2160406571 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___trans, Vector3_t465617797  ___worldPos, Camera_t2805735124 * ___worldCam, Camera_t2805735124 * ___myCam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::OverlayPosition(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Camera)
extern "C"  void NGUIMath_OverlayPosition_m3026696425 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___trans, Vector3_t465617797  ___worldPos, Camera_t2805735124 * ___worldCam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::OverlayPosition(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void NGUIMath_OverlayPosition_m2067677485 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___trans, Transform_t224878301 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
