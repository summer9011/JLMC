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

// NetworkControl
struct NetworkControl_t148274599;
// NetworkControl/_postData
struct _postData_t645335225;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t484745624;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// UnityEngine.WWWForm
struct WWWForm_t986061696;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_NetworkControl__postData645335225.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_WWWForm986061696.h"

// System.Void NetworkControl::.ctor()
extern "C"  void NetworkControl__ctor_m2304376918 (NetworkControl_t148274599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkControl::add_postData(NetworkControl/_postData)
extern "C"  void NetworkControl_add_postData_m2050788609 (NetworkControl_t148274599 * __this, _postData_t645335225 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkControl::remove_postData(NetworkControl/_postData)
extern "C"  void NetworkControl_remove_postData_m510717744 (NetworkControl_t148274599 * __this, _postData_t645335225 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkControl::Start()
extern "C"  void NetworkControl_Start_m2418713938 (NetworkControl_t148274599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkControl::Update()
extern "C"  void NetworkControl_Update_m3299647279 (NetworkControl_t148274599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkControl::_SendPost(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void NetworkControl__SendPost_m459648110 (NetworkControl_t148274599 * __this, String_t* ___url, Dictionary_2_t484745624 * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NetworkControl::SendPost(System.String,UnityEngine.WWWForm)
extern "C"  Il2CppObject * NetworkControl_SendPost_m967012242 (NetworkControl_t148274599 * __this, String_t* ___url, WWWForm_t986061696 * ___wwwForm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
