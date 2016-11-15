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

// System.Net.HttpWebRequest
struct HttpWebRequest_t3205926943;
// System.Uri
struct Uri_t3338506287;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Net.ServicePoint
struct ServicePoint_t3647242307;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri3338506287.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C"  void HttpWebRequest__ctor_m3872859964 (HttpWebRequest_t3205926943 * __this, Uri_t3338506287 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest__ctor_m1248252412 (HttpWebRequest_t3205926943 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C"  void HttpWebRequest__cctor_m3013631978 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3671622902 (HttpWebRequest_t3205926943 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C"  Uri_t3338506287 * HttpWebRequest_get_Address_m4268264978 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C"  ServicePoint_t3647242307 * HttpWebRequest_get_ServicePoint_m3235755721 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C"  ServicePoint_t3647242307 * HttpWebRequest_GetServicePoint_m560807134 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest_GetObjectData_m1200570677 (HttpWebRequest_t3205926943 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
