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

// UnityEngine.Renderer
struct Renderer_t2715231144;
// UnityEngine.Material
struct Material_t2197338622;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3666204747;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t2197338622 * Renderer_get_material_m2553789785 (Renderer_t2715231144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C"  Material_t2197338622 * Renderer_get_sharedMaterial_m155010392 (Renderer_t2715231144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
extern "C"  void Renderer_set_sharedMaterials_m2669445156 (Renderer_t2715231144 * __this, MaterialU5BU5D_t3666204747* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C"  int32_t Renderer_get_sortingOrder_m1544525007 (Renderer_t2715231144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
extern "C"  void Renderer_set_sortingOrder_m809829562 (Renderer_t2715231144 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
