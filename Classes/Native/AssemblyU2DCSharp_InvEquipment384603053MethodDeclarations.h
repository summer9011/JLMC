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

// InvEquipment
struct InvEquipment_t384603053;
// InvGameItem[]
struct InvGameItemU5BU5D_t3386920999;
// InvGameItem
struct InvGameItem_t2091536978;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InvBaseItem_Slot2521022228.h"
#include "AssemblyU2DCSharp_InvGameItem2091536978.h"

// System.Void InvEquipment::.ctor()
extern "C"  void InvEquipment__ctor_m4122308776 (InvEquipment_t384603053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem[] InvEquipment::get_equippedItems()
extern "C"  InvGameItemU5BU5D_t3386920999* InvEquipment_get_equippedItems_m2933809857 (InvEquipment_t384603053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Replace(InvBaseItem/Slot,InvGameItem)
extern "C"  InvGameItem_t2091536978 * InvEquipment_Replace_m1635616593 (InvEquipment_t384603053 * __this, int32_t ___slot, InvGameItem_t2091536978 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Equip(InvGameItem)
extern "C"  InvGameItem_t2091536978 * InvEquipment_Equip_m2123217247 (InvEquipment_t384603053 * __this, InvGameItem_t2091536978 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Unequip(InvGameItem)
extern "C"  InvGameItem_t2091536978 * InvEquipment_Unequip_m609357520 (InvEquipment_t384603053 * __this, InvGameItem_t2091536978 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Unequip(InvBaseItem/Slot)
extern "C"  InvGameItem_t2091536978 * InvEquipment_Unequip_m3415732854 (InvEquipment_t384603053 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InvEquipment::HasEquipped(InvGameItem)
extern "C"  bool InvEquipment_HasEquipped_m2704467925 (InvEquipment_t384603053 * __this, InvGameItem_t2091536978 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InvEquipment::HasEquipped(InvBaseItem/Slot)
extern "C"  bool InvEquipment_HasEquipped_m2417602265 (InvEquipment_t384603053 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::GetItem(InvBaseItem/Slot)
extern "C"  InvGameItem_t2091536978 * InvEquipment_GetItem_m2037817828 (InvEquipment_t384603053 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
