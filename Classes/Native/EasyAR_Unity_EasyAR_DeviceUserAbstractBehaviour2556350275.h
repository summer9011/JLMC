#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyAR.DeviceAbstractBehaviour
struct DeviceAbstractBehaviour_t4065891864;
// System.Action`2<EasyAR.DeviceUserAbstractBehaviour,EasyAR.DeviceAbstractBehaviour>
struct Action_2_t3984312819;
// System.Action`1<EasyAR.DeviceUserAbstractBehaviour>
struct Action_1_t1802713002;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.DeviceUserAbstractBehaviour
struct  DeviceUserAbstractBehaviour_t2556350275  : public MonoBehaviour_t774292115
{
public:
	// EasyAR.DeviceAbstractBehaviour EasyAR.DeviceUserAbstractBehaviour::deviceBehaviour
	DeviceAbstractBehaviour_t4065891864 * ___deviceBehaviour_2;
	// System.Action`2<EasyAR.DeviceUserAbstractBehaviour,EasyAR.DeviceAbstractBehaviour> EasyAR.DeviceUserAbstractBehaviour::WorkStart
	Action_2_t3984312819 * ___WorkStart_3;
	// System.Action`1<EasyAR.DeviceUserAbstractBehaviour> EasyAR.DeviceUserAbstractBehaviour::WorkStop
	Action_1_t1802713002 * ___WorkStop_4;

public:
	inline static int32_t get_offset_of_deviceBehaviour_2() { return static_cast<int32_t>(offsetof(DeviceUserAbstractBehaviour_t2556350275, ___deviceBehaviour_2)); }
	inline DeviceAbstractBehaviour_t4065891864 * get_deviceBehaviour_2() const { return ___deviceBehaviour_2; }
	inline DeviceAbstractBehaviour_t4065891864 ** get_address_of_deviceBehaviour_2() { return &___deviceBehaviour_2; }
	inline void set_deviceBehaviour_2(DeviceAbstractBehaviour_t4065891864 * value)
	{
		___deviceBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier(&___deviceBehaviour_2, value);
	}

	inline static int32_t get_offset_of_WorkStart_3() { return static_cast<int32_t>(offsetof(DeviceUserAbstractBehaviour_t2556350275, ___WorkStart_3)); }
	inline Action_2_t3984312819 * get_WorkStart_3() const { return ___WorkStart_3; }
	inline Action_2_t3984312819 ** get_address_of_WorkStart_3() { return &___WorkStart_3; }
	inline void set_WorkStart_3(Action_2_t3984312819 * value)
	{
		___WorkStart_3 = value;
		Il2CppCodeGenWriteBarrier(&___WorkStart_3, value);
	}

	inline static int32_t get_offset_of_WorkStop_4() { return static_cast<int32_t>(offsetof(DeviceUserAbstractBehaviour_t2556350275, ___WorkStop_4)); }
	inline Action_1_t1802713002 * get_WorkStop_4() const { return ___WorkStop_4; }
	inline Action_1_t1802713002 ** get_address_of_WorkStop_4() { return &___WorkStop_4; }
	inline void set_WorkStop_4(Action_1_t1802713002 * value)
	{
		___WorkStop_4 = value;
		Il2CppCodeGenWriteBarrier(&___WorkStop_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
