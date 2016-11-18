#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CatchQuan
struct  CatchQuan_t830316542  : public MonoBehaviour_t774292115
{
public:
	// System.Single CatchQuan::speed
	float ___speed_2;
	// UnityEngine.Vector3 CatchQuan::tempScale
	Vector3_t465617797  ___tempScale_3;
	// System.Boolean CatchQuan::isSouSuo
	bool ___isSouSuo_4;
	// System.Boolean CatchQuan::isStop
	bool ___isStop_5;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(CatchQuan_t830316542, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_tempScale_3() { return static_cast<int32_t>(offsetof(CatchQuan_t830316542, ___tempScale_3)); }
	inline Vector3_t465617797  get_tempScale_3() const { return ___tempScale_3; }
	inline Vector3_t465617797 * get_address_of_tempScale_3() { return &___tempScale_3; }
	inline void set_tempScale_3(Vector3_t465617797  value)
	{
		___tempScale_3 = value;
	}

	inline static int32_t get_offset_of_isSouSuo_4() { return static_cast<int32_t>(offsetof(CatchQuan_t830316542, ___isSouSuo_4)); }
	inline bool get_isSouSuo_4() const { return ___isSouSuo_4; }
	inline bool* get_address_of_isSouSuo_4() { return &___isSouSuo_4; }
	inline void set_isSouSuo_4(bool value)
	{
		___isSouSuo_4 = value;
	}

	inline static int32_t get_offset_of_isStop_5() { return static_cast<int32_t>(offsetof(CatchQuan_t830316542, ___isStop_5)); }
	inline bool get_isStop_5() const { return ___isStop_5; }
	inline bool* get_address_of_isStop_5() { return &___isStop_5; }
	inline void set_isStop_5(bool value)
	{
		___isStop_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
