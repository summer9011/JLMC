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

// UnityEngine.Mesh
struct Mesh_t940710334;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t897805512;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t411617773;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1383993251;
// UnityEngine.Color32[]
struct Color32U5BU5D_t269272674;
// System.Int32[]
struct Int32U5BU5D_t3315407976;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh940710334.h"
#include "UnityEngine_UnityEngine_Bounds968365060.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m2975981674 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C"  void Mesh_Internal_Create_m1486058998 (Il2CppObject * __this /* static, unused */, Mesh_t940710334 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C"  void Mesh_Clear_m3100797454 (Mesh_t940710334 * __this, bool ___keepVertexLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C"  void Mesh_Clear_m231813403 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m2936804213 (Mesh_t940710334 * __this, Vector3U5BU5D_t897805512* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C"  void Mesh_set_normals_m2674236682 (Mesh_t940710334 * __this, Vector3U5BU5D_t897805512* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_tangents(UnityEngine.Vector4[])
extern "C"  void Mesh_set_tangents_m840715099 (Mesh_t940710334 * __this, Vector4U5BU5D_t411617773* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv_m1497318906 (Mesh_t940710334 * __this, Vector2U5BU5D_t1383993251* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
extern "C"  Bounds_t968365060  Mesh_get_bounds_m1752141467 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Mesh_INTERNAL_get_bounds_m1331624142 (Mesh_t940710334 * __this, Bounds_t968365060 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
extern "C"  void Mesh_set_colors32_m1066151745 (Mesh_t940710334 * __this, Color32U5BU5D_t269272674* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C"  void Mesh_RecalculateBounds_m3559909024 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateNormals()
extern "C"  void Mesh_RecalculateNormals_m1034493793 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C"  void Mesh_set_triangles_m3244966865 (Mesh_t940710334 * __this, Int32U5BU5D_t3315407976* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
extern "C"  int32_t Mesh_get_vertexCount_m989566320 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::MarkDynamic()
extern "C"  void Mesh_MarkDynamic_m3509470748 (Mesh_t940710334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
