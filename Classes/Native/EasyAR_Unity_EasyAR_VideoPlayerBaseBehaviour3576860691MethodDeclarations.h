#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// EasyAR.VideoPlayerBaseBehaviour
struct VideoPlayerBaseBehaviour_t3576860691;
// System.EventHandler
struct EventHandler_t1189809773;
// EasyAR.VideoPlayer
struct VideoPlayer_t4150865119;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler1189809773.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer4150865119.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer_PlayerStatus2767287061.h"

// System.Void EasyAR.VideoPlayerBaseBehaviour::.ctor()
extern "C"  void VideoPlayerBaseBehaviour__ctor_m4050658996 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::add_VideoReadyEvent(System.EventHandler)
extern "C"  void VideoPlayerBaseBehaviour_add_VideoReadyEvent_m3762111473 (VideoPlayerBaseBehaviour_t3576860691 * __this, EventHandler_t1189809773 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::remove_VideoReadyEvent(System.EventHandler)
extern "C"  void VideoPlayerBaseBehaviour_remove_VideoReadyEvent_m3964655176 (VideoPlayerBaseBehaviour_t3576860691 * __this, EventHandler_t1189809773 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::add_VideoReachEndEvent(System.EventHandler)
extern "C"  void VideoPlayerBaseBehaviour_add_VideoReachEndEvent_m63343556 (VideoPlayerBaseBehaviour_t3576860691 * __this, EventHandler_t1189809773 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::remove_VideoReachEndEvent(System.EventHandler)
extern "C"  void VideoPlayerBaseBehaviour_remove_VideoReachEndEvent_m3575778391 (VideoPlayerBaseBehaviour_t3576860691 * __this, EventHandler_t1189809773 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::add_VideoErrorEvent(System.EventHandler)
extern "C"  void VideoPlayerBaseBehaviour_add_VideoErrorEvent_m519712406 (VideoPlayerBaseBehaviour_t3576860691 * __this, EventHandler_t1189809773 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::remove_VideoErrorEvent(System.EventHandler)
extern "C"  void VideoPlayerBaseBehaviour_remove_VideoErrorEvent_m2013706301 (VideoPlayerBaseBehaviour_t3576860691 * __this, EventHandler_t1189809773 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.VideoPlayerBaseBehaviour::get_Volume()
extern "C"  float VideoPlayerBaseBehaviour_get_Volume_m1362937289 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::set_Volume(System.Single)
extern "C"  void VideoPlayerBaseBehaviour_set_Volume_m3241997134 (VideoPlayerBaseBehaviour_t3576860691 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::Awake()
extern "C"  void VideoPlayerBaseBehaviour_Awake_m2164830255 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::Init()
extern "C"  void VideoPlayerBaseBehaviour_Init_m1174319132 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::Start()
extern "C"  void VideoPlayerBaseBehaviour_Start_m3696887296 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::OnDestroy()
extern "C"  void VideoPlayerBaseBehaviour_OnDestroy_m2649585341 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::Update()
extern "C"  void VideoPlayerBaseBehaviour_Update_m3385077251 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::OnEnable()
extern "C"  void VideoPlayerBaseBehaviour_OnEnable_m108977888 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::OnDisable()
extern "C"  void VideoPlayerBaseBehaviour_OnDisable_m1786098875 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::Open()
extern "C"  void VideoPlayerBaseBehaviour_Open_m2333120102 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::Close()
extern "C"  void VideoPlayerBaseBehaviour_Close_m1489406600 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::Play()
extern "C"  bool VideoPlayerBaseBehaviour_Play_m221071294 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::Pause()
extern "C"  bool VideoPlayerBaseBehaviour_Pause_m3602741136 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::Stop()
extern "C"  bool VideoPlayerBaseBehaviour_Stop_m2028532840 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::Seek(System.Int32)
extern "C"  bool VideoPlayerBaseBehaviour_Seek_m508018403 (VideoPlayerBaseBehaviour_t3576860691 * __this, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayerBaseBehaviour::CurPosition()
extern "C"  int32_t VideoPlayerBaseBehaviour_CurPosition_m1866436065 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayerBaseBehaviour::Width()
extern "C"  int32_t VideoPlayerBaseBehaviour_Width_m2641544026 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayerBaseBehaviour::Height()
extern "C"  int32_t VideoPlayerBaseBehaviour_Height_m3409534895 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayerBaseBehaviour::Duration()
extern "C"  int32_t VideoPlayerBaseBehaviour_Duration_m404637064 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::OnStateChange(EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus)
extern "C"  void VideoPlayerBaseBehaviour_OnStateChange_m1891007214 (VideoPlayerBaseBehaviour_t3576860691 * __this, VideoPlayer_t4150865119 * ___player, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::AutoScale()
extern "C"  bool VideoPlayerBaseBehaviour_AutoScale_m1681688057 (VideoPlayerBaseBehaviour_t3576860691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
