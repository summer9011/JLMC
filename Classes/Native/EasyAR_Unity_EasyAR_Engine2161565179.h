#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyAR.IEngineNative
struct IEngineNative_t3675523595;

#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_ScreenOrientation2442911283.h"
#include "EasyAR_Unity_EasyAR_Engine_RotationOffsetMode698236394.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.Engine
struct  Engine_t2161565179  : public Il2CppObject
{
public:

public:
};

struct Engine_t2161565179_StaticFields
{
public:
	// EasyAR.IEngineNative EasyAR.Engine::instance
	Il2CppObject * ___instance_0;
	// System.Int32 EasyAR.Engine::Rotation
	int32_t ___Rotation_1;
	// UnityEngine.ScreenOrientation EasyAR.Engine::_orientation
	int32_t ____orientation_2;
	// System.Boolean EasyAR.Engine::initialized
	bool ___initialized_3;
	// EasyAR.Engine/RotationOffsetMode EasyAR.Engine::rotationOffset
	int32_t ___rotationOffset_4;
	// System.Boolean EasyAR.Engine::rotationOffsetSet
	bool ___rotationOffsetSet_5;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(Engine_t2161565179_StaticFields, ___instance_0)); }
	inline Il2CppObject * get_instance_0() const { return ___instance_0; }
	inline Il2CppObject ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(Il2CppObject * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(Engine_t2161565179_StaticFields, ___Rotation_1)); }
	inline int32_t get_Rotation_1() const { return ___Rotation_1; }
	inline int32_t* get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(int32_t value)
	{
		___Rotation_1 = value;
	}

	inline static int32_t get_offset_of__orientation_2() { return static_cast<int32_t>(offsetof(Engine_t2161565179_StaticFields, ____orientation_2)); }
	inline int32_t get__orientation_2() const { return ____orientation_2; }
	inline int32_t* get_address_of__orientation_2() { return &____orientation_2; }
	inline void set__orientation_2(int32_t value)
	{
		____orientation_2 = value;
	}

	inline static int32_t get_offset_of_initialized_3() { return static_cast<int32_t>(offsetof(Engine_t2161565179_StaticFields, ___initialized_3)); }
	inline bool get_initialized_3() const { return ___initialized_3; }
	inline bool* get_address_of_initialized_3() { return &___initialized_3; }
	inline void set_initialized_3(bool value)
	{
		___initialized_3 = value;
	}

	inline static int32_t get_offset_of_rotationOffset_4() { return static_cast<int32_t>(offsetof(Engine_t2161565179_StaticFields, ___rotationOffset_4)); }
	inline int32_t get_rotationOffset_4() const { return ___rotationOffset_4; }
	inline int32_t* get_address_of_rotationOffset_4() { return &___rotationOffset_4; }
	inline void set_rotationOffset_4(int32_t value)
	{
		___rotationOffset_4 = value;
	}

	inline static int32_t get_offset_of_rotationOffsetSet_5() { return static_cast<int32_t>(offsetof(Engine_t2161565179_StaticFields, ___rotationOffsetSet_5)); }
	inline bool get_rotationOffsetSet_5() const { return ___rotationOffsetSet_5; }
	inline bool* get_address_of_rotationOffsetSet_5() { return &___rotationOffsetSet_5; }
	inline void set_rotationOffsetSet_5(bool value)
	{
		___rotationOffsetSet_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
