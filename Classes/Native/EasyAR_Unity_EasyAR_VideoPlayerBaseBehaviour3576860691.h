#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// EasyAR.VideoPlayer
struct VideoPlayer_t4150865119;
// EasyAR.ImageTargetBaseBehaviour
struct ImageTargetBaseBehaviour_t1600490913;
// System.EventHandler
struct EventHandler_t1189809773;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "EasyAR_Unity_EasyAR_StorageType622972528.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer_VideoType1922925679.h"
#include "EasyAR_Unity_EasyAR_VideoPlayerBaseBehaviour_Scale2614717841.h"
#include "EasyAR_Unity_EasyAR_VideoPlayerBaseBehaviour_Scale1837384624.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.VideoPlayerBaseBehaviour
struct  VideoPlayerBaseBehaviour_t3576860691  : public MonoBehaviour_t774292115
{
public:
	// System.String EasyAR.VideoPlayerBaseBehaviour::Path
	String_t* ___Path_2;
	// EasyAR.StorageType EasyAR.VideoPlayerBaseBehaviour::Storage
	int32_t ___Storage_3;
	// EasyAR.VideoPlayer/VideoType EasyAR.VideoPlayerBaseBehaviour::Type
	int32_t ___Type_4;
	// EasyAR.VideoPlayerBaseBehaviour/ScaleMode EasyAR.VideoPlayerBaseBehaviour::VideoScaleMode
	int32_t ___VideoScaleMode_5;
	// EasyAR.VideoPlayerBaseBehaviour/ScalePlane EasyAR.VideoPlayerBaseBehaviour::VideoScalePlane
	int32_t ___VideoScalePlane_6;
	// System.Single EasyAR.VideoPlayerBaseBehaviour::VideoScaleFactorBase
	float ___VideoScaleFactorBase_7;
	// System.Boolean EasyAR.VideoPlayerBaseBehaviour::EnableAutoPlay
	bool ___EnableAutoPlay_8;
	// System.Boolean EasyAR.VideoPlayerBaseBehaviour::EnableLoop
	bool ___EnableLoop_9;
	// System.Boolean EasyAR.VideoPlayerBaseBehaviour::OpenWhenStart
	bool ___OpenWhenStart_10;
	// System.Boolean EasyAR.VideoPlayerBaseBehaviour::DisplayTextMessage
	bool ___DisplayTextMessage_11;
	// EasyAR.VideoPlayer EasyAR.VideoPlayerBaseBehaviour::VideoPlayer
	VideoPlayer_t4150865119 * ___VideoPlayer_12;
	// UnityEngine.Vector2 EasyAR.VideoPlayerBaseBehaviour::targetSize
	Vector2_t465617798  ___targetSize_13;
	// EasyAR.ImageTargetBaseBehaviour EasyAR.VideoPlayerBaseBehaviour::targetBehaviour
	ImageTargetBaseBehaviour_t1600490913 * ___targetBehaviour_14;
	// System.Boolean EasyAR.VideoPlayerBaseBehaviour::isPlaying
	bool ___isPlaying_15;
	// System.Boolean EasyAR.VideoPlayerBaseBehaviour::needScale
	bool ___needScale_16;
	// System.EventHandler EasyAR.VideoPlayerBaseBehaviour::VideoReadyEvent
	EventHandler_t1189809773 * ___VideoReadyEvent_17;
	// System.EventHandler EasyAR.VideoPlayerBaseBehaviour::VideoReachEndEvent
	EventHandler_t1189809773 * ___VideoReachEndEvent_18;
	// System.EventHandler EasyAR.VideoPlayerBaseBehaviour::VideoErrorEvent
	EventHandler_t1189809773 * ___VideoErrorEvent_19;

public:
	inline static int32_t get_offset_of_Path_2() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___Path_2)); }
	inline String_t* get_Path_2() const { return ___Path_2; }
	inline String_t** get_address_of_Path_2() { return &___Path_2; }
	inline void set_Path_2(String_t* value)
	{
		___Path_2 = value;
		Il2CppCodeGenWriteBarrier(&___Path_2, value);
	}

	inline static int32_t get_offset_of_Storage_3() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___Storage_3)); }
	inline int32_t get_Storage_3() const { return ___Storage_3; }
	inline int32_t* get_address_of_Storage_3() { return &___Storage_3; }
	inline void set_Storage_3(int32_t value)
	{
		___Storage_3 = value;
	}

	inline static int32_t get_offset_of_Type_4() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___Type_4)); }
	inline int32_t get_Type_4() const { return ___Type_4; }
	inline int32_t* get_address_of_Type_4() { return &___Type_4; }
	inline void set_Type_4(int32_t value)
	{
		___Type_4 = value;
	}

	inline static int32_t get_offset_of_VideoScaleMode_5() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___VideoScaleMode_5)); }
	inline int32_t get_VideoScaleMode_5() const { return ___VideoScaleMode_5; }
	inline int32_t* get_address_of_VideoScaleMode_5() { return &___VideoScaleMode_5; }
	inline void set_VideoScaleMode_5(int32_t value)
	{
		___VideoScaleMode_5 = value;
	}

	inline static int32_t get_offset_of_VideoScalePlane_6() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___VideoScalePlane_6)); }
	inline int32_t get_VideoScalePlane_6() const { return ___VideoScalePlane_6; }
	inline int32_t* get_address_of_VideoScalePlane_6() { return &___VideoScalePlane_6; }
	inline void set_VideoScalePlane_6(int32_t value)
	{
		___VideoScalePlane_6 = value;
	}

	inline static int32_t get_offset_of_VideoScaleFactorBase_7() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___VideoScaleFactorBase_7)); }
	inline float get_VideoScaleFactorBase_7() const { return ___VideoScaleFactorBase_7; }
	inline float* get_address_of_VideoScaleFactorBase_7() { return &___VideoScaleFactorBase_7; }
	inline void set_VideoScaleFactorBase_7(float value)
	{
		___VideoScaleFactorBase_7 = value;
	}

	inline static int32_t get_offset_of_EnableAutoPlay_8() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___EnableAutoPlay_8)); }
	inline bool get_EnableAutoPlay_8() const { return ___EnableAutoPlay_8; }
	inline bool* get_address_of_EnableAutoPlay_8() { return &___EnableAutoPlay_8; }
	inline void set_EnableAutoPlay_8(bool value)
	{
		___EnableAutoPlay_8 = value;
	}

	inline static int32_t get_offset_of_EnableLoop_9() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___EnableLoop_9)); }
	inline bool get_EnableLoop_9() const { return ___EnableLoop_9; }
	inline bool* get_address_of_EnableLoop_9() { return &___EnableLoop_9; }
	inline void set_EnableLoop_9(bool value)
	{
		___EnableLoop_9 = value;
	}

	inline static int32_t get_offset_of_OpenWhenStart_10() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___OpenWhenStart_10)); }
	inline bool get_OpenWhenStart_10() const { return ___OpenWhenStart_10; }
	inline bool* get_address_of_OpenWhenStart_10() { return &___OpenWhenStart_10; }
	inline void set_OpenWhenStart_10(bool value)
	{
		___OpenWhenStart_10 = value;
	}

	inline static int32_t get_offset_of_DisplayTextMessage_11() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___DisplayTextMessage_11)); }
	inline bool get_DisplayTextMessage_11() const { return ___DisplayTextMessage_11; }
	inline bool* get_address_of_DisplayTextMessage_11() { return &___DisplayTextMessage_11; }
	inline void set_DisplayTextMessage_11(bool value)
	{
		___DisplayTextMessage_11 = value;
	}

	inline static int32_t get_offset_of_VideoPlayer_12() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___VideoPlayer_12)); }
	inline VideoPlayer_t4150865119 * get_VideoPlayer_12() const { return ___VideoPlayer_12; }
	inline VideoPlayer_t4150865119 ** get_address_of_VideoPlayer_12() { return &___VideoPlayer_12; }
	inline void set_VideoPlayer_12(VideoPlayer_t4150865119 * value)
	{
		___VideoPlayer_12 = value;
		Il2CppCodeGenWriteBarrier(&___VideoPlayer_12, value);
	}

	inline static int32_t get_offset_of_targetSize_13() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___targetSize_13)); }
	inline Vector2_t465617798  get_targetSize_13() const { return ___targetSize_13; }
	inline Vector2_t465617798 * get_address_of_targetSize_13() { return &___targetSize_13; }
	inline void set_targetSize_13(Vector2_t465617798  value)
	{
		___targetSize_13 = value;
	}

	inline static int32_t get_offset_of_targetBehaviour_14() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___targetBehaviour_14)); }
	inline ImageTargetBaseBehaviour_t1600490913 * get_targetBehaviour_14() const { return ___targetBehaviour_14; }
	inline ImageTargetBaseBehaviour_t1600490913 ** get_address_of_targetBehaviour_14() { return &___targetBehaviour_14; }
	inline void set_targetBehaviour_14(ImageTargetBaseBehaviour_t1600490913 * value)
	{
		___targetBehaviour_14 = value;
		Il2CppCodeGenWriteBarrier(&___targetBehaviour_14, value);
	}

	inline static int32_t get_offset_of_isPlaying_15() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___isPlaying_15)); }
	inline bool get_isPlaying_15() const { return ___isPlaying_15; }
	inline bool* get_address_of_isPlaying_15() { return &___isPlaying_15; }
	inline void set_isPlaying_15(bool value)
	{
		___isPlaying_15 = value;
	}

	inline static int32_t get_offset_of_needScale_16() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___needScale_16)); }
	inline bool get_needScale_16() const { return ___needScale_16; }
	inline bool* get_address_of_needScale_16() { return &___needScale_16; }
	inline void set_needScale_16(bool value)
	{
		___needScale_16 = value;
	}

	inline static int32_t get_offset_of_VideoReadyEvent_17() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___VideoReadyEvent_17)); }
	inline EventHandler_t1189809773 * get_VideoReadyEvent_17() const { return ___VideoReadyEvent_17; }
	inline EventHandler_t1189809773 ** get_address_of_VideoReadyEvent_17() { return &___VideoReadyEvent_17; }
	inline void set_VideoReadyEvent_17(EventHandler_t1189809773 * value)
	{
		___VideoReadyEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___VideoReadyEvent_17, value);
	}

	inline static int32_t get_offset_of_VideoReachEndEvent_18() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___VideoReachEndEvent_18)); }
	inline EventHandler_t1189809773 * get_VideoReachEndEvent_18() const { return ___VideoReachEndEvent_18; }
	inline EventHandler_t1189809773 ** get_address_of_VideoReachEndEvent_18() { return &___VideoReachEndEvent_18; }
	inline void set_VideoReachEndEvent_18(EventHandler_t1189809773 * value)
	{
		___VideoReachEndEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___VideoReachEndEvent_18, value);
	}

	inline static int32_t get_offset_of_VideoErrorEvent_19() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t3576860691, ___VideoErrorEvent_19)); }
	inline EventHandler_t1189809773 * get_VideoErrorEvent_19() const { return ___VideoErrorEvent_19; }
	inline EventHandler_t1189809773 ** get_address_of_VideoErrorEvent_19() { return &___VideoErrorEvent_19; }
	inline void set_VideoErrorEvent_19(EventHandler_t1189809773 * value)
	{
		___VideoErrorEvent_19 = value;
		Il2CppCodeGenWriteBarrier(&___VideoErrorEvent_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
