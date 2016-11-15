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

// UIItemStorage
struct UIItemStorage_t2717295570;
// System.Collections.Generic.List`1<InvGameItem>
struct List_1_t1202908321;
// InvGameItem
struct InvGameItem_t2091536978;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InvGameItem2091536978.h"

// System.Void UIItemStorage::.ctor()
extern "C"  void UIItemStorage__ctor_m2777504523 (UIItemStorage_t2717295570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<InvGameItem> UIItemStorage::get_items()
extern "C"  List_1_t1202908321 * UIItemStorage_get_items_m1235694131 (UIItemStorage_t2717295570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem UIItemStorage::GetItem(System.Int32)
extern "C"  InvGameItem_t2091536978 * UIItemStorage_GetItem_m454792072 (UIItemStorage_t2717295570 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem UIItemStorage::Replace(System.Int32,InvGameItem)
extern "C"  InvGameItem_t2091536978 * UIItemStorage_Replace_m2474490977 (UIItemStorage_t2717295570 * __this, int32_t ___slot, InvGameItem_t2091536978 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemStorage::Start()
extern "C"  void UIItemStorage_Start_m1240245143 (UIItemStorage_t2717295570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
