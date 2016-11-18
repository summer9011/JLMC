#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyAR.ARBuilder
struct ARBuilder_t2267764191;
// System.Collections.Generic.List`1<EasyAR.CameraDeviceBaseBehaviour>
struct List_1_t3679953791;
// System.Collections.Generic.List`1<EasyAR.AugmenterBaseBehaviour>
struct List_1_t1311975352;
// System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour>
struct List_1_t1247892229;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ARBuilder
struct  ARBuilder_t2267764191  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<EasyAR.CameraDeviceBaseBehaviour> EasyAR.ARBuilder::CameraDeviceBehaviours
	List_1_t3679953791 * ___CameraDeviceBehaviours_1;
	// System.Collections.Generic.List`1<EasyAR.AugmenterBaseBehaviour> EasyAR.ARBuilder::AugmenterBehaviours
	List_1_t1311975352 * ___AugmenterBehaviours_2;
	// System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour> EasyAR.ARBuilder::TrackerBehaviours
	List_1_t1247892229 * ___TrackerBehaviours_3;

public:
	inline static int32_t get_offset_of_CameraDeviceBehaviours_1() { return static_cast<int32_t>(offsetof(ARBuilder_t2267764191, ___CameraDeviceBehaviours_1)); }
	inline List_1_t3679953791 * get_CameraDeviceBehaviours_1() const { return ___CameraDeviceBehaviours_1; }
	inline List_1_t3679953791 ** get_address_of_CameraDeviceBehaviours_1() { return &___CameraDeviceBehaviours_1; }
	inline void set_CameraDeviceBehaviours_1(List_1_t3679953791 * value)
	{
		___CameraDeviceBehaviours_1 = value;
		Il2CppCodeGenWriteBarrier(&___CameraDeviceBehaviours_1, value);
	}

	inline static int32_t get_offset_of_AugmenterBehaviours_2() { return static_cast<int32_t>(offsetof(ARBuilder_t2267764191, ___AugmenterBehaviours_2)); }
	inline List_1_t1311975352 * get_AugmenterBehaviours_2() const { return ___AugmenterBehaviours_2; }
	inline List_1_t1311975352 ** get_address_of_AugmenterBehaviours_2() { return &___AugmenterBehaviours_2; }
	inline void set_AugmenterBehaviours_2(List_1_t1311975352 * value)
	{
		___AugmenterBehaviours_2 = value;
		Il2CppCodeGenWriteBarrier(&___AugmenterBehaviours_2, value);
	}

	inline static int32_t get_offset_of_TrackerBehaviours_3() { return static_cast<int32_t>(offsetof(ARBuilder_t2267764191, ___TrackerBehaviours_3)); }
	inline List_1_t1247892229 * get_TrackerBehaviours_3() const { return ___TrackerBehaviours_3; }
	inline List_1_t1247892229 ** get_address_of_TrackerBehaviours_3() { return &___TrackerBehaviours_3; }
	inline void set_TrackerBehaviours_3(List_1_t1247892229 * value)
	{
		___TrackerBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier(&___TrackerBehaviours_3, value);
	}
};

struct ARBuilder_t2267764191_StaticFields
{
public:
	// EasyAR.ARBuilder EasyAR.ARBuilder::instance
	ARBuilder_t2267764191 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(ARBuilder_t2267764191_StaticFields, ___instance_0)); }
	inline ARBuilder_t2267764191 * get_instance_0() const { return ___instance_0; }
	inline ARBuilder_t2267764191 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(ARBuilder_t2267764191 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
