#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyAR.BarCodeScanner
struct BarCodeScanner_t1831441607;
// EasyAR.CameraDevice
struct CameraDevice_t1807135140;

#include "EasyAR_Unity_EasyAR_DeviceUserAbstractBehaviour2556350275.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.BarCodeScannerBaseBehaviour
struct  BarCodeScannerBaseBehaviour_t198661227  : public DeviceUserAbstractBehaviour_t2556350275
{
public:
	// EasyAR.BarCodeScanner EasyAR.BarCodeScannerBaseBehaviour::BarCodeScanner
	BarCodeScanner_t1831441607 * ___BarCodeScanner_5;
	// EasyAR.CameraDevice EasyAR.BarCodeScannerBaseBehaviour::cameraDevice
	CameraDevice_t1807135140 * ___cameraDevice_6;

public:
	inline static int32_t get_offset_of_BarCodeScanner_5() { return static_cast<int32_t>(offsetof(BarCodeScannerBaseBehaviour_t198661227, ___BarCodeScanner_5)); }
	inline BarCodeScanner_t1831441607 * get_BarCodeScanner_5() const { return ___BarCodeScanner_5; }
	inline BarCodeScanner_t1831441607 ** get_address_of_BarCodeScanner_5() { return &___BarCodeScanner_5; }
	inline void set_BarCodeScanner_5(BarCodeScanner_t1831441607 * value)
	{
		___BarCodeScanner_5 = value;
		Il2CppCodeGenWriteBarrier(&___BarCodeScanner_5, value);
	}

	inline static int32_t get_offset_of_cameraDevice_6() { return static_cast<int32_t>(offsetof(BarCodeScannerBaseBehaviour_t198661227, ___cameraDevice_6)); }
	inline CameraDevice_t1807135140 * get_cameraDevice_6() const { return ___cameraDevice_6; }
	inline CameraDevice_t1807135140 ** get_address_of_cameraDevice_6() { return &___cameraDevice_6; }
	inline void set_cameraDevice_6(CameraDevice_t1807135140 * value)
	{
		___cameraDevice_6 = value;
		Il2CppCodeGenWriteBarrier(&___cameraDevice_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
