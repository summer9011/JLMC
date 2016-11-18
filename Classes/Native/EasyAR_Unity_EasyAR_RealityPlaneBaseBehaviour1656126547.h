#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyAR.MeshGenerator
struct MeshGenerator_t855705075;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Quaternion83606849.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RealityPlaneBaseBehaviour
struct  RealityPlaneBaseBehaviour_t1656126547  : public MonoBehaviour_t774292115
{
public:
	// EasyAR.MeshGenerator EasyAR.RealityPlaneBaseBehaviour::meshGenerator
	MeshGenerator_t855705075 * ___meshGenerator_2;
	// System.Int32 EasyAR.RealityPlaneBaseBehaviour::rotation
	int32_t ___rotation_3;
	// UnityEngine.Vector2 EasyAR.RealityPlaneBaseBehaviour::_scale
	Vector2_t465617798  ____scale_4;
	// UnityEngine.Quaternion EasyAR.RealityPlaneBaseBehaviour::initRotation
	Quaternion_t83606849  ___initRotation_5;
	// System.Boolean EasyAR.RealityPlaneBaseBehaviour::hFlip
	bool ___hFlip_6;
	// System.Boolean EasyAR.RealityPlaneBaseBehaviour::isTextureSet
	bool ___isTextureSet_7;

public:
	inline static int32_t get_offset_of_meshGenerator_2() { return static_cast<int32_t>(offsetof(RealityPlaneBaseBehaviour_t1656126547, ___meshGenerator_2)); }
	inline MeshGenerator_t855705075 * get_meshGenerator_2() const { return ___meshGenerator_2; }
	inline MeshGenerator_t855705075 ** get_address_of_meshGenerator_2() { return &___meshGenerator_2; }
	inline void set_meshGenerator_2(MeshGenerator_t855705075 * value)
	{
		___meshGenerator_2 = value;
		Il2CppCodeGenWriteBarrier(&___meshGenerator_2, value);
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(RealityPlaneBaseBehaviour_t1656126547, ___rotation_3)); }
	inline int32_t get_rotation_3() const { return ___rotation_3; }
	inline int32_t* get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(int32_t value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of__scale_4() { return static_cast<int32_t>(offsetof(RealityPlaneBaseBehaviour_t1656126547, ____scale_4)); }
	inline Vector2_t465617798  get__scale_4() const { return ____scale_4; }
	inline Vector2_t465617798 * get_address_of__scale_4() { return &____scale_4; }
	inline void set__scale_4(Vector2_t465617798  value)
	{
		____scale_4 = value;
	}

	inline static int32_t get_offset_of_initRotation_5() { return static_cast<int32_t>(offsetof(RealityPlaneBaseBehaviour_t1656126547, ___initRotation_5)); }
	inline Quaternion_t83606849  get_initRotation_5() const { return ___initRotation_5; }
	inline Quaternion_t83606849 * get_address_of_initRotation_5() { return &___initRotation_5; }
	inline void set_initRotation_5(Quaternion_t83606849  value)
	{
		___initRotation_5 = value;
	}

	inline static int32_t get_offset_of_hFlip_6() { return static_cast<int32_t>(offsetof(RealityPlaneBaseBehaviour_t1656126547, ___hFlip_6)); }
	inline bool get_hFlip_6() const { return ___hFlip_6; }
	inline bool* get_address_of_hFlip_6() { return &___hFlip_6; }
	inline void set_hFlip_6(bool value)
	{
		___hFlip_6 = value;
	}

	inline static int32_t get_offset_of_isTextureSet_7() { return static_cast<int32_t>(offsetof(RealityPlaneBaseBehaviour_t1656126547, ___isTextureSet_7)); }
	inline bool get_isTextureSet_7() const { return ___isTextureSet_7; }
	inline bool* get_address_of_isTextureSet_7() { return &___isTextureSet_7; }
	inline void set_isTextureSet_7(bool value)
	{
		___isTextureSet_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
