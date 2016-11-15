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

// System.Text.RegularExpressions.PatternCompiler
struct PatternCompiler_t2204581144;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1917986501;
// System.Collections.BitArray
struct BitArray_t1153580258;
// System.String
struct String_t;
// System.Text.RegularExpressions.LinkRef
struct LinkRef_t3499842314;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_OpCode1432716629.h"
#include "System_System_Text_RegularExpressions_OpFlags337278977.h"
#include "System_System_Text_RegularExpressions_Category2881134471.h"
#include "mscorlib_System_Collections_BitArray1153580258.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Text_RegularExpressions_Position1067463710.h"
#include "System_System_Text_RegularExpressions_LinkRef3499842314.h"

// System.Void System.Text.RegularExpressions.PatternCompiler::.ctor()
extern "C"  void PatternCompiler__ctor_m1636965528 (PatternCompiler_t2204581144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Text.RegularExpressions.PatternCompiler::EncodeOp(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern "C"  uint16_t PatternCompiler_EncodeOp_m3006416096 (Il2CppObject * __this /* static, unused */, uint16_t ___op, uint16_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.PatternCompiler::GetMachineFactory()
extern "C"  Il2CppObject * PatternCompiler_GetMachineFactory_m4270456665 (PatternCompiler_t2204581144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFalse()
extern "C"  void PatternCompiler_EmitFalse_m1188949782 (PatternCompiler_t2204581144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTrue()
extern "C"  void PatternCompiler_EmitTrue_m560950763 (PatternCompiler_t2204581144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCount(System.Int32)
extern "C"  void PatternCompiler_EmitCount_m3609178511 (PatternCompiler_t2204581144 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitCharacter_m787774500 (PatternCompiler_t2204581144 * __this, uint16_t ___c, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitCategory_m1696942454 (PatternCompiler_t2204581144 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitNotCategory_m852285029 (PatternCompiler_t2204581144 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitRange_m137707777 (PatternCompiler_t2204581144 * __this, uint16_t ___lo, uint16_t ___hi, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitSet_m866698437 (PatternCompiler_t2204581144 * __this, uint16_t ___lo, BitArray_t1153580258 * ___set, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitString_m775200092 (PatternCompiler_t2204581144 * __this, String_t* ___str, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern "C"  void PatternCompiler_EmitPosition_m3013268572 (PatternCompiler_t2204581144 * __this, uint16_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitOpen(System.Int32)
extern "C"  void PatternCompiler_EmitOpen_m2742531740 (PatternCompiler_t2204581144 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitClose(System.Int32)
extern "C"  void PatternCompiler_EmitClose_m2394480040 (PatternCompiler_t2204581144 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitBalanceStart_m1519567828 (PatternCompiler_t2204581144 * __this, int32_t ___gid, int32_t ___balance, bool ___capture, LinkRef_t3499842314 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalance()
extern "C"  void PatternCompiler_EmitBalance_m1220784647 (PatternCompiler_t2204581144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitReference_m1381860071 (PatternCompiler_t2204581144 * __this, int32_t ___gid, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitIfDefined_m3599839898 (PatternCompiler_t2204581144 * __this, int32_t ___gid, LinkRef_t3499842314 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitSub_m4080932073 (PatternCompiler_t2204581144 * __this, LinkRef_t3499842314 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitTest_m815401755 (PatternCompiler_t2204581144 * __this, LinkRef_t3499842314 * ___yes, LinkRef_t3499842314 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitBranch_m1889192697 (PatternCompiler_t2204581144 * __this, LinkRef_t3499842314 * ___next, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitJump_m2051070843 (PatternCompiler_t2204581144 * __this, LinkRef_t3499842314 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitRepeat_m3931380357 (PatternCompiler_t2204581144 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t3499842314 * ___until, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitUntil_m1459917607 (PatternCompiler_t2204581144 * __this, LinkRef_t3499842314 * ___repeat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitFastRepeat_m1175707353 (PatternCompiler_t2204581144 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t3499842314 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitIn_m585830134 (PatternCompiler_t2204581144 * __this, LinkRef_t3499842314 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitAnchor_m3343153918 (PatternCompiler_t2204581144 * __this, bool ___reverse, int32_t ___offset, LinkRef_t3499842314 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern "C"  void PatternCompiler_EmitInfo_m597931026 (PatternCompiler_t2204581144 * __this, int32_t ___count, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.PatternCompiler::NewLink()
extern "C"  LinkRef_t3499842314 * PatternCompiler_NewLink_m1972969047 (PatternCompiler_t2204581144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_ResolveLink_m3312909060 (PatternCompiler_t2204581144 * __this, LinkRef_t3499842314 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranchEnd()
extern "C"  void PatternCompiler_EmitBranchEnd_m3390109636 (PatternCompiler_t2204581144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAlternationEnd()
extern "C"  void PatternCompiler_EmitAlternationEnd_m889639343 (PatternCompiler_t2204581144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.PatternCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  uint16_t PatternCompiler_MakeFlags_m1130972615 (Il2CppObject * __this /* static, unused */, bool ___negate, bool ___ignore, bool ___reverse, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode)
extern "C"  void PatternCompiler_Emit_m646971834 (PatternCompiler_t2204581144 * __this, uint16_t ___op, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern "C"  void PatternCompiler_Emit_m2166590387 (PatternCompiler_t2204581144 * __this, uint16_t ___op, uint16_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.UInt16)
extern "C"  void PatternCompiler_Emit_m3700775527 (PatternCompiler_t2204581144 * __this, uint16_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.PatternCompiler::get_CurrentAddress()
extern "C"  int32_t PatternCompiler_get_CurrentAddress_m3117358564 (PatternCompiler_t2204581144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_BeginLink_m3641752591 (PatternCompiler_t2204581144 * __this, LinkRef_t3499842314 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitLink_m1187847865 (PatternCompiler_t2204581144 * __this, LinkRef_t3499842314 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
