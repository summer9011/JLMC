#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2805735124;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "AssemblyU2DCSharp_UICamera_ClickNotification3653120285.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera/MouseOrTouch
struct  MouseOrTouch_t858607851  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 UICamera/MouseOrTouch::pos
	Vector2_t465617798  ___pos_0;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::lastPos
	Vector2_t465617798  ___lastPos_1;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::delta
	Vector2_t465617798  ___delta_2;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::totalDelta
	Vector2_t465617798  ___totalDelta_3;
	// UnityEngine.Camera UICamera/MouseOrTouch::pressedCam
	Camera_t2805735124 * ___pressedCam_4;
	// UnityEngine.GameObject UICamera/MouseOrTouch::last
	GameObject_t1366199518 * ___last_5;
	// UnityEngine.GameObject UICamera/MouseOrTouch::current
	GameObject_t1366199518 * ___current_6;
	// UnityEngine.GameObject UICamera/MouseOrTouch::pressed
	GameObject_t1366199518 * ___pressed_7;
	// UnityEngine.GameObject UICamera/MouseOrTouch::dragged
	GameObject_t1366199518 * ___dragged_8;
	// System.Single UICamera/MouseOrTouch::pressTime
	float ___pressTime_9;
	// System.Single UICamera/MouseOrTouch::clickTime
	float ___clickTime_10;
	// UICamera/ClickNotification UICamera/MouseOrTouch::clickNotification
	int32_t ___clickNotification_11;
	// System.Boolean UICamera/MouseOrTouch::touchBegan
	bool ___touchBegan_12;
	// System.Boolean UICamera/MouseOrTouch::pressStarted
	bool ___pressStarted_13;
	// System.Boolean UICamera/MouseOrTouch::dragStarted
	bool ___dragStarted_14;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___pos_0)); }
	inline Vector2_t465617798  get_pos_0() const { return ___pos_0; }
	inline Vector2_t465617798 * get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(Vector2_t465617798  value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_lastPos_1() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___lastPos_1)); }
	inline Vector2_t465617798  get_lastPos_1() const { return ___lastPos_1; }
	inline Vector2_t465617798 * get_address_of_lastPos_1() { return &___lastPos_1; }
	inline void set_lastPos_1(Vector2_t465617798  value)
	{
		___lastPos_1 = value;
	}

	inline static int32_t get_offset_of_delta_2() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___delta_2)); }
	inline Vector2_t465617798  get_delta_2() const { return ___delta_2; }
	inline Vector2_t465617798 * get_address_of_delta_2() { return &___delta_2; }
	inline void set_delta_2(Vector2_t465617798  value)
	{
		___delta_2 = value;
	}

	inline static int32_t get_offset_of_totalDelta_3() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___totalDelta_3)); }
	inline Vector2_t465617798  get_totalDelta_3() const { return ___totalDelta_3; }
	inline Vector2_t465617798 * get_address_of_totalDelta_3() { return &___totalDelta_3; }
	inline void set_totalDelta_3(Vector2_t465617798  value)
	{
		___totalDelta_3 = value;
	}

	inline static int32_t get_offset_of_pressedCam_4() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___pressedCam_4)); }
	inline Camera_t2805735124 * get_pressedCam_4() const { return ___pressedCam_4; }
	inline Camera_t2805735124 ** get_address_of_pressedCam_4() { return &___pressedCam_4; }
	inline void set_pressedCam_4(Camera_t2805735124 * value)
	{
		___pressedCam_4 = value;
		Il2CppCodeGenWriteBarrier(&___pressedCam_4, value);
	}

	inline static int32_t get_offset_of_last_5() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___last_5)); }
	inline GameObject_t1366199518 * get_last_5() const { return ___last_5; }
	inline GameObject_t1366199518 ** get_address_of_last_5() { return &___last_5; }
	inline void set_last_5(GameObject_t1366199518 * value)
	{
		___last_5 = value;
		Il2CppCodeGenWriteBarrier(&___last_5, value);
	}

	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___current_6)); }
	inline GameObject_t1366199518 * get_current_6() const { return ___current_6; }
	inline GameObject_t1366199518 ** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(GameObject_t1366199518 * value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier(&___current_6, value);
	}

	inline static int32_t get_offset_of_pressed_7() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___pressed_7)); }
	inline GameObject_t1366199518 * get_pressed_7() const { return ___pressed_7; }
	inline GameObject_t1366199518 ** get_address_of_pressed_7() { return &___pressed_7; }
	inline void set_pressed_7(GameObject_t1366199518 * value)
	{
		___pressed_7 = value;
		Il2CppCodeGenWriteBarrier(&___pressed_7, value);
	}

	inline static int32_t get_offset_of_dragged_8() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___dragged_8)); }
	inline GameObject_t1366199518 * get_dragged_8() const { return ___dragged_8; }
	inline GameObject_t1366199518 ** get_address_of_dragged_8() { return &___dragged_8; }
	inline void set_dragged_8(GameObject_t1366199518 * value)
	{
		___dragged_8 = value;
		Il2CppCodeGenWriteBarrier(&___dragged_8, value);
	}

	inline static int32_t get_offset_of_pressTime_9() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___pressTime_9)); }
	inline float get_pressTime_9() const { return ___pressTime_9; }
	inline float* get_address_of_pressTime_9() { return &___pressTime_9; }
	inline void set_pressTime_9(float value)
	{
		___pressTime_9 = value;
	}

	inline static int32_t get_offset_of_clickTime_10() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___clickTime_10)); }
	inline float get_clickTime_10() const { return ___clickTime_10; }
	inline float* get_address_of_clickTime_10() { return &___clickTime_10; }
	inline void set_clickTime_10(float value)
	{
		___clickTime_10 = value;
	}

	inline static int32_t get_offset_of_clickNotification_11() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___clickNotification_11)); }
	inline int32_t get_clickNotification_11() const { return ___clickNotification_11; }
	inline int32_t* get_address_of_clickNotification_11() { return &___clickNotification_11; }
	inline void set_clickNotification_11(int32_t value)
	{
		___clickNotification_11 = value;
	}

	inline static int32_t get_offset_of_touchBegan_12() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___touchBegan_12)); }
	inline bool get_touchBegan_12() const { return ___touchBegan_12; }
	inline bool* get_address_of_touchBegan_12() { return &___touchBegan_12; }
	inline void set_touchBegan_12(bool value)
	{
		___touchBegan_12 = value;
	}

	inline static int32_t get_offset_of_pressStarted_13() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___pressStarted_13)); }
	inline bool get_pressStarted_13() const { return ___pressStarted_13; }
	inline bool* get_address_of_pressStarted_13() { return &___pressStarted_13; }
	inline void set_pressStarted_13(bool value)
	{
		___pressStarted_13 = value;
	}

	inline static int32_t get_offset_of_dragStarted_14() { return static_cast<int32_t>(offsetof(MouseOrTouch_t858607851, ___dragStarted_14)); }
	inline bool get_dragStarted_14() const { return ___dragStarted_14; }
	inline bool* get_address_of_dragStarted_14() { return &___dragStarted_14; }
	inline void set_dragStarted_14(bool value)
	{
		___dragStarted_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
