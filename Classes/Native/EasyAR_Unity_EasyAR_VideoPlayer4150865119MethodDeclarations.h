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

// EasyAR.VideoPlayer
struct VideoPlayer_t4150865119;
// System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus>
struct Action_2_t4152849252;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "EasyAR_Unity_EasyAR_StorageType622972528.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer_VideoType1922925679.h"

// System.Void EasyAR.VideoPlayer::.ctor()
extern "C"  void VideoPlayer__ctor_m2063337666 (VideoPlayer_t4150865119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::.cctor()
extern "C"  void VideoPlayer__cctor_m2242755137 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::add_PlayerStatusChanged(System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus>)
extern "C"  void VideoPlayer_add_PlayerStatusChanged_m1005965502 (VideoPlayer_t4150865119 * __this, Action_2_t4152849252 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::remove_PlayerStatusChanged(System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus>)
extern "C"  void VideoPlayer_remove_PlayerStatusChanged_m2329707271 (VideoPlayer_t4150865119 * __this, Action_2_t4152849252 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::set_IsMultithreadCallback(System.Boolean)
extern "C"  void VideoPlayer_set_IsMultithreadCallback_m1760149014 (VideoPlayer_t4150865119 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayer::get_IsMultithreadCallback()
extern "C"  bool VideoPlayer_get_IsMultithreadCallback_m1372274555 (VideoPlayer_t4150865119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.VideoPlayer::get_Volume()
extern "C"  float VideoPlayer_get_Volume_m828001397 (VideoPlayer_t4150865119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::set_Volume(System.Single)
extern "C"  void VideoPlayer_set_Volume_m3090283432 (VideoPlayer_t4150865119 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::Dispose(System.Boolean)
extern "C"  void VideoPlayer_Dispose_m1655534046 (VideoPlayer_t4150865119 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayer::CheckCallback()
extern "C"  bool VideoPlayer_CheckCallback_m2439654209 (VideoPlayer_t4150865119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::UpdateFrame()
extern "C"  void VideoPlayer_UpdateFrame_m4233516480 (VideoPlayer_t4150865119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayer::Play()
extern "C"  bool VideoPlayer_Play_m3351326832 (VideoPlayer_t4150865119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayer::Pause()
extern "C"  bool VideoPlayer_Pause_m2752930870 (VideoPlayer_t4150865119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayer::Stop()
extern "C"  bool VideoPlayer_Stop_m2729427342 (VideoPlayer_t4150865119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::Open(System.String,EasyAR.StorageType)
extern "C"  void VideoPlayer_Open_m1439416930 (VideoPlayer_t4150865119 * __this, String_t* ___url, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::Close()
extern "C"  void VideoPlayer_Close_m1927884758 (VideoPlayer_t4150865119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayer::Seek(System.Int32)
extern "C"  bool VideoPlayer_Seek_m2295596999 (VideoPlayer_t4150865119 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayer::CurrentPosition()
extern "C"  int32_t VideoPlayer_CurrentPosition_m782624746 (VideoPlayer_t4150865119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayer::Width()
extern "C"  int32_t VideoPlayer_Width_m2505203188 (VideoPlayer_t4150865119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayer::Height()
extern "C"  int32_t VideoPlayer_Height_m2760903059 (VideoPlayer_t4150865119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayer::Duration()
extern "C"  int32_t VideoPlayer_Duration_m1153561086 (VideoPlayer_t4150865119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::SetRenderTexture(System.IntPtr)
extern "C"  void VideoPlayer_SetRenderTexture_m3851189383 (VideoPlayer_t4150865119 * __this, IntPtr_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::SetVideoType(EasyAR.VideoPlayer/VideoType)
extern "C"  void VideoPlayer_SetVideoType_m696690704 (VideoPlayer_t4150865119 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::OnStatusChange(System.IntPtr,System.Int32)
extern "C"  void VideoPlayer_OnStatusChange_m3614072246 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
