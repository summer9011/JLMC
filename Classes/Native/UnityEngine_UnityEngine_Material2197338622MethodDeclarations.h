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

// UnityEngine.Material
struct Material_t2197338622;
// UnityEngine.Shader
struct Shader_t2331662484;
// UnityEngine.Texture
struct Texture_t465682066;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3764931161;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Shader2331662484.h"
#include "UnityEngine_UnityEngine_Material2197338622.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "UnityEngine_UnityEngine_Texture465682066.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C"  void Material__ctor_m1897560860 (Material_t2197338622 * __this, Shader_t2331662484 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C"  void Material__ctor_m1440882780 (Material_t2197338622 * __this, Material_t2197338622 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern "C"  Shader_t2331662484 * Material_get_shader_m2320486867 (Material_t2197338622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
extern "C"  void Material_set_shader_m743681806 (Material_t2197338622 * __this, Shader_t2331662484 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::get_color()
extern "C"  Color_t2250949164  Material_get_color_m668215843 (Material_t2197338622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C"  void Material_set_color_m577844242 (Material_t2197338622 * __this, Color_t2250949164  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C"  Texture_t465682066 * Material_get_mainTexture_m432794412 (Material_t2197338622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C"  void Material_set_mainTexture_m3584203343 (Material_t2197338622 * __this, Texture_t465682066 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C"  void Material_set_mainTextureOffset_m3533368774 (Material_t2197338622 * __this, Vector2_t465617798  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
extern "C"  void Material_set_mainTextureScale_m723074403 (Material_t2197338622 * __this, Vector2_t465617798  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C"  void Material_SetColor_m650857509 (Material_t2197338622 * __this, String_t* ___propertyName, Color_t2250949164  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C"  void Material_SetColor_m1191533068 (Material_t2197338622 * __this, int32_t ___nameID, Color_t2250949164  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_SetColor_m1364511001 (Il2CppObject * __this /* static, unused */, Material_t2197338622 * ___self, int32_t ___nameID, Color_t2250949164 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C"  Color_t2250949164  Material_GetColor_m2326771174 (Material_t2197338622 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
extern "C"  Color_t2250949164  Material_GetColor_m2968960621 (Material_t2197338622 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_GetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_GetColor_m558759949 (Il2CppObject * __this /* static, unused */, Material_t2197338622 * ___self, int32_t ___nameID, Color_t2250949164 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C"  void Material_SetVector_m3298399397 (Material_t2197338622 * __this, String_t* ___propertyName, Vector4_t465617796  ___vector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
extern "C"  void Material_SetVector_m1395004512 (Material_t2197338622 * __this, int32_t ___nameID, Vector4_t465617796  ___vector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m141095205 (Material_t2197338622 * __this, String_t* ___propertyName, Texture_t465682066 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m58378708 (Material_t2197338622 * __this, int32_t ___nameID, Texture_t465682066 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C"  Texture_t465682066 * Material_GetTexture_m1257877102 (Material_t2197338622 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C"  Texture_t465682066 * Material_GetTexture_m648312929 (Material_t2197338622 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C"  void Material_SetTextureOffset_m3084369360 (Material_t2197338622 * __this, String_t* ___propertyName, Vector2_t465617798  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C"  void Material_INTERNAL_CALL_SetTextureOffset_m4252917387 (Il2CppObject * __this /* static, unused */, Material_t2197338622 * ___self, String_t* ___propertyName, Vector2_t465617798 * ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
extern "C"  void Material_SetTextureScale_m1622979841 (Material_t2197338622 * __this, String_t* ___propertyName, Vector2_t465617798  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureScale(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C"  void Material_INTERNAL_CALL_SetTextureScale_m2049074868 (Il2CppObject * __this /* static, unused */, Material_t2197338622 * ___self, String_t* ___propertyName, Vector2_t465617798 * ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Material::get_renderQueue()
extern "C"  int32_t Material_get_renderQueue_m2184625106 (Material_t2197338622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
extern "C"  void Material_set_renderQueue_m3118406393 (Material_t2197338622 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C"  void Material_Internal_CreateWithShader_m4029381963 (Il2CppObject * __this /* static, unused */, Material_t2197338622 * ___mono, Shader_t2331662484 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C"  void Material_Internal_CreateWithMaterial_m2907597451 (Il2CppObject * __this /* static, unused */, Material_t2197338622 * ___mono, Material_t2197338622 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::CopyPropertiesFromMaterial(UnityEngine.Material)
extern "C"  void Material_CopyPropertiesFromMaterial_m2867960571 (Material_t2197338622 * __this, Material_t2197338622 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C"  void Material_EnableKeyword_m3724752646 (Material_t2197338622 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Material::get_shaderKeywords()
extern "C"  StringU5BU5D_t3764931161* Material_get_shaderKeywords_m1662488455 (Material_t2197338622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
