#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIScrollView>
struct BetterList_1_t3254343572;
// UIProgressBar
struct UIProgressBar_t3824507790;
// UIScrollView/OnDragNotification
struct OnDragNotification_t1771488488;
// UnityEngine.Transform
struct Transform_t224878301;
// UIPanel
struct UIPanel_t1795085332;
// UICenterOnChild
struct UICenterOnChild_t1687745660;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "AssemblyU2DCSharp_UIScrollView_Movement2096174109.h"
#include "AssemblyU2DCSharp_UIScrollView_DragEffect4041293165.h"
#include "AssemblyU2DCSharp_UIScrollView_ShowCondition809446518.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot2110476880.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_Plane2472683311.h"
#include "UnityEngine_UnityEngine_Bounds968365060.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIScrollView
struct  UIScrollView_t3033954930  : public MonoBehaviour_t774292115
{
public:
	// UIScrollView/Movement UIScrollView::movement
	int32_t ___movement_3;
	// UIScrollView/DragEffect UIScrollView::dragEffect
	int32_t ___dragEffect_4;
	// System.Boolean UIScrollView::restrictWithinPanel
	bool ___restrictWithinPanel_5;
	// System.Boolean UIScrollView::disableDragIfFits
	bool ___disableDragIfFits_6;
	// System.Boolean UIScrollView::smoothDragStart
	bool ___smoothDragStart_7;
	// System.Boolean UIScrollView::iOSDragEmulation
	bool ___iOSDragEmulation_8;
	// System.Single UIScrollView::scrollWheelFactor
	float ___scrollWheelFactor_9;
	// System.Single UIScrollView::momentumAmount
	float ___momentumAmount_10;
	// System.Single UIScrollView::dampenStrength
	float ___dampenStrength_11;
	// UIProgressBar UIScrollView::horizontalScrollBar
	UIProgressBar_t3824507790 * ___horizontalScrollBar_12;
	// UIProgressBar UIScrollView::verticalScrollBar
	UIProgressBar_t3824507790 * ___verticalScrollBar_13;
	// UIScrollView/ShowCondition UIScrollView::showScrollBars
	int32_t ___showScrollBars_14;
	// UnityEngine.Vector2 UIScrollView::customMovement
	Vector2_t465617798  ___customMovement_15;
	// UIWidget/Pivot UIScrollView::contentPivot
	int32_t ___contentPivot_16;
	// UIScrollView/OnDragNotification UIScrollView::onDragStarted
	OnDragNotification_t1771488488 * ___onDragStarted_17;
	// UIScrollView/OnDragNotification UIScrollView::onDragFinished
	OnDragNotification_t1771488488 * ___onDragFinished_18;
	// UIScrollView/OnDragNotification UIScrollView::onMomentumMove
	OnDragNotification_t1771488488 * ___onMomentumMove_19;
	// UIScrollView/OnDragNotification UIScrollView::onStoppedMoving
	OnDragNotification_t1771488488 * ___onStoppedMoving_20;
	// UnityEngine.Vector3 UIScrollView::scale
	Vector3_t465617797  ___scale_21;
	// UnityEngine.Vector2 UIScrollView::relativePositionOnReset
	Vector2_t465617798  ___relativePositionOnReset_22;
	// UnityEngine.Transform UIScrollView::mTrans
	Transform_t224878301 * ___mTrans_23;
	// UIPanel UIScrollView::mPanel
	UIPanel_t1795085332 * ___mPanel_24;
	// UnityEngine.Plane UIScrollView::mPlane
	Plane_t2472683311  ___mPlane_25;
	// UnityEngine.Vector3 UIScrollView::mLastPos
	Vector3_t465617797  ___mLastPos_26;
	// System.Boolean UIScrollView::mPressed
	bool ___mPressed_27;
	// UnityEngine.Vector3 UIScrollView::mMomentum
	Vector3_t465617797  ___mMomentum_28;
	// System.Single UIScrollView::mScroll
	float ___mScroll_29;
	// UnityEngine.Bounds UIScrollView::mBounds
	Bounds_t968365060  ___mBounds_30;
	// System.Boolean UIScrollView::mCalculatedBounds
	bool ___mCalculatedBounds_31;
	// System.Boolean UIScrollView::mShouldMove
	bool ___mShouldMove_32;
	// System.Boolean UIScrollView::mIgnoreCallbacks
	bool ___mIgnoreCallbacks_33;
	// System.Int32 UIScrollView::mDragID
	int32_t ___mDragID_34;
	// UnityEngine.Vector2 UIScrollView::mDragStartOffset
	Vector2_t465617798  ___mDragStartOffset_35;
	// System.Boolean UIScrollView::mDragStarted
	bool ___mDragStarted_36;
	// System.Boolean UIScrollView::mStarted
	bool ___mStarted_37;
	// UICenterOnChild UIScrollView::centerOnChild
	UICenterOnChild_t1687745660 * ___centerOnChild_38;

public:
	inline static int32_t get_offset_of_movement_3() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___movement_3)); }
	inline int32_t get_movement_3() const { return ___movement_3; }
	inline int32_t* get_address_of_movement_3() { return &___movement_3; }
	inline void set_movement_3(int32_t value)
	{
		___movement_3 = value;
	}

	inline static int32_t get_offset_of_dragEffect_4() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___dragEffect_4)); }
	inline int32_t get_dragEffect_4() const { return ___dragEffect_4; }
	inline int32_t* get_address_of_dragEffect_4() { return &___dragEffect_4; }
	inline void set_dragEffect_4(int32_t value)
	{
		___dragEffect_4 = value;
	}

	inline static int32_t get_offset_of_restrictWithinPanel_5() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___restrictWithinPanel_5)); }
	inline bool get_restrictWithinPanel_5() const { return ___restrictWithinPanel_5; }
	inline bool* get_address_of_restrictWithinPanel_5() { return &___restrictWithinPanel_5; }
	inline void set_restrictWithinPanel_5(bool value)
	{
		___restrictWithinPanel_5 = value;
	}

	inline static int32_t get_offset_of_disableDragIfFits_6() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___disableDragIfFits_6)); }
	inline bool get_disableDragIfFits_6() const { return ___disableDragIfFits_6; }
	inline bool* get_address_of_disableDragIfFits_6() { return &___disableDragIfFits_6; }
	inline void set_disableDragIfFits_6(bool value)
	{
		___disableDragIfFits_6 = value;
	}

	inline static int32_t get_offset_of_smoothDragStart_7() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___smoothDragStart_7)); }
	inline bool get_smoothDragStart_7() const { return ___smoothDragStart_7; }
	inline bool* get_address_of_smoothDragStart_7() { return &___smoothDragStart_7; }
	inline void set_smoothDragStart_7(bool value)
	{
		___smoothDragStart_7 = value;
	}

	inline static int32_t get_offset_of_iOSDragEmulation_8() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___iOSDragEmulation_8)); }
	inline bool get_iOSDragEmulation_8() const { return ___iOSDragEmulation_8; }
	inline bool* get_address_of_iOSDragEmulation_8() { return &___iOSDragEmulation_8; }
	inline void set_iOSDragEmulation_8(bool value)
	{
		___iOSDragEmulation_8 = value;
	}

	inline static int32_t get_offset_of_scrollWheelFactor_9() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___scrollWheelFactor_9)); }
	inline float get_scrollWheelFactor_9() const { return ___scrollWheelFactor_9; }
	inline float* get_address_of_scrollWheelFactor_9() { return &___scrollWheelFactor_9; }
	inline void set_scrollWheelFactor_9(float value)
	{
		___scrollWheelFactor_9 = value;
	}

	inline static int32_t get_offset_of_momentumAmount_10() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___momentumAmount_10)); }
	inline float get_momentumAmount_10() const { return ___momentumAmount_10; }
	inline float* get_address_of_momentumAmount_10() { return &___momentumAmount_10; }
	inline void set_momentumAmount_10(float value)
	{
		___momentumAmount_10 = value;
	}

	inline static int32_t get_offset_of_dampenStrength_11() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___dampenStrength_11)); }
	inline float get_dampenStrength_11() const { return ___dampenStrength_11; }
	inline float* get_address_of_dampenStrength_11() { return &___dampenStrength_11; }
	inline void set_dampenStrength_11(float value)
	{
		___dampenStrength_11 = value;
	}

	inline static int32_t get_offset_of_horizontalScrollBar_12() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___horizontalScrollBar_12)); }
	inline UIProgressBar_t3824507790 * get_horizontalScrollBar_12() const { return ___horizontalScrollBar_12; }
	inline UIProgressBar_t3824507790 ** get_address_of_horizontalScrollBar_12() { return &___horizontalScrollBar_12; }
	inline void set_horizontalScrollBar_12(UIProgressBar_t3824507790 * value)
	{
		___horizontalScrollBar_12 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalScrollBar_12, value);
	}

	inline static int32_t get_offset_of_verticalScrollBar_13() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___verticalScrollBar_13)); }
	inline UIProgressBar_t3824507790 * get_verticalScrollBar_13() const { return ___verticalScrollBar_13; }
	inline UIProgressBar_t3824507790 ** get_address_of_verticalScrollBar_13() { return &___verticalScrollBar_13; }
	inline void set_verticalScrollBar_13(UIProgressBar_t3824507790 * value)
	{
		___verticalScrollBar_13 = value;
		Il2CppCodeGenWriteBarrier(&___verticalScrollBar_13, value);
	}

	inline static int32_t get_offset_of_showScrollBars_14() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___showScrollBars_14)); }
	inline int32_t get_showScrollBars_14() const { return ___showScrollBars_14; }
	inline int32_t* get_address_of_showScrollBars_14() { return &___showScrollBars_14; }
	inline void set_showScrollBars_14(int32_t value)
	{
		___showScrollBars_14 = value;
	}

	inline static int32_t get_offset_of_customMovement_15() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___customMovement_15)); }
	inline Vector2_t465617798  get_customMovement_15() const { return ___customMovement_15; }
	inline Vector2_t465617798 * get_address_of_customMovement_15() { return &___customMovement_15; }
	inline void set_customMovement_15(Vector2_t465617798  value)
	{
		___customMovement_15 = value;
	}

	inline static int32_t get_offset_of_contentPivot_16() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___contentPivot_16)); }
	inline int32_t get_contentPivot_16() const { return ___contentPivot_16; }
	inline int32_t* get_address_of_contentPivot_16() { return &___contentPivot_16; }
	inline void set_contentPivot_16(int32_t value)
	{
		___contentPivot_16 = value;
	}

	inline static int32_t get_offset_of_onDragStarted_17() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___onDragStarted_17)); }
	inline OnDragNotification_t1771488488 * get_onDragStarted_17() const { return ___onDragStarted_17; }
	inline OnDragNotification_t1771488488 ** get_address_of_onDragStarted_17() { return &___onDragStarted_17; }
	inline void set_onDragStarted_17(OnDragNotification_t1771488488 * value)
	{
		___onDragStarted_17 = value;
		Il2CppCodeGenWriteBarrier(&___onDragStarted_17, value);
	}

	inline static int32_t get_offset_of_onDragFinished_18() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___onDragFinished_18)); }
	inline OnDragNotification_t1771488488 * get_onDragFinished_18() const { return ___onDragFinished_18; }
	inline OnDragNotification_t1771488488 ** get_address_of_onDragFinished_18() { return &___onDragFinished_18; }
	inline void set_onDragFinished_18(OnDragNotification_t1771488488 * value)
	{
		___onDragFinished_18 = value;
		Il2CppCodeGenWriteBarrier(&___onDragFinished_18, value);
	}

	inline static int32_t get_offset_of_onMomentumMove_19() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___onMomentumMove_19)); }
	inline OnDragNotification_t1771488488 * get_onMomentumMove_19() const { return ___onMomentumMove_19; }
	inline OnDragNotification_t1771488488 ** get_address_of_onMomentumMove_19() { return &___onMomentumMove_19; }
	inline void set_onMomentumMove_19(OnDragNotification_t1771488488 * value)
	{
		___onMomentumMove_19 = value;
		Il2CppCodeGenWriteBarrier(&___onMomentumMove_19, value);
	}

	inline static int32_t get_offset_of_onStoppedMoving_20() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___onStoppedMoving_20)); }
	inline OnDragNotification_t1771488488 * get_onStoppedMoving_20() const { return ___onStoppedMoving_20; }
	inline OnDragNotification_t1771488488 ** get_address_of_onStoppedMoving_20() { return &___onStoppedMoving_20; }
	inline void set_onStoppedMoving_20(OnDragNotification_t1771488488 * value)
	{
		___onStoppedMoving_20 = value;
		Il2CppCodeGenWriteBarrier(&___onStoppedMoving_20, value);
	}

	inline static int32_t get_offset_of_scale_21() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___scale_21)); }
	inline Vector3_t465617797  get_scale_21() const { return ___scale_21; }
	inline Vector3_t465617797 * get_address_of_scale_21() { return &___scale_21; }
	inline void set_scale_21(Vector3_t465617797  value)
	{
		___scale_21 = value;
	}

	inline static int32_t get_offset_of_relativePositionOnReset_22() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___relativePositionOnReset_22)); }
	inline Vector2_t465617798  get_relativePositionOnReset_22() const { return ___relativePositionOnReset_22; }
	inline Vector2_t465617798 * get_address_of_relativePositionOnReset_22() { return &___relativePositionOnReset_22; }
	inline void set_relativePositionOnReset_22(Vector2_t465617798  value)
	{
		___relativePositionOnReset_22 = value;
	}

	inline static int32_t get_offset_of_mTrans_23() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mTrans_23)); }
	inline Transform_t224878301 * get_mTrans_23() const { return ___mTrans_23; }
	inline Transform_t224878301 ** get_address_of_mTrans_23() { return &___mTrans_23; }
	inline void set_mTrans_23(Transform_t224878301 * value)
	{
		___mTrans_23 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_23, value);
	}

	inline static int32_t get_offset_of_mPanel_24() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mPanel_24)); }
	inline UIPanel_t1795085332 * get_mPanel_24() const { return ___mPanel_24; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_24() { return &___mPanel_24; }
	inline void set_mPanel_24(UIPanel_t1795085332 * value)
	{
		___mPanel_24 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_24, value);
	}

	inline static int32_t get_offset_of_mPlane_25() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mPlane_25)); }
	inline Plane_t2472683311  get_mPlane_25() const { return ___mPlane_25; }
	inline Plane_t2472683311 * get_address_of_mPlane_25() { return &___mPlane_25; }
	inline void set_mPlane_25(Plane_t2472683311  value)
	{
		___mPlane_25 = value;
	}

	inline static int32_t get_offset_of_mLastPos_26() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mLastPos_26)); }
	inline Vector3_t465617797  get_mLastPos_26() const { return ___mLastPos_26; }
	inline Vector3_t465617797 * get_address_of_mLastPos_26() { return &___mLastPos_26; }
	inline void set_mLastPos_26(Vector3_t465617797  value)
	{
		___mLastPos_26 = value;
	}

	inline static int32_t get_offset_of_mPressed_27() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mPressed_27)); }
	inline bool get_mPressed_27() const { return ___mPressed_27; }
	inline bool* get_address_of_mPressed_27() { return &___mPressed_27; }
	inline void set_mPressed_27(bool value)
	{
		___mPressed_27 = value;
	}

	inline static int32_t get_offset_of_mMomentum_28() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mMomentum_28)); }
	inline Vector3_t465617797  get_mMomentum_28() const { return ___mMomentum_28; }
	inline Vector3_t465617797 * get_address_of_mMomentum_28() { return &___mMomentum_28; }
	inline void set_mMomentum_28(Vector3_t465617797  value)
	{
		___mMomentum_28 = value;
	}

	inline static int32_t get_offset_of_mScroll_29() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mScroll_29)); }
	inline float get_mScroll_29() const { return ___mScroll_29; }
	inline float* get_address_of_mScroll_29() { return &___mScroll_29; }
	inline void set_mScroll_29(float value)
	{
		___mScroll_29 = value;
	}

	inline static int32_t get_offset_of_mBounds_30() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mBounds_30)); }
	inline Bounds_t968365060  get_mBounds_30() const { return ___mBounds_30; }
	inline Bounds_t968365060 * get_address_of_mBounds_30() { return &___mBounds_30; }
	inline void set_mBounds_30(Bounds_t968365060  value)
	{
		___mBounds_30 = value;
	}

	inline static int32_t get_offset_of_mCalculatedBounds_31() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mCalculatedBounds_31)); }
	inline bool get_mCalculatedBounds_31() const { return ___mCalculatedBounds_31; }
	inline bool* get_address_of_mCalculatedBounds_31() { return &___mCalculatedBounds_31; }
	inline void set_mCalculatedBounds_31(bool value)
	{
		___mCalculatedBounds_31 = value;
	}

	inline static int32_t get_offset_of_mShouldMove_32() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mShouldMove_32)); }
	inline bool get_mShouldMove_32() const { return ___mShouldMove_32; }
	inline bool* get_address_of_mShouldMove_32() { return &___mShouldMove_32; }
	inline void set_mShouldMove_32(bool value)
	{
		___mShouldMove_32 = value;
	}

	inline static int32_t get_offset_of_mIgnoreCallbacks_33() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mIgnoreCallbacks_33)); }
	inline bool get_mIgnoreCallbacks_33() const { return ___mIgnoreCallbacks_33; }
	inline bool* get_address_of_mIgnoreCallbacks_33() { return &___mIgnoreCallbacks_33; }
	inline void set_mIgnoreCallbacks_33(bool value)
	{
		___mIgnoreCallbacks_33 = value;
	}

	inline static int32_t get_offset_of_mDragID_34() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mDragID_34)); }
	inline int32_t get_mDragID_34() const { return ___mDragID_34; }
	inline int32_t* get_address_of_mDragID_34() { return &___mDragID_34; }
	inline void set_mDragID_34(int32_t value)
	{
		___mDragID_34 = value;
	}

	inline static int32_t get_offset_of_mDragStartOffset_35() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mDragStartOffset_35)); }
	inline Vector2_t465617798  get_mDragStartOffset_35() const { return ___mDragStartOffset_35; }
	inline Vector2_t465617798 * get_address_of_mDragStartOffset_35() { return &___mDragStartOffset_35; }
	inline void set_mDragStartOffset_35(Vector2_t465617798  value)
	{
		___mDragStartOffset_35 = value;
	}

	inline static int32_t get_offset_of_mDragStarted_36() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mDragStarted_36)); }
	inline bool get_mDragStarted_36() const { return ___mDragStarted_36; }
	inline bool* get_address_of_mDragStarted_36() { return &___mDragStarted_36; }
	inline void set_mDragStarted_36(bool value)
	{
		___mDragStarted_36 = value;
	}

	inline static int32_t get_offset_of_mStarted_37() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mStarted_37)); }
	inline bool get_mStarted_37() const { return ___mStarted_37; }
	inline bool* get_address_of_mStarted_37() { return &___mStarted_37; }
	inline void set_mStarted_37(bool value)
	{
		___mStarted_37 = value;
	}

	inline static int32_t get_offset_of_centerOnChild_38() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___centerOnChild_38)); }
	inline UICenterOnChild_t1687745660 * get_centerOnChild_38() const { return ___centerOnChild_38; }
	inline UICenterOnChild_t1687745660 ** get_address_of_centerOnChild_38() { return &___centerOnChild_38; }
	inline void set_centerOnChild_38(UICenterOnChild_t1687745660 * value)
	{
		___centerOnChild_38 = value;
		Il2CppCodeGenWriteBarrier(&___centerOnChild_38, value);
	}
};

struct UIScrollView_t3033954930_StaticFields
{
public:
	// BetterList`1<UIScrollView> UIScrollView::list
	BetterList_1_t3254343572 * ___list_2;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930_StaticFields, ___list_2)); }
	inline BetterList_1_t3254343572 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t3254343572 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t3254343572 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
