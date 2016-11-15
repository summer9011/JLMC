#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UICamera>
struct BetterList_1_t1717208421;
// UICamera/GetKeyStateFunc
struct GetKeyStateFunc_t318868414;
// UICamera/GetAxisFunc
struct GetAxisFunc_t115786709;
// UICamera/OnScreenResize
struct OnScreenResize_t107161297;
// System.String
struct String_t;
// UICamera/OnCustomInput
struct OnCustomInput_t3142665870;
// UICamera
struct UICamera_t1496819779;
// UnityEngine.Camera
struct Camera_t2805735124;
// UICamera/MouseOrTouch
struct MouseOrTouch_t858607851;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// UICamera/VoidDelegate
struct VoidDelegate_t1154120062;
// UICamera/BoolDelegate
struct BoolDelegate_t173576552;
// UICamera/FloatDelegate
struct FloatDelegate_t2914939686;
// UICamera/VectorDelegate
struct VectorDelegate_t724328729;
// UICamera/ObjectDelegate
struct ObjectDelegate_t2642719037;
// UICamera/KeyCodeDelegate
struct KeyCodeDelegate_t3185496720;
// UICamera/MoveDelegate
struct MoveDelegate_t3038174214;
// UICamera/MouseOrTouch[]
struct MouseOrTouchU5BU5D_t779546378;
// System.Collections.Generic.List`1<UICamera/MouseOrTouch>
struct List_1_t4264946490;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t559541940;
// BetterList`1<UICamera/DepthEntry>
struct BetterList_1_t2646038013;
// UICamera/GetTouchCountCallback
struct GetTouchCountCallback_t39553031;
// UICamera/GetTouchCallback
struct GetTouchCallback_t2701442276;
// BetterList`1/CompareFunc<UICamera/DepthEntry>
struct CompareFunc_t2346182379;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "AssemblyU2DCSharp_UICamera_EventType2228043956.h"
#include "UnityEngine_UnityEngine_LayerMask3774646878.h"
#include "UnityEngine_UnityEngine_KeyCode1667950811.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_RaycastHit317570005.h"
#include "AssemblyU2DCSharp_UICamera_ControlScheme3085753218.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry2425649371.h"
#include "UnityEngine_UnityEngine_Plane2472683311.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera
struct  UICamera_t1496819779  : public MonoBehaviour_t774292115
{
public:
	// UICamera/EventType UICamera::eventType
	int32_t ___eventType_8;
	// System.Boolean UICamera::eventsGoToColliders
	bool ___eventsGoToColliders_9;
	// UnityEngine.LayerMask UICamera::eventReceiverMask
	LayerMask_t3774646878  ___eventReceiverMask_10;
	// System.Boolean UICamera::debug
	bool ___debug_11;
	// System.Boolean UICamera::useMouse
	bool ___useMouse_12;
	// System.Boolean UICamera::useTouch
	bool ___useTouch_13;
	// System.Boolean UICamera::allowMultiTouch
	bool ___allowMultiTouch_14;
	// System.Boolean UICamera::useKeyboard
	bool ___useKeyboard_15;
	// System.Boolean UICamera::useController
	bool ___useController_16;
	// System.Boolean UICamera::stickyTooltip
	bool ___stickyTooltip_17;
	// System.Single UICamera::tooltipDelay
	float ___tooltipDelay_18;
	// System.Boolean UICamera::longPressTooltip
	bool ___longPressTooltip_19;
	// System.Single UICamera::mouseDragThreshold
	float ___mouseDragThreshold_20;
	// System.Single UICamera::mouseClickThreshold
	float ___mouseClickThreshold_21;
	// System.Single UICamera::touchDragThreshold
	float ___touchDragThreshold_22;
	// System.Single UICamera::touchClickThreshold
	float ___touchClickThreshold_23;
	// System.Single UICamera::rangeDistance
	float ___rangeDistance_24;
	// System.String UICamera::scrollAxisName
	String_t* ___scrollAxisName_25;
	// System.String UICamera::verticalAxisName
	String_t* ___verticalAxisName_26;
	// System.String UICamera::horizontalAxisName
	String_t* ___horizontalAxisName_27;
	// System.Boolean UICamera::commandClick
	bool ___commandClick_28;
	// UnityEngine.KeyCode UICamera::submitKey0
	int32_t ___submitKey0_29;
	// UnityEngine.KeyCode UICamera::submitKey1
	int32_t ___submitKey1_30;
	// UnityEngine.KeyCode UICamera::cancelKey0
	int32_t ___cancelKey0_31;
	// UnityEngine.KeyCode UICamera::cancelKey1
	int32_t ___cancelKey1_32;
	// UnityEngine.GameObject UICamera::mTooltip
	GameObject_t1366199518 * ___mTooltip_71;
	// UnityEngine.Camera UICamera::mCam
	Camera_t2805735124 * ___mCam_72;
	// System.Single UICamera::mTooltipTime
	float ___mTooltipTime_73;
	// System.Single UICamera::mNextRaycast
	float ___mNextRaycast_74;

public:
	inline static int32_t get_offset_of_eventType_8() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___eventType_8)); }
	inline int32_t get_eventType_8() const { return ___eventType_8; }
	inline int32_t* get_address_of_eventType_8() { return &___eventType_8; }
	inline void set_eventType_8(int32_t value)
	{
		___eventType_8 = value;
	}

	inline static int32_t get_offset_of_eventsGoToColliders_9() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___eventsGoToColliders_9)); }
	inline bool get_eventsGoToColliders_9() const { return ___eventsGoToColliders_9; }
	inline bool* get_address_of_eventsGoToColliders_9() { return &___eventsGoToColliders_9; }
	inline void set_eventsGoToColliders_9(bool value)
	{
		___eventsGoToColliders_9 = value;
	}

	inline static int32_t get_offset_of_eventReceiverMask_10() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___eventReceiverMask_10)); }
	inline LayerMask_t3774646878  get_eventReceiverMask_10() const { return ___eventReceiverMask_10; }
	inline LayerMask_t3774646878 * get_address_of_eventReceiverMask_10() { return &___eventReceiverMask_10; }
	inline void set_eventReceiverMask_10(LayerMask_t3774646878  value)
	{
		___eventReceiverMask_10 = value;
	}

	inline static int32_t get_offset_of_debug_11() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___debug_11)); }
	inline bool get_debug_11() const { return ___debug_11; }
	inline bool* get_address_of_debug_11() { return &___debug_11; }
	inline void set_debug_11(bool value)
	{
		___debug_11 = value;
	}

	inline static int32_t get_offset_of_useMouse_12() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___useMouse_12)); }
	inline bool get_useMouse_12() const { return ___useMouse_12; }
	inline bool* get_address_of_useMouse_12() { return &___useMouse_12; }
	inline void set_useMouse_12(bool value)
	{
		___useMouse_12 = value;
	}

	inline static int32_t get_offset_of_useTouch_13() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___useTouch_13)); }
	inline bool get_useTouch_13() const { return ___useTouch_13; }
	inline bool* get_address_of_useTouch_13() { return &___useTouch_13; }
	inline void set_useTouch_13(bool value)
	{
		___useTouch_13 = value;
	}

	inline static int32_t get_offset_of_allowMultiTouch_14() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___allowMultiTouch_14)); }
	inline bool get_allowMultiTouch_14() const { return ___allowMultiTouch_14; }
	inline bool* get_address_of_allowMultiTouch_14() { return &___allowMultiTouch_14; }
	inline void set_allowMultiTouch_14(bool value)
	{
		___allowMultiTouch_14 = value;
	}

	inline static int32_t get_offset_of_useKeyboard_15() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___useKeyboard_15)); }
	inline bool get_useKeyboard_15() const { return ___useKeyboard_15; }
	inline bool* get_address_of_useKeyboard_15() { return &___useKeyboard_15; }
	inline void set_useKeyboard_15(bool value)
	{
		___useKeyboard_15 = value;
	}

	inline static int32_t get_offset_of_useController_16() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___useController_16)); }
	inline bool get_useController_16() const { return ___useController_16; }
	inline bool* get_address_of_useController_16() { return &___useController_16; }
	inline void set_useController_16(bool value)
	{
		___useController_16 = value;
	}

	inline static int32_t get_offset_of_stickyTooltip_17() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___stickyTooltip_17)); }
	inline bool get_stickyTooltip_17() const { return ___stickyTooltip_17; }
	inline bool* get_address_of_stickyTooltip_17() { return &___stickyTooltip_17; }
	inline void set_stickyTooltip_17(bool value)
	{
		___stickyTooltip_17 = value;
	}

	inline static int32_t get_offset_of_tooltipDelay_18() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___tooltipDelay_18)); }
	inline float get_tooltipDelay_18() const { return ___tooltipDelay_18; }
	inline float* get_address_of_tooltipDelay_18() { return &___tooltipDelay_18; }
	inline void set_tooltipDelay_18(float value)
	{
		___tooltipDelay_18 = value;
	}

	inline static int32_t get_offset_of_longPressTooltip_19() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___longPressTooltip_19)); }
	inline bool get_longPressTooltip_19() const { return ___longPressTooltip_19; }
	inline bool* get_address_of_longPressTooltip_19() { return &___longPressTooltip_19; }
	inline void set_longPressTooltip_19(bool value)
	{
		___longPressTooltip_19 = value;
	}

	inline static int32_t get_offset_of_mouseDragThreshold_20() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mouseDragThreshold_20)); }
	inline float get_mouseDragThreshold_20() const { return ___mouseDragThreshold_20; }
	inline float* get_address_of_mouseDragThreshold_20() { return &___mouseDragThreshold_20; }
	inline void set_mouseDragThreshold_20(float value)
	{
		___mouseDragThreshold_20 = value;
	}

	inline static int32_t get_offset_of_mouseClickThreshold_21() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mouseClickThreshold_21)); }
	inline float get_mouseClickThreshold_21() const { return ___mouseClickThreshold_21; }
	inline float* get_address_of_mouseClickThreshold_21() { return &___mouseClickThreshold_21; }
	inline void set_mouseClickThreshold_21(float value)
	{
		___mouseClickThreshold_21 = value;
	}

	inline static int32_t get_offset_of_touchDragThreshold_22() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___touchDragThreshold_22)); }
	inline float get_touchDragThreshold_22() const { return ___touchDragThreshold_22; }
	inline float* get_address_of_touchDragThreshold_22() { return &___touchDragThreshold_22; }
	inline void set_touchDragThreshold_22(float value)
	{
		___touchDragThreshold_22 = value;
	}

	inline static int32_t get_offset_of_touchClickThreshold_23() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___touchClickThreshold_23)); }
	inline float get_touchClickThreshold_23() const { return ___touchClickThreshold_23; }
	inline float* get_address_of_touchClickThreshold_23() { return &___touchClickThreshold_23; }
	inline void set_touchClickThreshold_23(float value)
	{
		___touchClickThreshold_23 = value;
	}

	inline static int32_t get_offset_of_rangeDistance_24() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___rangeDistance_24)); }
	inline float get_rangeDistance_24() const { return ___rangeDistance_24; }
	inline float* get_address_of_rangeDistance_24() { return &___rangeDistance_24; }
	inline void set_rangeDistance_24(float value)
	{
		___rangeDistance_24 = value;
	}

	inline static int32_t get_offset_of_scrollAxisName_25() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___scrollAxisName_25)); }
	inline String_t* get_scrollAxisName_25() const { return ___scrollAxisName_25; }
	inline String_t** get_address_of_scrollAxisName_25() { return &___scrollAxisName_25; }
	inline void set_scrollAxisName_25(String_t* value)
	{
		___scrollAxisName_25 = value;
		Il2CppCodeGenWriteBarrier(&___scrollAxisName_25, value);
	}

	inline static int32_t get_offset_of_verticalAxisName_26() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___verticalAxisName_26)); }
	inline String_t* get_verticalAxisName_26() const { return ___verticalAxisName_26; }
	inline String_t** get_address_of_verticalAxisName_26() { return &___verticalAxisName_26; }
	inline void set_verticalAxisName_26(String_t* value)
	{
		___verticalAxisName_26 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxisName_26, value);
	}

	inline static int32_t get_offset_of_horizontalAxisName_27() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___horizontalAxisName_27)); }
	inline String_t* get_horizontalAxisName_27() const { return ___horizontalAxisName_27; }
	inline String_t** get_address_of_horizontalAxisName_27() { return &___horizontalAxisName_27; }
	inline void set_horizontalAxisName_27(String_t* value)
	{
		___horizontalAxisName_27 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxisName_27, value);
	}

	inline static int32_t get_offset_of_commandClick_28() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___commandClick_28)); }
	inline bool get_commandClick_28() const { return ___commandClick_28; }
	inline bool* get_address_of_commandClick_28() { return &___commandClick_28; }
	inline void set_commandClick_28(bool value)
	{
		___commandClick_28 = value;
	}

	inline static int32_t get_offset_of_submitKey0_29() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___submitKey0_29)); }
	inline int32_t get_submitKey0_29() const { return ___submitKey0_29; }
	inline int32_t* get_address_of_submitKey0_29() { return &___submitKey0_29; }
	inline void set_submitKey0_29(int32_t value)
	{
		___submitKey0_29 = value;
	}

	inline static int32_t get_offset_of_submitKey1_30() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___submitKey1_30)); }
	inline int32_t get_submitKey1_30() const { return ___submitKey1_30; }
	inline int32_t* get_address_of_submitKey1_30() { return &___submitKey1_30; }
	inline void set_submitKey1_30(int32_t value)
	{
		___submitKey1_30 = value;
	}

	inline static int32_t get_offset_of_cancelKey0_31() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___cancelKey0_31)); }
	inline int32_t get_cancelKey0_31() const { return ___cancelKey0_31; }
	inline int32_t* get_address_of_cancelKey0_31() { return &___cancelKey0_31; }
	inline void set_cancelKey0_31(int32_t value)
	{
		___cancelKey0_31 = value;
	}

	inline static int32_t get_offset_of_cancelKey1_32() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___cancelKey1_32)); }
	inline int32_t get_cancelKey1_32() const { return ___cancelKey1_32; }
	inline int32_t* get_address_of_cancelKey1_32() { return &___cancelKey1_32; }
	inline void set_cancelKey1_32(int32_t value)
	{
		___cancelKey1_32 = value;
	}

	inline static int32_t get_offset_of_mTooltip_71() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mTooltip_71)); }
	inline GameObject_t1366199518 * get_mTooltip_71() const { return ___mTooltip_71; }
	inline GameObject_t1366199518 ** get_address_of_mTooltip_71() { return &___mTooltip_71; }
	inline void set_mTooltip_71(GameObject_t1366199518 * value)
	{
		___mTooltip_71 = value;
		Il2CppCodeGenWriteBarrier(&___mTooltip_71, value);
	}

	inline static int32_t get_offset_of_mCam_72() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mCam_72)); }
	inline Camera_t2805735124 * get_mCam_72() const { return ___mCam_72; }
	inline Camera_t2805735124 ** get_address_of_mCam_72() { return &___mCam_72; }
	inline void set_mCam_72(Camera_t2805735124 * value)
	{
		___mCam_72 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_72, value);
	}

	inline static int32_t get_offset_of_mTooltipTime_73() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mTooltipTime_73)); }
	inline float get_mTooltipTime_73() const { return ___mTooltipTime_73; }
	inline float* get_address_of_mTooltipTime_73() { return &___mTooltipTime_73; }
	inline void set_mTooltipTime_73(float value)
	{
		___mTooltipTime_73 = value;
	}

	inline static int32_t get_offset_of_mNextRaycast_74() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mNextRaycast_74)); }
	inline float get_mNextRaycast_74() const { return ___mNextRaycast_74; }
	inline float* get_address_of_mNextRaycast_74() { return &___mNextRaycast_74; }
	inline void set_mNextRaycast_74(float value)
	{
		___mNextRaycast_74 = value;
	}
};

