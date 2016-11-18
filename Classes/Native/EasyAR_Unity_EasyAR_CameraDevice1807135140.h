#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyAR.CameraCalibration
struct CameraCalibration_t2954674694;
// System.Single[]
struct SingleU5BU5D_t662464656;
// EasyAR.Vector2I[]
struct Vector2IU5BU5D_t3987642366;

#include "EasyAR_Unity_EasyAR_Base3566006664.h"
#include "EasyAR_Unity_EasyAR_CameraDevice_Device862337626.h"
#include "EasyAR_Unity_EasyAR_Vector2I2584456199.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CameraDevice
struct  CameraDevice_t1807135140  : public Base_t3566006664
{
public:
	// EasyAR.CameraDevice/Device EasyAR.CameraDevice::OpenedDeviceIfOpened
	int32_t ___OpenedDeviceIfOpened_2;
	// System.Boolean EasyAR.CameraDevice::horizontalFlip
	bool ___horizontalFlip_3;
	// EasyAR.Vector2I EasyAR.CameraDevice::_size
	Vector2I_t2584456199  ____size_4;
	// EasyAR.CameraCalibration EasyAR.CameraDevice::<Calibration>k__BackingField
	CameraCalibration_t2954674694 * ___U3CCalibrationU3Ek__BackingField_5;
	// System.Single[] EasyAR.CameraDevice::<SupportedFPS>k__BackingField
	SingleU5BU5D_t662464656* ___U3CSupportedFPSU3Ek__BackingField_6;
	// EasyAR.Vector2I[] EasyAR.CameraDevice::<SupportedSize>k__BackingField
	Vector2IU5BU5D_t3987642366* ___U3CSupportedSizeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_OpenedDeviceIfOpened_2() { return static_cast<int32_t>(offsetof(CameraDevice_t1807135140, ___OpenedDeviceIfOpened_2)); }
	inline int32_t get_OpenedDeviceIfOpened_2() const { return ___OpenedDeviceIfOpened_2; }
	inline int32_t* get_address_of_OpenedDeviceIfOpened_2() { return &___OpenedDeviceIfOpened_2; }
	inline void set_OpenedDeviceIfOpened_2(int32_t value)
	{
		___OpenedDeviceIfOpened_2 = value;
	}

	inline static int32_t get_offset_of_horizontalFlip_3() { return static_cast<int32_t>(offsetof(CameraDevice_t1807135140, ___horizontalFlip_3)); }
	inline bool get_horizontalFlip_3() const { return ___horizontalFlip_3; }
	inline bool* get_address_of_horizontalFlip_3() { return &___horizontalFlip_3; }
	inline void set_horizontalFlip_3(bool value)
	{
		___horizontalFlip_3 = value;
	}

	inline static int32_t get_offset_of__size_4() { return static_cast<int32_t>(offsetof(CameraDevice_t1807135140, ____size_4)); }
	inline Vector2I_t2584456199  get__size_4() const { return ____size_4; }
	inline Vector2I_t2584456199 * get_address_of__size_4() { return &____size_4; }
	inline void set__size_4(Vector2I_t2584456199  value)
	{
		____size_4 = value;
	}

	inline static int32_t get_offset_of_U3CCalibrationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CameraDevice_t1807135140, ___U3CCalibrationU3Ek__BackingField_5)); }
	inline CameraCalibration_t2954674694 * get_U3CCalibrationU3Ek__BackingField_5() const { return ___U3CCalibrationU3Ek__BackingField_5; }
	inline CameraCalibration_t2954674694 ** get_address_of_U3CCalibrationU3Ek__BackingField_5() { return &___U3CCalibrationU3Ek__BackingField_5; }
	inline void set_U3CCalibrationU3Ek__BackingField_5(CameraCalibration_t2954674694 * value)
	{
		___U3CCalibrationU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCalibrationU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CSupportedFPSU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CameraDevice_t1807135140, ___U3CSupportedFPSU3Ek__BackingField_6)); }
	inline SingleU5BU5D_t662464656* get_U3CSupportedFPSU3Ek__BackingField_6() const { return ___U3CSupportedFPSU3Ek__BackingField_6; }
	inline SingleU5BU5D_t662464656** get_address_of_U3CSupportedFPSU3Ek__BackingField_6() { return &___U3CSupportedFPSU3Ek__BackingField_6; }
	inline void set_U3CSupportedFPSU3Ek__BackingField_6(SingleU5BU5D_t662464656* value)
	{
		___U3CSupportedFPSU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSupportedFPSU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CSupportedSizeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CameraDevice_t1807135140, ___U3CSupportedSizeU3Ek__BackingField_7)); }
	inline Vector2IU5BU5D_t3987642366* get_U3CSupportedSizeU3Ek__BackingField_7() const { return ___U3CSupportedSizeU3Ek__BackingField_7; }
	inline Vector2IU5BU5D_t3987642366** get_address_of_U3CSupportedSizeU3Ek__BackingField_7() { return &___U3CSupportedSizeU3Ek__BackingField_7; }
	inline void set_U3CSupportedSizeU3Ek__BackingField_7(Vector2IU5BU5D_t3987642366* value)
	{
		___U3CSupportedSizeU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSupportedSizeU3Ek__BackingField_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
