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

// EasyAR.BarCodeScanner
struct BarCodeScanner_t1831441607;
// EasyAR.CameraDevice
struct CameraDevice_t1807135140;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_CameraDevice1807135140.h"

// System.Void EasyAR.BarCodeScanner::.ctor()
extern "C"  void BarCodeScanner__ctor_m1155928552 (BarCodeScanner_t1831441607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.BarCodeScanner::Dispose(System.Boolean)
extern "C"  void BarCodeScanner_Dispose_m1657263356 (BarCodeScanner_t1831441607 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.BarCodeScanner::AttachCamera(EasyAR.CameraDevice)
extern "C"  bool BarCodeScanner_AttachCamera_m1422863892 (BarCodeScanner_t1831441607 * __this, CameraDevice_t1807135140 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.BarCodeScanner::DetachCamera(EasyAR.CameraDevice)
extern "C"  bool BarCodeScanner_DetachCamera_m3350839722 (BarCodeScanner_t1831441607 * __this, CameraDevice_t1807135140 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.BarCodeScanner::Start()
extern "C"  bool BarCodeScanner_Start_m1391919798 (BarCodeScanner_t1831441607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.BarCodeScanner::Stop()
extern "C"  bool BarCodeScanner_Stop_m2317904012 (BarCodeScanner_t1831441607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
