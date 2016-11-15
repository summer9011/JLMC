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

// UnityEngine.NetworkView
struct NetworkView_t589650414;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkMessageInfo1071355414.h"
#include "UnityEngine_UnityEngine_NetworkPlayer3236158508.h"

// System.Double UnityEngine.NetworkMessageInfo::get_timestamp()
extern "C"  double NetworkMessageInfo_get_timestamp_m462964950 (NetworkMessageInfo_t1071355414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkMessageInfo::get_sender()
extern "C"  NetworkPlayer_t3236158508  NetworkMessageInfo_get_sender_m2366451889 (NetworkMessageInfo_t1071355414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkView UnityEngine.NetworkMessageInfo::get_networkView()
extern "C"  NetworkView_t589650414 * NetworkMessageInfo_get_networkView_m1180629659 (NetworkMessageInfo_t1071355414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkView UnityEngine.NetworkMessageInfo::NullNetworkView()
extern "C"  NetworkView_t589650414 * NetworkMessageInfo_NullNetworkView_m230600625 (NetworkMessageInfo_t1071355414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NetworkMessageInfo_t1071355414;
struct NetworkMessageInfo_t1071355414_marshaled_pinvoke;

extern "C" void NetworkMessageInfo_t1071355414_marshal_pinvoke(const NetworkMessageInfo_t1071355414& unmarshaled, NetworkMessageInfo_t1071355414_marshaled_pinvoke& marshaled);
extern "C" void NetworkMessageInfo_t1071355414_marshal_pinvoke_back(const NetworkMessageInfo_t1071355414_marshaled_pinvoke& marshaled, NetworkMessageInfo_t1071355414& unmarshaled);
extern "C" void NetworkMessageInfo_t1071355414_marshal_pinvoke_cleanup(NetworkMessageInfo_t1071355414_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NetworkMessageInfo_t1071355414;
struct NetworkMessageInfo_t1071355414_marshaled_com;

extern "C" void NetworkMessageInfo_t1071355414_marshal_com(const NetworkMessageInfo_t1071355414& unmarshaled, NetworkMessageInfo_t1071355414_marshaled_com& marshaled);
extern "C" void NetworkMessageInfo_t1071355414_marshal_com_back(const NetworkMessageInfo_t1071355414_marshaled_com& marshaled, NetworkMessageInfo_t1071355414& unmarshaled);
extern "C" void NetworkMessageInfo_t1071355414_marshal_com_cleanup(NetworkMessageInfo_t1071355414_marshaled_com& marshaled);
