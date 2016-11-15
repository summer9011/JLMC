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

// UIWidget/OnPostFillCallback
struct OnPostFillCallback_t1627957009;
// System.Object
struct Il2CppObject;
// UIWidget
struct UIWidget_t1453041918;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t686006439;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t686006440;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t2983401365;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "AssemblyU2DCSharp_UIWidget1453041918.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UIWidget/OnPostFillCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnPostFillCallback__ctor_m1735764407 (OnPostFillCallback_t1627957009 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget/OnPostFillCallback::Invoke(UIWidget,System.Int32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void OnPostFillCallback_Invoke_m2953004057 (OnPostFillCallback_t1627957009 * __this, UIWidget_t1453041918 * ___widget, int32_t ___bufferOffset, BetterList_1_t686006439 * ___verts, BetterList_1_t686006440 * ___uvs, BetterList_1_t2983401365 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIWidget/OnPostFillCallback::BeginInvoke(UIWidget,System.Int32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnPostFillCallback_BeginInvoke_m3876064332 (OnPostFillCallback_t1627957009 * __this, UIWidget_t1453041918 * ___widget, int32_t ___bufferOffset, BetterList_1_t686006439 * ___verts, BetterList_1_t686006440 * ___uvs, BetterList_1_t2983401365 * ___cols, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget/OnPostFillCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnPostFillCallback_EndInvoke_m1375087617 (OnPostFillCallback_t1627957009 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
