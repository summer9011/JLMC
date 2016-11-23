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

// UnityEngine.WebCamTexture
struct WebCamTexture_t4098188425;
// System.String
struct String_t;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t1870489771;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_WebCamTexture4098188425.h"

// System.Void UnityEngine.WebCamTexture::.ctor(System.String,System.Int32,System.Int32)
extern "C"  void WebCamTexture__ctor_m4161111579 (WebCamTexture_t4098188425 * __this, String_t* ___deviceName, int32_t ___requestedWidth, int32_t ___requestedHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
extern "C"  void WebCamTexture_Internal_CreateWebCamTexture_m1601948981 (Il2CppObject * __this /* static, unused */, WebCamTexture_t4098188425 * ___self, String_t* ___scriptingDevice, int32_t ___requestedWidth, int32_t ___requestedHeight, int32_t ___maxFramerate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Play()
extern "C"  void WebCamTexture_Play_m1997372813 (WebCamTexture_t4098188425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)
extern "C"  void WebCamTexture_INTERNAL_CALL_Play_m3743409567 (Il2CppObject * __this /* static, unused */, WebCamTexture_t4098188425 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Stop()
extern "C"  void WebCamTexture_Stop_m4045220381 (WebCamTexture_t4098188425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)
extern "C"  void WebCamTexture_INTERNAL_CALL_Stop_m3253711615 (Il2CppObject * __this /* static, unused */, WebCamTexture_t4098188425 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
extern "C"  bool WebCamTexture_get_isPlaying_m1392703560 (WebCamTexture_t4098188425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C"  WebCamDeviceU5BU5D_t1870489771* WebCamTexture_get_devices_m4137524804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
