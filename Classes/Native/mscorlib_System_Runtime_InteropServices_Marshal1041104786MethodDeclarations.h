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

// System.Array
struct Il2CppArray;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Char[]
struct CharU5BU5D_t1685951112;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Array4136897760.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern "C"  void Marshal__cctor_m802981325 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C"  void Marshal_copy_from_unmanaged_m98320635 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Il2CppArray * ___destination, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1683535972 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source, ByteU5BU5D_t3835026402* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m275157126 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t1685951112* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
extern "C"  String_t* Marshal_PtrToStringAnsi_m2970070000 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
extern "C"  uint8_t Marshal_ReadByte_m536122811 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Int32,System.Byte)
extern "C"  void Marshal_WriteByte_m2971909611 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, uint8_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