struct UICamera_t1496819779_StaticFields
{
public:
	// BetterList`1<UICamera> UICamera::list
	BetterList_1_t1717208421 * ___list_2;
	// UICamera/GetKeyStateFunc UICamera::GetKeyDown
	GetKeyStateFunc_t318868414 * ___GetKeyDown_3;
	// UICamera/GetKeyStateFunc UICamera::GetKeyUp
	GetKeyStateFunc_t318868414 * ___GetKeyUp_4;
	// UICamera/GetKeyStateFunc UICamera::GetKey
	GetKeyStateFunc_t318868414 * ___GetKey_5;
	// UICamera/GetAxisFunc UICamera::GetAxis
	GetAxisFunc_t115786709 * ___GetAxis_6;
	// UICamera/OnScreenResize UICamera::onScreenResize
	OnScreenResize_t107161297 * ___onScreenResize_7;
	// UICamera/OnCustomInput UICamera::onCustomInput
	OnCustomInput_t3142665870 * ___onCustomInput_33;
	// System.Boolean UICamera::showTooltips
	bool ___showTooltips_34;
	// UnityEngine.Vector2 UICamera::lastTouchPosition
	Vector2_t465617798  ___lastTouchPosition_35;
	// UnityEngine.Vector3 UICamera::lastWorldPosition
	Vector3_t465617797  ___lastWorldPosition_36;
	// UnityEngine.RaycastHit UICamera::lastHit
	RaycastHit_t317570005  ___lastHit_37;
	// UICamera UICamera::current
	UICamera_t1496819779 * ___current_38;
	// UnityEngine.Camera UICamera::currentCamera
	Camera_t2805735124 * ___currentCamera_39;
	// UICamera/ControlScheme UICamera::currentScheme
	int32_t ___currentScheme_40;
	// System.Int32 UICamera::currentTouchID
	int32_t ___currentTouchID_41;
	// UnityEngine.KeyCode UICamera::currentKey
	int32_t ___currentKey_42;
	// UICamera/MouseOrTouch UICamera::currentTouch
	MouseOrTouch_t858607851 * ___currentTouch_43;
	// System.Boolean UICamera::inputHasFocus
	bool ___inputHasFocus_44;
	// UnityEngine.GameObject UICamera::mGenericHandler
	GameObject_t1366199518 * ___mGenericHandler_45;
	// UnityEngine.GameObject UICamera::fallThrough
	GameObject_t1366199518 * ___fallThrough_46;
	// UICamera/VoidDelegate UICamera::onClick
	VoidDelegate_t1154120062 * ___onClick_47;
	// UICamera/VoidDelegate UICamera::onDoubleClick
	VoidDelegate_t1154120062 * ___onDoubleClick_48;
	// UICamera/BoolDelegate UICamera::onHover
	BoolDelegate_t173576552 * ___onHover_49;
	// UICamera/BoolDelegate UICamera::onPress
	BoolDelegate_t173576552 * ___onPress_50;
	// UICamera/BoolDelegate UICamera::onSelect
	BoolDelegate_t173576552 * ___onSelect_51;
	// UICamera/FloatDelegate UICamera::onScroll
	FloatDelegate_t2914939686 * ___onScroll_52;
	// UICamera/VectorDelegate UICamera::onDrag
	VectorDelegate_t724328729 * ___onDrag_53;
	// UICamera/VoidDelegate UICamera::onDragStart
	VoidDelegate_t1154120062 * ___onDragStart_54;
	// UICamera/ObjectDelegate UICamera::onDragOver
	ObjectDelegate_t2642719037 * ___onDragOver_55;
	// UICamera/ObjectDelegate UICamera::onDragOut
	ObjectDelegate_t2642719037 * ___onDragOut_56;
	// UICamera/VoidDelegate UICamera::onDragEnd
	VoidDelegate_t1154120062 * ___onDragEnd_57;
	// UICamera/ObjectDelegate UICamera::onDrop
	ObjectDelegate_t2642719037 * ___onDrop_58;
	// UICamera/KeyCodeDelegate UICamera::onKey
	KeyCodeDelegate_t3185496720 * ___onKey_59;
	// UICamera/BoolDelegate UICamera::onTooltip
	BoolDelegate_t173576552 * ___onTooltip_60;
	// UICamera/MoveDelegate UICamera::onMouseMove
	MoveDelegate_t3038174214 * ___onMouseMove_61;
	// UnityEngine.GameObject UICamera::mCurrentSelection
	GameObject_t1366199518 * ___mCurrentSelection_62;
	// UICamera/MouseOrTouch[] UICamera::mMouse
	MouseOrTouchU5BU5D_t779546378* ___mMouse_63;
	// UnityEngine.GameObject UICamera::mHover
	GameObject_t1366199518 * ___mHover_64;
	// UICamera/MouseOrTouch UICamera::controller
	MouseOrTouch_t858607851 * ___controller_65;
	// System.Single UICamera::mNextEvent
	float ___mNextEvent_66;
	// System.Collections.Generic.List`1<UICamera/MouseOrTouch> UICamera::activeTouches
	List_1_t4264946490 * ___activeTouches_67;
	// System.Collections.Generic.List`1<System.Int32> UICamera::mTouchIDs
	List_1_t559541940 * ___mTouchIDs_68;
	// System.Int32 UICamera::mWidth
	int32_t ___mWidth_69;
	// System.Int32 UICamera::mHeight
	int32_t ___mHeight_70;
	// System.Boolean UICamera::isDragging
	bool ___isDragging_75;
	// UnityEngine.GameObject UICamera::hoveredObject
	GameObject_t1366199518 * ___hoveredObject_76;
	// UICamera/DepthEntry UICamera::mHit
	DepthEntry_t2425649371  ___mHit_77;
	// BetterList`1<UICamera/DepthEntry> UICamera::mHits
	BetterList_1_t2646038013 * ___mHits_78;
	// UnityEngine.Plane UICamera::m2DPlane
	Plane_t2472683311  ___m2DPlane_79;
	// System.Int32 UICamera::mNotifying
	int32_t ___mNotifying_80;
	// System.Boolean UICamera::mUsingTouchEvents
	bool ___mUsingTouchEvents_81;
	// UICamera/GetTouchCountCallback UICamera::GetInputTouchCount
	GetTouchCountCallback_t39553031 * ___GetInputTouchCount_82;
	// UICamera/GetTouchCallback UICamera::GetInputTouch
	GetTouchCallback_t2701442276 * ___GetInputTouch_83;
	// BetterList`1/CompareFunc<UICamera/DepthEntry> UICamera::<>f__am$cache52
	CompareFunc_t2346182379 * ___U3CU3Ef__amU24cache52_84;
	// BetterList`1/CompareFunc<UICamera/DepthEntry> UICamera::<>f__am$cache53
	CompareFunc_t2346182379 * ___U3CU3Ef__amU24cache53_85;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___list_2)); }
	inline BetterList_1_t1717208421 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t1717208421 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t1717208421 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of_GetKeyDown_3() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___GetKeyDown_3)); }
	inline GetKeyStateFunc_t318868414 * get_GetKeyDown_3() const { return ___GetKeyDown_3; }
	inline GetKeyStateFunc_t318868414 ** get_address_of_GetKeyDown_3() { return &___GetKeyDown_3; }
	inline void set_GetKeyDown_3(GetKeyStateFunc_t318868414 * value)
	{
		___GetKeyDown_3 = value;
		Il2CppCodeGenWriteBarrier(&___GetKeyDown_3, value);
	}

	inline static int32_t get_offset_of_GetKeyUp_4() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___GetKeyUp_4)); }
	inline GetKeyStateFunc_t318868414 * get_GetKeyUp_4() const { return ___GetKeyUp_4; }
	inline GetKeyStateFunc_t318868414 ** get_address_of_GetKeyUp_4() { return &___GetKeyUp_4; }
	inline void set_GetKeyUp_4(GetKeyStateFunc_t318868414 * value)
	{
		___GetKeyUp_4 = value;
		Il2CppCodeGenWriteBarrier(&___GetKeyUp_4, value);
	}

	inline static int32_t get_offset_of_GetKey_5() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___GetKey_5)); }
	inline GetKeyStateFunc_t318868414 * get_GetKey_5() const { return ___GetKey_5; }
	inline GetKeyStateFunc_t318868414 ** get_address_of_GetKey_5() { return &___GetKey_5; }
	inline void set_GetKey_5(GetKeyStateFunc_t318868414 * value)
	{
		___GetKey_5 = value;
		Il2CppCodeGenWriteBarrier(&___GetKey_5, value);
	}

	inline static int32_t get_offset_of_GetAxis_6() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___GetAxis_6)); }
	inline GetAxisFunc_t115786709 * get_GetAxis_6() const { return ___GetAxis_6; }
	inline GetAxisFunc_t115786709 ** get_address_of_GetAxis_6() { return &___GetAxis_6; }
	inline void set_GetAxis_6(GetAxisFunc_t115786709 * value)
	{
		___GetAxis_6 = value;
		Il2CppCodeGenWriteBarrier(&___GetAxis_6, value);
	}

	inline static int32_t get_offset_of_onScreenResize_7() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onScreenResize_7)); }
	inline OnScreenResize_t107161297 * get_onScreenResize_7() const { return ___onScreenResize_7; }
	inline OnScreenResize_t107161297 ** get_address_of_onScreenResize_7() { return &___onScreenResize_7; }
	inline void set_onScreenResize_7(OnScreenResize_t107161297 * value)
	{
		___onScreenResize_7 = value;
		Il2CppCodeGenWriteBarrier(&___onScreenResize_7, value);
	}

	inline static int32_t get_offset_of_onCustomInput_33() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onCustomInput_33)); }
	inline OnCustomInput_t3142665870 * get_onCustomInput_33() const { return ___onCustomInput_33; }
	inline OnCustomInput_t3142665870 ** get_address_of_onCustomInput_33() { return &___onCustomInput_33; }
	inline void set_onCustomInput_33(OnCustomInput_t3142665870 * value)
	{
		___onCustomInput_33 = value;
		Il2CppCodeGenWriteBarrier(&___onCustomInput_33, value);
	}

	inline static int32_t get_offset_of_showTooltips_34() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___showTooltips_34)); }
	inline bool get_showTooltips_34() const { return ___showTooltips_34; }
	inline bool* get_address_of_showTooltips_34() { return &___showTooltips_34; }
	inline void set_showTooltips_34(bool value)
	{
		___showTooltips_34 = value;
	}

	inline static int32_t get_offset_of_lastTouchPosition_35() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___lastTouchPosition_35)); }
	inline Vector2_t465617798  get_lastTouchPosition_35() const { return ___lastTouchPosition_35; }
	inline Vector2_t465617798 * get_address_of_lastTouchPosition_35() { return &___lastTouchPosition_35; }
	inline void set_lastTouchPosition_35(Vector2_t465617798  value)
	{
		___lastTouchPosition_35 = value;
	}

	inline static int32_t get_offset_of_lastWorldPosition_36() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___lastWorldPosition_36)); }
	inline Vector3_t465617797  get_lastWorldPosition_36() const { return ___lastWorldPosition_36; }
	inline Vector3_t465617797 * get_address_of_lastWorldPosition_36() { return &___lastWorldPosition_36; }
	inline void set_lastWorldPosition_36(Vector3_t465617797  value)
	{
		___lastWorldPosition_36 = value;
	}

	inline static int32_t get_offset_of_lastHit_37() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___lastHit_37)); }
	inline RaycastHit_t317570005  get_lastHit_37() const { return ___lastHit_37; }
	inline RaycastHit_t317570005 * get_address_of_lastHit_37() { return &___lastHit_37; }
	inline void set_lastHit_37(RaycastHit_t317570005  value)
	{
		___lastHit_37 = value;
	}

	inline static int32_t get_offset_of_current_38() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___current_38)); }
	inline UICamera_t1496819779 * get_current_38() const { return ___current_38; }
	inline UICamera_t1496819779 ** get_address_of_current_38() { return &___current_38; }
	inline void set_current_38(UICamera_t1496819779 * value)
	{
		___current_38 = value;
		Il2CppCodeGenWriteBarrier(&___current_38, value);
	}

	inline static int32_t get_offset_of_currentCamera_39() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___currentCamera_39)); }
	inline Camera_t2805735124 * get_currentCamera_39() const { return ___currentCamera_39; }
	inline Camera_t2805735124 ** get_address_of_currentCamera_39() { return &___currentCamera_39; }
	inline void set_currentCamera_39(Camera_t2805735124 * value)
	{
		___currentCamera_39 = value;
		Il2CppCodeGenWriteBarrier(&___currentCamera_39, value);
	}

	inline static int32_t get_offset_of_currentScheme_40() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___currentScheme_40)); }
	inline int32_t get_currentScheme_40() const { return ___currentScheme_40; }
	inline int32_t* get_address_of_currentScheme_40() { return &___currentScheme_40; }
	inline void set_currentScheme_40(int32_t value)
	{
		___currentScheme_40 = value;
	}

	inline static int32_t get_offset_of_currentTouchID_41() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___currentTouchID_41)); }
	inline int32_t get_currentTouchID_41() const { return ___currentTouchID_41; }
	inline int32_t* get_address_of_currentTouchID_41() { return &___currentTouchID_41; }
	inline void set_currentTouchID_41(int32_t value)
	{
		___currentTouchID_41 = value;
	}

	inline static int32_t get_offset_of_currentKey_42() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___currentKey_42)); }
	inline int32_t get_currentKey_42() const { return ___currentKey_42; }
	inline int32_t* get_address_of_currentKey_42() { return &___currentKey_42; }
	inline void set_currentKey_42(int32_t value)
	{
		___currentKey_42 = value;
	}

	inline static int32_t get_offset_of_currentTouch_43() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___currentTouch_43)); }
	inline MouseOrTouch_t858607851 * get_currentTouch_43() const { return ___currentTouch_43; }
	inline MouseOrTouch_t858607851 ** get_address_of_currentTouch_43() { return &___currentTouch_43; }
	inline void set_currentTouch_43(MouseOrTouch_t858607851 * value)
	{
		___currentTouch_43 = value;
		Il2CppCodeGenWriteBarrier(&___currentTouch_43, value);
	}

	inline static int32_t get_offset_of_inputHasFocus_44() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___inputHasFocus_44)); }
	inline bool get_inputHasFocus_44() const { return ___inputHasFocus_44; }
	inline bool* get_address_of_inputHasFocus_44() { return &___inputHasFocus_44; }
	inline void set_inputHasFocus_44(bool value)
	{
		___inputHasFocus_44 = value;
	}

	inline static int32_t get_offset_of_mGenericHandler_45() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mGenericHandler_45)); }
	inline GameObject_t1366199518 * get_mGenericHandler_45() const { return ___mGenericHandler_45; }
	inline GameObject_t1366199518 ** get_address_of_mGenericHandler_45() { return &___mGenericHandler_45; }
	inline void set_mGenericHandler_45(GameObject_t1366199518 * value)
	{
		___mGenericHandler_45 = value;
		Il2CppCodeGenWriteBarrier(&___mGenericHandler_45, value);
	}

	inline static int32_t get_offset_of_fallThrough_46() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___fallThrough_46)); }
	inline GameObject_t1366199518 * get_fallThrough_46() const { return ___fallThrough_46; }
	inline GameObject_t1366199518 ** get_address_of_fallThrough_46() { return &___fallThrough_46; }
	inline void set_fallThrough_46(GameObject_t1366199518 * value)
	{
		___fallThrough_46 = value;
		Il2CppCodeGenWriteBarrier(&___fallThrough_46, value);
	}

	inline static int32_t get_offset_of_onClick_47() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onClick_47)); }
	inline VoidDelegate_t1154120062 * get_onClick_47() const { return ___onClick_47; }
	inline VoidDelegate_t1154120062 ** get_address_of_onClick_47() { return &___onClick_47; }
	inline void set_onClick_47(VoidDelegate_t1154120062 * value)
	{
		___onClick_47 = value;
		Il2CppCodeGenWriteBarrier(&___onClick_47, value);
	}

	inline static int32_t get_offset_of_onDoubleClick_48() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onDoubleClick_48)); }
	inline VoidDelegate_t1154120062 * get_onDoubleClick_48() const { return ___onDoubleClick_48; }
	inline VoidDelegate_t1154120062 ** get_address_of_onDoubleClick_48() { return &___onDoubleClick_48; }
	inline void set_onDoubleClick_48(VoidDelegate_t1154120062 * value)
	{
		___onDoubleClick_48 = value;
		Il2CppCodeGenWriteBarrier(&___onDoubleClick_48, value);
	}

	inline static int32_t get_offset_of_onHover_49() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onHover_49)); }
	inline BoolDelegate_t173576552 * get_onHover_49() const { return ___onHover_49; }
	inline BoolDelegate_t173576552 ** get_address_of_onHover_49() { return &___onHover_49; }
	inline void set_onHover_49(BoolDelegate_t173576552 * value)
	{
		___onHover_49 = value;
		Il2CppCodeGenWriteBarrier(&___onHover_49, value);
	}

	inline static int32_t get_offset_of_onPress_50() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onPress_50)); }
	inline BoolDelegate_t173576552 * get_onPress_50() const { return ___onPress_50; }
	inline BoolDelegate_t173576552 ** get_address_of_onPress_50() { return &___onPress_50; }
	inline void set_onPress_50(BoolDelegate_t173576552 * value)
	{
		___onPress_50 = value;
		Il2CppCodeGenWriteBarrier(&___onPress_50, value);
	}

	inline static int32_t get_offset_of_onSelect_51() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onSelect_51)); }
	inline BoolDelegate_t173576552 * get_onSelect_51() const { return ___onSelect_51; }
	inline BoolDelegate_t173576552 ** get_address_of_onSelect_51() { return &___onSelect_51; }
	inline void set_onSelect_51(BoolDelegate_t173576552 * value)
	{
		___onSelect_51 = value;
		Il2CppCodeGenWriteBarrier(&___onSelect_51, value);
	}

	inline static int32_t get_offset_of_onScroll_52() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onScroll_52)); }
	inline FloatDelegate_t2914939686 * get_onScroll_52() const { return ___onScroll_52; }
	inline FloatDelegate_t2914939686 ** get_address_of_onScroll_52() { return &___onScroll_52; }
	inline void set_onScroll_52(FloatDelegate_t2914939686 * value)
	{
		___onScroll_52 = value;
		Il2CppCodeGenWriteBarrier(&___onScroll_52, value);
	}

	inline static int32_t get_offset_of_onDrag_53() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onDrag_53)); }
	inline VectorDelegate_t724328729 * get_onDrag_53() const { return ___onDrag_53; }
	inline VectorDelegate_t724328729 ** get_address_of_onDrag_53() { return &___onDrag_53; }
	inline void set_onDrag_53(VectorDelegate_t724328729 * value)
	{
		___onDrag_53 = value;
		Il2CppCodeGenWriteBarrier(&___onDrag_53, value);
	}

	inline static int32_t get_offset_of_onDragStart_54() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onDragStart_54)); }
	inline VoidDelegate_t1154120062 * get_onDragStart_54() const { return ___onDragStart_54; }
	inline VoidDelegate_t1154120062 ** get_address_of_onDragStart_54() { return &___onDragStart_54; }
	inline void set_onDragStart_54(VoidDelegate_t1154120062 * value)
	{
		___onDragStart_54 = value;
		Il2CppCodeGenWriteBarrier(&___onDragStart_54, value);
	}

	inline static int32_t get_offset_of_onDragOver_55() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onDragOver_55)); }
	inline ObjectDelegate_t2642719037 * get_onDragOver_55() const { return ___onDragOver_55; }
	inline ObjectDelegate_t2642719037 ** get_address_of_onDragOver_55() { return &___onDragOver_55; }
	inline void set_onDragOver_55(ObjectDelegate_t2642719037 * value)
	{
		___onDragOver_55 = value;
		Il2CppCodeGenWriteBarrier(&___onDragOver_55, value);
	}

	inline static int32_t get_offset_of_onDragOut_56() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onDragOut_56)); }
	inline ObjectDelegate_t2642719037 * get_onDragOut_56() const { return ___onDragOut_56; }
	inline ObjectDelegate_t2642719037 ** get_address_of_onDragOut_56() { return &___onDragOut_56; }
	inline void set_onDragOut_56(ObjectDelegate_t2642719037 * value)
	{
		___onDragOut_56 = value;
		Il2CppCodeGenWriteBarrier(&___onDragOut_56, value);
	}

	inline static int32_t get_offset_of_onDragEnd_57() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onDragEnd_57)); }
	inline VoidDelegate_t1154120062 * get_onDragEnd_57() const { return ___onDragEnd_57; }
	inline VoidDelegate_t1154120062 ** get_address_of_onDragEnd_57() { return &___onDragEnd_57; }
	inline void set_onDragEnd_57(VoidDelegate_t1154120062 * value)
	{
		___onDragEnd_57 = value;
		Il2CppCodeGenWriteBarrier(&___onDragEnd_57, value);
	}

	inline static int32_t get_offset_of_onDrop_58() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onDrop_58)); }
	inline ObjectDelegate_t2642719037 * get_onDrop_58() const { return ___onDrop_58; }
	inline ObjectDelegate_t2642719037 ** get_address_of_onDrop_58() { return &___onDrop_58; }
	inline void set_onDrop_58(ObjectDelegate_t2642719037 * value)
	{
		___onDrop_58 = value;
		Il2CppCodeGenWriteBarrier(&___onDrop_58, value);
	}

	inline static int32_t get_offset_of_onKey_59() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onKey_59)); }
	inline KeyCodeDelegate_t3185496720 * get_onKey_59() const { return ___onKey_59; }
	inline KeyCodeDelegate_t3185496720 ** get_address_of_onKey_59() { return &___onKey_59; }
	inline void set_onKey_59(KeyCodeDelegate_t3185496720 * value)
	{
		___onKey_59 = value;
		Il2CppCodeGenWriteBarrier(&___onKey_59, value);
	}

	inline static int32_t get_offset_of_onTooltip_60() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onTooltip_60)); }
	inline BoolDelegate_t173576552 * get_onTooltip_60() const { return ___onTooltip_60; }
	inline BoolDelegate_t173576552 ** get_address_of_onTooltip_60() { return &___onTooltip_60; }
	inline void set_onTooltip_60(BoolDelegate_t173576552 * value)
	{
		___onTooltip_60 = value;
		Il2CppCodeGenWriteBarrier(&___onTooltip_60, value);
	}

	inline static int32_t get_offset_of_onMouseMove_61() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onMouseMove_61)); }
	inline MoveDelegate_t3038174214 * get_onMouseMove_61() const { return ___onMouseMove_61; }
	inline MoveDelegate_t3038174214 ** get_address_of_onMouseMove_61() { return &___onMouseMove_61; }
	inline void set_onMouseMove_61(MoveDelegate_t3038174214 * value)
	{
		___onMouseMove_61 = value;
		Il2CppCodeGenWriteBarrier(&___onMouseMove_61, value);
	}

	inline static int32_t get_offset_of_mCurrentSelection_62() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mCurrentSelection_62)); }
	inline GameObject_t1366199518 * get_mCurrentSelection_62() const { return ___mCurrentSelection_62; }
	inline GameObject_t1366199518 ** get_address_of_mCurrentSelection_62() { return &___mCurrentSelection_62; }
	inline void set_mCurrentSelection_62(GameObject_t1366199518 * value)
	{
		___mCurrentSelection_62 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentSelection_62, value);
	}

	inline static int32_t get_offset_of_mMouse_63() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mMouse_63)); }
	inline MouseOrTouchU5BU5D_t779546378* get_mMouse_63() const { return ___mMouse_63; }
	inline MouseOrTouchU5BU5D_t779546378** get_address_of_mMouse_63() { return &___mMouse_63; }
	inline void set_mMouse_63(MouseOrTouchU5BU5D_t779546378* value)
	{
		___mMouse_63 = value;
		Il2CppCodeGenWriteBarrier(&___mMouse_63, value);
	}

	inline static int32_t get_offset_of_mHover_64() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mHover_64)); }
	inline GameObject_t1366199518 * get_mHover_64() const { return ___mHover_64; }
	inline GameObject_t1366199518 ** get_address_of_mHover_64() { return &___mHover_64; }
	inline void set_mHover_64(GameObject_t1366199518 * value)
	{
		___mHover_64 = value;
		Il2CppCodeGenWriteBarrier(&___mHover_64, value);
	}

	inline static int32_t get_offset_of_controller_65() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___controller_65)); }
	inline MouseOrTouch_t858607851 * get_controller_65() const { return ___controller_65; }
	inline MouseOrTouch_t858607851 ** get_address_of_controller_65() { return &___controller_65; }
	inline void set_controller_65(MouseOrTouch_t858607851 * value)
	{
		___controller_65 = value;
		Il2CppCodeGenWriteBarrier(&___controller_65, value);
	}

	inline static int32_t get_offset_of_mNextEvent_66() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mNextEvent_66)); }
	inline float get_mNextEvent_66() const { return ___mNextEvent_66; }
	inline float* get_address_of_mNextEvent_66() { return &___mNextEvent_66; }
	inline void set_mNextEvent_66(float value)
	{
		___mNextEvent_66 = value;
	}

	inline static int32_t get_offset_of_activeTouches_67() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___activeTouches_67)); }
	inline List_1_t4264946490 * get_activeTouches_67() const { return ___activeTouches_67; }
	inline List_1_t4264946490 ** get_address_of_activeTouches_67() { return &___activeTouches_67; }
	inline void set_activeTouches_67(List_1_t4264946490 * value)
	{
		___activeTouches_67 = value;
		Il2CppCodeGenWriteBarrier(&___activeTouches_67, value);
	}

	inline static int32_t get_offset_of_mTouchIDs_68() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mTouchIDs_68)); }
	inline List_1_t559541940 * get_mTouchIDs_68() const { return ___mTouchIDs_68; }
	inline List_1_t559541940 ** get_address_of_mTouchIDs_68() { return &___mTouchIDs_68; }
	inline void set_mTouchIDs_68(List_1_t559541940 * value)
	{
		___mTouchIDs_68 = value;
		Il2CppCodeGenWriteBarrier(&___mTouchIDs_68, value);
	}

	inline static int32_t get_offset_of_mWidth_69() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mWidth_69)); }
	inline int32_t get_mWidth_69() const { return ___mWidth_69; }
	inline int32_t* get_address_of_mWidth_69() { return &___mWidth_69; }
	inline void set_mWidth_69(int32_t value)
	{
		___mWidth_69 = value;
	}

	inline static int32_t get_offset_of_mHeight_70() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mHeight_70)); }
	inline int32_t get_mHeight_70() const { return ___mHeight_70; }
	inline int32_t* get_address_of_mHeight_70() { return &___mHeight_70; }
	inline void set_mHeight_70(int32_t value)
	{
		___mHeight_70 = value;
	}

	inline static int32_t get_offset_of_isDragging_75() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___isDragging_75)); }
	inline bool get_isDragging_75() const { return ___isDragging_75; }
	inline bool* get_address_of_isDragging_75() { return &___isDragging_75; }
	inline void set_isDragging_75(bool value)
	{
		___isDragging_75 = value;
	}

	inline static int32_t get_offset_of_hoveredObject_76() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___hoveredObject_76)); }
	inline GameObject_t1366199518 * get_hoveredObject_76() const { return ___hoveredObject_76; }
	inline GameObject_t1366199518 ** get_address_of_hoveredObject_76() { return &___hoveredObject_76; }
	inline void set_hoveredObject_76(GameObject_t1366199518 * value)
	{
		___hoveredObject_76 = value;
		Il2CppCodeGenWriteBarrier(&___hoveredObject_76, value);
	}

	inline static int32_t get_offset_of_mHit_77() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mHit_77)); }
	inline DepthEntry_t2425649371  get_mHit_77() const { return ___mHit_77; }
	inline DepthEntry_t2425649371 * get_address_of_mHit_77() { return &___mHit_77; }
	inline void set_mHit_77(DepthEntry_t2425649371  value)
	{
		___mHit_77 = value;
	}

	inline static int32_t get_offset_of_mHits_78() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mHits_78)); }
	inline BetterList_1_t2646038013 * get_mHits_78() const { return ___mHits_78; }
	inline BetterList_1_t2646038013 ** get_address_of_mHits_78() { return &___mHits_78; }
	inline void set_mHits_78(BetterList_1_t2646038013 * value)
	{
		___mHits_78 = value;
		Il2CppCodeGenWriteBarrier(&___mHits_78, value);
	}

	inline static int32_t get_offset_of_m2DPlane_79() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___m2DPlane_79)); }
	inline Plane_t2472683311  get_m2DPlane_79() const { return ___m2DPlane_79; }
	inline Plane_t2472683311 * get_address_of_m2DPlane_79() { return &___m2DPlane_79; }
	inline void set_m2DPlane_79(Plane_t2472683311  value)
	{
		___m2DPlane_79 = value;
	}

	inline static int32_t get_offset_of_mNotifying_80() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mNotifying_80)); }
	inline int32_t get_mNotifying_80() const { return ___mNotifying_80; }
	inline int32_t* get_address_of_mNotifying_80() { return &___mNotifying_80; }
	inline void set_mNotifying_80(int32_t value)
	{
		___mNotifying_80 = value;
	}

	inline static int32_t get_offset_of_mUsingTouchEvents_81() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mUsingTouchEvents_81)); }
	inline bool get_mUsingTouchEvents_81() const { return ___mUsingTouchEvents_81; }
	inline bool* get_address_of_mUsingTouchEvents_81() { return &___mUsingTouchEvents_81; }
	inline void set_mUsingTouchEvents_81(bool value)
	{
		___mUsingTouchEvents_81 = value;
	}

	inline static int32_t get_offset_of_GetInputTouchCount_82() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___GetInputTouchCount_82)); }
	inline GetTouchCountCallback_t39553031 * get_GetInputTouchCount_82() const { return ___GetInputTouchCount_82; }
	inline GetTouchCountCallback_t39553031 ** get_address_of_GetInputTouchCount_82() { return &___GetInputTouchCount_82; }
	inline void set_GetInputTouchCount_82(GetTouchCountCallback_t39553031 * value)
	{
		___GetInputTouchCount_82 = value;
		Il2CppCodeGenWriteBarrier(&___GetInputTouchCount_82, value);
	}

	inline static int32_t get_offset_of_GetInputTouch_83() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___GetInputTouch_83)); }
	inline GetTouchCallback_t2701442276 * get_GetInputTouch_83() const { return ___GetInputTouch_83; }
	inline GetTouchCallback_t2701442276 ** get_address_of_GetInputTouch_83() { return &___GetInputTouch_83; }
	inline void set_GetInputTouch_83(GetTouchCallback_t2701442276 * value)
	{
		___GetInputTouch_83 = value;
		Il2CppCodeGenWriteBarrier(&___GetInputTouch_83, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache52_84() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___U3CU3Ef__amU24cache52_84)); }
	inline CompareFunc_t2346182379 * get_U3CU3Ef__amU24cache52_84() const { return ___U3CU3Ef__amU24cache52_84; }
	inline CompareFunc_t2346182379 ** get_address_of_U3CU3Ef__amU24cache52_84() { return &___U3CU3Ef__amU24cache52_84; }
	inline void set_U3CU3Ef__amU24cache52_84(CompareFunc_t2346182379 * value)
	{
		___U3CU3Ef__amU24cache52_84 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache52_84, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache53_85() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___U3CU3Ef__amU24cache53_85)); }
	inline CompareFunc_t2346182379 * get_U3CU3Ef__amU24cache53_85() const { return ___U3CU3Ef__amU24cache53_85; }
	inline CompareFunc_t2346182379 ** get_address_of_U3CU3Ef__amU24cache53_85() { return &___U3CU3Ef__amU24cache53_85; }
	inline void set_U3CU3Ef__amU24cache53_85(CompareFunc_t2346182379 * value)
	{
		___U3CU3Ef__amU24cache53_85 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache53_85, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
