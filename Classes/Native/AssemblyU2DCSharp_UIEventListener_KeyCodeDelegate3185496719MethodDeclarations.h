﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UIEventListener/KeyCodeDelegate
struct KeyCodeDelegate_t3185496719;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"
#include "UnityEngine_UnityEngine_KeyCode1667950811.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UIEventListener/KeyCodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void KeyCodeDelegate__ctor_m90205111 (KeyCodeDelegate_t3185496719 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/KeyCodeDelegate::Invoke(UnityEngine.GameObject,UnityEngine.KeyCode)
extern "C"  void KeyCodeDelegate_Invoke_m3649918456 (KeyCodeDelegate_t3185496719 * __this, GameObject_t1366199518 * ___go, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyCodeDelegate_t3185496719(Il2CppObject* delegate, GameObject_t1366199518 * ___go, int32_t ___key);
// System.IAsyncResult UIEventListener/KeyCodeDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.KeyCode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * KeyCodeDelegate_BeginInvoke_m1429463929 (KeyCodeDelegate_t3185496719 * __this, GameObject_t1366199518 * ___go, int32_t ___key, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/KeyCodeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void KeyCodeDelegate_EndInvoke_m3028110389 (KeyCodeDelegate_t3185496719 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
