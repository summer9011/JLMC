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

// System.Net.WebProxy
struct WebProxy_t1941989786;
// System.Uri
struct Uri_t3338506287;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Net.ICredentials
struct ICredentials_t833078195;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri3338506287.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C"  void WebProxy__ctor_m2857702508 (WebProxy_t1941989786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C"  void WebProxy__ctor_m3679722173 (WebProxy_t1941989786 * __this, Uri_t3338506287 * ___address, bool ___bypassOnLocal, StringU5BU5D_t3764931161* ___bypassList, Il2CppObject * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebProxy__ctor_m2450728151 (WebProxy_t1941989786 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m1342312083 (WebProxy_t1941989786 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C"  bool WebProxy_get_UseDefaultCredentials_m2426255561 (WebProxy_t1941989786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C"  Uri_t3338506287 * WebProxy_GetProxy_m1249556681 (WebProxy_t1941989786 * __this, Uri_t3338506287 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C"  bool WebProxy_IsBypassed_m907120600 (WebProxy_t1941989786 * __this, Uri_t3338506287 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebProxy_GetObjectData_m2019316656 (WebProxy_t1941989786 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C"  void WebProxy_CheckBypassList_m565639068 (WebProxy_t1941989786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
