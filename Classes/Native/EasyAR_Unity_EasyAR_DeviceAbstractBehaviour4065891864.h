#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<EasyAR.DeviceAbstractBehaviour,System.Boolean>
struct Action_2_t922643931;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.DeviceAbstractBehaviour
struct  DeviceAbstractBehaviour_t4065891864  : public MonoBehaviour_t774292115
{
public:
	// System.Action`2<EasyAR.DeviceAbstractBehaviour,System.Boolean> EasyAR.DeviceAbstractBehaviour::DeviceStart
	Action_2_t922643931 * ___DeviceStart_2;
	// System.Boolean EasyAR.DeviceAbstractBehaviour::<IsOpened>k__BackingField
	bool ___U3CIsOpenedU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_DeviceStart_2() { return static_cast<int32_t>(offsetof(DeviceAbstractBehaviour_t4065891864, ___DeviceStart_2)); }
	inline Action_2_t922643931 * get_DeviceStart_2() const { return ___DeviceStart_2; }
	inline Action_2_t922643931 ** get_address_of_DeviceStart_2() { return &___DeviceStart_2; }
	inline void set_DeviceStart_2(Action_2_t922643931 * value)
	{
		___DeviceStart_2 = value;
		Il2CppCodeGenWriteBarrier(&___DeviceStart_2, value);
	}

	inline static int32_t get_offset_of_U3CIsOpenedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DeviceAbstractBehaviour_t4065891864, ___U3CIsOpenedU3Ek__BackingField_3)); }
	inline bool get_U3CIsOpenedU3Ek__BackingField_3() const { return ___U3CIsOpenedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsOpenedU3Ek__BackingField_3() { return &___U3CIsOpenedU3Ek__BackingField_3; }
	inline void set_U3CIsOpenedU3Ek__BackingField_3(bool value)
	{
		___U3CIsOpenedU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
