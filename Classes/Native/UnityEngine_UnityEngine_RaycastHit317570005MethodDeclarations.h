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

// UnityEngine.Collider
struct Collider_t2798266161;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit317570005.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C"  Vector3_t465617797  RaycastHit_get_point_m326143462 (RaycastHit_t317570005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C"  Vector3_t465617797  RaycastHit_get_normal_m817665579 (RaycastHit_t317570005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C"  Collider_t2798266161 * RaycastHit_get_collider_m301198172 (RaycastHit_t317570005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
