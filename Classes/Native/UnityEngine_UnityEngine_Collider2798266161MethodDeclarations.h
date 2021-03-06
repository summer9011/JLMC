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

// UnityEngine.Collider
struct Collider_t2798266161;
// UnityEngine.Rigidbody
struct Rigidbody_t1071364940;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.Collider::get_enabled()
extern "C"  bool Collider_get_enabled_m3927623311 (Collider_t2798266161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C"  void Collider_set_enabled_m3489100454 (Collider_t2798266161 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C"  Rigidbody_t1071364940 * Collider_get_attachedRigidbody_m3279305420 (Collider_t2798266161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
extern "C"  void Collider_set_isTrigger_m1298573031 (Collider_t2798266161 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
