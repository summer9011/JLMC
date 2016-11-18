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

// EasyAR.Augmenter
struct Augmenter_t3234512221;
// EasyAR.Frame
struct Frame_t97434328;
// EasyAR.CameraDevice
struct CameraDevice_t1807135140;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_Vector2I2584456199.h"
#include "EasyAR_Unity_EasyAR_Image_PixelFormat633705069.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "EasyAR_Unity_EasyAR_CameraDevice1807135140.h"

// System.Void EasyAR.Augmenter::.ctor()
extern "C"  void Augmenter__ctor_m3620203764 (Augmenter_t3234512221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.Vector2I EasyAR.Augmenter::get_VideoBackgroundTextureSize()
extern "C"  Vector2I_t2584456199  Augmenter_get_VideoBackgroundTextureSize_m4115031224 (Augmenter_t3234512221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.Image/PixelFormat EasyAR.Augmenter::get_VideoBackgroundTextureFormat()
extern "C"  int32_t Augmenter_get_VideoBackgroundTextureFormat_m187518791 (Augmenter_t3234512221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Augmenter::set_VideoBackgroundTextureId(System.IntPtr)
extern "C"  void Augmenter_set_VideoBackgroundTextureId_m1850500046 (Augmenter_t3234512221 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyAR.Frame EasyAR.Augmenter::NewFrame()
extern "C"  Frame_t97434328 * Augmenter_NewFrame_m2292733352 (Augmenter_t3234512221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.Augmenter::AttachCamera(EasyAR.CameraDevice)
extern "C"  bool Augmenter_AttachCamera_m3419852352 (Augmenter_t3234512221 * __this, CameraDevice_t1807135140 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.Augmenter::DetachCamera(EasyAR.CameraDevice)
extern "C"  bool Augmenter_DetachCamera_m451386542 (Augmenter_t3234512221 * __this, CameraDevice_t1807135140 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Augmenter::RetrieveVideoBackground()
extern "C"  void Augmenter_RetrieveVideoBackground_m1703433235 (Augmenter_t3234512221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.Augmenter::Dispose(System.Boolean)
extern "C"  void Augmenter_Dispose_m4219712608 (Augmenter_t3234512221 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
