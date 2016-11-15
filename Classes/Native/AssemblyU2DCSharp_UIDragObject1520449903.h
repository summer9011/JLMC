#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t224878301;
// UIPanel
struct UIPanel_t1795085332;
// UIRect
struct UIRect_t4127168124;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "AssemblyU2DCSharp_UIDragObject_DragEffect4041293165.h"
#include "UnityEngine_UnityEngine_Plane2472683311.h"
#include "UnityEngine_UnityEngine_Bounds968365060.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragObject
struct  UIDragObject_t1520449903  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.Transform UIDragObject::target
	Transform_t224878301 * ___target_2;
	// UIPanel UIDragObject::panelRegion
	UIPanel_t1795085332 * ___panelRegion_3;
	// UnityEngine.Vector3 UIDragObject::scrollMomentum
	Vector3_t465617797  ___scrollMomentum_4;
	// System.Boolean UIDragObject::restrictWithinPanel
	bool ___restrictWithinPanel_5;
	// UIRect UIDragObject::contentRect
	UIRect_t4127168124 * ___contentRect_6;
	// UIDragObject/DragEffect UIDragObject::dragEffect
	int32_t ___dragEffect_7;
	// System.Single UIDragObject::momentumAmount
	float ___momentumAmount_8;
	// UnityEngine.Vector3 UIDragObject::scale
	Vector3_t465617797  ___scale_9;
	// System.Single UIDragObject::scrollWheelFactor
	float ___scrollWheelFactor_10;
	// UnityEngine.Plane UIDragObject::mPlane
	Plane_t2472683311  ___mPlane_11;
	// UnityEngine.Vector3 UIDragObject::mTargetPos
	Vector3_t465617797  ___mTargetPos_12;
	// UnityEngine.Vector3 UIDragObject::mLastPos
	Vector3_t465617797  ___mLastPos_13;
	// UnityEngine.Vector3 UIDragObject::mMomentum
	Vector3_t465617797  ___mMomentum_14;
	// UnityEngine.Vector3 UIDragObject::mScroll
	Vector3_t465617797  ___mScroll_15;
	// UnityEngine.Bounds UIDragObject::mBounds
	Bounds_t968365060  ___mBounds_16;
	// System.Int32 UIDragObject::mTouchID
	int32_t ___mTouchID_17;
	// System.Boolean UIDragObject::mStarted
	bool ___mStarted_18;
	// System.Boolean UIDragObject::mPressed
	bool ___mPressed_19;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___target_2)); }
	inline Transform_t224878301 * get_target_2() const { return ___target_2; }
	inline Transform_t224878301 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t224878301 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_panelRegion_3() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___panelRegion_3)); }
	inline UIPanel_t1795085332 * get_panelRegion_3() const { return ___panelRegion_3; }
	inline UIPanel_t1795085332 ** get_address_of_panelRegion_3() { return &___panelRegion_3; }
	inline void set_panelRegion_3(UIPanel_t1795085332 * value)
	{
		___panelRegion_3 = value;
		Il2CppCodeGenWriteBarrier(&___panelRegion_3, value);
	}

	inline static int32_t get_offset_of_scrollMomentum_4() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___scrollMomentum_4)); }
	inline Vector3_t465617797  get_scrollMomentum_4() const { return ___scrollMomentum_4; }
	inline Vector3_t465617797 * get_address_of_scrollMomentum_4() { return &___scrollMomentum_4; }
	inline void set_scrollMomentum_4(Vector3_t465617797  value)
	{
		___scrollMomentum_4 = value;
	}

	inline static int32_t get_offset_of_restrictWithinPanel_5() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___restrictWithinPanel_5)); }
	inline bool get_restrictWithinPanel_5() const { return ___restrictWithinPanel_5; }
	inline bool* get_address_of_restrictWithinPanel_5() { return &___restrictWithinPanel_5; }
	inline void set_restrictWithinPanel_5(bool value)
	{
		___restrictWithinPanel_5 = value;
	}

	inline static int32_t get_offset_of_contentRect_6() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___contentRect_6)); }
	inline UIRect_t4127168124 * get_contentRect_6() const { return ___contentRect_6; }
	inline UIRect_t4127168124 ** get_address_of_contentRect_6() { return &___contentRect_6; }
	inline void set_contentRect_6(UIRect_t4127168124 * value)
	{
		___contentRect_6 = value;
		Il2CppCodeGenWriteBarrier(&___contentRect_6, value);
	}

	inline static int32_t get_offset_of_dragEffect_7() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___dragEffect_7)); }
	inline int32_t get_dragEffect_7() const { return ___dragEffect_7; }
	inline int32_t* get_address_of_dragEffect_7() { return &___dragEffect_7; }
	inline void set_dragEffect_7(int32_t value)
	{
		___dragEffect_7 = value;
	}

	inline static int32_t get_offset_of_momentumAmount_8() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___momentumAmount_8)); }
	inline float get_momentumAmount_8() const { return ___momentumAmount_8; }
	inline float* get_address_of_momentumAmount_8() { return &___momentumAmount_8; }
	inline void set_momentumAmount_8(float value)
	{
		___momentumAmount_8 = value;
	}

	inline static int32_t get_offset_of_scale_9() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___scale_9)); }
	inline Vector3_t465617797  get_scale_9() const { return ___scale_9; }
	inline Vector3_t465617797 * get_address_of_scale_9() { return &___scale_9; }
	inline void set_scale_9(Vector3_t465617797  value)
	{
		___scale_9 = value;
	}

	inline static int32_t get_offset_of_scrollWheelFactor_10() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___scrollWheelFactor_10)); }
	inline float get_scrollWheelFactor_10() const { return ___scrollWheelFactor_10; }
	inline float* get_address_of_scrollWheelFactor_10() { return &___scrollWheelFactor_10; }
	inline void set_scrollWheelFactor_10(float value)
	{
		___scrollWheelFactor_10 = value;
	}

	inline static int32_t get_offset_of_mPlane_11() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mPlane_11)); }
	inline Plane_t2472683311  get_mPlane_11() const { return ___mPlane_11; }
	inline Plane_t2472683311 * get_address_of_mPlane_11() { return &___mPlane_11; }
	inline void set_mPlane_11(Plane_t2472683311  value)
	{
		___mPlane_11 = value;
	}

	inline static int32_t get_offset_of_mTargetPos_12() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mTargetPos_12)); }
	inline Vector3_t465617797  get_mTargetPos_12() const { return ___mTargetPos_12; }
	inline Vector3_t465617797 * get_address_of_mTargetPos_12() { return &___mTargetPos_12; }
	inline void set_mTargetPos_12(Vector3_t465617797  value)
	{
		___mTargetPos_12 = value;
	}

	inline static int32_t get_offset_of_mLastPos_13() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mLastPos_13)); }
	inline Vector3_t465617797  get_mLastPos_13() const { return ___mLastPos_13; }
	inline Vector3_t465617797 * get_address_of_mLastPos_13() { return &___mLastPos_13; }
	inline void set_mLastPos_13(Vector3_t465617797  value)
	{
		___mLastPos_13 = value;
	}

	inline static int32_t get_offset_of_mMomentum_14() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mMomentum_14)); }
	inline Vector3_t465617797  get_mMomentum_14() const { return ___mMomentum_14; }
	inline Vector3_t465617797 * get_address_of_mMomentum_14() { return &___mMomentum_14; }
	inline void set_mMomentum_14(Vector3_t465617797  value)
	{
		___mMomentum_14 = value;
	}

	inline static int32_t get_offset_of_mScroll_15() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mScroll_15)); }
	inline Vector3_t465617797  get_mScroll_15() const { return ___mScroll_15; }
	inline Vector3_t465617797 * get_address_of_mScroll_15() { return &___mScroll_15; }
	inline void set_mScroll_15(Vector3_t465617797  value)
	{
		___mScroll_15 = value;
	}

	inline static int32_t get_offset_of_mBounds_16() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mBounds_16)); }
	inline Bounds_t968365060  get_mBounds_16() const { return ___mBounds_16; }
	inline Bounds_t968365060 * get_address_of_mBounds_16() { return &___mBounds_16; }
	inline void set_mBounds_16(Bounds_t968365060  value)
	{
		___mBounds_16 = value;
	}

	inline static int32_t get_offset_of_mTouchID_17() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mTouchID_17)); }
	inline int32_t get_mTouchID_17() const { return ___mTouchID_17; }
	inline int32_t* get_address_of_mTouchID_17() { return &___mTouchID_17; }
	inline void set_mTouchID_17(int32_t value)
	{
		___mTouchID_17 = value;
	}

	inline static int32_t get_offset_of_mStarted_18() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mStarted_18)); }
	inline bool get_mStarted_18() const { return ___mStarted_18; }
	inline bool* get_address_of_mStarted_18() { return &___mStarted_18; }
	inline void set_mStarted_18(bool value)
	{
		___mStarted_18 = value;
	}

	inline static int32_t get_offset_of_mPressed_19() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mPressed_19)); }
	inline bool get_mPressed_19() const { return ___mPressed_19; }
	inline bool* get_address_of_mPressed_19() { return &___mPressed_19; }
	inline void set_mPressed_19(bool value)
	{
		___mPressed_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
