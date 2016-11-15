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

// Localization/LoadFunction
struct LoadFunction_t3586463936;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte77837043.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void Localization/LoadFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void LoadFunction__ctor_m239452119 (LoadFunction_t3586463936 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Localization/LoadFunction::Invoke(System.String)
extern "C"  ByteU5BU5D_t3835026402* LoadFunction_Invoke_m3719575289 (LoadFunction_t3586463936 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" ByteU5BU5D_t3835026402* pinvoke_delegate_wrapper_LoadFunction_t3586463936(Il2CppObject* delegate, String_t* ___path);
// System.IAsyncResult Localization/LoadFunction::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LoadFunction_BeginInvoke_m3062786760 (LoadFunction_t3586463936 * __this, String_t* ___path, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Localization/LoadFunction::EndInvoke(System.IAsyncResult)
extern "C"  ByteU5BU5D_t3835026402* LoadFunction_EndInvoke_m1599288477 (LoadFunction_t3586463936 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
