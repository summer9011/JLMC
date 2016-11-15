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

// System.Type
struct Type_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t3027888260;
// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Reflection_MonoMethodInfo952899898.h"
#include "mscorlib_System_Reflection_MethodAttributes1641137380.h"
#include "mscorlib_System_Reflection_CallingConventions2717133484.h"
#include "mscorlib_System_Reflection_MemberInfo1952312350.h"

// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
extern "C"  void MonoMethodInfo_get_method_info_m3630911979 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, MonoMethodInfo_t952899898 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
extern "C"  MonoMethodInfo_t952899898  MonoMethodInfo_GetMethodInfo_m3298558752 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
extern "C"  Type_t * MonoMethodInfo_GetDeclaringType_m4186531677 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
extern "C"  Type_t * MonoMethodInfo_GetReturnType_m2864247130 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
extern "C"  int32_t MonoMethodInfo_GetAttributes_m2535493430 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
extern "C"  int32_t MonoMethodInfo_GetCallingConvention_m3095860872 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
extern "C"  ParameterInfoU5BU5D_t3027888260* MonoMethodInfo_get_parameter_info_m3554140855 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
extern "C"  ParameterInfoU5BU5D_t3027888260* MonoMethodInfo_GetParametersInfo_m3456861922 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
