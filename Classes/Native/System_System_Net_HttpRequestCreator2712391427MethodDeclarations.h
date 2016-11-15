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

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t2712391427;
// System.Net.WebRequest
struct WebRequest_t1478397231;
// System.Uri
struct Uri_t3338506287;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri3338506287.h"

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C"  void HttpRequestCreator__ctor_m2513916021 (HttpRequestCreator_t2712391427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C"  WebRequest_t1478397231 * HttpRequestCreator_Create_m3607509610 (HttpRequestCreator_t2712391427 * __this, Uri_t3338506287 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
