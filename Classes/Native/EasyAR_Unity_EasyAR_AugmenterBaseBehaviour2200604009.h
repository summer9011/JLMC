#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyAR.Augmenter
struct Augmenter_t3234512221;
// EasyAR.CameraDevice
struct CameraDevice_t1807135140;
// System.Collections.Generic.List`1<EasyAR.Target>
struct List_1_t1430451255;
// EasyAR.DeviceAbstractBehaviour
struct DeviceAbstractBehaviour_t4065891864;
// EasyAR.ImageTargetBaseBehaviour
struct ImageTargetBaseBehaviour_t1600490913;
// System.Action`2<EasyAR.AugmenterBaseBehaviour,UnityEngine.Texture2D>
struct Action_2_t1945898041;
// System.Action`2<EasyAR.AugmenterBaseBehaviour,EasyAR.Frame>
struct Action_2_t2762843445;
// System.Action`3<EasyAR.AugmenterBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target>
struct Action_3_t2685883933;
// System.Action`2<EasyAR.AugmenterBaseBehaviour,System.String>
struct Action_2_t338173157;
// System.Action`2<EasyAR.AugmenterBaseBehaviour,System.Boolean>
struct Action_2_t1513636390;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "EasyAR_Unity_EasyAR_AugmenterBaseBehaviour_CenterMo548064202.h"
#include "EasyAR_Unity_EasyAR_Vector2I2584456199.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.AugmenterBaseBehaviour
struct  AugmenterBaseBehaviour_t2200604009  : public MonoBehaviour_t774292115
{
public:
	// EasyAR.Augmenter EasyAR.AugmenterBaseBehaviour::Augmenter
	Augmenter_t3234512221 * ___Augmenter_2;
	// System.Boolean EasyAR.AugmenterBaseBehaviour::RenderReality
	bool ___RenderReality_3;
	// EasyAR.AugmenterBaseBehaviour/CenterMode EasyAR.AugmenterBaseBehaviour::WorldCenter
	int32_t ___WorldCenter_4;
	// System.Boolean EasyAR.AugmenterBaseBehaviour::rFlag
	bool ___rFlag_5;
	// System.Boolean EasyAR.AugmenterBaseBehaviour::texCreated
	bool ___texCreated_6;
	// EasyAR.CameraDevice EasyAR.AugmenterBaseBehaviour::cameraDevice
	CameraDevice_t1807135140 * ___cameraDevice_7;
	// System.Collections.Generic.List`1<EasyAR.Target> EasyAR.AugmenterBaseBehaviour::previousTargets
	List_1_t1430451255 * ___previousTargets_8;
	// EasyAR.DeviceAbstractBehaviour EasyAR.AugmenterBaseBehaviour::deviceBehaviour
	DeviceAbstractBehaviour_t4065891864 * ___deviceBehaviour_9;
	// System.Boolean EasyAR.AugmenterBaseBehaviour::preRenderReality
	bool ___preRenderReality_10;
	// EasyAR.ImageTargetBaseBehaviour EasyAR.AugmenterBaseBehaviour::CenterTarget
	ImageTargetBaseBehaviour_t1600490913 * ___CenterTarget_11;
	// EasyAR.Vector2I EasyAR.AugmenterBaseBehaviour::_size
	Vector2I_t2584456199  ____size_12;
	// System.Action`2<EasyAR.AugmenterBaseBehaviour,UnityEngine.Texture2D> EasyAR.AugmenterBaseBehaviour::PlaneTextureCreated
	Action_2_t1945898041 * ___PlaneTextureCreated_13;
	// System.Action`2<EasyAR.AugmenterBaseBehaviour,EasyAR.Frame> EasyAR.AugmenterBaseBehaviour::FrameUpdate
	Action_2_t2762843445 * ___FrameUpdate_14;
	// System.Action`3<EasyAR.AugmenterBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target> EasyAR.AugmenterBaseBehaviour::TargetFound
	Action_3_t2685883933 * ___TargetFound_15;
	// System.Action`3<EasyAR.AugmenterBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target> EasyAR.AugmenterBaseBehaviour::TargetLost
	Action_3_t2685883933 * ___TargetLost_16;
	// System.Action`2<EasyAR.AugmenterBaseBehaviour,System.String> EasyAR.AugmenterBaseBehaviour::TextMessage
	Action_2_t338173157 * ___TextMessage_17;
	// System.Action`2<EasyAR.AugmenterBaseBehaviour,System.Boolean> EasyAR.AugmenterBaseBehaviour::PlaneTextureRenderChanged
	Action_2_t1513636390 * ___PlaneTextureRenderChanged_18;

public:
	inline static int32_t get_offset_of_Augmenter_2() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___Augmenter_2)); }
	inline Augmenter_t3234512221 * get_Augmenter_2() const { return ___Augmenter_2; }
	inline Augmenter_t3234512221 ** get_address_of_Augmenter_2() { return &___Augmenter_2; }
	inline void set_Augmenter_2(Augmenter_t3234512221 * value)
	{
		___Augmenter_2 = value;
		Il2CppCodeGenWriteBarrier(&___Augmenter_2, value);
	}

	inline static int32_t get_offset_of_RenderReality_3() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___RenderReality_3)); }
	inline bool get_RenderReality_3() const { return ___RenderReality_3; }
	inline bool* get_address_of_RenderReality_3() { return &___RenderReality_3; }
	inline void set_RenderReality_3(bool value)
	{
		___RenderReality_3 = value;
	}

	inline static int32_t get_offset_of_WorldCenter_4() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___WorldCenter_4)); }
	inline int32_t get_WorldCenter_4() const { return ___WorldCenter_4; }
	inline int32_t* get_address_of_WorldCenter_4() { return &___WorldCenter_4; }
	inline void set_WorldCenter_4(int32_t value)
	{
		___WorldCenter_4 = value;
	}

	inline static int32_t get_offset_of_rFlag_5() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___rFlag_5)); }
	inline bool get_rFlag_5() const { return ___rFlag_5; }
	inline bool* get_address_of_rFlag_5() { return &___rFlag_5; }
	inline void set_rFlag_5(bool value)
	{
		___rFlag_5 = value;
	}

	inline static int32_t get_offset_of_texCreated_6() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___texCreated_6)); }
	inline bool get_texCreated_6() const { return ___texCreated_6; }
	inline bool* get_address_of_texCreated_6() { return &___texCreated_6; }
	inline void set_texCreated_6(bool value)
	{
		___texCreated_6 = value;
	}

	inline static int32_t get_offset_of_cameraDevice_7() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___cameraDevice_7)); }
	inline CameraDevice_t1807135140 * get_cameraDevice_7() const { return ___cameraDevice_7; }
	inline CameraDevice_t1807135140 ** get_address_of_cameraDevice_7() { return &___cameraDevice_7; }
	inline void set_cameraDevice_7(CameraDevice_t1807135140 * value)
	{
		___cameraDevice_7 = value;
		Il2CppCodeGenWriteBarrier(&___cameraDevice_7, value);
	}

	inline static int32_t get_offset_of_previousTargets_8() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___previousTargets_8)); }
	inline List_1_t1430451255 * get_previousTargets_8() const { return ___previousTargets_8; }
	inline List_1_t1430451255 ** get_address_of_previousTargets_8() { return &___previousTargets_8; }
	inline void set_previousTargets_8(List_1_t1430451255 * value)
	{
		___previousTargets_8 = value;
		Il2CppCodeGenWriteBarrier(&___previousTargets_8, value);
	}

	inline static int32_t get_offset_of_deviceBehaviour_9() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___deviceBehaviour_9)); }
	inline DeviceAbstractBehaviour_t4065891864 * get_deviceBehaviour_9() const { return ___deviceBehaviour_9; }
	inline DeviceAbstractBehaviour_t4065891864 ** get_address_of_deviceBehaviour_9() { return &___deviceBehaviour_9; }
	inline void set_deviceBehaviour_9(DeviceAbstractBehaviour_t4065891864 * value)
	{
		___deviceBehaviour_9 = value;
		Il2CppCodeGenWriteBarrier(&___deviceBehaviour_9, value);
	}

	inline static int32_t get_offset_of_preRenderReality_10() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___preRenderReality_10)); }
	inline bool get_preRenderReality_10() const { return ___preRenderReality_10; }
	inline bool* get_address_of_preRenderReality_10() { return &___preRenderReality_10; }
	inline void set_preRenderReality_10(bool value)
	{
		___preRenderReality_10 = value;
	}

	inline static int32_t get_offset_of_CenterTarget_11() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___CenterTarget_11)); }
	inline ImageTargetBaseBehaviour_t1600490913 * get_CenterTarget_11() const { return ___CenterTarget_11; }
	inline ImageTargetBaseBehaviour_t1600490913 ** get_address_of_CenterTarget_11() { return &___CenterTarget_11; }
	inline void set_CenterTarget_11(ImageTargetBaseBehaviour_t1600490913 * value)
	{
		___CenterTarget_11 = value;
		Il2CppCodeGenWriteBarrier(&___CenterTarget_11, value);
	}

	inline static int32_t get_offset_of__size_12() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ____size_12)); }
	inline Vector2I_t2584456199  get__size_12() const { return ____size_12; }
	inline Vector2I_t2584456199 * get_address_of__size_12() { return &____size_12; }
	inline void set__size_12(Vector2I_t2584456199  value)
	{
		____size_12 = value;
	}

	inline static int32_t get_offset_of_PlaneTextureCreated_13() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___PlaneTextureCreated_13)); }
	inline Action_2_t1945898041 * get_PlaneTextureCreated_13() const { return ___PlaneTextureCreated_13; }
	inline Action_2_t1945898041 ** get_address_of_PlaneTextureCreated_13() { return &___PlaneTextureCreated_13; }
	inline void set_PlaneTextureCreated_13(Action_2_t1945898041 * value)
	{
		___PlaneTextureCreated_13 = value;
		Il2CppCodeGenWriteBarrier(&___PlaneTextureCreated_13, value);
	}

	inline static int32_t get_offset_of_FrameUpdate_14() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___FrameUpdate_14)); }
	inline Action_2_t2762843445 * get_FrameUpdate_14() const { return ___FrameUpdate_14; }
	inline Action_2_t2762843445 ** get_address_of_FrameUpdate_14() { return &___FrameUpdate_14; }
	inline void set_FrameUpdate_14(Action_2_t2762843445 * value)
	{
		___FrameUpdate_14 = value;
		Il2CppCodeGenWriteBarrier(&___FrameUpdate_14, value);
	}

	inline static int32_t get_offset_of_TargetFound_15() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___TargetFound_15)); }
	inline Action_3_t2685883933 * get_TargetFound_15() const { return ___TargetFound_15; }
	inline Action_3_t2685883933 ** get_address_of_TargetFound_15() { return &___TargetFound_15; }
	inline void set_TargetFound_15(Action_3_t2685883933 * value)
	{
		___TargetFound_15 = value;
		Il2CppCodeGenWriteBarrier(&___TargetFound_15, value);
	}

	inline static int32_t get_offset_of_TargetLost_16() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___TargetLost_16)); }
	inline Action_3_t2685883933 * get_TargetLost_16() const { return ___TargetLost_16; }
	inline Action_3_t2685883933 ** get_address_of_TargetLost_16() { return &___TargetLost_16; }
	inline void set_TargetLost_16(Action_3_t2685883933 * value)
	{
		___TargetLost_16 = value;
		Il2CppCodeGenWriteBarrier(&___TargetLost_16, value);
	}

	inline static int32_t get_offset_of_TextMessage_17() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___TextMessage_17)); }
	inline Action_2_t338173157 * get_TextMessage_17() const { return ___TextMessage_17; }
	inline Action_2_t338173157 ** get_address_of_TextMessage_17() { return &___TextMessage_17; }
	inline void set_TextMessage_17(Action_2_t338173157 * value)
	{
		___TextMessage_17 = value;
		Il2CppCodeGenWriteBarrier(&___TextMessage_17, value);
	}

	inline static int32_t get_offset_of_PlaneTextureRenderChanged_18() { return static_cast<int32_t>(offsetof(AugmenterBaseBehaviour_t2200604009, ___PlaneTextureRenderChanged_18)); }
	inline Action_2_t1513636390 * get_PlaneTextureRenderChanged_18() const { return ___PlaneTextureRenderChanged_18; }
	inline Action_2_t1513636390 ** get_address_of_PlaneTextureRenderChanged_18() { return &___PlaneTextureRenderChanged_18; }
	inline void set_PlaneTextureRenderChanged_18(Action_2_t1513636390 * value)
	{
		___PlaneTextureRenderChanged_18 = value;
		Il2CppCodeGenWriteBarrier(&___PlaneTextureRenderChanged_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
