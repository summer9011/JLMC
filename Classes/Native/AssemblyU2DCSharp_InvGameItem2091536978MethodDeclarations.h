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

// InvGameItem
struct InvGameItem_t2091536978;
// InvBaseItem
struct InvBaseItem_t3744336511;
// System.String
struct String_t;
// System.Collections.Generic.List`1<InvStat>
struct List_1_t2520600592;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InvBaseItem3744336511.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"

// System.Void InvGameItem::.ctor(System.Int32)
extern "C"  void InvGameItem__ctor_m102925744 (InvGameItem_t2091536978 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvGameItem::.ctor(System.Int32,InvBaseItem)
extern "C"  void InvGameItem__ctor_m2302828333 (InvGameItem_t2091536978 * __this, int32_t ___id, InvBaseItem_t3744336511 * ___bi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InvGameItem::get_baseItemID()
extern "C"  int32_t InvGameItem_get_baseItemID_m3125967055 (InvGameItem_t2091536978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvGameItem::get_baseItem()
extern "C"  InvBaseItem_t3744336511 * InvGameItem_get_baseItem_m625827260 (InvGameItem_t2091536978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InvGameItem::get_name()
extern "C"  String_t* InvGameItem_get_name_m4261859516 (InvGameItem_t2091536978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InvGameItem::get_statMultiplier()
extern "C"  float InvGameItem_get_statMultiplier_m3329574291 (InvGameItem_t2091536978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color InvGameItem::get_color()
extern "C"  Color_t2250949164  InvGameItem_get_color_m1593103398 (InvGameItem_t2091536978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<InvStat> InvGameItem::CalculateStats()
extern "C"  List_1_t2520600592 * InvGameItem_CalculateStats_m481442516 (InvGameItem_t2091536978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
