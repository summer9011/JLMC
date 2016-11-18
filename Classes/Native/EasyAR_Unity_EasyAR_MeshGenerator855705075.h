#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t897805512;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1383993251;
// System.Int32[]
struct Int32U5BU5D_t3315407976;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.MeshGenerator
struct  MeshGenerator_t855705075  : public Il2CppObject
{
public:
	// System.Int32 EasyAR.MeshGenerator::meshXNum
	int32_t ___meshXNum_0;
	// System.Int32 EasyAR.MeshGenerator::meshYNum
	int32_t ___meshYNum_1;
	// UnityEngine.Vector3[] EasyAR.MeshGenerator::vertices
	Vector3U5BU5D_t897805512* ___vertices_2;
	// UnityEngine.Vector2[] EasyAR.MeshGenerator::uvs
	Vector2U5BU5D_t1383993251* ___uvs_3;
	// System.Int32[] EasyAR.MeshGenerator::triangles
	Int32U5BU5D_t3315407976* ___triangles_4;
	// System.Single EasyAR.MeshGenerator::imageWidth
	float ___imageWidth_5;
	// System.Single EasyAR.MeshGenerator::imageHeight
	float ___imageHeight_6;
	// System.Boolean EasyAR.MeshGenerator::invertY
	bool ___invertY_7;

public:
	inline static int32_t get_offset_of_meshXNum_0() { return static_cast<int32_t>(offsetof(MeshGenerator_t855705075, ___meshXNum_0)); }
	inline int32_t get_meshXNum_0() const { return ___meshXNum_0; }
	inline int32_t* get_address_of_meshXNum_0() { return &___meshXNum_0; }
	inline void set_meshXNum_0(int32_t value)
	{
		___meshXNum_0 = value;
	}

	inline static int32_t get_offset_of_meshYNum_1() { return static_cast<int32_t>(offsetof(MeshGenerator_t855705075, ___meshYNum_1)); }
	inline int32_t get_meshYNum_1() const { return ___meshYNum_1; }
	inline int32_t* get_address_of_meshYNum_1() { return &___meshYNum_1; }
	inline void set_meshYNum_1(int32_t value)
	{
		___meshYNum_1 = value;
	}

	inline static int32_t get_offset_of_vertices_2() { return static_cast<int32_t>(offsetof(MeshGenerator_t855705075, ___vertices_2)); }
	inline Vector3U5BU5D_t897805512* get_vertices_2() const { return ___vertices_2; }
	inline Vector3U5BU5D_t897805512** get_address_of_vertices_2() { return &___vertices_2; }
	inline void set_vertices_2(Vector3U5BU5D_t897805512* value)
	{
		___vertices_2 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_2, value);
	}

	inline static int32_t get_offset_of_uvs_3() { return static_cast<int32_t>(offsetof(MeshGenerator_t855705075, ___uvs_3)); }
	inline Vector2U5BU5D_t1383993251* get_uvs_3() const { return ___uvs_3; }
	inline Vector2U5BU5D_t1383993251** get_address_of_uvs_3() { return &___uvs_3; }
	inline void set_uvs_3(Vector2U5BU5D_t1383993251* value)
	{
		___uvs_3 = value;
		Il2CppCodeGenWriteBarrier(&___uvs_3, value);
	}

	inline static int32_t get_offset_of_triangles_4() { return static_cast<int32_t>(offsetof(MeshGenerator_t855705075, ___triangles_4)); }
	inline Int32U5BU5D_t3315407976* get_triangles_4() const { return ___triangles_4; }
	inline Int32U5BU5D_t3315407976** get_address_of_triangles_4() { return &___triangles_4; }
	inline void set_triangles_4(Int32U5BU5D_t3315407976* value)
	{
		___triangles_4 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_4, value);
	}

	inline static int32_t get_offset_of_imageWidth_5() { return static_cast<int32_t>(offsetof(MeshGenerator_t855705075, ___imageWidth_5)); }
	inline float get_imageWidth_5() const { return ___imageWidth_5; }
	inline float* get_address_of_imageWidth_5() { return &___imageWidth_5; }
	inline void set_imageWidth_5(float value)
	{
		___imageWidth_5 = value;
	}

	inline static int32_t get_offset_of_imageHeight_6() { return static_cast<int32_t>(offsetof(MeshGenerator_t855705075, ___imageHeight_6)); }
	inline float get_imageHeight_6() const { return ___imageHeight_6; }
	inline float* get_address_of_imageHeight_6() { return &___imageHeight_6; }
	inline void set_imageHeight_6(float value)
	{
		___imageHeight_6 = value;
	}

	inline static int32_t get_offset_of_invertY_7() { return static_cast<int32_t>(offsetof(MeshGenerator_t855705075, ___invertY_7)); }
	inline bool get_invertY_7() const { return ___invertY_7; }
	inline bool* get_address_of_invertY_7() { return &___invertY_7; }
	inline void set_invertY_7(bool value)
	{
		___invertY_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
