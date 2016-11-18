#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyAR.CameraDevice
struct CameraDevice_t1807135140;

#include "EasyAR_Unity_EasyAR_DeviceAbstractBehaviour4065891864.h"
#include "EasyAR_Unity_EasyAR_CameraDevice_Device862337626.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CameraDeviceBaseBehaviour
struct  CameraDeviceBaseBehaviour_t273615152  : public DeviceAbstractBehaviour_t4065891864
{
public:
	// System.Boolean EasyAR.CameraDeviceBaseBehaviour::CaptureWhenStart
	bool ___CaptureWhenStart_4;
	// EasyAR.CameraDevice/Device EasyAR.CameraDeviceBaseBehaviour::cameraDeviceType
	int32_t ___cameraDeviceType_5;
	// System.Int32 EasyAR.CameraDeviceBaseBehaviour::cameraIndex
	int32_t ___cameraIndex_6;
	// System.Boolean EasyAR.CameraDeviceBaseBehaviour::horizontalFlip
	bool ___horizontalFlip_7;
	// UnityEngine.Vector2 EasyAR.CameraDeviceBaseBehaviour::CameraSize
	Vector2_t465617798  ___CameraSize_8;
	// System.Single EasyAR.CameraDeviceBaseBehaviour::CameraFPS
	float ___CameraFPS_9;
	// EasyAR.CameraDevice EasyAR.CameraDeviceBaseBehaviour::Device
	CameraDevice_t1807135140 * ___Device_10;

public:
	inline static int32_t get_offset_of_CaptureWhenStart_4() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t273615152, ___CaptureWhenStart_4)); }
	inline bool get_CaptureWhenStart_4() const { return ___CaptureWhenStart_4; }
	inline bool* get_address_of_CaptureWhenStart_4() { return &___CaptureWhenStart_4; }
	inline void set_CaptureWhenStart_4(bool value)
	{
		___CaptureWhenStart_4 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceType_5() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t273615152, ___cameraDeviceType_5)); }
	inline int32_t get_cameraDeviceType_5() const { return ___cameraDeviceType_5; }
	inline int32_t* get_address_of_cameraDeviceType_5() { return &___cameraDeviceType_5; }
	inline void set_cameraDeviceType_5(int32_t value)
	{
		___cameraDeviceType_5 = value;
	}

	inline static int32_t get_offset_of_cameraIndex_6() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t273615152, ___cameraIndex_6)); }
	inline int32_t get_cameraIndex_6() const { return ___cameraIndex_6; }
	inline int32_t* get_address_of_cameraIndex_6() { return &___cameraIndex_6; }
	inline void set_cameraIndex_6(int32_t value)
	{
		___cameraIndex_6 = value;
	}

	inline static int32_t get_offset_of_horizontalFlip_7() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t273615152, ___horizontalFlip_7)); }
	inline bool get_horizontalFlip_7() const { return ___horizontalFlip_7; }
	inline bool* get_address_of_horizontalFlip_7() { return &___horizontalFlip_7; }
	inline void set_horizontalFlip_7(bool value)
	{
		___horizontalFlip_7 = value;
	}

	inline static int32_t get_offset_of_CameraSize_8() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t273615152, ___CameraSize_8)); }
	inline Vector2_t465617798  get_CameraSize_8() const { return ___CameraSize_8; }
	inline Vector2_t465617798 * get_address_of_CameraSize_8() { return &___CameraSize_8; }
	inline void set_CameraSize_8(Vector2_t465617798  value)
	{
		___CameraSize_8 = value;
	}

	inline static int32_t get_offset_of_CameraFPS_9() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t273615152, ___CameraFPS_9)); }
	inline float get_CameraFPS_9() const { return ___CameraFPS_9; }
	inline float* get_address_of_CameraFPS_9() { return &___CameraFPS_9; }
	inline void set_CameraFPS_9(float value)
	{
		___CameraFPS_9 = value;
	}

	inline static int32_t get_offset_of_Device_10() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t273615152, ___Device_10)); }
	inline CameraDevice_t1807135140 * get_Device_10() const { return ___Device_10; }
	inline CameraDevice_t1807135140 ** get_address_of_Device_10() { return &___Device_10; }
	inline void set_Device_10(CameraDevice_t1807135140 * value)
	{
		___Device_10 = value;
		Il2CppCodeGenWriteBarrier(&___Device_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
